#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

/**
 * Elemento de uma lista
 */
typedef struct list_elem {
	void *data;             /**< Dados do elemento */
	struct list_elem *next; /**< Proximo elemento */
} *ListNode;

/**
 * Estrutura de uma lista ligada
 */
typedef struct list {
	ListNode head;						/**< Lista de elementos */
	ListNode last;						/**< Ultimo elemento (para implementar) */
	int (*comparator)(void *, void *);	/**< Funcao de comparacao */
	int totalCount;						/**< Contagem de elementos */
} *List;

/**
 * @fn list_create
 * @brief Cria uma nova lista
 * 
 * @param comparator Funcao de comparacao para insercao ordenada
 * @return Lista criada
 */
List list_create(int (*comparator)(void *, void *));

/**
 * @fn list_push
 * @brief Insere um elemento no topo da lista
 *
 * @param list Lista a usar
 * @param newData dados a inserir
 * @return 0 em caso de sucesso
 */
int list_push(List list, void *data);

/**
 * @fn list_top
 * @brief Retorna o elemento no top da lista sem o remover
 *
 * @param list List a usar
 * @return Dados retirados
 */
void *list_top(List list);

/**
 * @fn list_last
 * @brief Devolve o ultimo elemento da lista
 *
 * @param list Lista a usar
 * @return Apontador para o ultimo elemento, ou NULL se lista vazia
 */
void *list_last(List list);

/**
 * @fn list_insertTail
 * @brief Insere à cauda
 *
 * @param list List a usar
 * @param data Dados a inserir
 * @return 0 em caso de sucesso
 */
int list_insertTail(List list, void *data);

/**
 * @fn list_pop
 * @brief Retorna um elemento do topo da lista, removendo-o
 *
 * @param list List a usar
 * @return Dados retirados
 */
void *list_pop(List list);

/**
 * @fn list_insertOrd
 * @brief Insere ordenadamente na lista
 * 
 * @param list Lista a usar
 * @param newData Apontador para os dados a inserir
 * @return 0 em caso de sucesso
 */
int list_insertOrd(List list, void *newData, int (*comparator)(void*, void*));

/**
 * @fn list_search
 * @brief Procura um elemento numa lista cmo base numa funcao de procura
 * 
 * @param list Lista a procurar
 * @param searchFunction Funcao usada para decidir se os dados actuais sao ou nao os desejados, NULL para usar a compareFunction default
 * @return 0 em caso de sucesso
 */
void *list_search(List list, void *data, int (*searchFunction)(void *, void *));

/**
 * @fn list_remove
 * @brief Remove um elemento numa list com base numa funcao de procura
 * 
 * @param list Lista a usar
 * @param comparator Funcao de comparacao utilizada, NULL para usar a funcao default da lista
 * @return 0 em caso de sucesso
 */
int list_remove(List list, void *data, int (*comparator)(void*, void*));

/**
 * @fn list_clearAll
 * @brief Elimina toda a lista
 * 
 * @param list Lista a eliminar
 * @return 0 em caso de sucesso
 */
int list_clearAll(List list);

/**
 * @fn list_applyToAll
 * @brief Aplica uma funcao a todos os elementos da lista
 * 
 * @param list Lista a usar
 * @param function Funcao a aplicar
 * @param params Parametros a enviar a funcao
 */
void list_applyToAll(List list, void *params, void (*function)(void *, void *));

#endif
