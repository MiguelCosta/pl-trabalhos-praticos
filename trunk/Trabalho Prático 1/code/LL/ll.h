
/**
* Modulo para Listas Ligadas
*/

typedef struct lligada_nodo * LL;

int inserir_ll (LL *lista, void * inf);

int procura_ll (LL *lista, void * inf, int (*funcao_comparacao)(void *, void *));
