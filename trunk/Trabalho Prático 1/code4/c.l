%{
#include  "categoria.h"
#include  <string.h>

Esp_Stack autores = NULL;
char * autor = "Pedro";
%}

%s NADA AUTOR AUTOR_IN AUTOR_IN_ASPAS AUTOR_IN_CHAVETAS AUTORES_VARIOS_ASPAS

alpha [a-zA-Z]
alphanum [a-zA-Z0-9\:\/\-]
alphanumplus [a-zA-Z0-9 ,\.\"çé]
%%
	
	
[ \t\n]						;			
"@string{"					;

("author"|"AUTHOR")				{BEGIN AUTOR_IN;}

<AUTOR_IN>=" "+?\"" "+?\"			;

<AUTOR_IN>=" "+?\{" "+?\}			;

<AUTOR_IN>=" "+?\"				BEGIN AUTOR_IN_ASPAS;
<AUTOR_IN>=" "+?\{				BEGIN AUTOR_IN_CHAVETAS;
<AUTOR_IN_ASPAS>[^\"]+				{
						if (strstr(yytext,autor) != NULL){
							autores = divideAutores(autores, tiraEspacos(yytext));
							//autores = pushStack(autores, yytext);
						}
						//printf("autor: %s\n",yytext);
						BEGIN NADA;
						}

<AUTOR_IN_CHAVETAS>[^\}]+			{
						//printf("autor: %s\n",yytext);
						BEGIN NADA;						
						}

.|\n						;

<<EOF>>						{
						 printf("digraph G {\n");
						while(autores != NULL){
							printf("\t%s -> %s\n",tiraEspacos(autor), autores->elem);
							autores = popStack(autores);
						}
						printf("}");
						return 0;
						}

%%
