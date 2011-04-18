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
		if(s1[i] == '\n') s1[i] = ' ';
	}

	return s1;
}

/** 
* tira os \n de uma string
* */
char* tiraParagrafos(char *s1){
	int i;
	for(i = 0; s1[i]!='\0'; i++){
		if(s1[i] == '\n') s1[i] = ' ';
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
	printf("Categoria:\n");
	printf("Nome: %s\n",c->nome);
	printf("Chave: %s\n",c->chave);
	printf("Autor: %s\n",c->autor);
	printf("Titulo: %s\n",c->titulo);
	printf("\n");
	}

/**
 * Adiciona uma categoria recebendo um nome, chave, autor e titulo
 * */
Categoria * addCategoria (char * nom, char* chav, char* autr, char* titul){
	Categoria *c = malloc(sizeof(Categoria));
	c->nome = calloc(strlen(nom), sizeof(char));
	strcpy(c->nome, converte(nom));
	
	c->chave = calloc(strlen(chav), sizeof(char));
	strcpy(c->chave, chav);
	
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
		printf("Chave: %s\n",aux->categ->chave);
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




Esp_Stack pushStack(Esp_Stack s, char * ele){
	// cria um nodo com o nome que recebe
	Esp_Stack novo = (Esp_Stack) malloc(sizeof(esp_stack_nodo));
	novo->elem = strdup(ele);
	novo->next = NULL;


	//if(s == NULL) return novo;

	// stack auxiliar para percorrer a informação que ja existe na stack e ver se ja existe ou nao
	Esp_Stack aux = s;

	// vai procurar se já existe o nome na stack
	while(aux != NULL){
		// se encontrar o nome na stack nao vai inserir e devolve a mesma stack
		if(strcmp(ele,aux->elem) == 0 ){
			return s;
		}
		aux = aux->next;
	}

	// se não enontrou o nome na stack vai inserir à cabeça
	novo->next = s;
	s = novo;
	return s;
}

Esp_Stack popStack(Esp_Stack s){
	Esp_Stack aux = s->next;
	free(s);
	return aux;
}


char* top(Esp_Stack s){
	return s->elem;
}


void filtrarCategoria(LL_Categ ll){
	LL_Categ aux = ll;
	LL_Categ aux2 = ll;
	Esp_Stack stack = NULL;
	Categoria *c = NULL;
	
	// vai à lista de categorias e insere o nome de todas as categorias na stack
	while(aux != NULL){
		c = aux->categ;
		// apenas insere na stack se o nome ainda nao estiver la
		stack = pushStack(stack, c->nome);
		aux = aux->next;
	}
	
	// agora vai imprimir as categorias e esvaziar a stack
	while(stack != NULL){
		printf("Categoria: %s\n",top(stack));
		// vai procurar o nome que está na stack na lista de categorias e imprimir caso sejam iguais
		while(aux2 != NULL){
			// se o nome da stack for igual ao nome da categoria da lista
			if(strcmp(stack->elem,aux2->categ->nome)==0){
				printf("\tChave: %s\n",aux2->categ->chave);
				printf("\tAutor: %s\n",aux2->categ->autor);
				printf("\tTitulo: %s\n",aux2->categ->titulo);
				printf("\n");
			}
			aux2 = aux2->next;
		}
		// vai eliminar o primeiro elemento da stack
		stack = popStack(stack);
		aux2 = ll;
	} 
}


void filtrarAutor(LL_Categ ll){
	LL_Categ aux = ll;
	LL_Categ aux2 = ll;
	Esp_Stack stack = NULL;
	Categoria *c = NULL;

	// vai inserir o nome de todas as categorias na stack
	while(aux != NULL){
		c = aux->categ;
		stack = pushStack(stack, c->autor);
		aux = aux->next;
	}
	
	// agora vai imprimir as categorias e esvaziar a stack
	while(stack != NULL){
		printf("Autor: %s\n",top(stack));
		// vai procurar o nome que está na stack na lista de categorias e imprimir caso sejam iguais
		while(aux2 != NULL){
			// se o nome da stack for igual ao nome da categoria da lista
			if(strcmp(stack->elem,aux2->categ->autor)==0){
				printf("\tCategoria: %s\n",aux2->categ->nome);
				printf("\tChave: %s\n",aux2->categ->chave);
				printf("\tTitulo: %s\n",aux2->categ->titulo);
				printf("\n");
			}
			aux2 = aux2->next;
		}
		// vai eliminar o primeiro elemento da stack
		stack = popStack(stack);
		//aux2 volta a apontar para o inicio da lista de categorias
		aux2 = ll;
	} 
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

