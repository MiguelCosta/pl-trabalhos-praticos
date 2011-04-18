#include "categoria.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
* converte uma string para minusculas
* */

char* converte(char *s1){
	int i;

	for(i=0; s1[i]!='\0'; i++){
		s1[i]=tolower(s1[i]);
	}

	return s1;
}


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
	printf("Nome: %s Contador: %d\n",c->nome,c->contador);
}

/**
 * Adiciona uma categoria recebendo um nome
 * */
Categoria *addCategoria (char * nom){
	Categoria *c = malloc(sizeof(Categoria));
	c->nome = calloc(strlen(nom), sizeof(char));
	
	nom = converte(nom);
	
	strcpy(c->nome, nom);
	c->contador = 1;
	return c;
}

int findLL_Categoria(LL_Categ ll_categ, Categoria *c){
	LL_Categ aux = ll_categ;
	while(aux != NULL){
		if (compararCategoria(c,aux->categ)==0){
			 aux->categ->contador++;
			 return 0;
		 }
		aux = aux->next;
	}
	return 1;
}

/**
 * Cria/adiciona uma lista ligada com todas as categorias
 * se a categoria já existir incremente ao contador
 * falta ver se a categoria ainda nao existe na lista
 * */
LL_Categ addLL_Categoria(LL_Categ ll_categ, Categoria *c){
	int procura = findLL_Categoria(ll_categ,c);
	
	if(procura == 0) return ll_categ;
	else { // se a categoria ainda nao existir cria um nodo novo
		LL_Categ aux = (LL_Categ) malloc(sizeof(ll_cat_nodo));
		aux->categ = c;	
		aux->next = ll_categ;

		ll_categ = aux;
		return ll_categ;
	}
}

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
	printf("<td><h4>Total</h4></td>");
	while(aux != NULL){
		printf("<tr>");
			printf("<td>%s</td>",aux->categ->nome);
			printf("<td>%d</td>",aux->categ->contador);
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
