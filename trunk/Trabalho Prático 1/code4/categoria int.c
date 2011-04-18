#include "categoria.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * compara os nomes da categoria
 * */
int compararCategoria(Categoria *c1, Categoria *c2){
	return strcmp(c1->nome, c2->nome);
}

/**
 * Imprime os campos de uma categoria
 * */
void printCategoria(Categoria *c){
	printf("Categoria:\n");
	printf("Nome: %s\n",c->nome);
	printf("Chave: %d\n",c->chave);
	printf("Autor: %s\n",c->autor);
	printf("Titulo: %s\n",c->titulo);
	printf("\n");
	}

/**
 * Adiciona uma categoria recebendo um nome, chave, autor e titulo
 * */
Categoria * addCategoria (char * nom, int chav, char* autr, char* titul){
	Categoria *c = malloc(sizeof(Categoria));
	c->nome = calloc(strlen(nom), sizeof(char));
	strcpy(c->nome, nom);
	
	c->chave = chav;
	
	c->autor = calloc(strlen(autr), sizeof(char));
	strcpy(c->autor, autr);
	
	c->titulo = calloc(strlen(titul), sizeof(char));
	strcpy(c->titulo, titul);
	
	return c;
}

/*
int findLL_Categoria(LL_Categ ll_categ, Categoria *c){
	LL_Categ aux = ll_categ;
	while(aux != NULL){
		if (compararCategoria(c,aux->categ)==0){
			 return 0;
		 }
		aux = aux->next;
	}
	return 1;
}
*/
/**
 * Cria/adiciona uma lista ligada com todas as categorias
 * */
LL_Categ addLL_Categoria(LL_Categ ll_categ, Categoria *c){

		LL_Categ aux = (LL_Categ) malloc(sizeof(ll_cat_nodo));
		aux->categ = c;	
		aux->next = ll_categ;
		//printf("exito\n");
		return aux;
}

void printTudo(LL_Categ ll){
	LL_Categ aux = ll;
	
	int i=0;
	while(aux != NULL){
		printf("Nodo: %d\n",i);
		printf("Nome: %s\n",aux->categ->nome);
		printf("Chave: %d\n",aux->categ->chave);
		printf("Autor: %s\n",aux->categ->autor);
		printf("Titulo: %s\n",aux->categ->titulo);
		printf("\n");
		aux = aux->next;
		i++;
	}
}

int tamanhoLL(LL_Categ ll){
	int i = 0;
	LL_Categ aux = ll;
	
	while(aux != NULL) {
		i++;
		aux = aux->next;
	}
	
	return i;
}









/*

void printLL_Categoria(LL_Categ ll_categ){
	LL_Categ aux = ll_categ;
	printf("<table align=center width=\"50");
	putchar('%');
	printf("\">");


	printf("<tr>");
		printf("<td align=center>");
			printf("<h3>CATEGORIAS</h3>");
		printf("</td>");
	printf("</tr>");
	printf("</table><hr>");
	
	printf("<table border=2 align=center width=\"50");
	putchar('%');
	printf("\">");	

	int i = 0;

	printf("<tr>");
	printf("<td><h4>Nome</h4></td>");
	printf("<td><h4>Chave</h4></td>");
	printf("<td><h4>Autor</h4></td>");
	printf("<td><h4>Titulo</h4></td>");
	while(aux != NULL){
		printf("<tr>");
			printf("<td>%s</td>",aux->categ->nome);
			printf("<td>%d</td>",aux->categ->chave);
			printf("<td>%s</td>",aux->categ->autor);
			printf("<td>%s</td>",aux->categ->titulo);
			aux = aux->next;			
			printf("</td>");
		printf("</tr>");
		i++;
	}
	printf("</tr>");
	
	printf("</table>");
}



void gerar_html(LL_Categ ll_categ){
	printf("<html>");
	printf("<head><meta http-equiv=\"Content-Type\" content=\"text/html; charset=ISO-8859-1\"> ");
	printf("</head>");
	printf("<body> ");

	printLL_Categoria(ll_categ);

 	printf("</body>"); 
	printf("</html>");
}

*/

/*
char* top(Stack s) {
s->str;
}

Stack push(Stack s, char *elem) {
	Stack aux;
	
	aux = (Stack) malloc(sizeof(StackNode));
	aux->str = strdup(elem);
	aux->next = s;

	return aux;
}

Stack pop(Stack s) {
	Stack aux = s->next;
	free(s);
	return aux;
}
*/
