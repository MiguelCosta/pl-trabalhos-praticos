#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Item in the table.
 * @param key Item's key.
 * @param info Pointer to the information to index.
 * @param next Pointer to the nexto item.
 */
typedef struct item {
	char* key;
	void* info;
	struct item *next;
} ITEM;

/**
 * Stores information about the hash table.
 * @param size Size of table.
 * @param count Number of items in the table.
 * @param table Pointer to the table.
 */
typedef struct hashtable {
	int size;
	int count;
	ITEM **table;
} HASHTABLE;


/**
 * Hash function.
 */

unsigned long hash(char *str);
/**
 * Initializes an hash table.
 * @param size Size of the new hash table to return.
 * @return Pointer to the new hash table.
 */

HASHTABLE* hashtable_init(int size);
/**
 * Returns the value from a key.
 * @param t Pointer to the hash table.
 * @param key Key to search.
 * @return Key value or null when not found.
 */

void* hashtable_get(HASHTABLE *t, char* key);
/**
 * Inserts a value in the hash table.
 * @param t Pointer to the hash table.
 * @param key Key to the value.
 * @param value Information to insert.
 */

void hashtable_insert(HASHTABLE* t, char* key, void* value);
/**
 * Removes a key from the table.
 * @param t Hash table where to remove.
 * @param key Key to remove from the table.
 */

void hashtable_remove(HASHTABLE *t, char *key);
