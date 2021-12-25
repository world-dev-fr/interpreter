#include "PrintStatement.h"

#include <iostream>

PrintStatement::PrintStatement(TokenIt& begin, TokenIt& end)
{
	// Expect
	if (begin == end)
	{
		throw exception(
			string("Erreur: Déclaration null").c_str()
		);
	}

	Token::Type tokenType = begin->GetType();
	string tokenData = begin->GetData();

	// Expect
	if (tokenType != Token::Type::Keyword || tokenData != "print")
	{
		throw exception("Erreur: Le token doit être de type 'Token::Type::Keyword' et les donnée égale à 'print'");
	}

	// Expect
	begin++;
	if (begin == end)
	{
		throw exception(
			string("Erreur: Une expression est attendue après le mot clès `print`").c_str()
		);
	}

	m_expression = Expression::Parse(begin, end);
}

void PrintStatement::Execute(Context& context)
{
	cout << m_expression->Evaluate(context) << endl;
}
