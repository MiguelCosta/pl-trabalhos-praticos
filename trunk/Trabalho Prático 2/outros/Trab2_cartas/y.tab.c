/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "yacc2.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */
#line 223 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 236 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   296

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNRULES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,     2,     2,     2,
      52,    53,    45,    43,    50,    44,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
      41,    51,    42,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    16,    18,    21,    23,    28,
      30,    34,    37,    38,    41,    43,    45,    49,    51,    53,
      58,    60,    62,    63,    65,    67,    71,    73,    77,    80,
      82,    85,    87,    89,    91,    93,    95,    97,    99,   101,
     103,   104,   108,   109,   113,   115,   117,   120,   123,   125,
     127,   132,   135,   139,   142,   143,   147,   149,   153,   155,
     159,   161,   165,   167,   169,   171,   176,   181,   186,   190,
     192,   194,   196,   198,   200,   202,   204,   206,   208,   210,
     212,   214,   216,   218,   221,   223,   225,   230,   237,   239,
     241,   249,   250,   255
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    37,    40,    47,    60,    48,    -1,    -1,
       3,    62,    61,     4,    75,    -1,    63,    -1,    62,    63,
      -1,    64,    -1,    65,    36,    68,    49,    -1,    66,    -1,
      65,    50,    66,    -1,    40,    67,    -1,    -1,    51,    69,
      -1,    11,    -1,    12,    -1,    13,    14,    38,    -1,    70,
      -1,    72,    -1,    52,    71,    38,    53,    -1,    15,    -1,
      16,    -1,    -1,    43,    -1,    44,    -1,    54,    73,    55,
      -1,    74,    -1,    73,    50,    74,    -1,    71,    38,    -1,
      76,    -1,    75,    76,    -1,    77,    -1,    85,    -1,    99,
      -1,   100,    -1,    78,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    -1,    17,    79,    88,    -1,    -1,    18,
      80,    88,    -1,    19,    -1,    20,    -1,    21,    22,    -1,
      21,    23,    -1,    97,    -1,    98,    -1,    24,    38,    50,
      38,    -1,    25,    56,    -1,    86,    51,    88,    -1,    40,
      87,    -1,    -1,    54,    89,    55,    -1,    89,    -1,    88,
      94,    89,    -1,    90,    -1,    89,    92,    90,    -1,    91,
      -1,    90,    93,    91,    -1,    70,    -1,    86,    -1,    95,
      -1,    52,    57,    88,    53,    -1,    52,    43,    88,    53,
      -1,    52,    44,    88,    53,    -1,    52,    88,    53,    -1,
      43,    -1,    44,    -1,    28,    -1,    45,    -1,    46,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    41,    -1,
      42,    -1,    33,    -1,    34,    -1,    35,    -1,    96,    40,
      -1,     5,    -1,     6,    -1,    26,    52,    88,    53,    -1,
      27,    52,    39,    50,    86,    53,    -1,   101,    -1,   103,
      -1,     7,    88,     9,    47,    75,    48,   102,    -1,    -1,
       8,    47,    75,    48,    -1,    10,    52,    88,    53,    47,
      75,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   115,   115,   118,   117,   147,   148,   150,   152,   207,
     215,   224,   244,   248,   253,   254,   255,   257,   261,   267,
     282,   283,   285,   286,   287,   289,   291,   292,   294,   296,
     297,   299,   300,   301,   302,   304,   305,   306,   307,   308,
     311,   310,   369,   368,   425,   431,   439,   440,   442,   443,
     445,   454,   464,   514,   524,   525,   527,   528,   530,   531,
     542,   543,   570,   579,   594,   598,   599,   600,   601,   603,
     604,   605,   607,   608,   609,   610,   612,   613,   614,   615,
     616,   617,   618,   620,   653,   654,   656,   658,   660,   662,
     664,   666,   667,   669
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECLARATIONS", "STATEMENTS", "SUCC",
  "PRED", "IF", "ELSE", "THEN", "WHILE", "INTEGER", "BOOLEAN", "ARRAY",
  "SIZE", "TRUE", "FALSE", "FORWARD", "BACKWARD", "RRIGHT", "RLEFT", "PEN",
  "UP", "DOWN", "GOTO", "WHERE", "SAY", "ASK", "OU", "E", "MULTMULT",
  "IGUAL", "DIF", "MENORIGUAL", "MAIORIGUAL", "IN", "SETA", "PROGRAM",
  "NUM", "STRING", "IDENT", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'{'", "'}'", "';'", "','", "'='", "'('", "')'", "'['", "']'", "'?'",
  "'!'", "$accept", "LISS", "Body", "@1", "Declarations", "Declaration",
  "Variable_Declaration", "Vars", "Var", "Value_Var", "Type", "Inic_Var",
  "Constant", "Sign", "Array_Definition", "Array_Initialization", "Elem",
  "Statements", "Statement", "Turtle_Commands", "Step", "@2", "@3",
  "Rotate", "Mode", "Dialogue", "Location", "Assignment", "Variable",
  "Array_Acess", "Expression", "Single_Expression", "Term", "Factor",
  "Add_Op", "Mul_Op", "Rel_Op", "SuccOrPred", "SuccPred", "Say_Statement",
  "Ask_Statement", "Conditional_Statement", "Iterative_Statement",
  "IfThenElse_Stat", "Else_Expression", "While_Stat", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    60,    62,    43,    45,    42,    47,   123,   125,    59,
      44,    61,    40,    41,    91,    93,    63,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    61,    60,    62,    62,    63,    64,    65,
      65,    66,    67,    67,    68,    68,    68,    69,    69,    70,
      70,    70,    71,    71,    71,    72,    73,    73,    74,    75,
      75,    76,    76,    76,    76,    77,    77,    77,    77,    77,
      79,    78,    80,    78,    81,    81,    82,    82,    83,    83,
      84,    84,    85,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    95,    96,    96,    97,    98,    99,   100,
     101,   102,   102,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     5,     1,     2,     1,     4,     1,
       3,     2,     0,     2,     1,     1,     3,     1,     1,     4,
       1,     1,     0,     1,     1,     3,     1,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     1,     1,     2,     2,     1,     1,
       4,     2,     3,     2,     0,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     4,     4,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     4,     6,     1,     1,
       7,     0,     4,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,    12,     3,
       5,     7,     0,     9,     2,     0,    11,     0,     6,     0,
       0,    20,    21,    22,    22,    13,    17,    18,     0,    14,
      15,     0,     0,    10,    23,    24,     0,     0,     0,    26,
       0,     0,    40,    42,    44,    45,     0,     0,     0,     0,
       0,    54,     4,    29,    31,    35,    36,    37,    38,    39,
      32,     0,    48,    49,    33,    34,    88,    89,     0,     8,
       0,    28,    22,    25,    84,    85,    22,    62,    63,     0,
      56,    58,    60,    64,     0,     0,     0,     0,    46,    47,
       0,    51,     0,     0,     0,    53,    30,     0,    16,    19,
      27,    23,    24,     0,     0,     0,    76,    77,    80,    81,
      82,    78,    79,     0,    71,    69,    70,     0,    74,    75,
      72,    73,     0,    83,     0,    41,    43,     0,     0,     0,
       0,    52,     0,     0,     0,    68,     0,    57,    59,    61,
       0,    50,    86,     0,    55,    66,    67,    65,     0,     0,
       0,    91,     0,    87,     0,    90,    93,     0,     0,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    17,     9,    10,    11,    12,    13,    16,
      32,    25,    77,    36,    27,    38,    39,    52,    53,    54,
      55,    86,    87,    56,    57,    58,    59,    60,    78,    95,
      79,    80,    81,    82,   117,   122,   113,    83,    84,    62,
      63,    64,    65,    66,   155,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -123
static const yytype_int16 yypact[] =
{
     -17,   -23,    28,   -11,  -123,    30,     8,     5,     0,     8,
    -123,  -123,   -25,  -123,  -123,   -10,  -123,    52,  -123,    57,
       8,  -123,  -123,    -5,    -5,  -123,  -123,  -123,   140,  -123,
    -123,    48,    14,  -123,  -123,  -123,    33,    38,   -29,  -123,
       3,    25,  -123,  -123,  -123,  -123,    51,    41,    22,    29,
      35,    39,   140,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,    43,  -123,  -123,  -123,  -123,  -123,  -123,    58,  -123,
      42,  -123,    -5,  -123,  -123,  -123,    -3,  -123,  -123,   137,
       2,   -14,  -123,  -123,    59,     3,     3,     3,  -123,  -123,
      50,  -123,     3,    63,     3,  -123,  -123,     3,  -123,  -123,
    -123,     3,     3,     3,   170,    56,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,     3,  -123,  -123,  -123,     3,  -123,  -123,
    -123,  -123,     3,  -123,   175,   254,   254,    60,   198,    54,
     -21,   254,   203,   226,   231,  -123,   140,     2,   -14,  -123,
      62,  -123,  -123,    66,  -123,  -123,  -123,  -123,    40,   140,
      61,   102,    65,  -123,    64,  -123,  -123,   140,   115,  -123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,   103,  -123,  -123,    96,  -123,
    -123,  -123,   104,   -20,  -123,  -123,    45,  -122,   -51,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -28,  -123,
      97,   -84,     1,     4,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    96,    74,    75,    37,    21,    22,   114,    74,    75,
     130,    19,    21,    22,   148,   118,   119,     3,    21,    22,
       1,    72,   115,   116,    61,    20,    73,   152,     4,   137,
     114,   120,   121,     6,   144,   158,     5,    51,    34,    35,
     101,   102,    23,    51,    24,   115,   116,    40,     8,    76,
      41,    15,    37,    14,   103,    76,    28,    42,    43,    44,
      45,    46,    68,    69,    47,    48,    49,    50,    29,    30,
      31,    70,    40,    88,    89,    41,    71,    85,    91,    90,
      51,    92,    42,    43,    44,    45,    46,    93,   151,    47,
      48,    49,    50,    94,    97,    99,    98,    96,   141,   123,
     127,    96,   129,   136,   143,    51,    51,    96,    61,   149,
     154,   157,    18,   156,   153,   150,    33,   100,   138,    26,
      61,    61,    40,     0,    61,    41,   139,     0,     0,    61,
      61,     0,    42,    43,    44,    45,    46,     0,     0,    47,
      48,    49,    50,     0,     0,     0,   105,    40,     0,     0,
      41,     0,     0,     0,     0,    51,     0,    42,    43,    44,
      45,    46,     0,   159,    47,    48,    49,    50,   106,   107,
     108,   109,   110,   104,     0,     0,     0,     0,   111,   112,
      51,     0,   124,   125,   126,     0,     0,     0,     0,   128,
       0,     0,     0,     0,   131,     0,     0,     0,   132,   133,
     134,   106,   107,   108,   109,   110,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   111,   112,     0,     0,
       0,     0,     0,   135,     0,     0,     0,     0,   140,   106,
     107,   108,   109,   110,   106,   107,   108,   109,   110,   111,
     112,     0,     0,     0,   111,   112,     0,     0,     0,     0,
       0,   142,     0,     0,     0,     0,   145,   106,   107,   108,
     109,   110,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,   111,   112,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,   147,   106,   107,   108,   109,   110,
       0,     0,     0,     0,     0,   111,   112
};

static const yytype_int16 yycheck[] =
{
      28,    52,     5,     6,    24,    15,    16,    28,     5,     6,
      94,    36,    15,    16,   136,    29,    30,    40,    15,    16,
      37,    50,    43,    44,    52,    50,    55,   149,     0,   113,
      28,    45,    46,     3,    55,   157,    47,    40,    43,    44,
      43,    44,    52,    40,    54,    43,    44,     7,    40,    52,
      10,    51,    72,    48,    57,    52,     4,    17,    18,    19,
      20,    21,    14,    49,    24,    25,    26,    27,    11,    12,
      13,    38,     7,    22,    23,    10,    38,    52,    56,    38,
      40,    52,    17,    18,    19,    20,    21,    52,    48,    24,
      25,    26,    27,    54,    51,    53,    38,   148,    38,    40,
      50,   152,    39,    47,    50,    40,    40,   158,   136,    47,
       8,    47,     9,    48,    53,   143,    20,    72,   117,    15,
     148,   149,     7,    -1,   152,    10,   122,    -1,    -1,   157,
     158,    -1,    17,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,     9,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    40,    -1,    17,    18,    19,
      20,    21,    -1,    48,    24,    25,    26,    27,    31,    32,
      33,    34,    35,    76,    -1,    -1,    -1,    -1,    41,    42,
      40,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    97,    -1,    -1,    -1,   101,   102,
     103,    31,    32,    33,    34,    35,    31,    32,    33,    34,
      35,    41,    42,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    53,    31,
      32,    33,    34,    35,    31,    32,    33,    34,    35,    41,
      42,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    53,    31,    32,    33,
      34,    35,    31,    32,    33,    34,    35,    41,    42,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    53,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,    59,    40,     0,    47,     3,    60,    40,    62,
      63,    64,    65,    66,    48,    51,    67,    61,    63,    36,
      50,    15,    16,    52,    54,    69,    70,    72,     4,    11,
      12,    13,    68,    66,    43,    44,    71,    71,    73,    74,
       7,    10,    17,    18,    19,    20,    21,    24,    25,    26,
      27,    40,    75,    76,    77,    78,    81,    82,    83,    84,
      85,    86,    97,    98,    99,   100,   101,   103,    14,    49,
      38,    38,    50,    55,     5,     6,    52,    70,    86,    88,
      89,    90,    91,    95,    96,    52,    79,    80,    22,    23,
      38,    56,    52,    52,    54,    87,    76,    51,    38,    53,
      74,    43,    44,    57,    88,     9,    31,    32,    33,    34,
      35,    41,    42,    94,    28,    43,    44,    92,    29,    30,
      45,    46,    93,    40,    88,    88,    88,    50,    88,    39,
      89,    88,    88,    88,    88,    53,    47,    89,    90,    91,
      53,    38,    53,    50,    55,    53,    53,    53,    75,    47,
      86,    48,    75,    53,     8,   102,    48,    47,    75,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 115 "yacc2.y"
    {printf("stop\n");}
    break;

  case 3:
#line 118 "yacc2.y"
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
    break;

  case 8:
#line 153 "yacc2.y"
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
							if(!insere(aux->nome,(yyvsp[(3) - (4)].valn),stackG,0))
							{
								yyerror("SEGMENTATION FAULT");
								exit(0);
							}
							switch((yyvsp[(3) - (4)].valn))
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
    break;

  case 9:
#line 208 "yacc2.y"
    {
				tVarString* aux = (tVarString*)malloc(sizeof(tVarString));
				aux->nome = (yyvsp[(1) - (1)].par).nome;
				aux->valor = (yyvsp[(1) - (1)].par).valor;
				aux->next = NULL;
				nodo=aux;
			}
    break;

  case 10:
#line 216 "yacc2.y"
    {
				tVarString* aux = (tVarString*)malloc(sizeof(tVarString));
				aux->nome = (yyvsp[(3) - (3)].par).nome;
				aux->valor = (yyvsp[(3) - (3)].par).valor;
				aux->next = nodo;
				nodo = aux;
			}
    break;

  case 11:
#line 225 "yacc2.y"
    {
				(yyval.par).nome = (yyvsp[(1) - (2)].vals);
				if(!strcmp((yyvsp[(2) - (2)].parConst).valorString,"vazio"))
				{
					(yyval.par).valor="vazio";
				}
				else
				{
					if((yyvsp[(2) - (2)].parConst).valorInt==INT_MIN)
						(yyval.par).valor = (yyvsp[(2) - (2)].parConst).valorString;
					else
					{
						(yyval.par).valor = (char*)malloc(sizeof((yyvsp[(2) - (2)].parConst).valorInt));
						sprintf((yyval.par).valor,"%d",(yyvsp[(2) - (2)].parConst).valorInt);
					}
				}
			}
    break;

  case 12:
#line 244 "yacc2.y"
    {
					(yyval.parConst).valorString = "vazio";
					(yyval.parConst).valorInt = INT_MIN;
				}
    break;

  case 13:
#line 249 "yacc2.y"
    {
					(yyval.parConst) = (yyvsp[(2) - (2)].parConst);
				}
    break;

  case 14:
#line 253 "yacc2.y"
    {(yyval.valn)=0;}
    break;

  case 15:
#line 254 "yacc2.y"
    {(yyval.valn)=1;}
    break;

  case 16:
#line 255 "yacc2.y"
    {(yyval.valn)=2;}
    break;

  case 17:
#line 258 "yacc2.y"
    {
				(yyval.parConst) = (yyvsp[(1) - (1)].parConst);
			}
    break;

  case 18:
#line 262 "yacc2.y"
    {
				(yyval.parConst).valorString = "";
				(yyval.parConst).valorInt = INT_MIN;
			}
    break;

  case 19:
#line 268 "yacc2.y"
    {
				char *res = (char*)malloc(sizeof((yyvsp[(3) - (4)].valn)));
				if(strcmp((yyvsp[(2) - (4)].vals),"-")==0)
				{	
					sprintf(res,"-%d",(yyvsp[(3) - (4)].valn));
					(yyval.parConst).valorInt = atoi(res);
					(yyval.parConst).valorString ="";
				}
				else
				{
					(yyval.parConst).valorInt=(yyvsp[(3) - (4)].valn);
					(yyval.parConst).valorString ="";
				}	
			}
    break;

  case 20:
#line 282 "yacc2.y"
    {(yyval.parConst).valorString = (yyvsp[(1) - (1)].vals); (yyval.parConst).valorInt = INT_MIN; }
    break;

  case 21:
#line 283 "yacc2.y"
    {(yyval.parConst).valorString = (yyvsp[(1) - (1)].vals); (yyval.parConst).valorInt = INT_MIN; }
    break;

  case 22:
#line 285 "yacc2.y"
    {(yyval.vals) = "";}
    break;

  case 23:
#line 286 "yacc2.y"
    {(yyval.vals) = (yyvsp[(1) - (1)].vals);}
    break;

  case 24:
#line 287 "yacc2.y"
    {(yyval.vals) = (yyvsp[(1) - (1)].vals);}
    break;

  case 40:
#line 311 "yacc2.y"
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
    break;

  case 41:
#line 330 "yacc2.y"
    {
								if(!strcmp((yyvsp[(3) - (3)].parConst).valorString,"TRUE") || !strcmp((yyvsp[(3) - (3)].parConst).valorString,"FALSE"))
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
    break;

  case 42:
#line 369 "yacc2.y"
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
    break;

  case 43:
#line 388 "yacc2.y"
    {
								if(!strcmp((yyvsp[(3) - (3)].parConst).valorString,"TRUE") || !strcmp((yyvsp[(3) - (3)].parConst).valorString,"FALSE"))
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
    break;

  case 44:
#line 425 "yacc2.y"
    { //dir = (dir++)%4; 
						if((dir+1)>3)
							dir=0;
						else
							dir++;
					 }
    break;

  case 45:
#line 432 "yacc2.y"
    {  
						if((dir-1)<0)
							dir = 3;
						else
							dir--;
					}
    break;

  case 46:
#line 439 "yacc2.y"
    {pousada=0;}
    break;

  case 47:
#line 440 "yacc2.y"
    {pousada=1;}
    break;

  case 50:
#line 446 "yacc2.y"
    {
							node* posXX = lookup("posX");
							node* posYY = lookup("posY");
							printf("pushi %d\n",(yyvsp[(2) - (4)].valn));
							printf("storeg %d\n",posXX->address);
							printf("pushi %d\n",(yyvsp[(4) - (4)].valn));
							printf("storeg %d\n",posYY->address);
						}
    break;

  case 51:
#line 455 "yacc2.y"
    {
							node* posXX = lookup("posX");
							node* posYY = lookup("posY");
							printf("pushg %d\n",posXX->address);
							printf("writei\n");
							printf("pushg %d\n",posYY->address);							
							printf("writei\n");
						}
    break;

  case 52:
#line 465 "yacc2.y"
    {
								node* var = lookup((yyvsp[(1) - (3)].vals));
								if(!var)
								{
									yyerror("Variável desconhecida");
									exit(0);
								}
								
								if(!strcmp((yyvsp[(3) - (3)].parConst).valorString,""))
									if(! (((yyvsp[(3) - (3)].parConst).valorInt != INT_MIN) && (var->tipo==0)) )
									{
										yyerror("Conflito de tipos");
										exit(0);									
									}
									
								if((yyvsp[(3) - (3)].parConst).valorInt==INT_MIN)
								{
								if(! (((!strcmp((yyvsp[(3) - (3)].parConst).valorString,"TRUE")) || (!strcmp((yyvsp[(3) - (3)].parConst).valorString,"FALSE"))) && (var->tipo==1)) )
								{
									node* var2 = lookup((yyvsp[(3) - (3)].parConst).valorString);
									if(! ((!strcmp((yyvsp[(3) - (3)].parConst).valorString,"TRUE")) || (!strcmp((yyvsp[(3) - (3)].parConst).valorString,"FALSE"))) )
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
    break;

  case 53:
#line 515 "yacc2.y"
    {
								if(!strcmp((yyvsp[(2) - (2)].vals),""))
								{
									yyerror("Single_Expression Variable");
									exit(0);
								}
								(yyval.vals)=(yyvsp[(1) - (2)].vals);
							}
    break;

  case 54:
#line 524 "yacc2.y"
    { (yyval.vals)="vazia";}
    break;

  case 55:
#line 525 "yacc2.y"
    { (yyval.vals)="";}
    break;

  case 56:
#line 527 "yacc2.y"
    {(yyval.parConst)=(yyvsp[(1) - (1)].parConst);}
    break;

  case 58:
#line 530 "yacc2.y"
    {(yyval.parConst)=(yyvsp[(1) - (1)].parConst);}
    break;

  case 59:
#line 532 "yacc2.y"
    {
						switch((yyvsp[(2) - (3)].valn))
						{
							case 0 : printf("add\n");break;
							case 1 : printf("sub\n");break;
							case 2 : yyerror("OU add_op");exit(0);
							default: yyerror("Operador indefinido add_op");exit(0);
						}
					}
    break;

  case 60:
#line 542 "yacc2.y"
    {(yyval.parConst)=(yyvsp[(1) - (1)].parConst);}
    break;

  case 61:
#line 544 "yacc2.y"
    {
							switch((yyvsp[(2) - (3)].valn))
							{
								case 0 : printf("mul\n");break;
								case 1 : printf("div\n");break;
								case 2 : yyerror("E Mul_Op");exit(0);
								case 3 : {
											printf("pop 1\n");
											int aux=(yyvsp[(3) - (3)].parConst).valorInt-1;
											while(aux>0)
											{
												printf("dup 1\n");
												aux--;
											}
											aux=((yyvsp[(3) - (3)].parConst).valorInt)-1;
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
    break;

  case 62:
#line 570 "yacc2.y"
    {(yyval.parConst) = (yyvsp[(1) - (1)].parConst);
							if(strcmp((yyvsp[(1) - (1)].parConst).valorString,"TRUE")==0)
								printf("pushi 1\n");
							else
								if(strcmp((yyvsp[(1) - (1)].parConst).valorString,"FALSE")==0)
									printf("pushi 0\n");
								else
									printf("pushi %d\n",(yyvsp[(1) - (1)].parConst).valorInt);
					   }
    break;

  case 63:
#line 580 "yacc2.y"
    {
							(yyval.parConst).valorInt = INT_MIN;
							(yyval.parConst).valorString =(yyvsp[(1) - (1)].vals);
							node* var = lookup((yyvsp[(1) - (1)].vals));
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
    break;

  case 64:
#line 594 "yacc2.y"
    {
							(yyval.parConst).valorInt = INT_MIN;
							(yyval.parConst).valorString="";
						 }
    break;

  case 65:
#line 598 "yacc2.y"
    {(yyval.parConst).valorInt = 1;(yyval.parConst).valorString ="";}
    break;

  case 66:
#line 599 "yacc2.y"
    {(yyval.parConst).valorInt = 1;(yyval.parConst).valorString ="";}
    break;

  case 67:
#line 600 "yacc2.y"
    {(yyval.parConst).valorInt = 1;(yyval.parConst).valorString ="";}
    break;

  case 68:
#line 601 "yacc2.y"
    {(yyval.parConst).valorInt = 1;(yyval.parConst).valorString ="";}
    break;

  case 69:
#line 603 "yacc2.y"
    { (yyval.valn)=0;}
    break;

  case 70:
#line 604 "yacc2.y"
    { (yyval.valn)=1;}
    break;

  case 71:
#line 605 "yacc2.y"
    { (yyval.valn)=2;}
    break;

  case 72:
#line 607 "yacc2.y"
    { (yyval.valn)=0;}
    break;

  case 73:
#line 608 "yacc2.y"
    { (yyval.valn)=1;}
    break;

  case 74:
#line 609 "yacc2.y"
    { (yyval.valn)=2;}
    break;

  case 75:
#line 610 "yacc2.y"
    { (yyval.valn)=3;}
    break;

  case 83:
#line 621 "yacc2.y"
    {
					node* x = lookup((yyvsp[(2) - (2)].vals));
					if(x==NULL)
					{
						yyerror("Variavél não existente.");
						exit(0);
					}
					else
					{
						
						if(strcmp((yyvsp[(1) - (2)].vals),"PRED")==0)
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
    break;

  case 84:
#line 653 "yacc2.y"
    {(yyval.vals)=(yyvsp[(1) - (1)].vals);}
    break;

  case 85:
#line 654 "yacc2.y"
    {(yyval.vals)=(yyvsp[(1) - (1)].vals);}
    break;


/* Line 1267 of yacc.c.  */
#line 2285 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 671 "yacc2.y"


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


