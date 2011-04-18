%{
#include  "categoria.h"

LL_Categ lista_categorias = NULL;
Categoria *c;
char* nome;
char* chave;
char* autor;
char* titulo;
Autores autores = NULL;
%}

%s NADA CATEGORIA CHAVE AUTOR AUTOR_IN AUTOR_IN_ASPAS AUTOR_IN_CHAVETAS TITULO TITLE_IN TITLE_IN_ASPAS TITLE_IN_CHAVETAS

alpha [a-zA-Z]
alphanum [a-zA-Z0-9\:\/\-]
alphanumplus [a-zA-Z0-9 ,\.\"çé]
%%
	
	
[ \t\n]						;			
"@string{"					;
@						{
						BEGIN CATEGORIA;
						//printf("-----------------------------\n");	
						}

<CATEGORIA>({alpha})+"{"			{
						yytext[yyleng-1]='\0';
						nome = strdup(yytext);
						//printf("Nome da categoria: %s\n", nome);
						BEGIN CHAVE;
						}

<CHAVE>({alphanum})+" "+?,			{
						yytext[yyleng-1]='\0';
						chave = strdup(yytext);
						//printf("Codigo da Chave: %s\n",chave);
						BEGIN AUTOR;
						}

<AUTOR>("author"|"AUTHOR")			{BEGIN AUTOR_IN;}

<AUTOR_IN>=" "+?\"" "+?\"			{
						//printf("Autor: sem autor \n");
						autor = strdup("sem_autor");
						//printf("Autor desconhecido\n");
						BEGIN TITULO;
						}

<AUTOR_IN>=" "+?\{" "+?\}			{
						//printf("Autor: sem autor \n");
						autor = strdup("sem_autor");
						//printf("Autor desconhecido\n");
						BEGIN TITULO;
						}

<AUTOR_IN>=" "+?\"				BEGIN AUTOR_IN_ASPAS;
<AUTOR_IN>=" "+?\{				BEGIN AUTOR_IN_CHAVETAS;
<AUTOR_IN_ASPAS>[^\"]+				{			
						autor = strdup(yytext);
						//printf("Nome do autor: %s\n",autor);
						BEGIN TITULO;
						}

<AUTOR_IN_CHAVETAS>[^\}]+			{
						autor = strdup(yytext);
						//printf("Nome do autor: %s\n",autor);
						BEGIN TITULO;
						}

<AUTOR>"title"					{
						autor = strdup("sem_autor");
						//printf("Autor desconhecido\n");
						BEGIN TITLE_IN;
						}

<TITULO>"booktitle"				;
<TITULO>("title"|"TITLE")			BEGIN TITLE_IN;
<TITLE_IN>=" "+?\" 				BEGIN TITLE_IN_ASPAS;
<TITLE_IN>=" "+?\{				BEGIN TITLE_IN_CHAVETAS;
<TITLE_IN_CHAVETAS>[^\}]+			{
						titulo = strdup(yytext);
						//printf("Titulo do documento: %s\n",titulo);
						c = addCategoria(nome,chave,autor,titulo);
						lista_categorias = addLL_Categoria(lista_categorias, c);						
						BEGIN NADA;
						}

<TITLE_IN_ASPAS>[^\"]+				{
						titulo = strdup(yytext);
						//printf("Titulo do documento: %s\n",titulo);
						c = addCategoria(nome,chave,autor,titulo);
						//printCategoria(c);
						lista_categorias = addLL_Categoria(lista_categorias, c);
						BEGIN NADA;
						}

.|\n						;

<<EOF>>						{
						//filtrarCategoria(lista_categorias);
						//filtrarAutor(lista_categorias);
						//gerar_html_b(lista_categorias);
						autores = descobrirAutores(lista_categorias, "jo");
						printAutores(autores);
						return 0;
						}

%%
