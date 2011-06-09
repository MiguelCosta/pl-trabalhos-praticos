
#define DEBUG
#include "debug.h"

#include "vars.h"

/* VARIABLES */

HASHTABLE *g_table;
HASHTABLE *l_table;

int g_index;
int l_index;

TMPVAR *tmp_vars;

/* TEMPORARY VARIABLES */

void g_tmp_insert(char *key, VAR *v) {
	TMPVAR *aux;
	// Create new temp var
	aux = (TMPVAR *) malloc (sizeof(TMPVAR));
	aux->key = (char *) calloc (NAME_SIZE, sizeof(char));
	strcpy(aux->key, key);
	// Insert temp var
	aux->next = tmp_vars;
	tmp_vars = aux;
}

void g_tmp_set_type_and_insert(int type) {
	TMPVAR *aux;
	aux = tmp_vars;
	tmp_vars = aux->next;
	while(aux != NULL) {
		aux->var->type = type;
		hashtable_insert(g_table, aux->key, aux->var);
		free(aux);
		aux = tmp_vars;
		tmp_vars = tmp_vars->next;
	}
	tmp_vars = NULL;
}



/* GLOBAL VARS FUNCIONS */

void g_var_insert(char *key) {
	// Create new var
	VAR *new = (VAR *) malloc (sizeof(VAR));
	new->index = g_index;
	new->type = DEFAULT_TYPE;
	// Insert
	g_tmp_insert(key, new);
	g_index++;
}

void g_var_set_type(int type) {
	g_tmp_set_type_and_insert(type);
}

int g_var_get_index(char *key) {
	VAR *aux;
	aux = (VAR *) hashtable_get(g_table, key);
	return aux->index;
}

int g_var_get_type(char *key) {
	VAR *aux;
	aux = (VAR *) hashtable_get(g_table, key);
	return aux->index;
}


/* MAIN */

void vars_free() {
	free(g_table);
	free(l_table);
}

void init() {
	// Initialize tables
	g_table = hashtable_init(TABLE_SIZE);
	l_table = hashtable_init(TABLE_SIZE);
	// Initialize start index
	g_index = 0; 
	l_index = 0;
}
/*
int main() {
	return 0;
}*/
