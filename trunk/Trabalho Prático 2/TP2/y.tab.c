
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "yacc.y"

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





/* Line 189 of yacc.c  */
#line 96 "y.tab.c"

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

/* Line 214 of yacc.c  */
#line 92 "yacc.y"

	int valn;
	char *vals;
	float valr;
	Variaveis var;
	Constantes cons;



/* Line 214 of yacc.c  */
#line 236 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 248 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    54,    55,
      56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    16,    18,    21,    23,    28,
      30,    34,    37,    38,    41,    43,    45,    49,    51,    53,
      55,    57,    59,    61,    65,    67,    71,    73,    76,    80,
      82,    84,    86,    88,    90,    92,    94,    96,    98,    99,
     103,   104,   108,   110,   112,   115,   118,   120,   122,   127,
     130,   134,   137,   138,   142,   144,   148,   150,   154,   156,
     160,   162,   164,   166,   170,   172,   174,   176,   178,   180,
     182,   184,   186,   188,   190,   192,   194,   196,   198,   201,
     203,   205,   210,   217,   219,   221,   229,   230,   235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,     6,     5,    48,    61,    49,    -1,    -1,
       7,    63,    62,     8,    75,    -1,    64,    -1,    63,    64,
      -1,    65,    -1,    66,    32,    69,    50,    -1,    67,    -1,
      66,    51,    67,    -1,     5,    68,    -1,    -1,    52,    70,
      -1,     9,    -1,    10,    -1,    11,    12,     3,    -1,    71,
      -1,    72,    -1,     3,    -1,     4,    -1,    13,    -1,    14,
      -1,    53,    73,    54,    -1,    74,    -1,    73,    51,    74,
      -1,     3,    -1,    76,    50,    -1,    75,    76,    50,    -1,
      77,    -1,    85,    -1,    99,    -1,   100,    -1,    78,    -1,
      81,    -1,    82,    -1,    83,    -1,    84,    -1,    -1,    15,
      79,    88,    -1,    -1,    16,    80,    88,    -1,    17,    -1,
      18,    -1,    19,    20,    -1,    19,    21,    -1,    97,    -1,
      98,    -1,    22,     3,    51,     3,    -1,    23,    55,    -1,
      86,    56,    88,    -1,     5,    87,    -1,    -1,    53,    89,
      54,    -1,    89,    -1,    88,    94,    89,    -1,    90,    -1,
      89,    92,    90,    -1,    91,    -1,    90,    93,    91,    -1,
      71,    -1,    86,    -1,    95,    -1,    57,    88,    58,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,    46,    -1,    96,     5,
      -1,    24,    -1,    25,    -1,    26,    57,    88,    58,    -1,
      27,    57,     4,    51,    86,    58,    -1,   101,    -1,   103,
      -1,    28,    88,    30,    48,    75,    49,   102,    -1,    -1,
      29,    48,    75,    49,    -1,    31,    57,    88,    58,    48,
      75,    49,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   110,   109,   141,   142,   145,   148,   225,
     233,   244,   269,   273,   276,   277,   278,   281,   282,   285,
     286,   287,   288,   295,   298,   299,   302,   308,   309,   312,
     313,   314,   315,   318,   319,   320,   321,   322,   326,   325,
     404,   403,   484,   495,   508,   509,   512,   513,   516,   526,
     538,   557,   564,   565,   571,   572,   588,   589,   606,   607,
     643,   663,   685,   686,   689,   690,   691,   694,   695,   696,
     697,   700,   701,   702,   703,   704,   705,   706,   709,   711,
     712,   715,   718,   721,   724,   727,   730,   731,   734
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "STRING", "IDENT", "PROGRAM",
  "DECLARATIONS", "STATEMENTS", "INTEGER", "BOOLEAN", "ARRAY", "SIZE",
  "TRUE", "FALSE", "FORWARD", "BACKWARD", "RRIGHT", "RLEFT", "PEN", "UP",
  "DOWN", "GOTO", "WHERE", "SUCC", "PRED", "SAY", "ASK", "IF", "ELSE",
  "THEN", "WHILE", "SETA", "ADD_SOMA", "ADD_SUB", "ADD_OU", "MUL_MULT",
  "MUL_DIV", "MUL_AND", "MUL_DOIS_ASTERISCO", "REL_IGUAL", "REL_DIFERENTE",
  "REL_MENOR", "REL_MAIOR", "REL_MENOR_IGUAL", "REL_MAIOR_IGUAL", "REL_IN",
  "ERRO", "\"{\"", "\"}\"", "\";\"", "\",\"", "'='", "\"[\"", "\"]\"",
  "\"?\"", "\"=\"", "\"(\"", "\")\"", "$accept", "Liss", "Body", "$@1",
  "Declarations", "Declaration", "Variable_Declaration", "Vars", "Var",
  "Value_Var", "Type", "Inic_Var", "Constant", "Array_Definition",
  "Array_Initialization", "Elem", "Statements", "Statement",
  "Turtle_Commands", "Step", "$@2", "$@3", "Rotate", "Mode", "Dialogue",
  "Location", "Assignment", "Variable", "Array_Acess", "Expression",
  "Single_Expression", "Term", "Factor", "Add_Op", "Mul_Op", "Rel_Op",
  "SuccOrPred", "SuccPred", "Say_Statement", "Ask_Statement",
  "Conditional_Statement", "Iterative_Statement", "IfThenElse_Stat",
  "Else_Expression", "While_Stat", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    61,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    62,    61,    63,    63,    64,    65,    66,
      66,    67,    68,    68,    69,    69,    69,    70,    70,    71,
      71,    71,    71,    72,    73,    73,    74,    75,    75,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    79,    78,
      80,    78,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    95,    96,
      96,    97,    98,    99,   100,   101,   102,   102,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     5,     1,     2,     1,     4,     1,
       3,     2,     0,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     3,     1,     1,     2,     2,     1,     1,     4,     2,
       3,     2,     0,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     4,     6,     1,     1,     7,     0,     4,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,    12,     3,
       5,     7,     0,     9,     2,     0,    11,     0,     6,     0,
       0,    19,    20,    21,    22,     0,    13,    17,    18,     0,
      14,    15,     0,     0,    10,    26,     0,    24,    52,    38,
      40,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       4,     0,    29,    33,    34,    35,    36,    37,    30,     0,
      46,    47,    31,    32,    83,    84,     0,     8,     0,    23,
       0,    51,     0,     0,    44,    45,     0,    49,     0,     0,
      79,    80,     0,    60,    61,     0,    54,    56,    58,    62,
       0,     0,     0,    27,     0,    16,    25,     0,    39,    41,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,    64,    65,    66,     0,    67,    68,    69,
      70,     0,    78,     0,    28,    50,    53,    48,    81,     0,
      63,     0,    55,    57,    59,     0,     0,     0,     0,    82,
      86,     0,     0,    85,    88,     0,     0,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,    17,     9,    10,    11,    12,    13,    16,
      33,    26,    83,    28,    36,    37,    50,    51,    52,    53,
      72,    73,    54,    55,    56,    57,    58,    84,    71,    85,
      86,    87,    88,   116,   121,   112,    89,    90,    60,    61,
      62,    63,    64,   143,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
       4,     3,    14,   -28,  -121,    25,    28,   -12,    -8,    28,
    -121,  -121,   -25,  -121,  -121,     2,  -121,    37,  -121,    58,
      28,  -121,  -121,  -121,  -121,    49,  -121,  -121,  -121,   105,
    -121,  -121,    54,    26,  -121,  -121,   -32,  -121,    22,  -121,
    -121,  -121,  -121,    21,    76,    32,    36,    38,    -1,    39,
     105,    35,  -121,  -121,  -121,  -121,  -121,  -121,  -121,    42,
    -121,  -121,  -121,  -121,  -121,  -121,    91,  -121,    49,  -121,
      -1,  -121,    -1,    -1,  -121,  -121,    48,  -121,    -1,    97,
    -121,  -121,    -1,  -121,  -121,   145,    56,   116,  -121,  -121,
      98,    -1,    61,  -121,    -1,  -121,  -121,    30,   152,   152,
     102,   100,    62,   119,    59,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,    -1,  -121,  -121,  -121,    -1,  -121,  -121,  -121,
    -121,    -1,  -121,   126,  -121,   152,  -121,  -121,  -121,   101,
    -121,   105,    56,   116,  -121,    66,    60,    12,   105,  -121,
      86,    31,    71,  -121,  -121,   105,    55,  -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -121,  -121,  -121,  -121,  -121,   117,  -121,  -121,   114,  -121,
    -121,  -121,   110,  -121,  -121,    69,  -120,   -49,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,   -29,  -121,    57,
     -61,    33,    17,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      59,    92,    21,    22,    38,    21,    22,    19,     3,    97,
       1,   137,    23,    24,     4,    23,    24,    38,   141,    68,
       5,    59,    69,    80,    81,   146,    20,    39,    40,    41,
      42,    43,     6,     8,    44,    45,    38,    14,    46,    47,
      48,    74,    75,    49,    15,    29,    39,    40,    41,    42,
      43,   132,    35,    44,    45,    25,    82,    46,    47,    48,
      38,   140,    49,   113,   114,   115,    66,    30,    31,    32,
      39,    40,    41,    42,    43,    70,    67,    44,    45,    76,
     144,    46,    47,    48,   126,    93,    49,    77,    92,   113,
     114,   115,    92,    78,    95,    79,    91,    92,    94,   100,
     136,   102,    59,   122,   147,   127,    38,   131,    59,    59,
      38,   124,    59,   129,   138,   142,    59,    59,   139,   145,
      39,    40,    41,    42,    43,    27,    18,    44,    45,    98,
      99,    46,    47,    48,    34,   101,    49,    96,   134,   103,
     105,   106,   107,   108,   109,   110,   111,     0,   123,   133,
       0,   125,   117,   118,   119,   120,     0,     0,   128,   105,
     106,   107,   108,   109,   110,   111,   105,   106,   107,   108,
     109,   110,   111,     0,     0,   104,     0,   130,     0,     0,
       0,     0,     0,     0,   135,   105,   106,   107,   108,   109,
     110,   111,   105,   106,   107,   108,   109,   110,   111
};

static const yytype_int16 yycheck[] =
{
      29,    50,     3,     4,     5,     3,     4,    32,     5,    70,
       6,   131,    13,    14,     0,    13,    14,     5,   138,    51,
      48,    50,    54,    24,    25,   145,    51,    15,    16,    17,
      18,    19,     7,     5,    22,    23,     5,    49,    26,    27,
      28,    20,    21,    31,    52,     8,    15,    16,    17,    18,
      19,   112,     3,    22,    23,    53,    57,    26,    27,    28,
       5,    49,    31,    33,    34,    35,    12,     9,    10,    11,
      15,    16,    17,    18,    19,    53,    50,    22,    23,     3,
      49,    26,    27,    28,    54,    50,    31,    55,   137,    33,
      34,    35,   141,    57,     3,    57,    57,   146,    56,    51,
     129,     4,   131,     5,    49,     3,     5,    48,   137,   138,
       5,    50,   141,    51,    48,    29,   145,   146,    58,    48,
      15,    16,    17,    18,    19,    15,     9,    22,    23,    72,
      73,    26,    27,    28,    20,    78,    31,    68,   121,    82,
      40,    41,    42,    43,    44,    45,    46,    -1,    91,   116,
      -1,    94,    36,    37,    38,    39,    -1,    -1,    58,    40,
      41,    42,    43,    44,    45,    46,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    30,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    40,    41,    42,    43,    44,
      45,    46,    40,    41,    42,    43,    44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    60,     5,     0,    48,     7,    61,     5,    63,
      64,    65,    66,    67,    49,    52,    68,    62,    64,    32,
      51,     3,     4,    13,    14,    53,    70,    71,    72,     8,
       9,    10,    11,    69,    67,     3,    73,    74,     5,    15,
      16,    17,    18,    19,    22,    23,    26,    27,    28,    31,
      75,    76,    77,    78,    81,    82,    83,    84,    85,    86,
      97,    98,    99,   100,   101,   103,    12,    50,    51,    54,
      53,    87,    79,    80,    20,    21,     3,    55,    57,    57,
      24,    25,    57,    71,    86,    88,    89,    90,    91,    95,
      96,    57,    76,    50,    56,     3,    74,    89,    88,    88,
      51,    88,     4,    88,    30,    40,    41,    42,    43,    44,
      45,    46,    94,    33,    34,    35,    92,    36,    37,    38,
      39,    93,     5,    88,    50,    88,    54,     3,    58,    51,
      58,    48,    89,    90,    91,    58,    86,    75,    48,    58,
      49,    75,    29,   102,    49,    48,    75,    49
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 106 "yacc.y"
    {printf("stop\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 110 "yacc.y"
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
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 148 "yacc.y"
    {
						
						listVar * listAux = listaVariaveis;
						while( listAux!=NULL )
						{
							if(find_elem(listAux->nome) != NULL)
							{
								yyerror("Atencao! A variavel ja existe!");
								exit(0);							
							}
							
							if( !insert_elem(listAux->nome,(yyvsp[(3) - (4)].valn), enderecoVarGlobal, 0)) 
							{
								yyerror("Falha de Segmentação");
								exit(0);
							}
							enderecoVarGlobal++;		
							int x, y, z;
							x = strcmp("TRUE",listAux->valor);
							y = strcmp("FALSE", listAux->valor);
							z = strcmp(listAux->valor,"");
							
							switch((yyvsp[(3) - (4)].valn))
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
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 225 "yacc.y"
    {
		listVar* new = (listVar*)malloc(sizeof(listVar));
		new -> nome = (yyvsp[(1) - (1)].var).nome;
		new -> valor = (yyvsp[(1) - (1)].var).valor;
		new -> seg = NULL;
		listaVariaveis = new;
		}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 233 "yacc.y"
    {
		listVar* new = (listVar*)malloc(sizeof(listVar));
		new -> nome = (yyvsp[(3) - (3)].var).nome;
		new -> valor = (yyvsp[(3) - (3)].var).valor;
		new -> seg = listaVariaveis;
		listaVariaveis = new;		
		}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 245 "yacc.y"
    {
				int x; 
				x = strcmp((yyvsp[(2) - (2)].cons).valS, "");
				(yyval.var).nome = (yyvsp[(1) - (2)].vals);
				if((yyvsp[(2) - (2)].cons).valI = INT_MIN)
				{
					(yyval.var).valor = (yyvsp[(2) - (2)].cons).valS;
				}
				else
				{
					if( x != 0)
					{
						(yyval.var).valor=(char*)malloc(sizeof((yyvsp[(2) - (2)].cons).valI));
						sprintf((yyval.var).valor,"%d",(yyvsp[(2) - (2)].cons).valI);
					}
					else 
					{
						(yyval.var).valor = "";
					}
				}
			}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 269 "yacc.y"
    {
				(yyval.cons).valS = "";
				(yyval.cons).valI = INT_MIN;			
			}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 273 "yacc.y"
    {(yyval.cons) = (yyvsp[(2) - (2)].cons);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 276 "yacc.y"
    {(yyval.valn) = 1;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 277 "yacc.y"
    {(yyval.valn) = 2;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 278 "yacc.y"
    {(yyval.valn) = 3;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 281 "yacc.y"
    {(yyval.cons) = (yyvsp[(1) - (1)].cons);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 282 "yacc.y"
    {(yyval.cons).valI = INT_MIN; (yyval.cons).valS = "";}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 285 "yacc.y"
    {(yyval.cons).valI = (yyvsp[(1) - (1)].valn); (yyval.cons).valS = "";}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 286 "yacc.y"
    {(yyval.cons).valI = INT_MIN; (yyval.cons).valS = (yyvsp[(1) - (1)].vals);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 287 "yacc.y"
    {(yyval.cons).valI = INT_MIN; (yyval.cons).valS = (yyvsp[(1) - (1)].vals);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 288 "yacc.y"
    {(yyval.cons).valI = INT_MIN; (yyval.cons).valS = (yyvsp[(1) - (1)].vals);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 326 "yacc.y"
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
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 358 "yacc.y"
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
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 404 "yacc.y"
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
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 437 "yacc.y"
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
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 485 "yacc.y"
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
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 496 "yacc.y"
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
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 508 "yacc.y"
    {ready = 0;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 509 "yacc.y"
    {ready = 1;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 517 "yacc.y"
    {
			ELEM auxX = find_elem("posicaoEmX");	
			ELEM auxY = find_elem("posicaoEmY");
			printf("pushi %d\n",(yyvsp[(2) - (4)].valn));
			printf("storeg %d\n",auxX->add);
			printf("pushi %d\n",(yyvsp[(4) - (4)].valn));
			printf("storeg %d\n",auxY->add);
			}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 527 "yacc.y"
    {
			ELEM auxX = find_elem("posicaoEmX");
			ELEM auxY = find_elem("posicaoEmY");
			printf("pushg %d\n",auxX->add);
			printf("writei\n");
			printf("pushg %d\n",auxY->add);										
			printf("writei\n");

			}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 539 "yacc.y"
    {
					ELEM  a = find_elem((yyvsp[(1) - (3)].vals));

					if(a->eGlobal)
					{
						printf("storeg %d\n",a->add);
					
					}
					else
					{
						printf("storel %d\n",a->add);
					
					}
					
				}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 558 "yacc.y"
    {
			yyerror("Operação com arrays não foi tratada");
			exit(0);
			}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 571 "yacc.y"
    {(yyval.cons)=(yyvsp[(1) - (1)].cons);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 588 "yacc.y"
    {(yyval.cons)=(yyvsp[(1) - (1)].cons);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 590 "yacc.y"
    {
					
						switch((yyvsp[(2) - (3)].valn)){
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
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 606 "yacc.y"
    {(yyval.cons)=(yyvsp[(1) - (1)].cons);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 608 "yacc.y"
    {
				switch((yyvsp[(2) - (3)].valn)){
					case 0: 
						printf("mul\n");
						break;
					case 1:
						printf("div\n");
						break;
					case 3:
						{
							printf("pop 1\n");
							int a = (yyvsp[(3) - (3)].cons).valI-1;
						
							while(a > 0)
							{
								printf("dup 1\n");
								a--;
							}
							
							a = (yyvsp[(3) - (3)].cons).valI-1;
						
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
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 644 "yacc.y"
    {
				(yyval.cons) = (yyvsp[(1) - (1)].cons);
				if(strcmp((yyvsp[(1) - (1)].cons).valS,"TRUE")==0)
				{
					printf("pushi 1\n");
				}
				else 
				{
					if(strcmp((yyvsp[(1) - (1)].cons).valS,"FALSE")==0)
					{
						printf("pushi 0\n");
					}
					else 
					{
						printf("pushi %d\n",(yyvsp[(1) - (1)].cons).valI);
					}				
				}
				
			}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 664 "yacc.y"
    {
			(yyval.cons).valI = INT_MIN;
			(yyval.cons).valS = (yyvsp[(1) - (1)].vals);
			
			ELEM var = find_elem((yyvsp[(1) - (1)].vals));
			
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
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 689 "yacc.y"
    {(yyval.valn) = 0;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 690 "yacc.y"
    {(yyval.valn) = 1;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 691 "yacc.y"
    {(yyval.valn) = 2;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 694 "yacc.y"
    {(yyval.valn) = 0;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 695 "yacc.y"
    {(yyval.valn) = 1;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 696 "yacc.y"
    {(yyval.valn) = 2;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 697 "yacc.y"
    {(yyval.valn) = 3;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 700 "yacc.y"
    {(yyval.valn) = 0;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 701 "yacc.y"
    {(yyval.valn) = 1;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 702 "yacc.y"
    {(yyval.valn) = 2;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 703 "yacc.y"
    {(yyval.valn) = 3;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 704 "yacc.y"
    {(yyval.valn) = 4;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 705 "yacc.y"
    {(yyval.valn) = 5;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 706 "yacc.y"
    {(yyval.valn) = 6;}
    break;



/* Line 1455 of yacc.c  */
#line 2353 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 737 "yacc.y"



int yyerror(char *s)
{
	fprintf(stderr,"2Erro: %s \n",s);
	return 0;
}

int main()
{
	listaVariaveis =NULL;
	create_table();
	yyparse();
	return(0);
}

