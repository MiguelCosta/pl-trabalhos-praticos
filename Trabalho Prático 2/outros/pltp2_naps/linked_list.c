#include <stdlib.h>
#include <stdio.h>

#include "linked_list.h"

List list_create(int (*comparator)(void *, void *)) {
        List newList = (List) malloc(sizeof (struct list));
        newList->head = NULL;
        newList->comparator = comparator;
        newList->totalCount = 0;

        return newList;
}

int list_push(List list, void *data) {
        ListNode newElem = malloc(sizeof(struct list_elem));

        newElem->data = data;
        newElem->next = list->head;
        list->head = newElem;

        list->totalCount++;

        return 0;
}

void *list_top(List list) {
        if(list->totalCount == 0)
                return NULL;
        return list->head->data;
}

void *list_last(List list) {
	if (list->totalCount == 0)
		return NULL;

	ListNode node = list->head;
	while(node->next != NULL)
		node = node->next;

	return node->data;
}

void* list_pop(List list) {
        if (list->totalCount == 0)
                return NULL;

        void *data = list->head->data;
        ListNode newList = list->head->next;
        free(list->head);
        list->head = newList;

        list->totalCount--;

		if (list->totalCount == 0)
			list->last = NULL;

        return data;
}

int list_insertTail(List list, void *data) {
        ListNode *aux = &(list->head);

        while (*aux != NULL) {
                aux = &((*aux)->next);
        }

        ListNode newElem;
        if (!(newElem = (ListNode) malloc(sizeof (struct list_elem))))
                return -1;
        newElem->next = *aux;
        newElem->data = data;
        *aux = newElem;

        list->totalCount++;

		list->last = newElem;

        return 0;
}

int list_insertOrd(List list, void *data, int (*comparator)(void*, void*)) {
        ListNode *aux = &(list->head);

        if (comparator == NULL) comparator = list->comparator;
        while (*aux != NULL && !comparator((*aux)->data, data)) {
                aux = &((*aux)->next);
        }

        ListNode newElem;
        if (!(newElem = (ListNode) malloc(sizeof (struct list_elem))))
                return -1;
        newElem->next = *aux;
        newElem->data = data;
        *aux = newElem;

        list->totalCount++;

        return 0;
}

void *list_search(List list, void *data, int (*searchFunction)(void *, void *)) {
        ListNode aux = list->head;

        if (searchFunction == NULL) searchFunction = list->comparator;
        while (aux != NULL) {
                if (searchFunction(aux->data, data))
                        return aux->data;
                aux = aux->next;
        }

        return NULL;
}

int list_remove(List list, void *data, int (*comparator)(void*, void*)) {
        ListNode *elem = &(list->head);
        ListNode aux;

        if (comparator == NULL) comparator = list->comparator;
        while (*elem != NULL && comparator((*elem)->data, data) == 0) {
                elem = &((*elem)->next);
        }

        if (*elem != NULL) {
                aux = *elem;
                *elem = (*elem)->next;
                free(aux);
                list->totalCount--;
        }

        return 0;
}

int list_clearAll(List list) {
        ListNode aux;

        while (list->head != NULL) {
                aux = list->head;
                list->head = list->head->next;
                free(aux);
        }

        free(list);

        return 0;
}

void List_applyToAll(List list, void *data, void (*function)(void *, void *)) {
        ListNode aux = list->head;

        while (aux != NULL) {
                function(aux->data, data);
                aux = aux->next;
        }
}
