
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     STRING = 259,
     IDENT = 260,
     PROGRAM = 261,
     DECLARATIONS = 262,
     STATEMENTS = 263,
     INTEGER = 264,
     BOOLEAN = 265,
     ARRAY = 266,
     SIZE = 267,
     TRUE = 268,
     FALSE = 269,
     FORWARD = 270,
     BACKWARD = 271,
     RRIGHT = 272,
     RLEFT = 273,
     PEN = 274,
     UP = 275,
     DOWN = 276,
     GOTO = 277,
     WHERE = 278,
     SUCC = 279,
     PRED = 280,
     SAY = 281,
     ASK = 282,
     IF = 283,
     ELSE = 284,
     THEN = 285,
     WHILE = 286,
     SETA = 287,
     ADD_SOMA = 288,
     ADD_SUB = 289,
     ADD_OU = 290,
     MUL_MULT = 291,
     MUL_DIV = 292,
     MUL_AND = 293,
     MUL_DOIS_ASTERISCO = 294,
     REL_IGUAL = 295,
     REL_DIFERENTE = 296,
     REL_MENOR = 297,
     REL_MAIOR = 298,
     REL_MENOR_IGUAL = 299,
     REL_MAIOR_IGUAL = 300,
     REL_IN = 301,
     ERRO = 302
   };
#endif
/* Tokens.  */
#define NUM 258
#define STRING 259
#define IDENT 260
#define PROGRAM 261
#define DECLARATIONS 262
#define STATEMENTS 263
#define INTEGER 264
#define BOOLEAN 265
#define ARRAY 266
#define SIZE 267
#define TRUE 268
#define FALSE 269
#define FORWARD 270
#define BACKWARD 271
#define RRIGHT 272
#define RLEFT 273
#define PEN 274
#define UP 275
#define DOWN 276
#define GOTO 277
#define WHERE 278
#define SUCC 279
#define PRED 280
#define SAY 281
#define ASK 282
#define IF 283
#define ELSE 284
#define THEN 285
#define WHILE 286
#define SETA 287
#define ADD_SOMA 288
#define ADD_SUB 289
#define ADD_OU 290
#define MUL_MULT 291
#define MUL_DIV 292
#define MUL_AND 293
#define MUL_DOIS_ASTERISCO 294
#define REL_IGUAL 295
#define REL_DIFERENTE 296
#define REL_MENOR 297
#define REL_MAIOR 298
#define REL_MENOR_IGUAL 299
#define REL_MAIOR_IGUAL 300
#define REL_IN 301
#define ERRO 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 91 "yacc.y"

	int valn;
	char *vals;
	float valr;
	Variaveis var;
	Constantes cons;



/* Line 1676 of yacc.c  */
#line 156 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


