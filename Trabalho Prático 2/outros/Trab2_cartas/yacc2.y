%{
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <limits.h>
	#include <ctype.h>
	#include "hashtable.h"

	#define CIMA	 0
	#define DIREITA	 1
	#define BAIXO	 2
	#define ESQUERDA 3
	
	int stackL=0;
	int stackG=0;

	int dir = CIMA; 

	int pousada = 1;

	typedef struct Vars {
		char* nome;
		char* valor;
		struct Vars* next;
	}tVarString;
	
	tVarString* nodo;
	
	typedef struct ParIdentValor {
		char* nome;
		char* valor;
	}ParIdVl;

	typedef struct {
		int valorInt;
		char* valorString;
	}Parconst;
%}


%token DECLARATIONS
%token STATEMENTS 
%token <vals>SUCC
%token <vals>PRED
%token IF
%token ELSE
%token THEN
%token WHILE
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
%token SAY
%token ASK
%token OU
%token E
%token MULTMULT
%token IGUAL
%token DIF
%token MENORIGUAL
%token MAIORIGUAL
%token IN
%token SETA
%token PROGRAM
%token <valn>NUM
%token <vals>STRING
%token <vals>IDENT

%left '<' '>' MENORIGUAL MAIORIGUAL IGUAL E MULTMULT DIF OU
%left <vals>'+' '-'
%left '*' '/'

%type <par>Var
%type <parConst>Constant
%type <vals>Sign
%type <parConst>Value_Var
%type <parConst>Inic_Var
%type <valn>Type
%type <parConst>Factor
%type <vals>SuccPred
%type <valn>SuccOrPred
%type <parConst>Term
%type <parConst>Single_Expression
%type <parConst>Expression
%type <valn>Add_Op
%type <valn>Mul_Op
%type <vals>Array_Acess
%type <vals>Variable


%union{
	int valn;
	char *vals;
	float valr;
	ParIdVl par;
	Parconst parConst;
}


%start LISS

%%

LISS			: PROGRAM IDENT '{' Body '}' {printf("stop\n");}
				;
Body			: DECLARATIONS Declarations 
							{
								if(insere("posX",0,stackG,0))
								{
									stackG++;
									printf("pushi 200\n");
								}
								else
								{
									yyerror("Impossível adicionar Var posX");
									exit(0);
								}
								if(insere("posY",0,stackG,0))
								{
									stackG++;
									printf("pushi 450\n");
								}
								else
								{
									yyerror("Impossível adicionar Var posY");
									exit(0);
								}
								
								printf("start\n");
								printf("pushi 800\n");
								printf("pushi 600\n");
								printf("opendrawingarea\n");
							}
       			  STATEMENTS Statements
				;
Declarations		: Declaration
					| Declarations Declaration 
					;
Declaration		: Variable_Declaration
				;
Variable_Declaration 	: Vars SETA Type ';'
		      	{
					tVarString* aux = nodo;
					while(aux!=NULL)
					{
						//printf("%s %d %d %s\n",aux->nome,$3,stackG, aux->valor);
						if(lookup(aux->nome) != NULL)
						{
							yyerror("VAR Duplicadas");
							exit(0);
						}
						else
						{
							if(!insere(aux->nome,$3,stackG,0))
							{
								yyerror("SEGMENTATION FAULT");
								exit(0);
							}
							switch($3)
							{
								case 0 :
								 		if((!strcmp("TRUE",aux->valor)) || (!strcmp("FALSE",aux->valor)))
											{
												yyerror("Tipo Integer incorrecto");
												exit(0);
											}
										if(!strcmp(aux->valor,"vazio"))
											printf("pushi 0\n");
										else
											printf("pushi %d\n",atoi(aux->valor));
										break;
								case 1 : 
										if(strcmp("TRUE",aux->valor)==0 || !strcmp(aux->valor,"vazio") )
										{
											printf("pushi 1\n");
										}
										else
											if(strcmp("FALSE",aux->valor)==0)
												printf("pushi 0\n");
											else
											{
												yyerror("Tipo boolean incorrecto");
												exit(0);
											}
										
										break;
							}
							stackG++;
						}
						aux = aux->next;
					}

					nodo = NULL;
			}
			;
Vars		: Var 
       		{
				tVarString* aux = (tVarString*)malloc(sizeof(tVarString));
				aux->nome = $1.nome;
				aux->valor = $1.valor;
				aux->next = NULL;
				nodo=aux;
			}
			| Vars ',' Var
			{
				tVarString* aux = (tVarString*)malloc(sizeof(tVarString));
				aux->nome = $3.nome;
				aux->valor = $3.valor;
				aux->next = nodo;
				nodo = aux;
			}
			;
Var			: IDENT Value_Var 
      		{
				$$.nome = $1;
				if(!strcmp($2.valorString,"vazio"))
				{
					$$.valor="vazio";
				}
				else
				{
					if($2.valorInt==INT_MIN)
						$$.valor = $2.valorString;
					else
					{
						$$.valor = (char*)malloc(sizeof($2.valorInt));
						sprintf($$.valor,"%d",$2.valorInt);
					}
				}
			}
			;
Value_Var   : 
				{
					$$.valorString = "vazio";
					$$.valorInt = INT_MIN;
				}
			| '=' Inic_Var 
				{
					$$ = $2;
				}
			;
Type		: INTEGER {$$=0;}
			| BOOLEAN {$$=1;}
			| ARRAY SIZE NUM {$$=2;} 
			;
Inic_Var	: Constant	
	  		{
				$$ = $1;
			}
			| Array_Definition 
			{
				$$.valorString = "";
				$$.valorInt = INT_MIN;
			}
			;
Constant		: '(' Sign NUM ')' 
	  		{
				char *res = (char*)malloc(sizeof($3));
				if(strcmp($2,"-")==0)
				{	
					sprintf(res,"-%d",$3);
					$$.valorInt = atoi(res);
					$$.valorString ="";
				}
				else
				{
					$$.valorInt=$3;
					$$.valorString ="";
				}	
			}
			| TRUE  {$$.valorString = $1; $$.valorInt = INT_MIN; }
			| FALSE  {$$.valorString = $1; $$.valorInt = INT_MIN; }
			;
Sign		: {$$ = "";}
			| '+' {$$ = $1;}
			| '-' {$$ = $1;} 
 			;
Array_Definition 	: '[' Array_Initialization ']'
					;
Array_Initialization 	: Elem
						| Array_Initialization ',' Elem
						;
Elem		: Sign NUM
			;
Statements		: Statement 
	    		| Statements  Statement
				;
Statement	: Turtle_Commands
	   		| Assignment
			| Conditional_Statement
			| Iterative_Statement
			;
Turtle_Commands		: Step 
		 			| Rotate
					| Mode
					| Dialogue
					| Location
					;
Step		: FORWARD 
						{
							node * auxiliar = lookup("posX");
							if(auxiliar)
								printf("pushg %d\n",auxiliar->address);
							auxiliar = lookup("posY");
							if(auxiliar)
								printf("pushg %d\n",auxiliar->address);
								
							node* posXX = lookup("posX");
							node* posYY = lookup("posY");
							switch(dir){
								case(0):printf("pushg %d\n",posYY->address);break;
								case(1):printf("pushg %d\n",posXX->address);break;
								case(2):printf("pushg %d\n",posYY->address);break;
								case(3):printf("pushg %d\n",posXX->address);break;
								default:yyerror("Direcção desconhecida");exit(0);
							}
						}
				Expression 
							{
								if(!strcmp($3.valorString,"TRUE") || !strcmp($3.valorString,"FALSE"))
								{
									yyerror("forward true/false");
									exit(0);
								}
								else
								{
										node* posXX = lookup("posX");
										node* posYY = lookup("posY");
										if( !(posXX && posYY) )
										{
											yyerror("Impossível aceder a posXX ou posYY");
											exit(0);
										}
										switch(dir){
											case(0):printf("sub\n");printf("storeg %d\n",posYY->address);break;
											case(1):printf("add\n");printf("storeg %d\n",posXX->address);break;
											case(2):printf("add\n");printf("storeg %d\n",posYY->address);break;
											case(3):printf("sub\n");printf("storeg %d\n",posXX->address);break;
											default:yyerror("Direcção desconhecida");exit(0);
										}
		                                if(pousada){ 
											printf("pushg %d\n",posXX->address);
											printf("pushg %d\n",posYY->address);
		                                    printf("drawline\n");
											printf("refresh\n");
		                                }
										else
										{
											printf("pop 2\n");
											/*printf("pushg %d\n",posXX->address);
											printf("pushg %d\n",posYY->address);
											printf("drawpoint\n");
											printf("refresh\n");*/
										}
								}
							}
       		| BACKWARD 
							{
								node * auxiliar = lookup("posX");
								if(auxiliar)
									printf("pushg %d\n",auxiliar->address);
								auxiliar = lookup("posY");
								if(auxiliar)
									printf("pushg %d\n",auxiliar->address);
							
								node* posXX = lookup("posX");
								node* posYY = lookup("posY");
								switch(dir){
									case(0):printf("pushg %d\n",posYY->address);break;
									case(1):printf("pushg %d\n",posXX->address);break;
									case(2):printf("pushg %d\n",posYY->address);break;
									case(3):printf("pushg %d\n",posXX->address);break;
									default:yyerror("Direcção desconhecida");exit(0);
								}
							}
				Expression 
							{
								if(!strcmp($3.valorString,"TRUE") || !strcmp($3.valorString,"FALSE"))
								{
									yyerror("forward true/false");
									exit(0);
								}
								else
								{
									if(pousada)
									{
										node* posXX = lookup("posX");
										node* posYY = lookup("posY");
										switch(dir){
											case(0):printf("add\n");printf("storeg %d\n",posYY->address);break;
											case(1):printf("sub\n");printf("storeg %d\n",posXX->address);break;
											case(2):printf("sub\n");printf("storeg %d\n",posYY->address);break;
											case(3):printf("add\n");printf("storeg %d\n",posXX->address);break;
											default:break;
										}
		                                if(pousada){ 
											printf("pushg %d\n",posXX->address);
											printf("pushg %d\n",posYY->address);
		                                    printf("drawline\n");
											printf("refresh\n");
		                                }
										else
										{
											printf("pop 2\n");
											/*printf("pushg %d\n",posXX->address);
											printf("pushg %d\n",posYY->address);
											printf("drawpoint\n");
											printf("refresh\n");*/
										}
									}
								}
							}
			;
Rotate		: RRIGHT { //dir = (dir++)%4; 
						if((dir+1)>3)
							dir=0;
						else
							dir++;
					 }
	 		| RLEFT	
					{  
						if((dir-1)<0)
							dir = 3;
						else
							dir--;
					}
			;
Mode			: PEN UP {pousada=0;}
				| PEN DOWN {pousada=1;}
				;
Dialogue		: Say_Statement
	  			| Ask_Statement
				;
Location		: GOTO NUM ',' NUM 
						{
							node* posXX = lookup("posX");
							node* posYY = lookup("posY");
							printf("pushi %d\n",$2);
							printf("storeg %d\n",posXX->address);
							printf("pushi %d\n",$4);
							printf("storeg %d\n",posYY->address);
						}
	  			| WHERE '?' 
						{
							node* posXX = lookup("posX");
							node* posYY = lookup("posY");
							printf("pushg %d\n",posXX->address);
							printf("writei\n");
							printf("pushg %d\n",posYY->address);							
							printf("writei\n");
						}
				;
Assignment		: Variable '=' Expression 
							{
								node* var = lookup($1);
								if(!var)
								{
									yyerror("Variável desconhecida");
									exit(0);
								}
								
								if(!strcmp($3.valorString,""))
									if(! (($3.valorInt != INT_MIN) && (var->tipo==0)) )
									{
										yyerror("Conflito de tipos");
										exit(0);									
									}
									
								if($3.valorInt==INT_MIN)
								{
								if(! (((!strcmp($3.valorString,"TRUE")) || (!strcmp($3.valorString,"FALSE"))) && (var->tipo==1)) )
								{
									node* var2 = lookup($3.valorString);
									if(! ((!strcmp($3.valorString,"TRUE")) || (!strcmp($3.valorString,"FALSE"))) )
									{
										if(!var2)
										{
											//char* nome = (char*)malloc(sizeof(strlen(var2->name)+40));
											//sprintf(nome,"Variável desconhecida: %s",var2->name);
											yyerror("Variável desconhecida");
											exit(0);
										}
										if(!(var2->tipo == var->tipo))
										{
											yyerror("Conflito de tipos");
											exit(0);
										}
									}
									else
									{
										yyerror("Conflito de tipos");
										exit(0);
									}
								}
								}
								
								if(var->stackgl)
									printf("storel %d\n",var->address);
								else
									printf("storeg %d\n",var->address);									
							}
	    		;
Variable		: IDENT Array_Acess 
							{
								if(!strcmp($2,""))
								{
									yyerror("Single_Expression Variable");
									exit(0);
								}
								$$=$1;
							}
	  			;
Array_Acess		: 							{ $$="vazia";}
				| '[' Single_Expression ']' { $$="";}
				;
Expression		: Single_Expression {$$=$1;}
	    		| Expression Rel_Op Single_Expression
				;
Single_Expression	: Term {$$=$1;}
		  			| Single_Expression Add_Op Term 
					{
						switch($2)
						{
							case 0 : printf("add\n");break;
							case 1 : printf("sub\n");break;
							case 2 : yyerror("OU add_op");exit(0);
							default: yyerror("Operador indefinido add_op");exit(0);
						}
					}
					;
Term			: Factor {$$=$1;}
       			| Term Mul_Op Factor 
						{
							switch($2)
							{
								case 0 : printf("mul\n");break;
								case 1 : printf("div\n");break;
								case 2 : yyerror("E Mul_Op");exit(0);
								case 3 : {
											printf("pop 1\n");
											int aux=$3.valorInt-1;
											while(aux>0)
											{
												printf("dup 1\n");
												aux--;
											}
											aux=($3.valorInt)-1;
											while(aux>0)
											{
												printf("mul\n");
												aux--;
											}
											break;
										}
								default: yyerror("Operador indefinido add_op");exit(0);
							}
						}
				;
Factor		: Constant {$$ = $1;
							if(strcmp($1.valorString,"TRUE")==0)
								printf("pushi 1\n");
							else
								if(strcmp($1.valorString,"FALSE")==0)
									printf("pushi 0\n");
								else
									printf("pushi %d\n",$1.valorInt);
					   }
	 		| Variable 
					{
							$$.valorInt = INT_MIN;
							$$.valorString =$1;
							node* var = lookup($1);
							if(!var)
							{
								yyerror("Variável desconhecida");
								exit(0);	
							}
							if(var->stackgl)
								printf("pushl %d\n",var->address);
							else
								printf("pushg %d\n",var->address);
						}
			| SuccOrPred {
							$$.valorInt = INT_MIN;
							$$.valorString="";
						 }
			| '(' '!' Expression ')' {$$.valorInt = 1;$$.valorString ="";}
			| '(' '+' Expression ')' {$$.valorInt = 1;$$.valorString ="";}
			| '(' '-' Expression ')' {$$.valorInt = 1;$$.valorString ="";}
			| '(' Expression ')' {$$.valorInt = 1;$$.valorString ="";}
			;
Add_Op		: '+' { $$=0;}
	 		| '-' { $$=1;}
			| OU  { $$=2;}
			;
Mul_Op		: '*' 		{ $$=0;}
			| '/' 		{ $$=1;}
			| E	  		{ $$=2;}
			| MULTMULT	{ $$=3;}
			;
Rel_Op		: IGUAL
	 		| DIF
			| '<'
			| '>'
			| MENORIGUAL
			| MAIORIGUAL
			| IN
			;
SuccOrPred		: SuccPred IDENT 
				{
					node* x = lookup($2);
					if(x==NULL)
					{
						yyerror("Variavél não existente.");
						exit(0);
					}
					else
					{
						
						if(strcmp($1,"PRED")==0)
						{
							if(x->stackgl==0)
								printf("pushg %d\n", x->address);
							else
								printf("pushl %d\n", x->address);
							printf("pushi 1\n");
							printf("sub");

						}
						else 
						{
							if(x->stackgl==0)
								printf("pushg %d\n", x->address);
							else
								printf("pushl %d\n", x->address);
							printf("pushi 1\n");
							printf("add\n");
						}
					}
				}
	    		;
SuccPred		: SUCC {$$=$1;}
				| PRED {$$=$1;}
				;
Say_Statement	: SAY '(' Expression ')'
	       		;
Ask_Statement	: ASK '(' STRING ',' Variable ')'
	       		;
Conditional_Statement	: IfThenElse_Stat
		      			;
Iterative_Statement	: While_Stat
		    		;
IfThenElse_Stat		: IF Expression THEN '{' Statements '}' Else_Expression
		 			;
Else_Expression		:
		 			| ELSE '{' Statements '}'
					;
While_Stat		: WHILE '(' Expression ')' '{' Statements '}'
	    		;
%%

#include "lex.yy.c"


int yyerror(char *s)
{
	fprintf(stderr,"ERRO: %s \n",s);
	return 0;
}


int main()
{
	nodo = NULL;
	inithashtab();
	yyparse();
	return(0);
}

