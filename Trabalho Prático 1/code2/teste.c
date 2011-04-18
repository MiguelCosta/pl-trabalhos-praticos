#include "categoria.h"
#include <stdio.h>

int main(){
	Categoria c_1 = addCategoria("miguel");;
	
	Categoria c_2 = addCategoria("miguel");

	Categoria c_3 = addCategoria("costa");

	
	int r = compararCategoria(c_1,c_2);
	printf("comparacao: %d\n",r);
	
	
	LL_Categ lista_categorias;
	lista_categorias = addLL_Categoria(lista_categorias, c_1);
	lista_categorias = addLL_Categoria(lista_categorias, c_2);
	lista_categorias = addLL_Categoria(lista_categorias, c_3);

	printLL_Categoria(lista_categorias);
	
	return 0;
}
