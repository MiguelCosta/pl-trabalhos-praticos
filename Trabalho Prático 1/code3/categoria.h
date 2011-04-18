
#ifndef categoria

/**
 * Estrutura para as categorias
 * */
typedef struct cat {
    char* nome;
    char* chave;
    char* autor;
    char* titulo;
} Categoria;


/**
 * Lista ligada para as categorias
 * */
typedef struct ll_cat {
	Categoria *categ;
	struct ll_cat *next;
}ll_cat_nodo, *LL_Categ;


/**
 * Lista ligada para filtrar
 * */
typedef struct esp_stack {
	char * elem;
	struct esp_stack *next;	
}esp_stack_nodo, *Esp_Stack;


/**
 * Devolve 0 se tem o nome igual
 * Diferente de 0 se são diferentes
 * */
int compararCategoria(Categoria *c1, Categoria *c2);

/**
 * Cria um nodo categoria com os vários da estrutura
 * */
Categoria *addCategoria (char * nom, char* chave, char* autor, char* titulo);

/**
 * Mostra a informação de uma categoria
 * */
void printCategoria(Categoria *c);

/**
 * adiciona uma categoria à lista de categorias
 * */
LL_Categ addLL_Categoria(LL_Categ ll_categ, Categoria *c);

/**
 * faz print da lista de categorias
 * */
void printTudo(LL_Categ ll_categ);

/**
 * faz print da lista de categorias mas tem html
 * */
void printLL_Categoria(LL_Categ ll_categ);

/**
 * cria uma página html
 * */
void html_LL_Categoria(LL_Categ ll_categ);

/**
 * devolve o tamanho de uma lista ligada
 * */
int tamanhoLL(LL_Categ ll);

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
 * imprimir a imformação por categoria
 * */
void filtrarCategoria(LL_Categ ll);

/**
 * imprimir a imformação por autor
 * */
void filtrarAutor(LL_Categ ll);

/**
 * imprimir a imformação por categoria
 * */
void html_filtrarCategoria(LL_Categ ll);

/**
 * imprimir a imformação por autor
 * */
void html_filtrarAutor(LL_Categ ll);

/**
* gerar todo o código da página html para aparecer a informação
* */
void gerar_html_b(LL_Categ ll_categ);

#endif
