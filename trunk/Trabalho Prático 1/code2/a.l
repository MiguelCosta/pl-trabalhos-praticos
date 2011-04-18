%{
#include  "categoria.h"

LL_Categ lista_categorias;
Categoria *c;

%}


alphanum [a-zA-Z]

%%
	
	//Categoria c;
	
[ \t\n]+			;
"@string{"			;
"@"({alphanum})+"{"			{
						yytext[strlen(yytext)-1]='\0';
						yytext = ++yytext;
						c = addCategoria(yytext);
						lista_categorias = addLL_Categoria(lista_categorias, c);
					}
.|\n				;

%%

int main () {
	yylex();
	gerar_html(lista_categorias);
	return 0;
}
