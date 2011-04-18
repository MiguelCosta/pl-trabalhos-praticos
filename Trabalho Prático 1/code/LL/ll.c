#include<stdlib.h>
#include<stdio.h>

typedef struct ll_nodo {
	void *st;
	struct ll_nodo *next;
}LL_NODO, *LL;

/**
 * Insere à cabeça da lista
 * 0 sucesso
 * */
int inserir_ll(LL *lista, void *info){
	
	LL aux = (LL) malloc(sizeof(LL_NODO));
	if (aux == NULL) return (-1);
	aux->st = info;
	aux->next = (*lista);
	
	(*lista) = aux;
	
	return 0;
}

/**
 * procura numa lista ligada
 * devolve o nodo que contém a informação
 * */
void * procura_ll (LL *lista, void * inf, int (*funcao_comparacao)(void *, void *)){
	
	LL aux;
	
	for (aux = *lista; aux; aux = aux->next){
		if((*funcao_comparacao)(inf,aux->st)== 1 )
			return (aux->st);
	}
	
	return NULL;
}

int main (){
	
	
	return 0;
}
