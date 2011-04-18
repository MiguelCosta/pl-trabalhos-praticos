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



char * tiraEspacos(char * s1){
	int i;

	for(i=0; s1[i]!='\0'; i++){
		if(s1[i] == ' ' || s1[i] == '\n'|| s1[i] == '.') s1[i] = '_';
	}

	return s1;

}

/*substituir nas strings */
char * substituir(char * s1){
	int i;

	for(i=0; s1[i+3]!='\0'; i++){
		if(s1[i] == 'a' && s1[i+1] == 'n'&& s1[i+2] == 'd'){
			s1[i] = '|';
			s1[i+1] = '|';
			s1[i+2] = '|';
		}
	}

	return s1;

}

Esp_Stack divideAutores(Esp_Stack aut, char * todosAutores){
	//printf("Autores: %s\n\n",todosAutores);
	todosAutores = substituir(tiraEspacos(todosAutores));
	//printf("Autores: %s\n\n",todosAutores);
	char delims[] = "|";
	char *result = NULL;
	result = strtok( todosAutores, delims );
	while( result != NULL ) {
		aut = pushStack(aut, result);
    		//printf( "result is \"%s\"\n", result );
    		result = strtok( NULL, delims );
	}
	return aut;
}
