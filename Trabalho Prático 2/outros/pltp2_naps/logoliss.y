%{
#include <stdio.h>

#include "debug.h"
#include "vars.h"

extern char *yytext;
%}

%union {
	int 	vali;
	char*	vals;
}

%token ERROR

/* Program syntax */
%token PROGRAM DECLARATIONS STATEMENTS ARROW IDENTIFIER
%type<vals> IDENTIFIER

/* Variable declarations */
%token INTEGER BOOLEAN STRING ARRAY SIZE

/* Constants */
%token CONST_INT CONST_STRING CONST_TRUE CONST_FALSE
%type<vals> CONST_STRING
%type<vali> CONST_INT

/* Turtle Statements */
%token FORWARD BACKWARD RRIGHT RLEFT PEN UP DOWN GOTO WHERE

/* Operators */
%token OP_ADD OP_SUB OP_MUL OP_DIV OP_EXP
%token OP_OR OP_AND
%token COMP_EQ COMP_NEQ COMP_LT COMP_GT COMP_LE COMP_GE COMP_IN

/* SuccOrPredd */
%token SUCC PRED

/* IO Statements */
%token SAY ASK

/* Conditional Statements */
%token IF THEN ELSE WHILE


%type<vali> Add_Op Mul_Op Rel_Op Expression Constant SuccPred Value_Var Type

%%

Liss	: PROGRAM IDENTIFIER '{' Body '}'	{ _debug("End of Program\n"); }
		;

 //********************************* PROGRAM

Body	: DECLARATIONS Declarations STATEMENTS Statements { _debug("End of Body\n"); }
		;

 //********************************** Declarations

Declarations	: Declaration				{ _debug("End of Declarations\n"); }
				| Declarations Declaration
				;

Declaration		: Variable_Declaration		{ _debug("End of Declaration\n"); }
				;

 //********************************** Declarations: Variable

 //FALTA TESTAR

Variable_Declaration	: Vars ARROW Type ';' {
								g_var_set_type($3);
							}
						;

Vars	: Var
		| Vars ',' Var
		;

Var		: IDENTIFIER Value_Var	{
				g_var_insert($1);
				printf("PUSHI %d\n", $2);
			}
		;


 //TODO
Value_Var	: 				{ $$ = 0; }
			| '=' Inic_Var	{ $$ = 0; }
			;

 //FALTA TESTAR

Type		: INTEGER				{ $$ = INTEGER; }
			| BOOLEAN				{ $$ = BOOLEAN; }
			| ARRAY SIZE CONST_INT	{ $$ = ARRAY; } //TODO

Inic_Var	: Constant
			| Array_Definition
			;

 //FALTA TESTAR

Constant	: CONST_INT		{ printf("PUSHI %d\n", $1); }
			| CONST_STRING  { /* TODO */ }
			| CONST_TRUE	{ printf("PUSHI 1\n"); }
			| CONST_FALSE	{ printf("PUSHI 0\n"); }
			;

 //********************************** Declarations: Variables: Array_Definition

Array_Definition		: '[' Array_Initialization ']'
						;

Array_Initialization 	: Elem
						| Array_Initialization ',' Elem
						;

Elem					: CONST_INT
						;

 //********************************** Statements

 // Nothing to do (?)

Statements	: Statement ';'
			| Statements Statement ';'
			;

Statement	: Turtle_Commands
			| Assignment
			| Conditional_Statement
			| Iterative_Statement
			;

 //********************************** Statements: Turtle Statement

Turtle_Commands	: Step
				| Rotate
				| Mode
				| Dialogue
				| Location
				;

Step			: FORWARD Expression
				| BACKWARD Expression
				;

Rotate			: RRIGHT
				| RLEFT
				;

Mode			: PEN UP
				| PEN DOWN
				;

Dialogue		: Say_Statement
				| Ask_Statement
				;

Location		: GOTO CONST_INT ',' CONST_INT
				| WHERE '?'
				;

 //********************************** Statement: Assignment Statement

Assignment	: Variable '=' Expression
			;

Variable	: IDENTIFIER Array_Acess
			;

Array_Acess	:
			| '[' Single_Expression ']'
			;

 //********************************** Expression
 // FALTA TESTAR

Expression	: Single_Expression						{ }
			| Expression Rel_Op Single_Expression	{
					switch($2) {
						case COMP_EQ:	printf("SUB\n");
										printf("NOT\n"); break;
						case COMP_NEQ:	printf("SUB\n"); break;
						case COMP_LT:	printf("INF\n"); break;
						case COMP_GT:	printf("SUP"); break;
						case COMP_LE:	printf("INFEQ\n"); break;
						case COMP_GE:	printf("SUPEQ\n"); break;
						case COMP_IN:	printf(""); break; //TODO
					}
				}
			;

 //*************** Single Expression
 // FALTA TESTAR

Single_Expression	: Term							{ }
					| Single_Expression Add_Op Term	{
							switch($2) {
								case OP_ADD: printf("ADD\n"); break;
								case OP_SUB: printf("SUB\n"); break;
								case OP_OR:	 printf("ADD\n"); break;
							}
						}
					;


 //*************** Term
 // FALTA TESTAR

Term	: Factor				{ }
		| Term Mul_Op Factor	{
				switch($2) {
					case OP_MUL: printf("MUL\n"); break;
					case OP_DIV: printf("DIV\n"); break;
					case OP_AND: printf("MUL\n"); break;
				}
			}
		;

 //*************** Factor
 // FALTA TESTAR

Factor	: Constant				{ fprintf(stderr, "Constant\n"); }
		| Variable				{ fprintf(stderr, "Variable\n"); }
		| SuccOrPred			{ fprintf(stderr, "SuccOrPred\n"); }
		| '(' Expression ')'	{ }
		;

 //*************** Operators

Add_Op	: OP_ADD	{ $$ = OP_ADD; }
		| OP_SUB	{ $$ = OP_SUB; }
		| OP_OR		{ $$ = OP_OR; }
		;

Mul_Op	: OP_MUL	{ $$ = OP_MUL; }
		| OP_DIV	{ $$ = OP_DIV; }
		| OP_AND	{ $$ = OP_AND; }
		| OP_EXP	{ $$ = OP_EXP; }	
		;

Rel_Op	: COMP_EQ	{ $$ = COMP_EQ; }
		| COMP_NEQ	{ $$ = COMP_NEQ; }
		| COMP_LT	{ $$ = COMP_LT; }
		| COMP_GT	{ $$ = COMP_GT; }
		| COMP_LE	{ $$ = COMP_LE; }
		| COMP_GE	{ $$ = COMP_GE; }
		| COMP_IN	{ $$ = COMP_IN; }
		;

 //*************** SuccOrPredd

SuccOrPred	: SuccPred IDENTIFIER {
					printf("PUSHG %d\n", g_var_get_index($2));
					printf("PUSHI 1\n");
					switch($1) {	
						case SUCC: printf("ADD\n"); break;
						case PRED: printf("SUB\n"); break;
					}
				}
			;

SuccPred	: SUCC	{ $$ = SUCC; }
			| PRED	{ $$ = PRED; }
			;

 //*************** IO Statements

Say_Statement	: SAY '(' Expression ')'
				;

Ask_Statement	: ASK '(' STRING ',' Variable ')'
				;

 //*************** Conditional & Iterative Statements

Conditional_Statement	: IfThenElse_Stat
						;

Iterative_Statement		: While_Stat
						;

 //*************** IFThenElse_Stat

IfThenElse_Stat	: IF Expression THEN '{' Statements '}' Else_Expression
				;

Else_Expression	: 
				| ELSE '{' Statements '}'
				;

 //*************** While_Stat

While_Stat		: WHILE '(' Expression ')' '{' Statements '}'
				;


%%

int yyerror(char *s) {
	fprintf(stderr, "ERRO: %; Token: %s\n", s, yytext);
}

int main() {
	//yyparse();
	init();
	yyparse();
}
