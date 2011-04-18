#include "categoria.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	Categoria *c = NULL;
	LL_Categ ll = NULL;
	char* nome = NULL;
	char* chave = NULL;
	char* autor = NULL;
	char* titulo = NULL;
	
	printf("INICIO:\n");

	nome = strdup("miguel");
	chave = strdup("83");
	autor = strdup("pachon");
	titulo = strdup("lei3");
	
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);
	
	nome = strdup("miguel");
	chave = strdup("83 83");
	autor = strdup("pachon");
	titulo = strdup("lei3");
	
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);

	nome = strdup("miguel");
	chave = strdup("83 83 83");
	autor = strdup("pachon");
	titulo = strdup("lei3");
	
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);
	
	nome = strdup("gabriel");
	chave = strdup("118");
	autor = strdup("chewbacca");
	titulo = strdup("lei2");
		
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);
	

	nome = strdup("gabriel");
	chave = strdup("118 118");
	autor = strdup("chewbacca");
	titulo = strdup("lei2");
		
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);

	nome = strdup("gabriel");
	chave = strdup("118 118 118");
	autor = strdup("chewbacca");
	titulo = strdup("lei2");
		
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);
	
	nome = strdup("tiago");
	chave = strdup("77");
	autor = strdup("moche");
	titulo = strdup("lei2");
		
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);


	nome = strdup("miguel pinto da costa");
	chave = strdup("83 - oitenta e tres");
	autor = strdup("pachon - ponte de lima");
	titulo = strdup("lei terceiro ano");
		
	c = addCategoria(nome,chave,autor,titulo);
	ll = addLL_Categoria(ll, c);

	//printTudo(ll);
	printf("FIM!\n");
	
	printf("Filtrado:\n");
	filtrarCategoria(ll);
	filtrarAutor(ll);
	
	return 0;
}
