#ifndef _CENA
#define _CENA

#define DIR_UP    0
#define DIR_DOWN  1
#define DIR_LEFT  2
#define DIR_RIGTH 3

typedef struct listV {
	char* nome;
	char* valor;
	struct listV* seg;
} listVar;


typedef struct consts {
	int valI;
	char* valS;
} Constantes;

typedef struct vars {
	char* nome;
	char* valor;
} Variaveis;

#endif
