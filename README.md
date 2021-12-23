# Interpreter

[Documentation (Code)](https://themonsterdev.github.io/interpreter)

![https://fr.wikipedia.org/wiki/Diagramme_syntaxique](./docs/interpreter-diagram.png)

## Grammaire [EBNF]

```ebnf
Statement
    ::= print ExpressionList
    | var Identifier

ExpressionList
    ::= Identifier
    | ArithmeticOperatorExpression

ArithmeticOperatorExpression
    ::= Number '*' Number
    | Number '+' Number
    | Number '-' Number
    | Number '/' Number
    | Number '=' Number
    | Number '%' Number

Identifier
    ::= [a-zA-Z_][a-zA-Z0-9_]+

Number
    ::= [0-9]+
```

## Exemple

```js
var identifier = 1 + 1
print identifier

var identifier = 2 - 1
print identifier

var identifier = 2 * 3
print identifier

var identifier = 6 / 3
print identifier

var identifier = 6 % 2
print identifier

var identifier = 1 + 1 - 1 * 2 / 2 % 2
print identifier
```

## AST (Arbre de la syntaxe abstraite)

![https://fr.wikipedia.org/wiki/Diagramme_syntaxique](./docs/ast-diagram.png)

## Usage

```bash
$ cmake --preset=default
$ cmake --build --preset=default
$ ./bin/interpreter.exe ./examples/operators.txt
```

## Réréfences

- [Interpreter](https://fr.wikipedia.org/wiki/Interpr%C3%A8te_(informatique))
- [Analyse lexicale](https://fr.wikipedia.org/wiki/Analyse_lexicale)
- [Analyse syntaxique](https://fr.wikipedia.org/wiki/Analyse_syntaxique)
- [Arbre de la syntaxe abstraite](https://fr.wikipedia.org/wiki/Arbre_de_la_syntaxe_abstraite)
