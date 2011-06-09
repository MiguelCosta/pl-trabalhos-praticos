/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     DECLARATIONS = 258,
     STATEMENTS = 259,
     SUCC = 260,
     PRED = 261,
     IF = 262,
     ELSE = 263,
     THEN = 264,
     WHILE = 265,
     INTEGER = 266,
     BOOLEAN = 267,
     ARRAY = 268,
     SIZE = 269,
     TRUE = 270,
     FALSE = 271,
     FORWARD = 272,
     BACKWARD = 273,
     RRIGHT = 274,
     RLEFT = 275,
     PEN = 276,
     UP = 277,
     DOWN = 278,
     GOTO = 279,
     WHERE = 280,
     SAY = 281,
     ASK = 282,
     OU = 283,
     E = 284,
     MULTMULT = 285,
     IGUAL = 286,
     DIF = 287,
     MENORIGUAL = 288,
     MAIORIGUAL = 289,
     IN = 290,
     SETA = 291,
     PROGRAM = 292,
     NUM = 293,
     STRING = 294,
     IDENT = 295
   };
#endif
/* Tokens.  */
#define DECLARATIONS 258
#define STATEMENTS 259
#define SUCC 260
#define PRED 261
#define IF 262
#define ELSE 263
#define THEN 264
#define WHILE 265
#define INTEGER 266
#define BOOLEAN 267
#define ARRAY 268
#define SIZE 269
#define TRUE 270
#define FALSE 271
#define FORWARD 272
#define BACKWARD 273
#define RRIGHT 274
#define RLEFT 275
#define PEN 276
#define UP 277
#define DOWN 278
#define GOTO 279
#define WHERE 280
#define SAY 281
#define ASK 282
#define OU 283
#define E 284
#define MULTMULT 285
#define IGUAL 286
#define DIF 287
#define MENORIGUAL 288
#define MAIORIGUAL 289
#define IN 290
#define SETA 291
#define PROGRAM 292
#define NUM 293
#define STRING 294
#define IDENT 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 102 "yacc2.y"
{
	int valn;
	char *vals;
	float valr;
	ParIdVl par;
	Parconst parConst;
}
/* Line 1529 of yacc.c.  */
#line 137 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

