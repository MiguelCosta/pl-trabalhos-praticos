%{
#include "cena.h"
#include "y.tab.h"
%}

NUM 			[0-9]+
ALPHA			[a-zA-Z]
IDENT			[ALPHA_](ALPHA|NUM|_|')*

STRING 			\"([^"]|\")*\"

PROGRAM 		[Pp][Rr][Oo][Gg][Rr][Aa][Mm]
DECLARATIONS 		[Dd][Ee][Cc][Ll][Aa][Rr][Aa][Tt][Ii][Oo][Nn][Ss]
STATEMENTS 		[Ss][Tt][Aa][Tt][Ee][Mm][Ee][Nn][Tt][Ss]
INTEGER			[Ii][Nn][Tt][Ee][Gg][Ee][Rr]
BOOLEAN			[Bb][Oo][Oo][Ll][Ee][Aa][Nn]
ARRAY			[Aa][Rr][Rr][Aa][Yy]
SIZE			[Ss][Ii][Zz][Ee]
TRUE			[T][R][U][E]
FALSE			[F][A][L][S][E]
FORWARD			[Ff][Oo][Rr][Ww][Aa][Rr][Dd]
BACKWARD		[Bb][Aa][Cc][Kk][Ww][Aa][Rr][Dd]
RRIGHT			[Rr][Rr][Ii][Gg][Hh][Tt]
RLEFT			[Rr][Ll][Ee][Ff][Tt]
PEN			[Pp][Ee][Nn]
UP			[Uu][Pp]
DOWN			[Dd][Oo][Ww][Nn]
GOTO			[Gg][Oo][Tt][Oo]
WHERE			[Ww][Hh][Ee][Rr][Ee]
SUCC 			[Ss][Uu][Cc][Cc]
PRED 			[Pp][Rr][Ee][Dd]
SAY			[Ss][Aa][Yy]
ASK			[Aa][Ss][Kk]
IF 			[Ii][Ff]
ELSE			[Ee][Ll][Ss][Ee]
THEN			[Tt][Hh][Ee][Nn]
WHILE			[Ww][Hh][Ii][Ll][Ee]

%%

{NUM}			{
			yylval.valn = atoi(yytext); 
			return NUM;
			}
{STRING}		{
			yylval.vals = (char*) strdup (yytext); 
			return STRING;
			}
{IDENT}			{
			yylval.vals = (char*) strdup (yytext); 
			return IDENT;
			}
{PROGRAM}		{return PROGRAM;}
{DECLARATIONS}		{return DECLARATIONS;}
{STATEMENTS}		{return STATEMENTS;}
{INTEGER}		{return INTEGER;}
{BOOLEAN}		{return BOOLEAN;}
{ARRAY}			{return ARRAY;}
{SIZE}			{return SIZE;}
{TRUE}			{
			yylval.vals = (char*) strdup (yytext); 
			return TRUE;
			}
{FALSE}			{
			yylval.vals = (char*) strdup (yytext); 
			return FALSE;
			}
{FORWARD}		{return FORWARD;}
{BACKWARD}		{return BACKWARD;}
{RRIGHT}		{return RRIGHT;}
{RLEFT}			{return RLEFT;}
{PEN}			{return PEN;}
{UP}			{return UP;}
{DOWN}			{return DOWN;}
{GOTO}			{return GOTO;}
{WHERE}			{return WHERE;}
{SUCC}			{
			yylval.vals = (char*) strdup (yytext); 
			return SUCC;
			}
{PRED}			{
			yylval.vals = (char*) strdup (yytext); 
			return PRED;
			}
{SAY}			{return SAY;}
{ASK}			{return ASK;}
{IF}			{return IF;}
{ELSE}			{return ELSE;}
{THEN}			{return THEN;}
{WHILE}			{return WHILE;}

[,;{}()\[\]=?!]	{return yytext[0];}

"->"			{return SETA;}

\+			{return ADD_SOMA;}
\-			{return ADD_SUB;}
"||"			{return ADD_OU;}

\*			{return MUL_MULT;}
\/			{return MUL_DIV;}
"&&"			{return MUL_AND;}
"**"			{return MUL_DOIS_ASTERISCO;}

"=="			{return REL_IGUAL;}
"!="			{return REL_DIFERENTE;}
"<"			{return REL_MENOR;}
">"			{return REL_MAIOR;}
"<="			{return REL_MENOR_IGUAL;}
">="			{return REL_MAIOR_IGUAL;}
"in"			{return REL_IN;}

[ \t\n] 		;
.			{return ERRO;}

%%

int yywrap(){
	return(1); 
}



