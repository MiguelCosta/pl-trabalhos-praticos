
#ifndef categoria

/**
 * Estrutura para as categorias
 * */
typedef struct cat {
    char *nome;
    int	 contador;
} Categoria;



/**
 * Lista ligada para as categorias
 * */
typedef struct ll_cat {
	Categoria *categ;
	struct ll_cat *next;
}ll_cat_nodo, *LL_Categ;

/**
 * Devolve 0 se tem o nome igual
 * Diferente de 0 se são diferentes
 * */
int compararCategoria(Categoria *c1, Categoria *c2);

Categoria *addCategoria (char * nom);

void printCategoria(Categoria *c);

LL_Categ addLL_Categoria(LL_Categ ll_categ, Categoria *c);

void printLL_Categoria(LL_Categ ll_categ);

void html_LL_Categoria(LL_Categ ll_categ);


#endif
