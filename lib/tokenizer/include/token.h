#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include <list>

using namespace std;

/**
 * Classe Token
 * 
 * Cette class représente un jeton lexème.
 * 
 * @see https://fr.wikipedia.org/wiki/Analyse_lexicale
 */
class Token
{
public:

    /**
     * Type d'énumération de jeton.
     */
    enum Type
    {
        Keyword,    /**< enum value 0 */
        Identifier, /**< enum value 1 */
        Operator,   /**< enum value 2 */
        Number,     /**< enum value 3 */
        Unknown     /**< enum value 4 */
    };

    static string getStringType(Token::Type type);

    /**
     * Constructeur vide
     */
    Token();

    /**
     * Constructeur avec paramètre
     * 
     * @param Token::Type Le type du jeton
     */
    Token( Token::Type type );

    /**
     * Définit le jeton de type
     * 
     * @return void
     */
    void setType(Token::Type type );

    /**
     * obtenir le jeton de type
     * 
     * @return Token
     */
    Token::Type getType();

    /**
     * Définit les données du jeton
     *
     * @return void
     */
    void setData(string data);

    /**
     * obtenir les données du jeton
     *
     * @return Token
     */
    string getData();

private:

    Type m_type;
    string m_data;
};

typedef list<Token> TokenList;
typedef TokenList::iterator TokenIt;

#endif
