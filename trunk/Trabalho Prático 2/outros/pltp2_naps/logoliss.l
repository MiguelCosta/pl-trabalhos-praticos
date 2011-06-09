%{
#include "y.tab.h"
%}


identifier	[a-zA-z_][a-zA-Z_0-9]*
number		[+-]?[0-9]+
string		\"[^"]*\"

%%

"Program"		{return PROGRAM;}
"Declarations"	{return DECLARATIONS;}
"Statements"	{return STATEMENTS;}
"Integer"		{return INTEGER;}
"Boolean"		{return BOOLEAN;}
"Array"			{return ARRAY;}
"Size"			{return SIZE;}
"True"			{return CONST_TRUE;}
"False"			{return CONST_FALSE;}
"FORWARD"		{return FORWARD;}
"BACKWARD"		{return BACKWARD;}
"RRIGHT"		{return RRIGHT;}
"RLEFT"			{return RLEFT;}
"PEN"			{return PEN;}
"UP"			{return UP;}
"DOWN"			{return DOWN;}
"GOTO"			{return GOTO;}
"WHERE"			{return WHERE;}
"SUCC"			{return SUCC;}
"PRED"			{return PRED;}
"SAY"			{return SAY;}
"ASK"			{return ASK;}
"IF"			{return IF;}
"THEN"			{return THEN;}
"ELSE"			{return ELSE;}
"WHILE"			{return WHILE;}

[,;{}()\[\]=]	{return yytext[0];}

"->"	{return ARROW;}
\+		{return OP_ADD;}
\-		{return OP_SUB;}
\*		{return OP_MUL;}
\/		{return OP_DIV;}
"||"	{return OP_OR;}
"&&"	{return OP_AND;}
"**"	{return OP_EXP;}

"=="	{return COMP_EQ;}
"!="	{return COMP_NEQ;}
"<"		{return COMP_LT;}
">"		{return COMP_GT;}
"<="	{return COMP_LE;}
">="	{return COMP_GE;}
"in"	{return COMP_IN;}

 /* Leitura de identificadores */
{identifier}	{
		yylval.vals = strdup(yytext);
		return IDENTIFIER;
	}
 /* Leitura de constantes numericas */
{number}		{
		yylval.vali = atoi(yytext);
		return CONST_INT;
	}

 /* Leitura de constantes Strings */
{string}		{
		yytext[yyleng - 1] = '\0'; //remove a ultima "
		yylval.vals = strdup(&(yytext[1])); //duplica a string apos a primeira "
		return CONST_STRING;
	}

[ \t\n] ;
.		{return ERROR;}

%%

