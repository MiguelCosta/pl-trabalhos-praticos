#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

static node* hashtab[HASHSIZE];

void inithashtab(){
	int i;
	for(i=0;i<HASHSIZE;i++)
		hashtab[i]=NULL;
}

unsigned int hash(char *s){
	unsigned int h=0;
	for(;*s;s++)
		h=*s+h*31;
	return h%HASHSIZE;
}

node* lookup(char *n){
	unsigned int hi=hash(n);
	node* np=hashtab[hi];
	for(;np!=NULL;np=np->next){
		if(!strcmp(np->name,n))
			return np;
	}
	
	return NULL;
}

char* m_strdup(char *o){
	int l=strlen(o)+1;
	char *ns=(char*)malloc(l*sizeof(char));
	strcpy(ns,o);
	if(ns==NULL)
		return NULL;
	else
		return ns;
}

int getTipo(char* name){
	node* n=lookup(name);
	if(n==NULL)
		return -1;
	else
		return n->tipo;
}


int getAddress(char* name){
	node* n=lookup(name);
	if(n==NULL)
		return -1;
	else
		return n->address;
}

int insere(char* name,int tipo,int address,int stackgl){
	unsigned int hi;
	node* np;
	if((np=lookup(name))==NULL){
		hi=hash(name);
		np=(node*)malloc(sizeof(node));
		if(np==NULL)
			return 0;
		np->name=m_strdup(name);
		if(np->name==NULL) return 0;
		np->tipo = tipo;
		np->address = address;
		np->next=hashtab[hi];
		np->stackgl=stackgl;
		hashtab[hi]=np;
	}
	else
	np->tipo=tipo;
	np->address=address;
	np->stackgl=stackgl;
	if(np->tipo==-1) return 0;
	
	return 1;
}

/* A pretty useless but good debugging function,
 which simply displays the hashtable in (key.value) pairs
 */
void displaytable(){
	int i;
	node *t;
	for(i=0;i<HASHSIZE;i++){
		if(hashtab[i]==NULL)
			printf("()");
		else{
			t=hashtab[i];
			printf("(");
			for(;t!=NULL;t=t->next)
				printf("(%s.%d.%d.%d) ",t->name,t->tipo,t->address,t->stackgl);
			printf(")");
		}
	}
}

void cleanup(){
	int i;
	node *np,*t;
	for(i=0;i<HASHSIZE;i++){
		if(hashtab[i]!=NULL){
			np=hashtab[i];
			while(np!=NULL){
				t=np->next;
				free(np->name);
				free(np);
				np=t;
			}
		}
	}
}

int main(){
	
	printf("Cheguei ao fim!\n");
	return 0;
}
/*
int mainZor(){
	int i;
	char* names[]={"name","address","phone","k101","k110"};
	int tipos[]={1,2,3,3600,36};
	int addresses[]={1,2,3,3600,36};
	
	inithashtab();
	for(i=0;i<5;i++)
		insere(names[i],tipos[i],addresses[i]);
	
	printf("Done");
	printf("If we didnt do anything wrong..we should see %d\n",getTipo("k110"));
	
	insere("phone",91363636,1);
	
	printf("Again if we go right, we have %d and %d\n",getTipo("k101"),getTipo("phone"));
	
	displaytable();
	printf("\n");
	cleanup();
	return 0;
}
*/

