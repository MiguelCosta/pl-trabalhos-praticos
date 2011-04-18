#include "categoria.h"
#include <stdio.h>

int main(){
	
	LL_Categ lista_categorias;
	
	Categoria c;

	c = addCategoria("miguel");
	lista_categorias = addLL_Categoria(lista_categorias, c);	
	c = addCategoria("miguel");
	addLL_Categoria(lista_categorias, c);
	c = addCategoria("miguel");

	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);

	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);

	char * n = "miguel";
	Categoria c_1 = addCategoria(++n);
	Categoria c_2 = addCategoria("miguel");
	Categoria c_3 = addCategoria("costa");

	
	//int r = compararCategoria(c_1,c_2);
	//printf("comparacao: %d\n",r);
	


	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);


	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);

	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("da");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	
	c = addCategoria("isa");
	lista_categorias = addLL_Categoria(lista_categorias, c);

	c = addCategoria("ana");
	lista_categorias = addLL_Categoria(lista_categorias, c);

	c = addCategoria("sampaio");
	lista_categorias = addLL_Categoria(lista_categorias, c);

	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	c = addCategoria("pinto");
	lista_categorias = addLL_Categoria(lista_categorias, c);
	
	lista_categorias = addLL_Categoria(lista_categorias, c_1);
	lista_categorias = addLL_Categoria(lista_categorias, c_2);
	lista_categorias = addLL_Categoria(lista_categorias, c_3);

	printLL_Categoria(lista_categorias);
	
	return 0;
}
