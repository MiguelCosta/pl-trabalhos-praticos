
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hashtable.h"

#define TABLE_SIZE 50
#define NAME_SIZE 50

#define DEFAULT_TYPE -1

/**
 * @param index Variable index.
 * @param type Varuable type.
 */
typedef struct var {
	int index;
	int type;
} VAR;
	
typedef struct tmp_var {
	char *key;
	VAR *var;
	struct tmp_var *next;
} TMPVAR;

/**
 * Creates a new tmp global variable.
 * @param key Name to be associated to the variable.
 * @param Type Type of the variable
 */
void g_var_insert(char *key);

/**
 * Set types of inserted variables and insert.
 * @param type Variables type.
 */
void g_var_set_type(int type);

/**
 * Returns a variable index.
 * @param key Name of the variable.
 */
int g_var_get_index(char *key);

/**
 * Returns the type of a variable.
 * @param key Name of the variable.
 */
int g_var_get_type(char *key);

/**
 * Frees the tables.
 */
void vars_free();

/**
 * Initializes the tables.
 * @param g_start_index Start index for the global variables.
 * @param l_start_index Start index for the local variables.
 */
void init(); 
