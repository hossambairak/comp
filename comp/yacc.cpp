/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     TRY = 258,
     CATCH = 259,
     NSEXception = 260,
     NUllPointerException = 261,
     OUtOfBoundryException = 262,
     CAstException = 263,
     FINALLY = 264,
     AT_INTERFACE = 265,
     IDENTIFIER = 266,
     SEMI_COLUMN = 267,
     NSSTRING = 268,
     FLOAT = 269,
     CHAR = 270,
     INT = 271,
     SEMI_COMA = 272,
     ID = 273,
     AT_PUBLIC = 274,
     AT_PROTECTED = 275,
     AT_PRIVATE = 276,
     OPEN_S = 277,
     CLOSE_S = 278,
     COMMA = 279,
     LESS_THAN = 280,
     MORE_THAN = 281,
     AT_END = 282,
     CONST = 283,
     VOID = 284,
     PLUS = 285,
     MINUS = 286,
     OPEN_P = 287,
     CLOSE_P = 288,
     AT_IMPLEMENTATION = 289,
     AND_AND = 290,
     OR_OR = 291,
     STRING_VAL = 292,
     FLOAT_VAL = 293,
     LESS_OR_EQUAL = 294,
     CHAR_VAL = 295,
     INT_VAL = 296,
     MORE_OR_EQUAL = 297,
     MULTI = 298,
     EQUAL_EQUAL = 299,
     NOT_EQUAL = 300,
     FOR = 301,
     EQUAL = 302,
     DIV = 303,
     WHILE = 304,
     IF = 305,
     OPEN_ARR = 306,
     CLOSE_ARR = 307,
     TRUE = 308,
     FALSE = 309,
     RETURN = 310,
     AT_PROTOCOL = 311,
     DO = 312,
     DOT = 313,
     SYMBOL = 314,
     SWITCH = 315,
     BREAK = 316,
     DEFAULT = 317,
     CASE = 318,
     STRUCT = 319,
     TYPEDEF = 320,
     ENUM = 321,
     if_h = 322,
     ELSE = 323,
     expr_1 = 324,
     p_type_expr_prec = 325,
     long_id_prec = 326
   };
#endif
/* Tokens.  */
#define TRY 258
#define CATCH 259
#define NSEXception 260
#define NUllPointerException 261
#define OUtOfBoundryException 262
#define CAstException 263
#define FINALLY 264
#define AT_INTERFACE 265
#define IDENTIFIER 266
#define SEMI_COLUMN 267
#define NSSTRING 268
#define FLOAT 269
#define CHAR 270
#define INT 271
#define SEMI_COMA 272
#define ID 273
#define AT_PUBLIC 274
#define AT_PROTECTED 275
#define AT_PRIVATE 276
#define OPEN_S 277
#define CLOSE_S 278
#define COMMA 279
#define LESS_THAN 280
#define MORE_THAN 281
#define AT_END 282
#define CONST 283
#define VOID 284
#define PLUS 285
#define MINUS 286
#define OPEN_P 287
#define CLOSE_P 288
#define AT_IMPLEMENTATION 289
#define AND_AND 290
#define OR_OR 291
#define STRING_VAL 292
#define FLOAT_VAL 293
#define LESS_OR_EQUAL 294
#define CHAR_VAL 295
#define INT_VAL 296
#define MORE_OR_EQUAL 297
#define MULTI 298
#define EQUAL_EQUAL 299
#define NOT_EQUAL 300
#define FOR 301
#define EQUAL 302
#define DIV 303
#define WHILE 304
#define IF 305
#define OPEN_ARR 306
#define CLOSE_ARR 307
#define TRUE 308
#define FALSE 309
#define RETURN 310
#define AT_PROTOCOL 311
#define DO 312
#define DOT 313
#define SYMBOL 314
#define SWITCH 315
#define BREAK 316
#define DEFAULT 317
#define CASE 318
#define STRUCT 319
#define TYPEDEF 320
#define ENUM 321
#define if_h 322
#define ELSE 323
#define expr_1 324
#define p_type_expr_prec 325
#define long_id_prec 326




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"

	#include <fstream>
	#include <iostream>  // not really needed since fstream includes it
	#include <stdlib.h>  
	#include <FlexLexer.h>
	#include "comp\hash_tabel.h"
	#include "comp\Symbol_Table.h"
	#include "comp\Interface.h"
	#include "comp\Method.h"
	#include "comp\Variable.h"
	#include "comp\Scope.h"
	#include "comp\Defs.h"
	#include "comp\ErrorRecovery.h"
	#include "comp\AST.h"
	#include <vector>
	#include <queue>
	using namespace std;
	//global offset 
 	
	ErrorRecovery *Er=new ErrorRecovery();
	void yyerror(char *,char *);
	vector<string> param_list;
	vector<char*> param_list1;
	Symbol_Table *s=new Symbol_Table();
	char *Inhert;
	int i;
	int temp22=0;
	int datamember_offset;
 	int function_offset;

	queue<char*> var;
	void insert_param()
	{
		int c=0;
		while(c<param_list1.size())
		{
			s->insertVariableInCurrentScope(param_list1[c],intType,3);
			c=c+1;
		}
	}
	void add_param(int type)
	{
		if(type==1)
			param_list.push_back("int");
		else if(type==2)
			param_list.push_back("char");
		else if(type==3)
			param_list.push_back("float");
		else if(type==4)
			param_list.push_back("nsstring");
		else if(type==5)
			param_list.push_back("void");
		else
			param_list.push_back("complex");
	}
	char* Interface_name;
	int in=0;
	int visability=0;
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	FlexLexer* lexer = new yyFlexLexer();
	class Parser{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	AST * ast = new AST();


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 152 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		int type;
		char* str;
		char* type1;
		int myLineNo;
		int myColno;
	}r;
	class TreeNode * tn;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 314 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 326 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   995

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  80
/* YYNRULES -- Number of rules. */
#define YYNRULES  256
/* YYNRULES -- Number of states. */
#define YYNSTATES  543

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    19,
      24,    29,    33,    37,    40,    45,    49,    53,    57,    60,
      63,    66,    68,    72,    74,    78,    82,    86,    90,    93,
      96,    98,   100,   103,   106,   108,   110,   112,   114,   118,
     122,   128,   134,   139,   144,   151,   158,   160,   162,   164,
     166,   173,   181,   188,   196,   200,   205,   211,   218,   224,
     229,   237,   244,   254,   261,   272,   282,   286,   288,   296,
     302,   310,   315,   324,   331,   336,   340,   342,   348,   352,
     354,   356,   358,   360,   362,   364,   366,   369,   372,   374,
     376,   378,   383,   388,   392,   396,   401,   405,   410,   414,
     418,   422,   426,   430,   432,   436,   441,   446,   450,   452,
     455,   459,   467,   470,   472,   474,   476,   479,   484,   489,
     493,   496,   500,   503,   506,   509,   511,   513,   515,   518,
     522,   525,   528,   532,   535,   538,   540,   542,   544,   547,
     549,   550,   553,   555,   557,   561,   565,   567,   569,   571,
     574,   583,   592,   600,   609,   617,   625,   632,   640,   648,
     656,   663,   670,   677,   683,   688,   692,   697,   701,   704,
     708,   710,   714,   718,   722,   726,   730,   733,   737,   741,
     745,   747,   749,   753,   757,   761,   765,   769,   772,   776,
     780,   784,   787,   791,   795,   797,   801,   805,   807,   809,
     811,   813,   814,   818,   820,   822,   826,   830,   834,   838,
     842,   845,   849,   852,   855,   860,   865,   869,   874,   879,
     882,   887,   889,   897,   905,   913,   921,   929,   939,   949,
     955,   961,   963,   965,   967,   969,   974,   979,   983,   988,
     993,   995,   997,   999,  1003,  1006,  1008,  1011,  1014,  1018,
    1021,  1025,  1028,  1031,  1035,  1038,  1041
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      73,     0,    -1,    74,    -1,    74,    75,    -1,    75,    -1,
      76,    -1,   109,    -1,   149,    -1,    77,    78,    -1,    10,
      11,    12,    11,    -1,    10,    11,     1,    11,    -1,    10,
      11,    12,    -1,    10,    11,    11,    -1,    10,    11,    -1,
      79,    81,    98,    27,    -1,    79,    81,    27,    -1,    79,
      98,    27,    -1,    81,    98,    27,    -1,    79,    27,    -1,
      81,    27,    -1,    98,    27,    -1,    27,    -1,    25,    80,
      26,    -1,    11,    -1,    80,     1,    11,    -1,    80,    24,
      11,    -1,    22,    82,    23,    -1,    22,    82,     1,    -1,
      22,    82,    -1,    82,    83,    -1,    83,    -1,    84,    -1,
      85,    84,    -1,    84,    86,    -1,    86,    -1,    21,    -1,
      20,    -1,    19,    -1,    95,    11,    17,    -1,    95,    11,
       1,    -1,    95,    11,    47,   132,    17,    -1,    95,    11,
      47,   132,     1,    -1,    28,    95,    11,    17,    -1,    28,
      95,    11,     1,    -1,    28,    95,    11,    47,   132,    17,
      -1,    28,    95,    11,    47,   132,     1,    -1,    87,    -1,
      88,    -1,    90,    -1,    92,    -1,    66,    22,    80,    23,
      11,    17,    -1,    65,    66,    22,    80,    23,    11,    17,
      -1,    64,    11,    22,    89,    23,    17,    -1,    64,    11,
      22,    89,    23,    80,    17,    -1,    95,    11,    17,    -1,
      89,    95,    11,    17,    -1,    95,    11,    12,   132,    17,
      -1,    89,    95,    11,    12,   132,    17,    -1,    89,    28,
      95,    11,    17,    -1,    28,    95,    11,    17,    -1,    89,
      28,    95,    11,    12,   132,    17,    -1,    28,    95,    11,
      12,   132,    17,    -1,    95,    11,    51,    41,    52,    47,
      22,    23,    17,    -1,    95,    11,    51,    41,    52,    17,
      -1,    95,    11,    51,    41,    52,    47,    22,    91,    23,
      17,    -1,    95,    11,    51,    52,    47,    22,    91,    23,
      17,    -1,    91,    24,   127,    -1,   127,    -1,    91,    24,
      51,    41,    52,    47,   127,    -1,    51,    41,    52,    47,
     127,    -1,    95,    11,    93,    47,    22,    23,    17,    -1,
      95,    11,    93,    17,    -1,    95,    11,    93,    47,    22,
      94,    23,    17,    -1,    51,    41,    52,    51,    41,    52,
      -1,    93,    51,    41,    52,    -1,    22,    91,    23,    -1,
     127,    -1,    94,    24,    22,    91,    23,    -1,    94,    24,
     127,    -1,    96,    -1,    97,    -1,    16,    -1,    15,    -1,
      14,    -1,    13,    -1,    29,    -1,    11,    43,    -1,    98,
      99,    -1,    99,    -1,   100,    -1,   101,    -1,    30,   102,
     103,    17,    -1,    30,   102,   103,     1,    -1,    30,   103,
      17,    -1,    30,   103,     1,    -1,    31,   102,   103,    17,
      -1,    31,   103,    17,    -1,    31,   102,   103,     1,    -1,
      31,   103,     1,    -1,    32,    95,    33,    -1,     1,    95,
      33,    -1,    32,    95,     1,    -1,    11,    12,   104,    -1,
      11,    -1,   104,    12,   105,    -1,   104,    11,    12,   105,
      -1,   104,    11,     1,   105,    -1,   104,    11,   105,    -1,
     105,    -1,   102,    11,    -1,     3,   134,   107,    -1,     4,
      32,     5,   108,    33,   134,   107,    -1,     9,   134,    -1,
       6,    -1,     7,    -1,     8,    -1,   110,   111,    -1,    34,
      11,    12,    11,    -1,    34,    11,     1,    11,    -1,    34,
      11,    11,    -1,    34,    11,    -1,    81,   112,    27,    -1,
      81,    27,    -1,   112,    27,    -1,   112,   113,    -1,   113,
      -1,   114,    -1,   116,    -1,   115,   134,    -1,    30,   102,
     103,    -1,    30,   103,    -1,   117,   134,    -1,    31,   102,
     103,    -1,    31,   103,    -1,   118,   119,    -1,   119,    -1,
     122,    -1,   138,    -1,   127,    17,    -1,    86,    -1,    -1,
     120,   134,    -1,   121,    -1,   106,    -1,    55,   127,    17,
      -1,    55,   127,     1,    -1,   123,    -1,   135,    -1,   137,
      -1,   124,   119,    -1,    46,    32,   125,    17,   126,    17,
     127,    33,    -1,    46,    32,   125,    17,   126,    17,   127,
       1,    -1,    46,   125,    17,   126,    17,   127,    33,    -1,
      46,     1,   125,    17,   126,    17,   127,    33,    -1,    46,
      32,    17,   126,    17,   127,    33,    -1,    46,    32,    17,
     126,    17,   127,     1,    -1,    46,    17,   126,    17,   127,
      33,    -1,    46,     1,    17,   126,    17,   127,    33,    -1,
      46,    32,   125,    17,    17,   127,    33,    -1,    46,    32,
     125,    17,   126,    17,    33,    -1,    46,    32,   125,    17,
      17,    33,    -1,    46,    32,    17,   126,    17,    33,    -1,
      46,    32,    17,    17,   127,    33,    -1,    46,    32,    17,
      17,    33,    -1,    16,    11,    47,   127,    -1,    16,    11,
     127,    -1,    16,    11,     1,   127,    -1,    11,    47,   127,
      -1,    11,   127,    -1,    11,     1,   127,    -1,    11,    -1,
     127,    25,   127,    -1,   127,    26,   127,    -1,   127,    39,
     127,    -1,   127,    42,   127,    -1,   127,    44,   127,    -1,
      45,   127,    -1,    32,   126,    33,    -1,   126,    35,   126,
      -1,   126,    36,   126,    -1,   130,    -1,   132,    -1,   129,
      25,   129,    -1,   129,    26,   129,    -1,   129,    39,   129,
      -1,   129,    42,   129,    -1,   129,    44,   129,    -1,    45,
     129,    -1,    32,   128,    33,    -1,   128,    35,   128,    -1,
     128,    36,   128,    -1,     1,   129,    -1,    32,   128,     1,
      -1,     1,   128,    33,    -1,   132,    -1,   131,    47,   132,
      -1,   131,    58,    11,    -1,   144,    -1,    11,    -1,    37,
      -1,    41,    -1,    -1,    38,   133,    37,    -1,    40,    -1,
     131,    -1,   132,    30,   132,    -1,   132,    31,   132,    -1,
     132,    43,   132,    -1,   132,    48,   132,    -1,    32,   132,
      33,    -1,   102,   132,    -1,    22,   118,    23,    -1,    22,
      23,    -1,   136,   119,    -1,    49,    32,   126,    33,    -1,
      49,    32,   126,     1,    -1,    49,   126,    33,    -1,    49,
       1,   126,    33,    -1,    57,   119,   136,    17,    -1,   143,
     119,    -1,   143,   119,    68,   119,    -1,   139,    -1,    60,
      32,   141,    33,    22,   140,    23,    -1,    60,     1,   141,
      33,    22,   140,    23,    -1,    60,    32,   141,     1,    22,
     140,    23,    -1,    60,    32,   141,    33,    22,   140,     1,
      -1,    60,    32,   141,    33,     1,   140,    23,    -1,    63,
      32,   142,    33,    12,   119,    61,    17,   140,    -1,    63,
      32,   142,    33,    12,   119,     1,    17,   140,    -1,    62,
      12,   119,    61,    17,    -1,    62,    12,   119,     1,    17,
      -1,   126,    -1,   127,    -1,   128,    -1,   129,    -1,    50,
      32,   126,    33,    -1,    50,    32,   126,     1,    -1,    50,
     126,    33,    -1,    50,     1,   126,    33,    -1,    51,   145,
     146,    52,    -1,   144,    -1,    11,    -1,    11,    -1,    11,
      12,   147,    -1,   147,   148,    -1,   148,    -1,    12,   132,
      -1,     1,   132,    -1,    11,    12,   132,    -1,    11,   132,
      -1,    11,     1,   132,    -1,   150,   151,    -1,    56,    11,
      -1,    79,    98,    27,    -1,    98,    27,    -1,    79,    27,
      -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   172,   172,   177,   178,   181,   182,   183,   189,   199,
     211,   220,   229,   235,   249,   254,   258,   263,   267,   271,
     275,   279,   286,   295,   296,   297,   303,   305,   307,   314,
     316,   318,   325,   333,   337,   346,   348,   351,   359,   379,
     382,   405,   410,   428,   432,   439,   443,   444,   445,   446,
     451,   452,   456,   457,   462,   463,   464,   465,   466,   467,
     468,   469,   477,   478,   479,   480,   487,   488,   489,   490,
     498,   499,   500,   506,   507,   514,   516,   518,   520,   525,
     529,   536,   538,   540,   542,   544,   551,   564,   566,   572,
     574,   580,   589,   598,   605,   616,   624,   629,   631,   636,
     640,   642,   650,   652,   658,   660,   662,   664,   666,   669,
     691,   695,   696,   699,   700,   701,   709,   718,   731,   741,
     749,   767,   768,   769,   774,   775,   779,   780,   783,   805,
     809,   813,   835,   839,   843,   844,   850,   851,   852,   853,
     854,   854,   855,   856,   860,   861,   864,   865,   866,   869,
     873,   879,   881,   883,   886,   892,   894,   896,   901,   906,
     909,   912,   915,   919,   927,   928,   929,   930,   931,   932,
     933,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     949,   950,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   969,   973,   979,   984,   985,   998,
    1001,  1005,  1005,  1010,  1013,  1048,  1050,  1051,  1052,  1054,
    1055,  1060,  1061,  1066,  1069,  1070,  1071,  1072,  1075,  1077,
    1078,  1081,  1084,  1085,  1086,  1087,  1088,  1097,  1101,  1102,
    1103,  1108,  1109,  1113,  1114,  1117,  1118,  1119,  1120,  1123,
    1126,  1127,  1130,  1131,  1134,  1135,  1138,  1139,  1140,  1141,
    1142,  1144,  1150,  1161,  1164,  1167,  1170
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TRY", "CATCH", "NSEXception",
  "NUllPointerException", "OUtOfBoundryException", "CAstException",
  "FINALLY", "AT_INTERFACE", "IDENTIFIER", "SEMI_COLUMN", "NSSTRING",
  "FLOAT", "CHAR", "INT", "SEMI_COMA", "ID", "AT_PUBLIC", "AT_PROTECTED",
  "AT_PRIVATE", "OPEN_S", "CLOSE_S", "COMMA", "LESS_THAN", "MORE_THAN",
  "AT_END", "CONST", "VOID", "PLUS", "MINUS", "OPEN_P", "CLOSE_P",
  "AT_IMPLEMENTATION", "AND_AND", "OR_OR", "STRING_VAL", "FLOAT_VAL",
  "LESS_OR_EQUAL", "CHAR_VAL", "INT_VAL", "MORE_OR_EQUAL", "MULTI",
  "EQUAL_EQUAL", "NOT_EQUAL", "FOR", "EQUAL", "DIV", "WHILE", "IF",
  "OPEN_ARR", "CLOSE_ARR", "TRUE", "FALSE", "RETURN", "AT_PROTOCOL", "DO",
  "DOT", "SYMBOL", "SWITCH", "BREAK", "DEFAULT", "CASE", "STRUCT",
  "TYPEDEF", "ENUM", "if_h", "ELSE", "expr_1", "p_type_expr_prec",
  "long_id_prec", "$accept", "program", "components", "component",
  "class_interface", "class_interface_header", "class_interface_body",
  "protocol_reference_list", "ids_list", "instance_variables",
  "instance_variable_declarations", "instance_variable_declaration",
  "variable_declaration_list", "visibility_specification",
  "variable_declaration", "Enum", "structrule", "variable_declarations",
  "ArrayOne", "array_body", "ArrayN", "Multi", "array_body2", "type",
  "simple_type", "complex_type", "interface_declaration_list",
  "interface_declaration", "class_method_declaration",
  "instance_method_declaration", "p_type", "method_selector",
  "parameter_list", "parameter", "try_catch", "catch_statment",
  "Exception_type", "class_implementation", "class_implementation_header",
  "class_implementation_body", "implementation_definition_list",
  "implementation_definition", "class_implementation_definition",
  "class_implementation_definition_header",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "statement_list",
  "statement", "@1", "return_statement", "loop_statement", "for_loop",
  "for_loop_header", "for_initializer", "logic_expr", "expr",
  "logic_expr2", "expr2", "assign_expr", "long_id", "simple_expr", "@2",
  "block_body", "while_loop", "while_loop_header", "do_while_loop",
  "conditional_statement", "switch", "switch_body", "switch_statement",
  "case_statement", "if_header", "message_call", "sender", "message",
  "argument_list", "argument", "protocol", "protocol_header",
  "protocol_body", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    75,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   105,
     106,   107,   107,   108,   108,   108,   109,   110,   110,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   114,   115,
     115,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     120,   119,   119,   119,   121,   121,   122,   122,   122,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   130,   131,   131,   131,   132,
     132,   133,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   134,   134,   135,   136,   136,   136,   136,   137,   138,
     138,   138,   139,   139,   139,   139,   139,   140,   140,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   143,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   148,   148,
     148,   149,   150,   151,   151,   151,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     4,
       4,     3,     3,     2,     4,     3,     3,     3,     2,     2,
       2,     1,     3,     1,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     3,
       5,     5,     4,     4,     6,     6,     1,     1,     1,     1,
       6,     7,     6,     7,     3,     4,     5,     6,     5,     4,
       7,     6,     9,     6,    10,     9,     3,     1,     7,     5,
       7,     4,     8,     6,     4,     3,     1,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     4,     4,     3,     3,     4,     3,     4,     3,     3,
       3,     3,     3,     1,     3,     4,     4,     3,     1,     2,
       3,     7,     2,     1,     1,     1,     2,     4,     4,     3,
       2,     3,     2,     2,     2,     1,     1,     1,     2,     3,
       2,     2,     3,     2,     2,     1,     1,     1,     2,     1,
       0,     2,     1,     1,     3,     3,     1,     1,     1,     2,
       8,     8,     7,     8,     7,     7,     6,     7,     7,     7,
       6,     6,     6,     5,     4,     3,     4,     3,     2,     3,
       1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       1,     1,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     2,     3,     3,     1,     3,     3,     1,     1,     1,
       1,     0,     3,     1,     1,     3,     3,     3,     3,     3,
       2,     3,     2,     2,     4,     4,     3,     4,     4,     2,
       4,     1,     7,     7,     7,     7,     7,     9,     9,     5,
       5,     1,     1,     1,     1,     4,     4,     3,     4,     4,
       1,     1,     1,     3,     2,     1,     2,     2,     3,     2,
       3,     2,     2,     3,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   252,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,     0,   116,     0,   125,   126,     0,   127,     0,
     256,     0,     0,   251,     0,    12,    11,     0,   119,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   103,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   130,     0,   133,   122,     0,   123,   124,     0,
     128,   131,   255,     0,   254,    10,     9,   118,   117,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,     0,     0,     0,    94,    93,     0,
      98,    96,    15,     0,    16,    17,   129,   132,   121,     0,
     198,   212,     0,   199,   201,   203,   200,     0,     0,     0,
       0,     0,     0,     0,   139,     0,   143,     0,   135,     0,
     142,   136,   146,     0,     0,   180,   204,   181,   147,     0,
     148,   137,   221,     0,   197,   253,     0,     0,     0,     0,
      39,    38,     0,     0,     0,    24,    25,   100,     0,   102,
     108,   101,    99,    92,    91,    97,    95,    14,     0,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,     0,   241,   240,     0,
       0,     0,     0,     0,   210,   211,   134,   141,   149,   138,
       0,     0,     0,     0,     0,     0,   213,   219,    43,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,   109,     0,     0,     0,     0,   110,   209,   202,
       0,     0,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   176,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   242,     0,   145,   144,
       0,   231,   232,     0,     0,   195,   196,   205,   206,   207,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      41,    40,     0,     0,     0,     0,     0,     0,   107,   104,
       0,   112,     0,     0,   169,   167,     0,     0,   165,     0,
       0,     0,     0,     0,     0,   217,   215,   214,   178,   179,
     171,   172,   173,   174,   175,   238,   236,   235,     0,   239,
     218,     0,     0,     0,   220,    45,    44,     0,    52,     0,
       0,     0,     0,    54,     0,    50,    63,     0,     0,     0,
       0,     0,     0,    76,    74,   106,   105,     0,     0,     0,
     166,   164,   177,     0,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,     0,     0,     0,     0,     0,
      59,    53,     0,     0,    55,     0,    51,     0,     0,     0,
       0,    67,     0,    70,     0,     0,   113,   114,   115,     0,
       0,     0,   156,   162,   161,     0,   160,     0,     0,     0,
     247,     0,     0,   249,   246,   244,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,    56,     0,     0,    73,
       0,     0,     0,    75,    72,     0,    78,     0,   157,     0,
     155,   154,   158,   159,     0,   152,   250,   248,     0,     0,
     223,   224,   226,   225,   222,    61,     0,    57,    62,     0,
       0,    65,     0,    66,     0,     0,   153,   151,   150,     0,
       0,     0,     0,   233,   234,   194,     0,    60,    64,     0,
       0,    77,   111,     0,     0,     0,   191,     0,     0,   194,
     187,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,   230,   229,   193,   192,   188,   189,   190,   182,   183,
     184,   185,   186,     0,     0,     0,    68,     0,     0,     0,
       0,   228,   227
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   154,    68,    69,   242,    70,   410,
      71,   184,   372,    72,    73,    74,    26,    27,    28,    29,
     155,    81,   189,   190,   156,   257,   419,     9,    10,    33,
      34,    35,    36,    37,    38,    39,   157,   158,   159,   160,
     161,   162,   163,   207,   291,   213,   493,   508,   165,   166,
     167,   201,   100,   168,   169,   170,   171,   172,   438,   293,
     496,   173,   174,   219,   287,   393,   394,    11,    12,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -381
static const short int yypact[] =
{
      25,     3,    26,    49,    98,    25,  -381,  -381,   661,  -381,
     228,  -381,   450,   819,   356,  -381,  -381,  -381,   653,   109,
    -381,    99,    99,  -381,   484,   391,   551,  -381,  -381,  -381,
      99,    99,   587,  -381,   676,  -381,  -381,   108,  -381,   108,
    -381,   681,   728,  -381,   159,  -381,   252,   286,  -381,   294,
     280,  -381,  -381,  -381,  -381,  -381,  -381,  -381,   857,  -381,
     352,   276,   348,   945,  -381,   125,   125,  -381,  -381,  -381,
    -381,  -381,   364,  -381,  -381,  -381,   211,   857,   368,   857,
     382,    94,   382,   167,  -381,   765,   785,  -381,   821,  -381,
    -381,   382,  -381,   382,  -381,  -381,   847,  -381,  -381,   481,
    -381,  -381,  -381,   872,  -381,  -381,  -381,  -381,  -381,  -381,
     403,   398,   411,   109,  -381,  -381,  -381,  -381,   125,    29,
     428,   435,  -381,   416,   117,     7,   196,  -381,  -381,   204,
    -381,  -381,  -381,   885,  -381,  -381,  -381,  -381,  -381,   108,
     280,  -381,   684,  -381,  -381,  -381,  -381,   308,   400,   737,
      18,   890,   597,   118,  -381,   890,  -381,   539,  -381,   108,
    -381,  -381,  -381,   597,   419,  -381,   153,   544,  -381,   597,
    -381,  -381,  -381,   597,  -381,  -381,    30,   924,   109,    48,
    -381,  -381,   890,   241,    45,  -381,  -381,  -381,   442,   264,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,  -381,    46,   401,
     697,   426,   509,   461,   468,   753,   540,   483,   240,  -381,
     240,   890,   374,   432,   240,   240,   434,  -381,  -381,   472,
     219,   490,   753,   753,   544,  -381,  -381,  -381,  -381,  -381,
     890,   526,   890,   890,   890,   890,  -381,   476,  -381,  -381,
     890,   857,   966,   555,   134,   573,   186,   511,   546,  -381,
     564,   554,  -381,    74,   117,   565,   108,  -381,  -381,  -381,
     753,   607,   684,   890,  -381,   770,   240,   138,   309,   615,
     753,   609,   160,   697,  -381,  -381,   753,   753,   890,   890,
     890,   890,   890,   654,   232,  -381,   621,   550,  -381,  -381,
     619,   277,   432,   576,     9,   544,  -381,    65,    65,  -381,
    -381,   597,   209,   640,   310,   857,   644,   131,   648,   643,
    -381,  -381,    86,   649,   709,   618,   285,   117,  -381,  -381,
     671,  -381,   355,   753,  -381,  -381,   684,   890,  -381,   934,
     890,   532,   380,   725,   395,  -381,  -381,   950,   299,   299,
    -381,  -381,  -381,  -381,  -381,  -381,  -381,   950,   327,  -381,
    -381,   662,   672,   106,  -381,  -381,  -381,   213,  -381,   168,
     703,   249,   890,  -381,   706,  -381,  -381,   707,   692,   910,
     910,   717,   361,  -381,  -381,  -381,  -381,   552,   890,   488,
    -381,  -381,  -381,   704,  -381,   710,   590,   786,   499,   890,
     890,   802,   890,    27,  -381,   466,   466,   466,   466,   890,
    -381,  -381,   272,   890,  -381,   328,  -381,   824,   687,    22,
     525,  -381,   583,  -381,   727,   844,  -381,  -381,  -381,   718,
     719,   890,  -381,  -381,  -381,    50,  -381,   720,   856,   723,
     544,   684,   890,   544,   544,  -381,   749,   735,   745,   750,
     756,    92,   331,   890,  -381,   365,  -381,   755,   592,  -381,
     731,   763,   922,  -381,  -381,   910,  -381,   108,  -381,   751,
    -381,  -381,  -381,  -381,    64,  -381,   544,   544,   597,   868,
    -381,  -381,  -381,  -381,  -381,  -381,   425,  -381,  -381,   769,
     742,  -381,    37,  -381,   626,    46,  -381,  -381,  -381,    21,
     664,   664,   890,   585,   614,   544,   766,  -381,  -381,   890,
     748,  -381,  -381,   784,   788,   955,   614,   259,   614,   697,
    -381,   868,   868,   890,   890,   890,   890,   890,   794,  -381,
     762,  -381,  -381,  -381,  -381,  -381,   299,   299,  -381,  -381,
    -381,  -381,  -381,   597,   890,    23,  -381,   805,   811,   466,
     466,  -381,  -381
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -381,  -381,  -381,   827,  -381,  -381,  -381,   817,  -110,   152,
    -381,   773,   767,  -381,    -9,  -381,  -381,  -381,  -381,  -364,
    -381,  -381,  -381,   -43,  -381,  -381,    20,    -1,  -381,  -381,
     -10,    95,  -381,  -227,  -381,   353,  -381,  -381,  -381,  -381,
     822,   -30,  -381,  -381,  -381,  -381,  -381,  -150,  -381,  -381,
    -381,  -381,  -381,    36,   184,   -99,  -160,  -268,  -381,   -26,
     -88,  -381,   -38,  -381,   637,  -381,  -381,  -381,  -380,   636,
    -381,  -381,  -145,  -381,  -381,  -381,   467,  -381,  -381,  -381
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -244
static const short int yytable[] =
{
     164,   101,   221,   179,    98,   218,   412,   226,   191,    67,
     352,    80,    82,   228,    13,   110,   439,   440,   441,   236,
      91,    93,   503,   237,   537,    90,   318,   319,   390,   217,
     180,   238,    42,   217,   123,     1,   125,    14,   391,   392,
     192,    90,   353,   448,    86,    88,   181,   239,   217,   120,
     255,   460,   220,   164,   200,   256,   117,    67,   164,     2,
      15,   103,   249,   450,   164,   487,    98,   224,   244,   150,
     164,   245,   121,   150,   164,   316,   182,   240,   500,  -243,
     183,     3,   504,   461,   538,    90,   317,    90,   150,   375,
     376,   484,   250,   473,   246,   127,   251,   488,    16,   125,
      77,   198,    90,   366,   264,   133,    79,   397,   234,   117,
      78,   128,   274,   235,   188,   474,   199,    83,    77,   222,
      75,   227,   273,   292,   292,    92,    94,   273,   398,   199,
      99,    79,    90,   367,   243,   120,    50,   368,    51,    52,
      53,    54,   295,   362,   297,   298,   299,   300,   363,    79,
     223,   354,   302,    58,    59,   330,   199,   308,   121,   541,
     542,   336,    32,   324,   325,   123,   328,   125,   130,   120,
     105,   123,   125,   276,   277,   126,    85,   129,   273,   340,
     341,   342,   343,   344,   131,   401,   136,   310,   137,    60,
      61,    62,   121,   337,   359,   276,   277,   193,   303,   306,
     230,   494,   164,   311,   199,   195,   199,   199,   199,   199,
     355,   231,   120,   194,   199,   373,   232,   233,   321,   123,
     288,   196,   506,   125,   510,   399,   356,   380,   381,   234,
     400,   383,   385,   346,   235,   121,   289,   122,   261,   232,
     233,    77,   269,   188,   188,   528,   529,   530,   531,   532,
      18,   140,   234,    51,    52,    53,    54,   235,    30,    31,
     524,   403,   360,   106,   218,   347,   404,   276,   277,    59,
     411,   411,   266,   123,   405,   253,   254,   143,   144,   420,
     145,   146,   247,   123,   443,   211,    77,   425,   427,   444,
     429,   150,   525,   248,   511,   512,    50,   107,    51,    52,
      53,    54,   430,   433,   434,   108,   188,   188,   411,   202,
      77,   442,   276,   277,    59,   445,   456,    79,   489,   203,
     209,    75,   459,   109,   204,   205,   331,   358,   390,   464,
     505,   507,   212,   216,  -244,  -244,   199,   218,   391,   392,
     206,   266,   112,   466,   467,   446,   143,   144,   475,   145,
     146,   526,   527,   483,   211,   476,   411,    47,   232,   233,
     150,   232,   233,   111,   199,   199,   199,    48,    49,   164,
     113,   234,   378,   199,   234,   119,   235,   199,  -120,   235,
     124,   495,   477,   535,   414,   415,  -120,  -120,   123,   267,
     276,   277,   271,    78,   272,   232,   233,   386,   283,   284,
     519,   208,   495,   509,   495,   199,   199,   275,   234,   276,
     277,   209,   389,   235,   176,   276,   277,   199,    87,   485,
     177,    21,    22,   495,   495,   495,   495,   495,   495,   495,
     276,   277,   210,   178,   164,   536,   229,   143,   144,   185,
     145,   146,   497,   199,   322,   211,   186,   123,   125,   187,
     329,   150,   332,   252,   334,   232,   233,   278,   279,   231,
     338,   339,   262,   259,   199,   199,   199,   285,   234,   276,
     277,   280,   209,   235,   281,    19,   282,    40,  -170,   265,
      21,    22,    77,   286,   139,   199,   199,   199,   199,   199,
     199,   199,   140,   142,    51,    52,    53,    54,   143,   144,
     270,   145,   146,  -140,   141,   421,    18,   379,   263,    58,
      59,    84,   150,   142,    21,    22,   428,   388,   143,   144,
     203,   145,   146,   276,   277,   204,   260,   147,   436,   437,
     148,   149,   150,    77,   276,   277,   151,   296,   152,   148,
      77,   153,   139,   209,   301,    60,    61,    62,   451,   452,
     140,   203,    51,    52,    53,    54,   204,   268,   416,   417,
     418,  -140,   225,   312,   142,   384,   307,    58,    59,   143,
     144,   142,   145,   146,   232,   233,   143,   144,    89,   145,
     146,    21,    22,   150,   309,   147,   314,   234,   148,   149,
     150,    77,   235,   313,   151,   315,   152,   320,    77,   153,
     139,   209,   349,    60,    61,    62,   453,   452,   140,   351,
      51,    52,    53,    54,    95,   479,   452,    30,    31,  -140,
     511,   512,   142,   424,   323,    58,    59,   143,   144,   142,
     145,   146,   333,   348,   143,   144,   350,   145,   146,   513,
     514,   150,   335,   147,   276,   277,   148,   149,   150,   501,
     452,   357,   151,   515,   152,   361,   516,   153,   517,   364,
     365,    60,    61,    62,    50,   490,    51,    52,    53,    54,
     374,   369,    55,    56,    57,   140,   377,    51,    52,    53,
      54,    58,    59,    18,   395,    77,    19,   345,    20,   276,
     277,    21,    22,    59,   396,   140,   491,    51,    52,    53,
      54,   143,   144,    97,   145,   146,    30,    31,   102,   492,
      77,    21,    22,    59,   402,   150,   142,    60,    61,    62,
     209,   143,   144,   406,   145,   146,    77,   232,   233,   407,
     258,   370,   371,   408,   413,   150,   209,   422,   214,   449,
     234,   142,   387,   423,   454,   235,   143,   144,   209,   145,
     146,   457,   458,   462,    77,   104,   465,   266,    21,    22,
     150,   468,   143,   144,   209,   145,   146,   469,   470,   215,
     211,   326,   478,   471,   143,   144,   150,   145,   146,   472,
     481,   209,   211,   480,   486,   266,   498,    77,   150,   499,
     143,   144,   132,   145,   146,    21,    22,   209,   211,   518,
     520,   521,   142,   431,   150,   522,   533,   143,   144,   534,
     145,   146,   134,   209,   432,    21,    22,   327,   142,   426,
      44,   150,   539,   143,   144,    77,   145,   146,   540,    41,
      45,    46,    17,   118,   142,   209,   116,   150,   502,   143,
     144,   -13,   145,   146,   -13,    77,   -13,   447,   135,   -13,
     -13,    21,    22,   150,    96,   209,   142,    77,   290,   294,
     435,   143,   144,     0,   145,   146,   455,   209,    50,   490,
      51,    52,    53,    54,   138,   409,   142,    30,    31,   209,
       0,   143,   144,     0,   145,   146,    59,     0,   142,   463,
       0,    77,     0,   143,   144,   150,   145,   146,     0,   175,
     491,   209,    21,    22,     0,   143,   144,   150,   145,   146,
       0,    77,   197,   492,     0,    21,    22,     0,     0,   150,
       0,   209,   142,    77,     0,     0,     0,   143,   144,     0,
     145,   146,     0,   209,     0,    50,     0,    51,    52,    53,
      54,   150,   142,     0,     0,     0,   114,   143,   144,     0,
     145,   146,   241,    59,   142,     0,     0,     0,     0,   143,
     144,   409,   145,   146,    55,    56,    57,   382,   115,   276,
     277,     0,   -28,   482,     0,   -28,   -28,    50,     0,    51,
      52,    53,    54,  -177,     0,  -177,  -177,     0,   523,   304,
     511,   512,     0,     0,   305,    59
};

static const short int yycheck[] =
{
      99,    39,   152,   113,    34,   150,   370,   157,     1,    18,
       1,    21,    22,   163,    11,    58,   396,   397,   398,   169,
      30,    31,     1,   173,     1,    26,   253,   254,     1,    11,
       1,     1,    12,    11,    77,    10,    79,    11,    11,    12,
      33,    42,    33,   407,    24,    25,    17,    17,    11,     1,
       4,     1,   151,   152,   142,     9,    65,    66,   157,    34,
      11,    41,    17,    41,   163,     1,    96,   155,   178,    51,
     169,    23,    24,    51,   173,     1,    47,    47,    41,    52,
      51,    56,    61,    33,    61,    86,    12,    88,    51,   316,
     317,   455,    47,     1,   182,     1,    51,    33,     0,   142,
       1,   139,   103,    17,   203,    85,    32,     1,    43,   118,
      11,    17,   211,    48,   124,    23,   142,    22,     1,     1,
      11,   159,   210,   222,   223,    30,    31,   215,    22,   155,
      22,    32,   133,    47,   177,     1,    11,    51,    13,    14,
      15,    16,   230,    12,   232,   233,   234,   235,    17,    32,
      32,   301,   240,    28,    29,    17,   182,    23,    24,   539,
     540,     1,    10,   262,   263,   208,   265,   210,     1,     1,
      11,   214,   215,    35,    36,    80,    24,    82,   266,   278,
     279,   280,   281,   282,    17,    17,    91,     1,    93,    64,
      65,    66,    24,    33,   304,    35,    36,     1,   241,   242,
      47,   469,   301,    17,   230,     1,   232,   233,   234,   235,
       1,    58,     1,    17,   240,   314,    30,    31,   256,   262,
       1,    17,   490,   266,   492,    12,    17,   326,   327,    43,
      17,   330,   331,     1,    48,    24,    17,    26,   202,    30,
      31,     1,   206,   253,   254,   513,   514,   515,   516,   517,
      22,    11,    43,    13,    14,    15,    16,    48,    30,    31,
       1,    12,   305,    11,   409,    33,    17,    35,    36,    29,
     369,   370,    32,   316,   362,    11,    12,    37,    38,   378,
      40,    41,    41,   326,    12,    45,     1,   386,   387,    17,
     389,    51,    33,    52,    35,    36,    11,    11,    13,    14,
      15,    16,   390,   391,   392,    11,   316,   317,   407,     1,
       1,   399,    35,    36,    29,   403,   415,    32,   468,    11,
      11,    11,   421,    43,    16,    17,    17,    17,     1,   428,
     490,   491,   148,   149,    35,    36,   362,   482,    11,    12,
      32,    32,    66,   431,   432,    17,    37,    38,    17,    40,
      41,   511,   512,   452,    45,   443,   455,     1,    30,    31,
      51,    30,    31,    11,   390,   391,   392,    11,    12,   468,
      22,    43,    17,   399,    43,    11,    48,   403,    22,    48,
      12,   469,    17,   533,    23,    24,    30,    31,   431,   205,
      35,    36,   208,    11,   210,    30,    31,    17,   214,   215,
     499,     1,   490,   491,   492,   431,   432,    33,    43,    35,
      36,    11,    17,    48,    11,    35,    36,   443,    27,   457,
      22,    30,    31,   511,   512,   513,   514,   515,   516,   517,
      35,    36,    32,    22,   533,   534,    17,    37,    38,    11,
      40,    41,    17,   469,   260,    45,    11,   490,   491,    33,
     266,    51,   268,    11,   270,    30,    31,    25,    26,    58,
     276,   277,     1,    37,   490,   491,   492,    33,    43,    35,
      36,    39,    11,    48,    42,    25,    44,    27,    17,    11,
      30,    31,     1,    11,     3,   511,   512,   513,   514,   515,
     516,   517,    11,    32,    13,    14,    15,    16,    37,    38,
      17,    40,    41,    22,    23,    17,    22,   323,    47,    28,
      29,    27,    51,    32,    30,    31,    17,   333,    37,    38,
      11,    40,    41,    35,    36,    16,    17,    46,    62,    63,
      49,    50,    51,     1,    35,    36,    55,    11,    57,    49,
       1,    60,     3,    11,    68,    64,    65,    66,    23,    24,
      11,    11,    13,    14,    15,    16,    16,    17,     6,     7,
       8,    22,    23,    52,    32,    33,    11,    28,    29,    37,
      38,    32,    40,    41,    30,    31,    37,    38,    27,    40,
      41,    30,    31,    51,    11,    46,    22,    43,    49,    50,
      51,     1,    48,    47,    55,    41,    57,    32,     1,    60,
       3,    11,    52,    64,    65,    66,    23,    24,    11,    33,
      13,    14,    15,    16,    27,    23,    24,    30,    31,    22,
      35,    36,    32,    33,    17,    28,    29,    37,    38,    32,
      40,    41,    17,    12,    37,    38,    17,    40,    41,    25,
      26,    51,    33,    46,    35,    36,    49,    50,    51,    23,
      24,    11,    55,    39,    57,    11,    42,    60,    44,    11,
      17,    64,    65,    66,    11,     1,    13,    14,    15,    16,
      52,    22,    19,    20,    21,    11,     5,    13,    14,    15,
      16,    28,    29,    22,    22,     1,    25,    33,    27,    35,
      36,    30,    31,    29,    22,    11,    32,    13,    14,    15,
      16,    37,    38,    27,    40,    41,    30,    31,    27,    45,
       1,    30,    31,    29,    11,    51,    32,    64,    65,    66,
      11,    37,    38,    17,    40,    41,     1,    30,    31,    22,
      33,    22,    23,    41,    17,    51,    11,    33,     1,    52,
      43,    32,    17,    33,    17,    48,    37,    38,    11,    40,
      41,    33,    33,    33,     1,    27,    33,    32,    30,    31,
      51,    12,    37,    38,    11,    40,    41,    32,    23,    32,
      45,     1,    17,    23,    37,    38,    51,    40,    41,    23,
      17,    11,    45,    52,    33,    32,    17,     1,    51,    47,
      37,    38,    27,    40,    41,    30,    31,    11,    45,    33,
      52,    17,    32,     1,    51,    17,    12,    37,    38,    47,
      40,    41,    27,    11,    12,    30,    31,    47,    32,    33,
       1,    51,    17,    37,    38,     1,    40,    41,    17,    12,
      11,    12,     5,    66,    32,    11,    63,    51,   485,    37,
      38,    22,    40,    41,    25,     1,    27,    23,    27,    30,
      31,    30,    31,    51,    32,    11,    32,     1,   221,   223,
     393,    37,    38,    -1,    40,    41,    22,    11,    11,     1,
      13,    14,    15,    16,    27,    51,    32,    30,    31,    11,
      -1,    37,    38,    -1,    40,    41,    29,    -1,    32,    33,
      -1,     1,    -1,    37,    38,    51,    40,    41,    -1,    27,
      32,    11,    30,    31,    -1,    37,    38,    51,    40,    41,
      -1,     1,    27,    45,    -1,    30,    31,    -1,    -1,    51,
      -1,    11,    32,     1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    -1,    11,    -1,    11,    -1,    13,    14,    15,
      16,    51,    32,    -1,    -1,    -1,     1,    37,    38,    -1,
      40,    41,    28,    29,    32,    -1,    -1,    -1,    -1,    37,
      38,    51,    40,    41,    19,    20,    21,    33,    23,    35,
      36,    -1,    27,    51,    -1,    30,    31,    11,    -1,    13,
      14,    15,    16,    33,    -1,    35,    36,    -1,    33,    23,
      35,    36,    -1,    -1,    28,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    10,    34,    56,    73,    74,    75,    76,    77,   109,
     110,   149,   150,    11,    11,    11,     0,    75,    22,    25,
      27,    30,    31,    78,    79,    81,    98,    99,   100,   101,
      30,    31,    81,   111,   112,   113,   114,   115,   116,   117,
      27,    79,    98,   151,     1,    11,    12,     1,    11,    12,
      11,    13,    14,    15,    16,    19,    20,    21,    28,    29,
      64,    65,    66,    82,    83,    84,    85,    86,    87,    88,
      90,    92,    95,    96,    97,    11,    80,     1,    11,    32,
     102,   103,   102,   103,    27,    81,    98,    27,    98,    27,
      99,   102,   103,   102,   103,    27,   112,    27,   113,    22,
     134,   134,    27,    98,    27,    11,    11,    11,    11,    43,
      95,    11,    66,    22,     1,    23,    83,    86,    84,    11,
       1,    24,    26,    95,    12,    95,   103,     1,    17,   103,
       1,    17,    27,    98,    27,    27,   103,   103,    27,     3,
      11,    23,    32,    37,    38,    40,    41,    46,    49,    50,
      51,    55,    57,    60,    86,   102,   106,   118,   119,   120,
     121,   122,   123,   124,   127,   130,   131,   132,   135,   136,
     137,   138,   139,   143,   144,    27,    11,    22,    22,    80,
       1,    17,    47,    51,    93,    11,    11,    33,   102,   104,
     105,     1,    33,     1,    17,     1,    17,    27,   134,   131,
     132,   133,     1,    11,    16,    17,    32,   125,     1,    11,
      32,    45,   126,   127,     1,    32,   126,    11,   144,   145,
     127,   119,     1,    32,   132,    23,   119,   134,   119,    17,
      47,    58,    30,    31,    43,    48,   119,   119,     1,    17,
      47,    28,    89,    95,    80,    23,   132,    41,    52,    17,
      47,    51,    11,    11,    12,     4,     9,   107,    33,    37,
      17,   125,     1,    47,   127,    11,    32,   126,    17,   125,
      17,   126,   126,   132,   127,    33,    35,    36,    25,    26,
      39,    42,    44,   126,   126,    33,    11,   146,     1,    17,
     136,   126,   127,   141,   141,   132,    11,   132,   132,   132,
     132,    68,   132,    95,    23,    28,    95,    11,    23,    11,
       1,    17,    52,    47,    22,    41,     1,    12,   105,   105,
      32,   134,   126,    17,   127,   127,     1,    47,   127,   126,
      17,    17,   126,    17,   126,    33,     1,    33,   126,   126,
     127,   127,   127,   127,   127,    33,     1,    33,    12,    52,
      17,    33,     1,    33,   119,     1,    17,    11,    17,    80,
      95,    11,    12,    17,    11,    17,    17,    47,    51,    22,
      22,    23,    94,   127,    52,   105,   105,     5,    17,   126,
     127,   127,    33,   127,    33,   127,    17,    17,   126,    17,
       1,    11,    12,   147,   148,    22,    22,     1,    22,    12,
      17,    17,    11,    12,    17,   132,    17,    22,    41,    51,
      91,   127,    91,    17,    23,    24,     6,     7,     8,   108,
     127,    17,    33,    33,    33,   127,    33,   127,    17,   127,
     132,     1,    12,   132,   132,   148,    62,    63,   140,   140,
     140,   140,   132,    12,    17,   132,    17,    23,    91,    52,
      41,    23,    24,    23,    17,    22,   127,    33,    33,   127,
       1,    33,    33,    33,   127,    33,   132,   132,    12,    32,
      23,    23,    23,     1,    23,    17,   132,    17,    17,    23,
      52,    17,    51,   127,    91,   134,    33,     1,    33,   119,
       1,    32,    45,   128,   129,   132,   142,    17,    17,    47,
      41,    23,   107,     1,    61,   128,   129,   128,   129,   132,
     129,    35,    36,    25,    26,    39,    42,    44,    33,   127,
      52,    17,    17,    33,     1,    33,   128,   128,   129,   129,
     129,   129,   129,    12,    47,   119,   127,     1,    61,    17,
      17,   140,   140
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 172 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    { ast->print((yyvsp[0].tn),0);cout<<"program: components\n";;}
    break;

  case 3:
#line 177 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"components: components component\n"; (yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, componentsListNode));;}
    break;

  case 4:
#line 178 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"components: component\n";			 (yyval.tn) = ast->createNode((yyvsp[0].tn), 0, componentNode);;}
    break;

  case 5:
#line 181 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"component:	class_interface\n";			(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 6:
#line 182 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"component:	class_implementation\n";	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 7:
#line 183 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"component:	protocol\n";				(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 8:
#line 189 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		(yyval.tn) =ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn), class_interface);;}
    break;

  case 9:
#line 199 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=1;
		datamember_offset=0;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
		else if(s->insertInterfaceInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Not found inhertance Interface"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 10:
#line 211 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;																																		
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 11:
#line 220 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","IDENTIFIER");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 12:
#line 229 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=1;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 13:
#line 235 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		datamember_offset=0;
		i=1;
		datamember_offset=0;

		(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Interface((yyvsp[0].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		s->insertInterfaceInCurrentScope((yyvsp[0].r.str),"NSObject"); 	
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
		(yyval.tn) =ast->createNode(0,0, class_interface_header_Node);;}
    break;

  case 14:
#line 250 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 15:
#line 255 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 16:
#line 259 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 17:
#line 264 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);;}
    break;

  case 18:
#line 268 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-1].tn),0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 19:
#line 272 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 20:
#line 276 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 21:
#line 280 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 22:
#line 286 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										(yyval.tn) = (yyvsp[-1].tn);
										;}
    break;

  case 23:
#line 295 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";									    (yyval.tn) = ast->createNode(0, 0, ids_list_Node);;}
    break;

  case 24:
#line 296 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); (yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 25:
#line 297 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 26:
#line 303 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 27:
#line 305 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 28:
#line 307 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														(yyval.tn) =(yyvsp[0].tn) ;}
    break;

  case 29:
#line 314 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node));;}
    break;

  case 30:
#line 316 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 31:
#line 318 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 32:
#line 325 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";
																	(yyval.tn) = ast->createNode((yyvsp[-1].tn), (yyvsp[0].tn), instance_variable_declaration_Node);
																	;}
    break;

  case 33:
#line 334 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node));
										;}
    break;

  case 34:
#line 338 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";
										(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node);
										;}
    break;

  case 35:
#line 346 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PRIVATE\n";
					(yyval.tn) = ast->createNode(0,0, visibility_specification_private_Node);;}
    break;

  case 36:
#line 348 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PROTECTED\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_protected_Node);;}
    break;

  case 37:
#line 351 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PUBLIC\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_public_Node);;}
    break;

  case 38:
#line 360 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
				int offset;
 				if(i==1)
 					offset=datamember_offset++;
 				else
 					offset=function_offset++;
				cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n"; 
				Type t=static_cast<Type>((yyvsp[-2].r.type));
				(yyval.tn) = ast->createNode(0,0, variable_declaration_node);	
				if((yyvsp[-2].r.type)==6){
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),(yyvsp[-2].r.type1),visability,offset,(yyval.tn)) == 0)	
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				else{
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),t,visability,offset,(yyval.tn)) == 0) 
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 39:
#line 379 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_node);
											(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 40:
#line 382 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		int offset;
		if(i==1)
			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, variable_assigment_node);
		Type t=static_cast<Type>((yyvsp[-4].r.type));
		if((yyvsp[-4].r.type)==6){
			if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),(yyvsp[-4].r.type1),visability,offset,(yyval.tn)) == 0)	
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		}
		else{
			if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),t,visability,offset,(yyval.tn)) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");

				(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;
		}

		cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	
		  /*check expr type less or equal */;}
    break;

  case 41:
#line 405 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_assigment_node);
													(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 42:
#line 410 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {

		int offset;
 		if(i==1)
 			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		(yyval.tn) = ast->createNode(0,0, variable_declaration_node);
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),t,visability,offset,(yyval.tn)) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");

		cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;	;}
    break;

  case 43:
#line 428 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_node);
												(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 44:
#line 432 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,0, variable_assigment_node);
		(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 45:
#line 439 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");(yyval.tn) = ast->createNode(0,0, variable_assigment_node);
														(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 46:
#line 443 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout << "Enum \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_enum);;}
    break;

  case 47:
#line 444 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout << "Struct \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_struct);;}
    break;

  case 48:
#line 445 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout << "Array \n" ; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayone);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 49:
#line 446 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout <<"Array N \n ";				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayN);		(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 50:
#line 451 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 51:
#line 452 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 52:
#line 456 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, structNode);;}
    break;

  case 53:
#line 457 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn), structNode);;}
    break;

  case 54:
#line 462 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {;;}
    break;

  case 55:
#line 463 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {;;}
    break;

  case 56:
#line 464 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 57:
#line 465 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 466 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 467 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 468 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 469 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 477 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 63:
#line 478 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-5].tn)->expectedType;;}
    break;

  case 64:
#line 479 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-9].tn)->expectedType;;}
    break;

  case 65:
#line 480 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 66:
#line 487 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 67:
#line 488 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) =ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 68:
#line 489 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-6].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 69:
#line 490 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 70:
#line 498 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-4].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-6].tn)->expectedType;;}
    break;

  case 71:
#line 499 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-3].tn)->expectedType;;}
    break;

  case 72:
#line 500 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-5].tn),(yyvsp[-2].tn), ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-7].tn)->expectedType;;}
    break;

  case 73:
#line 506 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, ArrayNMultiNode);;}
    break;

  case 74:
#line 507 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode(0,0, ArrayNMultiNode));;}
    break;

  case 75:
#line 514 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[-1].tn),0, array_body2Node);
															;}
    break;

  case 76:
#line 516 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[0].tn),0, array_body2Node);
															;}
    break;

  case 77:
#line 518 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-4].tn), ast->createNode((yyvsp[-1].tn),0, array_body2Node));
															;}
    break;

  case 78:
#line 520 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode(0,0, array_body2Node));
															;}
    break;

  case 79:
#line 525 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);
													 (yyval.r.type1)="";
													cout<<"type: simple_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;}
    break;

  case 80:
#line 529 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    { (yyval.r.type1)=(yyvsp[0].r.type1);
													(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 81:
#line 536 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;
													(yyval.tn)=ast->createNode(0,0, simple_type_INT);  (yyval.tn)->expectedType=inttype;;}
    break;

  case 82:
#line 538 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;
													(yyval.tn)=ast->createNode(0,0, simple_type_CHAR);	(yyval.tn)->expectedType=chartype;;}
    break;

  case 83:
#line 540 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;
													(yyval.tn)=ast->createNode(0,0, simple_typeFLOAT);	(yyval.tn)->expectedType=floattype;;}
    break;

  case 84:
#line 542 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;
													(yyval.tn)=ast->createNode(0,0, simple_type_NSSTRING);	(yyval.tn)->expectedType=stringtype;;}
    break;

  case 85:
#line 544 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;
													(yyval.tn)=ast->createNode(0,0, simple_type_VOID);	(yyval.tn)->expectedType=voidtype;;}
    break;

  case 86:
#line 551 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.r.type)=6;
		(yyval.r.str)=(yyvsp[-1].r.str);
		(yyval.r.type1)=(yyvsp[-1].r.str);
		if(s->check_var_type((yyvsp[-1].r.str))==0)	
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","type is undefined");
		cout<<"complex_type:	IDENTIFIER	MULTI\n";
		(yyval.tn)=ast->createNode(0,0, complex_type);
			(yyval.tn)->expectedType=complextype;;}
    break;

  case 87:
#line 564 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node));;}
    break;

  case 88:
#line 566 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";	(yyval.tn) = ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node);;}
    break;

  case 89:
#line 572 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 90:
#line 574 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 91:
#line 580 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
	Type t=static_cast<Type>((yyvsp[-2].r.type));
	if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	param_list.clear();
	cout<<"class_method_declaration: PLUS p_type method_selector SEMI_COMA\n";
	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
	(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 92:
#line 589 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 93:
#line 598 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);
		;}
    break;

  case 94:
#line 605 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		yyclearin;
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);;}
    break;

  case 95:
#line 616 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 96:
#line 624 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 97:
#line 629 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 98:
#line 631 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 99:
#line 636 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
																(yyval.r.type1)=(yyvsp[-1].r.type1);
																(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 100:
#line 640 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 101:
#line 642 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 102:
#line 650 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {i=3;(yyval.r.str)=(yyvsp[-2].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);			;}
    break;

  case 103:
#line 652 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);		;}
    break;

  case 104:
#line 658 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 105:
#line 660 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 106:
#line 662 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 107:
#line 664 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 108:
#line 666 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"parameter_list: parameter\n";
																			(yyval.tn) =ast->createNode((yyvsp[0].tn),0, paramListNode);;}
    break;

  case 109:
#line 669 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
	add_param((yyvsp[-1].r.type));
	Type t=static_cast<Type>((yyvsp[-1].r.type));
	int offset=function_offset++;
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, parameter_Node);
	if((yyvsp[-1].r.type)==6){
	if(s->insertVariableInCurrentScope((yyvsp[0].r.str),(yyvsp[-1].r.type1),visability,offset,(yyval.tn)) == 0)	
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
	}
	else{
		if(s->insertVariableInCurrentScope((yyvsp[0].r.str),t,visability,offset,(yyval.tn)) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
	}
	cout<<"parameter: p_type IDENTIFIER\n";	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;
	param_list1.push_back((yyvsp[0].r.str));
	;}
    break;

  case 110:
#line 691 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"statment: try_catch_statment\n";;}
    break;

  case 111:
#line 695 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"statment: catch_statment\n";;}
    break;

  case 112:
#line 696 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"statment: finally_TRY_CATCH\n";;}
    break;

  case 113:
#line 699 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"Exception NullPointerException";;}
    break;

  case 114:
#line 700 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"Exception OutOfBoundryException";;}
    break;

  case 115:
#line 701 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"Exception CastException";;}
    break;

  case 116:
#line 709 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ImpNode);
		(yyval.tn)->currST=s->currScope;
		s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 117:
#line 718 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		Interface_name=(yyvsp[-2].r.str);
		i=2;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->check_Implementation((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redfine Implementation"); 
		else if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation Inhertance not found"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";;}
    break;

  case 118:
#line 731 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 119:
#line 741 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Implementation_Interface((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 120:
#line 749 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		//Interface_name=new char[30];
		//	cout<<$<r.str>2;
		//strcat(Interface_name,$<r.str>2);
		//cout<<Interface_name;
		i=2;(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Implementation_Interface((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER \n";
																;}
    break;

  case 121:
#line 767 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 122:
#line 768 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";;}
    break;

  case 123:
#line 769 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";;}
    break;

  case 124:
#line 774 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 125:
#line 775 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {								(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 126:
#line 779 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 127:
#line 780 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 128:
#line 783 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
	(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefNode);i=2;
	Scope* temp=s->currScope;
	insert_param();
	param_list1.clear();param_list.clear();
	s->currScope=s->currScope->parent;
	Type t=static_cast<Type>((yyvsp[0].r.type));
	if((yyvsp[-1].r.type)==6){
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),(yyvsp[-1].r.type1),param_list,(yyvsp[0].tn),function_offset) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	} 
	else
	{
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list,(yyvsp[0].tn),function_offset) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	}
	cout<<"class_implementation_definition: class_implementation_definition_header block_body";
	s->insert_scope((yyvsp[-1].r.str),temp);
	;}
    break;

  case 129:
#line 805 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    { (yyval.r.str)=(yyvsp[0].r.str);
										(yyval.r.type1)=(yyvsp[-1].r.type1);
										Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
										(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";;}
    break;

  case 130:
#line 809 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";;}
    break;

  case 131:
#line 813 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		Scope* temp=s->currScope;
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefNode);i=2;
		(yyval.r.str)=(yyvsp[-1].r.str);
		insert_param();
		param_list1.clear();param_list.clear();
		s->currScope=s->currScope->parent;
		Type t=static_cast<Type>((yyvsp[0].r.type));
		if((yyvsp[-1].r.type)==6){
			if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),(yyvsp[-1].r.type1),param_list,(yyvsp[0].tn),function_offset) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		} 
		else
		{
			if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list,(yyvsp[0].tn),function_offset) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		}
		s->insert_scope((yyvsp[-1].r.str),s->currScope);
		cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 132:
#line 835 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    { (yyval.r.str)=(yyvsp[0].r.str);
											 (yyval.r.type1)=(yyvsp[-1].r.type1);
											 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
											 ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";;}
    break;

  case 133:
#line 839 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 134:
#line 843 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,stmtListNode));cout<<"statement_list: statement_list statement\n";;}
    break;

  case 135:
#line 844 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,stmtListNode);cout<<"statement_list: statement\n";;}
    break;

  case 136:
#line 850 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: loop_statement\n";;}
    break;

  case 137:
#line 851 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: conditional_statement\n";;}
    break;

  case 138:
#line 852 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);cout<<"statement: expr\n";;}
    break;

  case 139:
#line 853 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: variable_declaration\n";;}
    break;

  case 140:
#line 854 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 141:
#line 854 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 142:
#line 855 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: return_statement\n";;}
    break;

  case 144:
#line 860 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,ReturnNode);cout<<"return_statement: RETURN expr\n";;}
    break;

  case 145:
#line 861 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 146:
#line 864 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: for_loop\n";;}
    break;

  case 147:
#line 865 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: while_loop\n";;}
    break;

  case 148:
#line 866 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 149:
#line 869 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ForNode);cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 150:
#line 873 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {	
		(yyval.tn)=ast->createNode((yyvsp[-5].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 151:
#line 880 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 152:
#line 882 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 153:
#line 884 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 154:
#line 886 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 155:
#line 893 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 156:
#line 895 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 157:
#line 897 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 158:
#line 902 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 159:
#line 907 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";;}
    break;

  case 160:
#line 910 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-3].tn),ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 161:
#line 913 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";;}
    break;

  case 162:
#line 916 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";;}
    break;

  case 163:
#line 920 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 164:
#line 927 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 165:
#line 928 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 166:
#line 929 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 167:
#line 930 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 168:
#line 931 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 169:
#line 932 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 170:
#line 933 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";;}
    break;

  case 171:
#line 938 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 172:
#line 939 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 173:
#line 940 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 174:
#line 941 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 175:
#line 942 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 176:
#line 943 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 177:
#line 944 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 178:
#line 945 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 179:
#line 946 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 180:
#line 949 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:assign_expr\n";	;}
    break;

  case 181:
#line 950 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 182:
#line 953 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 183:
#line 954 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 184:
#line 955 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 185:
#line 956 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 186:
#line 957 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 187:
#line 958 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 188:
#line 959 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 189:
#line 960 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 190:
#line 961 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 191:
#line 962 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 192:
#line 963 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 193:
#line 964 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 194:
#line 969 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 195:
#line 973 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";
										;}
    break;

  case 196:
#line 979 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		var.push((yyvsp[0].r.str));				
		(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0,0,IdentNode));
		cout<<"long_id: long_id.IDENTIFIER\n";;}
    break;

  case 197:
#line 984 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"long_id: long_id.message_call\n";;}
    break;

  case 198:
#line 985 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,IdentNode);
		if(strcmp(lexer->YYText(),".")==0) 
			var.push((yyvsp[0].r.str));
		if(s->getVariableFromCurrentScope((yyvsp[0].r.str))==0) {
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
		}
		cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 199:
#line 998 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);    (yyval.tn)->expectedType=stringtype;
									cout<<"simple_expr:STRING_VAL\n";
									(yyval.tn)->item=(void *)yylval.r.str;;}
    break;

  case 200:
#line 1001 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,intNode);	 (yyval.tn)->expectedType=inttype;   (yyval.tn)->item=(void *)yylval.r.i;
								 cout<<" \n\n\n\n\n\n\n\n\n"<<(int)(yyval.tn)->item<<" \n\n\n\n\n\n\n\n\n";
									;}
    break;

  case 201:
#line 1005 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,floatNode);cout<<"simple_expr:FLOAT_VAL\n";	(yyval.tn)->expectedType=floattype;
								// $<tn>$->item=(void *)yylval.r.f;
								;}
    break;

  case 202:
#line 1008 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);  
								cout<<"simple_expr:STRING_VAL\n";;}
    break;

  case 203:
#line 1010 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,CharNode);cout<<"simple_expr:CHAR_VAL\n";	(yyval.tn)->expectedType=chartype;
								 (yyval.tn)->item=(void *)yylval.r.c;;}
    break;

  case 204:
#line 1013 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=(yyvsp[0].tn);
		char *type;
		bool ok1=true;
		if(s->getVariableNameFromInterface("I","l")=="##")
			ok1=false;
		else{
			type=s->getVariableNameFromInterface("I","l");
			cout<<"ok";
		}
		while((!var.empty())&&(ok1)){
			var.pop();
			cout<<type;
			if(var.empty())
				ok1=false;
			else if(s->getVariableNameFromInterface(type,var.front())=="##")
			{
				cout<<"error datamember not found";
				ok1=false;
			}
			else if(s->getVariableNameFromInterface(type,var.front())=="#$"){
				cout<<"error Interface not found";
				ok1=false;
			}
			else if(s->getVariableSpecFromInterface(type,var.front())!=3){
				cout<<"error not public";
				ok1=false;
			}
			else{
					type=s->getVariableNameFromInterface(type,var.front());
			}
			
	}
	cout<<"simple_expr:long_id\n";;}
    break;

  case 205:
#line 1048 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";
											;}
    break;

  case 206:
#line 1050 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";;}
    break;

  case 207:
#line 1051 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";;}
    break;

  case 208:
#line 1052 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";;}
    break;

  case 209:
#line 1054 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";;}
    break;

  case 210:
#line 1055 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,SmpExpNode);cout<<"expr:p_type expr\n";;}
    break;

  case 211:
#line 1060 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 212:
#line 1061 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";;}
    break;

  case 213:
#line 1066 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),WhileNode);cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 214:
#line 1069 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 215:
#line 1070 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 216:
#line 1071 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 217:
#line 1072 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 218:
#line 1075 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 219:
#line 1077 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),CondtiNode);cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 220:
#line 1078 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),CondtiNode);
		cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 221:
#line 1081 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,CondtiNode);cout<<"conditional_statement: switch\n";;}
    break;

  case 222:
#line 1084 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-1].tn),SwitchNode);cout<<"switch statment";;}
    break;

  case 223:
#line 1085 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 224:
#line 1086 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 225:
#line 1087 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 226:
#line 1088 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 227:
#line 1097 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
									(yyval.tn)=ast->createNode((yyvsp[-6].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[0].tn),SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";;}
    break;

  case 228:
#line 1101 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 229:
#line 1102 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-2].tn),SwtBdyNode);cout<<"default statment";;}
    break;

  case 230:
#line 1103 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 231:
#line 1108 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 232:
#line 1109 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 233:
#line 1113 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 234:
#line 1114 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 235:
#line 1117 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 236:
#line 1118 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 237:
#line 1119 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 238:
#line 1120 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 239:
#line 1123 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 240:
#line 1126 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,SndrNode);cout<<"sender: message_call\n";;}
    break;

  case 241:
#line 1127 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"sender: IDENTIFIER\n";;}
    break;

  case 242:
#line 1130 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"message: IDENTIFIER\n";;}
    break;

  case 243:
#line 1131 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,MsgNode);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 244:
#line 1134 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,argListNode));cout<<"argument_list: argument_list argument\n";;}
    break;

  case 245:
#line 1135 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argListNode);cout<<"argument_list: argument\n";;}
    break;

  case 246:
#line 1138 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 247:
#line 1139 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 248:
#line 1140 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 249:
#line 1141 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 250:
#line 1142 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 251:
#line 1144 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ProtclNode);
	s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 252:
#line 1150 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclHdrNode);
		(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Interface((yyvsp[0].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","there is inteface in the same name");
		if( s->insertProtocolInCurrentScope((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Protocol");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";;}
    break;

  case 253:
#line 1162 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";;}
    break;

  case 254:
#line 1164 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";;}
    break;

  case 255:
#line 1167 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";;}
    break;

  case 256:
#line 1170 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3585 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1173 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"

void yyerror(char *s) {
	;
}

int yylex(){
	return lexer->yylex();

}
void main(void){
	Parser* p = new Parser();			
	p->parse();
	Er->printErrQueue();	
	system("pause");
	
}

