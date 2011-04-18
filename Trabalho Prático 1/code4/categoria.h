
#ifndef categoria


/**
 * Stack
 * */
typedef struct esp_stack {
	char * elem;
	struct esp_stack *next;	
}esp_stack_nodo, *Esp_Stack;


/**
 * insere na stack
 * */
Esp_Stack pushStack(Esp_Stack s, char * elem);

/**
 * remove da stack
 * */
Esp_Stack popStack(Esp_Stack s);

/**
 * devolve o elemento da stack
 * */
char* top(Esp_Stack s);

/**
 * imprime os elementos da stack
 * */
void imprimeStack(Esp_Stack s);


char * tiraEspacos(char * palavra);

/**
* Recebe uma stack e uma string que contêm vários autores e vai devidir essa string de autores para colocar na stack
* */
Esp_Stack divideAutores(Esp_Stack aut, char * todosAutores);

#endif
