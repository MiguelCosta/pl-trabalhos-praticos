/*
 *  hashtable.c
 *  hashtable
 *
 *  Created by Ana Isabel Sampaio on 11/06/03.
 *  Copyright 2011 Universidade do Minho. All rights reserved.
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "hashtable.h"



TabelaHash* create_table(){

	TabelaHash* tabela = (TabelaHash*) malloc(MAX_SIZE * sizeof(TabelaHash));
		
	return tabela;
}


int hash(char *key){
	
	unsigned int i;
	unsigned int tam = strlen(key);
	unsigned int total = 0;
	
	for(i=0; i<tam; i++){
		total = total * 31415 + key[i];
	}
	
	return total % MAX_SIZE;
}


int insert_elem(char* chave, int tipo, int endereco, int glob) {
	
	int indice = hash(chave);
	ELEM new_elem = (ELEM) malloc(sizeof(struct hasht));
	if(new_elem==NULL)
			return 0;

	new_elem->key = strdup(chave);
	if(new_elem->key==NULL) return 0;

	//strcpy(new_elem->key, chave);
	new_elem->type = tipo;
	
	new_elem->add = endereco;
	new_elem->eGlobal = glob;

	new_elem->next = table[indice];
	table[indice]=new_elem;
	return 1;

/*

	unsigned int hi;
	ELEM np;
	if((np=lookup(name))==NULL){
		hi=hash(name);
		np=(node*)malloc(sizeof(node));
		if(np==NULL)
			return 0;
		np->key=m_strdup(chave);
		if(np->name==NULL) return 0;
		np->type = tipo;
		np->add = endereco;
		np->next=hashtab[hi];
		np->stackgl=stackgl;
		table[hi]=np;
	}
	else
	np->tipo=tipo;
	np->address=address;
	np->stackgl=stackgl;
	if(np->tipo==-1) return 0;
	
	return 1;
*/

}


ELEM find_elem(char* chave){
	
	int indice = hash(chave);
	ELEM elem = table[indice];
	
	while(elem != NULL){
		if(!strcmp(elem->key,chave)) return elem;
		elem = elem->next;		
	}
	
	return NULL;	
}

int get_type(char* chave){
	int indice;
	ELEM elem;
	
	indice = hash(chave);
	elem = table[indice];

	while(elem != NULL){
		if(!strcmp(chave,elem->key))
			return elem->type;
		elem = elem->next;
	}
	return -1;
}

void remove_elem(char* chave){
	
	int indice;
	ELEM elem, aux;
	
	indice = hash(chave);
	elem = table[indice];
	
	while(elem != NULL){
		if(!strcmp(chave, elem->key)){
			aux = elem;
			elem = elem->next;
			free(aux);
		}
		elem = elem->next;
	}
}


void delete_table(){
	
	int i;
	ELEM elem;
	
	for(i=0; i<MAX_SIZE; i++){
		if(table[i] != NULL){
			elem=table[i];
			remove_elem(elem->key);
		}
	}
}

