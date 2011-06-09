/*
 *  hashtable.h
 *  hashtable
 *
 *  Created by Ana Isabel Sampaio on 11/06/03.
 *  Copyright 2011 Universidade do Minho. All rights reserved.
 *
 */

#define MAX_SIZE 97

typedef struct hasht {
	
	char* key;
	int type; // 1 - int; 2 - bool; 3 - array
	int eGlobal; // 0 - é global; 1 - não é global
	int add;
	struct hasht * next;

}TabelaHash, *ELEM;

TabelaHash* table[MAX_SIZE];


TabelaHash* create_table();
int hash(char*);
int insert_elem(char*, int,int,int);
TabelaHash* find_elem(char*);
int get_type(char*);
void remove_elem(char*);
void delete_table();
