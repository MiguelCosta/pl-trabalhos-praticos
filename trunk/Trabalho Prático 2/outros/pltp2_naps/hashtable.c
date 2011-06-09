
#include "hashtable.h"
/**
 * Hash function.
 */
unsigned long hash(char *str){
	return 1;
}

/**
 * Initializes an hash table.
 * @param size Size of the new hash table to return.
 * @return Pointer to the new hash table.
 */
HASHTABLE* hashtable_init(int size) {
	HASHTABLE* table = (HASHTABLE *) calloc (1, sizeof(HASHTABLE));
	table->size = size;
	table->count = 0;
	table->table = (ITEM **) calloc (size, sizeof(ITEM*));
	return table;
}

/**
 * Returns the value from a key.
 * @param t Pointer to the hash table.
 * @param key Key to search.
 * @return Key value or null when not found.
 */
void* hashtable_get(HASHTABLE *t, char* key) {
	unsigned long index;
	ITEM *ptr;

	if(!t->count)
		return NULL;

	index = hash(key);

	ptr = t->table[index];

	while(ptr != NULL) {
		if(!strcmp(key, ptr->key))
			return ptr->info;
		ptr = ptr->next;
	}

	return NULL;
}


/**
 * Inserts a value in the hash table.
 * @param t Pointer to the hash table.
 * @param key Key to the value.
 * @param Value Value to be inserted.
 */
void hashtable_insert(HASHTABLE* t, char* key, void* value) {
	int index;
	// Init new item
	ITEM* new_item = (ITEM *) calloc(1, sizeof(ITEM));
	new_item->key = (char *) calloc (50, sizeof(char));
	// Copy values to new item
	strcpy(new_item->key, key);
	new_item->info = value;
	// Get hash index
	index = hash(key);
	// Insert
	new_item->next = t->table[index];
	t->table[index] = new_item;
	t->count++;
}

/**
 * Removes a key from the table.
 * @param t Hash table where to remove.
 * @param key Key to remove from the table.
 */
void hashtable_remove(HASHTABLE *t, char *key) {
	int index;
	ITEM **ptr, *b_ptr;

	if(!t->count)
		return;

	index = hash(key);
	ptr = &t->table[index];

	while(ptr != NULL) {
		if(!strcmp(key, (*ptr)->key)) {
			b_ptr = (*ptr);
			*ptr = (*ptr)->next;
			free(b_ptr);
			t->count--;
			return;
		}
		ptr = &(*ptr)->next;
	}
}


