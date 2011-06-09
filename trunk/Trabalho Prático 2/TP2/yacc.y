%{
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
#include "cena.h"
#include "hashtable.h"

extern char *yytext;


int enderecoVarGlobal = 0;
int direction = DIR_UP;
int ready = 1;

listVar * listaVariaveis;



%}

%token <valn>NUM
%token <vals>STRING
%token <vals>IDENT

%token PROGRAM
%token DECLARATIONS
%token STATEMENTS
%token INTEGER
%token BOOLEAN
%token ARRAY
%token SIZE
%token <vals>TRUE
%token <vals>FALSE
%token FORWARD
%token BACKWARD
%token RRIGHT
%token RLEFT
%token PEN
%token UP
%token DOWN
%token GOTO
%token WHERE
%token <vals>SUCC
%token <vals>PRED
%token SAY
%token ASK
%token IF
%token ELSE
%token THEN
%token WHILE

%token SETA
%token ADD_SOMA
%token ADD_SUB
%token ADD_OU

%token MUL_MULT
%token MUL_DIV
%token MUL_AND
%token MUL_DOIS_ASTERISCO

%token REL_IGUAL
%token REL_DIFERENTE
%token REL_MENOR
%token REL_MAIOR
%token REL_MENOR_IGUAL
%token REL_MAIOR_IGUAL
%token REL_IN

%token ERRO

%left MUL_MULT MUL_DIV MUL_AND REL_IGUAL REL_DIFERENTE REL_MENOR REL_MAIOR REL_MENOR_IGUAL REL_MAIOR_IGUAL ADD_SOMA ADD_SUB ADD_OU

%type <var> Var
%type <cons> Constant
%type <cons> Value_Var
%type <cons> Inic_Var
%type <valn> Type
%type <cons> Factor
%type <vals> SuccPred
%type <valn> SuccOrPred
%type <cons> Term
%type <cons> Single_Expression
%type <cons> Expression
%type <valn> Add_Op
%type <valn> Mul_Op
%type <valn> Rel_Op
%type <vals> Variable

%union{
	int valn;
	char *vals;
	float valr;
	Variaveis var;
	Constantes cons;
}


%%


// ***********GRAMÁTICA**********

Liss	:	PROGRAM IDENT  "{" Body  "}"		{printf("stop\n");}
		;

Body    :	DECLARATIONS Declarations
		{ 
		if(insert_elem("poisicaoEmX",1,enderecoVarGlobal,0)){
			enderecoVarGlobal++;
			printf("pushi 200\n");
		}
		else {
			yyerror("Ocorreu um erro na inserção da variavel");
			exit(0);
		}

		if(insert_elem("poisicaoEmY",1,enderecoVarGlobal,0)){
			enderecoVarGlobal++;
			printf("pushi 450\n");
		}
		else {
			yyerror("Ocorreu um erro na inserção da variavel");
			exit(0);
		}
		printf("start");
		printf("pushi 700\n");
		printf("pushi 700\n");
		printf("opendrawingarea\n");
		}


		STATEMENTS  Statements

		;
		
/////////////////////////////////////////////// DECLARAÇÃO DE VARIAVEIS /////////////////////////////////////////////////

Declarations	:	Declaration
				|	Declarations Declaration
				;
	
Declaration 	: 	Variable_Declaration
				;

Variable_Declaration	:	Vars SETA Type ";"		{
						
						listVar * listAux = listaVariaveis;
						while( listAux!=NULL )
						{
							if(find_elem(listAux->nome) != NULL)
							{
								yyerror("Atencao! A variavel ja existe!");
								exit(0);							
							}
							
							if( !insert_elem(listAux->nome,$3, enderecoVarGlobal, 0)) 
							{
								yyerror("Falha de Segmentação");
								exit(0);
							}
							enderecoVarGlobal++;		
							int x, y, z;
							x = strcmp("TRUE",listAux->valor);
							y = strcmp("FALSE", listAux->valor);
							z = strcmp(listAux->valor,"");
							
							switch($3)
							{						
								case 1 :					
									if(x != 1 || y !=1 ) {
										yyerror("O Tipo da variavel nao e INTEGER!");
										exit(0);
									}
									
									if( z != 1 ) 
									{
										printf("pushi 0\n");
									}
									else 
									{
										printf("pushi %d \n", atoi(listAux->valor));
									}
									break;
								case 2 : 
									if( x == 0 || z != 1) 
									{
										printf("pushi 1\n");
									}
									else
									{
										if(y == 0)
										{
											printf("pushi 0 \n");
										}
										else
										{
											yyerror("O Tipo da variavel nao e BOOLEAN!");
										}
									
									}
									
									break;
									
								case 3 :
									break;
							
							}
							listAux = listAux->seg;
						}
						
						
						// Já inseriu na HashTable por isso apaga a lista de variaveis
						listaVariaveis = NULL;
						
						}
						;
						
						
						

// guardar as variaveis e o o seu valor numa lista de variaveis
Vars	:	Var	{
		listVar* new = (listVar*)malloc(sizeof(listVar));
		new -> nome = $1.nome;
		new -> valor = $1.valor;
		new -> seg = NULL;
		listaVariaveis = new;
		}
		
		| 	Vars "," Var	{
		listVar* new = (listVar*)malloc(sizeof(listVar));
		new -> nome = $3.nome;
		new -> valor = $3.valor;
		new -> seg = listaVariaveis;
		listaVariaveis = new;		
		}
		;
		


Var		:	IDENT Value_Var
			{
				int x; 
				x = strcmp($2.valS, "");
				$$.nome = $1;
				if($2.valI = INT_MIN)
				{
					$$.valor = $2.valS;
				}
				else
				{
					if( x != 0)
					{
						$$.valor=(char*)malloc(sizeof($2.valI));
						sprintf($$.valor,"%d",$2.valI);
					}
					else 
					{
						$$.valor = "";
					}
				}
			}
		;

Value_Var	:			
			{
				$$.valS = "";
				$$.valI = INT_MIN;			
			}
			| '=' Inic_Var	{$$ = $2;}
			;

Type	:	INTEGER				{$$ = 1;}
		| 	BOOLEAN				{$$ = 2;}
		|	ARRAY SIZE NUM		{$$ = 3;}
		;

Inic_Var	:	Constant			{$$ = $1;}
			| 	Array_Definition	{$$.valI = INT_MIN; $$.valS = "";}
			;

Constant    :	NUM			{$$.valI = $1; $$.valS = "";}
		    |	STRING		{$$.valI = INT_MIN; $$.valS = $1;}
			| 	TRUE		{$$.valI = INT_MIN; $$.valS = $1;}
			| 	FALSE		{$$.valI = INT_MIN; $$.valS = $1;}
			;
			


/////////////////////////////////////////////// ARRAYS /////////////////////////////////////////////////

Array_Definition		:	"[" Array_Initialization "]"
						;
						
Array_Initialization 	:	Elem
						| 	Array_Initialization "," Elem
						;

Elem	:	NUM
		;
		

////////////////////////////////////////// COMANDOS TARTARUGA //////////////////////////////////////////

Statements	:	Statement ";"
			| 	Statements Statement ";"
			;

Statement	:	Turtle_Commands
			|	Assignment
			|	Conditional_Statement
			|	Iterative_Statement
			;
			
Turtle_Commands		:	Step
					|	Rotate
					| 	Mode
					| 	Dialogue
					| 	Location
					;
					
Step	:	FORWARD 
			{
				ELEM auxX = find_elem("posicaoEmX");
				ELEM auxY = find_elem("posicaoEmY");
				if(auxX)
				{
					printf("pushg %d \n", auxX->add);
				}
				if(auxY)
				{
					printf("pushg %d \n", auxY->add);
				}

				switch (direction) {
					case(0) :
						printf("pushg %d\n", auxY->add);
						break;
					case(1) :
						printf("pushg %d\n", auxY->add);
						break;
					case(2) :
						printf("pushg %d\n", auxX->add);
						break;
					case(3) :	
						printf("pushg %d\n", auxX->add);
						break;
					default: 
						yyerror("Direcção Inválida");
						exit(0);				
				}
			}

			Expression
			{
				ELEM auxX = find_elem("posicaoEmX");
				ELEM auxY = find_elem("posicaoEmY");
			
				if( (auxX && auxY) == 0)
				{
					yyerror("Impossivel aceder às posições!");
					exit(0);
				}
				switch(direction)
				{
					case 0:
						printf("sub\n");
						printf("storeg%d\n",auxY->add);
						break;
					case 1:
						printf("add\n");
						printf("storeg%d\n",auxY->add);
						break;
					case 2:
						printf("sub\n");
						printf("storeg%d\n",auxX->add);
						break;
					case 3:
						printf("add\n");
						printf("storeg%d\n",auxX->add);
						break;
					default:
						yyerror("A direcção não é conhecida");
						exit(0);
				}
				
				if(ready)
				{
					printf("pushg %d\n",auxX->add);
					printf("pushg %d\n",auxY->add);
					printf("drawline\n");
					printf("refresh\n");
				}
				else
				{
					printf("pop 2\n");			
				}
			
			}
		|	BACKWARD 
			{
				ELEM auxX = find_elem("posicaoEmX");
				ELEM auxY = find_elem("posicaoEmY");
				if(auxX)
				{
					printf("pushg %d \n", auxX->add);
				}
				if(auxY)
				{
					printf("pushg %d \n", auxY->add);
				}

				switch (direction) {
					case(0) :
						printf("pushg %d\n", auxY->add);
						break;
					case(1) :
						printf("pushg %d\n", auxY->add);
						break;
					case(2) :
						printf("pushg %d\n", auxX->add);
						break;
					case(3) :	
						printf("pushg %d\n", auxX->add);
						break;
					default: 
						yyerror("Direcção Inválida");
						exit(0);				
				}

			}
			
			Expression
			{
				if(ready){
					
					ELEM auxX = find_elem("posicaoEmX");
					ELEM auxY = find_elem("posicaoEmY");
					
					switch(direction)
					{
										
					case 0:
						printf("add\n");
						printf("storeg%d\n",auxY->add);
						break;
					case 1:
						printf("sub\n");
						printf("storeg%d\n",auxY->add);
						break;
					case 2:
						printf("add\n");
						printf("storeg%d\n",auxX->add);
						break;
					case 3:
						printf("sub\n");
						printf("storeg%d\n",auxX->add);
						break;
					default:
						yyerror("A direcção não é conhecida");
						exit(0);				
					}
					
					if(ready)
					{
						printf("pushg %d\n",auxX->add);
						printf("pushg %d\n",auxY->add);
						printf("drawline\n");
						printf("refresh\n");
					}
					else
					{
						printf("pop 2\n");
					}
	
				}
			
			}
		;

Rotate	: 	RRIGHT
		{
		if(direction==0){
			direction+=3;
		}
		else{
			if(direction==2 || direction==3)
				direction-=2;
			else direction+=1;
		}
		}
		|	RLEFT
		{
		if(direction==2){
			direction-=1;
		}
		else{
			if(direction==0 || direction==1)
				direction+=2;
			else direction-=3;
		}
		}
		;

Mode	:	PEN UP			{ready = 0;}
		| 	PEN DOWN	{ready = 1;}
		;
		
Dialogue	:	Say_Statement
			| 	Ask_Statement
			;

Location	:	GOTO NUM "," NUM
			{
			ELEM auxX = find_elem("posicaoEmX");	
			ELEM auxY = find_elem("posicaoEmY");
			printf("pushi %d\n",$2);
			printf("storeg %d\n",auxX->add);
			printf("pushi %d\n",$4);
			printf("storeg %d\n",auxY->add);
			}

			| 	WHERE "?"
			{
			ELEM auxX = find_elem("posicaoEmX");
			ELEM auxY = find_elem("posicaoEmY");
			printf("pushg %d\n",auxX->add);
			printf("writei\n");
			printf("pushg %d\n",auxY->add);										
			printf("writei\n");

			}
			;
			
Assignment  :	Variable "=" Expression
				{
					ELEM  a = find_elem($1);

					if(a->eGlobal)
					{
						printf("storeg %d\n",a->add);
					
					}
					else
					{
						printf("storel %d\n",a->add);
					
					}
					
				}

			;

Variable	:	IDENT Array_Acess
			{
			yyerror("Operação com arrays não foi tratada");
			exit(0);
			}
			;
			
Array_Acess :
			| 	"[" Single_Expression "]"
			;
			

/////////////////////////////////////////////// EXPRESSOES /////////////////////////////////////////////////

Expression  : 	Single_Expression		{$$=$1;}
			| 	Expression Rel_Op Single_Expression 
			
			/*{
				
				switch($2){
					case REL_IGUAL:
					case REL_DIFERENTE:
					case REL_MENOR:
					case REL_MAIOR:
					case REL_MENOR_IGUAL:
					case REL_MAIOR_IGUAL:
					case REL_IN:
				}		
			}*/
			;

Single_Expression	:	Term			{$$=$1;}
					| 	Single_Expression Add_Op Term
						{
					
						switch($2){
							case 0:
								printf("add\n");
								break;
							case 1:
								printf("sub\n");
								break;
							default: 
								yyerror("O operador inserido não está definido!");
								exit(0);
						}
						}
					;
					
Term	:	Factor {$$=$1;}
		|	Term Mul_Op Factor
			{
				switch($2){
					case 0: 
						printf("mul\n");
						break;
					case 1:
						printf("div\n");
						break;
					case 3:
						{
							printf("pop 1\n");
							int a = $3.valI-1;
						
							while(a > 0)
							{
								printf("dup 1\n");
								a--;
							}
							
							a = $3.valI-1;
						
							while(a > 0)
							{
								printf("mul\n");
								a--;
							}
							break;
						}
					default: 
						yyerror("O operador inserido não está definido!");
						exit(0);
			}
		}	
		;

Factor  :	Constant	
			{
				$$ = $1;
				if(strcmp($1.valS,"TRUE")==0)
				{
					printf("pushi 1\n");
				}
				else 
				{
					if(strcmp($1.valS,"FALSE")==0)
					{
						printf("pushi 0\n");
					}
					else 
					{
						printf("pushi %d\n",$1.valI);
					}				
				}
				
			}
		| 	Variable
			{
			$$.valI = INT_MIN;
			$$.valS = $1;
			
			ELEM var = find_elem($1);
			
			if(!var)
			{
				yyerror("A varivel não foi declarada!");
				exit(0);
			}
			if(var -> eGlobal)
			{
				printf("pushg %d\n", var -> add);
			}
			else 
			{
				printf("pushl %d\n", var -> add);
			}
			
			}
		| 	SuccOrPred
		| 	"(" Expression ")"
		;

Add_Op  : 	ADD_SOMA	{$$ = 0;}
		| 	ADD_SUB		{$$ = 1;}
		| 	ADD_OU		{$$ = 2;}
		;

Mul_Op  :	MUL_MULT	{$$ = 0;}
		| 	MUL_DIV	{$$ = 1;}
		| 	MUL_AND	{$$ = 2;}
		| 	MUL_DOIS_ASTERISCO	{$$ = 3;}
		;

Rel_Op  : 	REL_IGUAL		{$$ = 0;}
		|   REL_DIFERENTE	{$$ = 1;}
		| 	REL_MENOR		{$$ = 2;}
		| 	REL_MAIOR		{$$ = 3;}
		| 	REL_MENOR_IGUAL	{$$ = 4;}
		| 	REL_MAIOR_IGUAL	{$$ = 5;}
		| 	REL_IN			{$$ = 6;}
		;

SuccOrPred	:	SuccPred IDENT
			
SuccPred	:	SUCC	
			| 	PRED	
			;

Say_Statement	:	SAY "(" Expression ")"
				;

Ask_Statement   :	ASK "(" STRING "," Variable ")"
				;
				
Conditional_Statement	:	IfThenElse_Stat
						;
						
Iterative_Statement		:	While_Stat
						;
						
IfThenElse_Stat		:	IF Expression THEN "{" Statements "}" Else_Expression
					;
					
Else_Expression		:
					|	ELSE "{" Statements "}"
					;
					
While_Stat          :	WHILE "(" Expression ")" "{" Statements "}"
					;

%%


int yyerror(char *s)
{
	fprintf(stderr,"Erro: %s \n",s);
	return 0;
}

int main()
{
	listaVariaveis =NULL;
	create_table();
	yyparse();
	return(0);
}
