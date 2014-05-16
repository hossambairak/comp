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
#line 2 "D:\\comp\\yacc.y"

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
#line 152 "D:\\comp\\yacc.y"
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
#define YYLAST   1031

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  83
/* YYNRULES -- Number of rules. */
#define YYNRULES  260
/* YYNRULES -- Number of states. */
#define YYNSTATES  549

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
     418,   422,   426,   427,   432,   433,   434,   441,   443,   447,
     452,   457,   461,   463,   466,   470,   478,   481,   483,   485,
     487,   490,   495,   500,   504,   507,   511,   514,   517,   520,
     522,   524,   526,   529,   533,   536,   539,   543,   546,   549,
     551,   553,   555,   558,   560,   561,   564,   566,   568,   572,
     576,   578,   580,   582,   585,   594,   603,   611,   620,   628,
     636,   643,   651,   659,   667,   674,   681,   688,   694,   699,
     703,   708,   712,   715,   719,   721,   725,   729,   733,   737,
     741,   744,   748,   752,   756,   758,   760,   764,   768,   772,
     776,   780,   783,   787,   791,   795,   798,   802,   806,   808,
     812,   816,   818,   820,   822,   824,   825,   829,   831,   833,
     837,   841,   845,   849,   853,   856,   860,   863,   866,   871,
     876,   880,   885,   890,   893,   898,   900,   908,   916,   924,
     932,   940,   950,   960,   966,   972,   974,   976,   978,   980,
     985,   990,   994,   999,  1004,  1006,  1008,  1010,  1014,  1017,
    1019,  1022,  1025,  1029,  1032,  1036,  1039,  1042,  1046,  1049,
    1052
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      73,     0,    -1,    74,    -1,    74,    75,    -1,    75,    -1,
      76,    -1,   112,    -1,   152,    -1,    77,    78,    -1,    10,
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
       1,    -1,    95,    11,    47,   135,    17,    -1,    95,    11,
      47,   135,     1,    -1,    28,    95,    11,    17,    -1,    28,
      95,    11,     1,    -1,    28,    95,    11,    47,   135,    17,
      -1,    28,    95,    11,    47,   135,     1,    -1,    87,    -1,
      88,    -1,    90,    -1,    92,    -1,    66,    22,    80,    23,
      11,    17,    -1,    65,    66,    22,    80,    23,    11,    17,
      -1,    64,    11,    22,    89,    23,    17,    -1,    64,    11,
      22,    89,    23,    80,    17,    -1,    95,    11,    17,    -1,
      89,    95,    11,    17,    -1,    95,    11,    12,   135,    17,
      -1,    89,    95,    11,    12,   135,    17,    -1,    89,    28,
      95,    11,    17,    -1,    28,    95,    11,    17,    -1,    89,
      28,    95,    11,    12,   135,    17,    -1,    28,    95,    11,
      12,   135,    17,    -1,    95,    11,    51,    41,    52,    47,
      22,    23,    17,    -1,    95,    11,    51,    41,    52,    17,
      -1,    95,    11,    51,    41,    52,    47,    22,    91,    23,
      17,    -1,    95,    11,    51,    52,    47,    22,    91,    23,
      17,    -1,    91,    24,   130,    -1,   130,    -1,    91,    24,
      51,    41,    52,    47,   130,    -1,    51,    41,    52,    47,
     130,    -1,    95,    11,    93,    47,    22,    23,    17,    -1,
      95,    11,    93,    17,    -1,    95,    11,    93,    47,    22,
      94,    23,    17,    -1,    51,    41,    52,    51,    41,    52,
      -1,    93,    51,    41,    52,    -1,    22,    91,    23,    -1,
     130,    -1,    94,    24,    22,    91,    23,    -1,    94,    24,
     130,    -1,    96,    -1,    97,    -1,    16,    -1,    15,    -1,
      14,    -1,    13,    -1,    29,    -1,    11,    43,    -1,    98,
      99,    -1,    99,    -1,   100,    -1,   101,    -1,    30,   102,
     103,    17,    -1,    30,   102,   103,     1,    -1,    30,   103,
      17,    -1,    30,   103,     1,    -1,    31,   102,   103,    17,
      -1,    31,   103,    17,    -1,    31,   102,   103,     1,    -1,
      31,   103,     1,    -1,    32,    95,    33,    -1,     1,    95,
      33,    -1,    32,    95,     1,    -1,    -1,    11,    12,   104,
     107,    -1,    -1,    -1,    11,   105,    11,    12,   106,   107,
      -1,    11,    -1,   107,    12,   108,    -1,   107,    11,    12,
     108,    -1,   107,    11,     1,   108,    -1,   107,    11,   108,
      -1,   108,    -1,   102,    11,    -1,     3,   137,   110,    -1,
       4,    32,     5,   111,    33,   137,   110,    -1,     9,   137,
      -1,     6,    -1,     7,    -1,     8,    -1,   113,   114,    -1,
      34,    11,    12,    11,    -1,    34,    11,     1,    11,    -1,
      34,    11,    11,    -1,    34,    11,    -1,    81,   115,    27,
      -1,    81,    27,    -1,   115,    27,    -1,   115,   116,    -1,
     116,    -1,   117,    -1,   119,    -1,   118,   137,    -1,    30,
     102,   103,    -1,    30,   103,    -1,   120,   137,    -1,    31,
     102,   103,    -1,    31,   103,    -1,   121,   122,    -1,   122,
      -1,   125,    -1,   141,    -1,   130,    17,    -1,    86,    -1,
      -1,   123,   137,    -1,   124,    -1,   109,    -1,    55,   130,
      17,    -1,    55,   130,     1,    -1,   126,    -1,   138,    -1,
     140,    -1,   127,   122,    -1,    46,    32,   128,    17,   129,
      17,   130,    33,    -1,    46,    32,   128,    17,   129,    17,
     130,     1,    -1,    46,   128,    17,   129,    17,   130,    33,
      -1,    46,     1,   128,    17,   129,    17,   130,    33,    -1,
      46,    32,    17,   129,    17,   130,    33,    -1,    46,    32,
      17,   129,    17,   130,     1,    -1,    46,    17,   129,    17,
     130,    33,    -1,    46,     1,    17,   129,    17,   130,    33,
      -1,    46,    32,   128,    17,    17,   130,    33,    -1,    46,
      32,   128,    17,   129,    17,    33,    -1,    46,    32,   128,
      17,    17,    33,    -1,    46,    32,    17,   129,    17,    33,
      -1,    46,    32,    17,    17,   130,    33,    -1,    46,    32,
      17,    17,    33,    -1,    16,    11,    47,   130,    -1,    16,
      11,   130,    -1,    16,    11,     1,   130,    -1,    11,    47,
     130,    -1,    11,   130,    -1,    11,     1,   130,    -1,    11,
      -1,   130,    25,   130,    -1,   130,    26,   130,    -1,   130,
      39,   130,    -1,   130,    42,   130,    -1,   130,    44,   130,
      -1,    45,   130,    -1,    32,   129,    33,    -1,   129,    35,
     129,    -1,   129,    36,   129,    -1,   133,    -1,   135,    -1,
     132,    25,   132,    -1,   132,    26,   132,    -1,   132,    39,
     132,    -1,   132,    42,   132,    -1,   132,    44,   132,    -1,
      45,   132,    -1,    32,   131,    33,    -1,   131,    35,   131,
      -1,   131,    36,   131,    -1,     1,   132,    -1,    32,   131,
       1,    -1,     1,   131,    33,    -1,   135,    -1,   134,    47,
     135,    -1,   134,    58,    11,    -1,   147,    -1,    11,    -1,
      37,    -1,    41,    -1,    -1,    38,   136,    37,    -1,    40,
      -1,   134,    -1,   135,    30,   135,    -1,   135,    31,   135,
      -1,   135,    43,   135,    -1,   135,    48,   135,    -1,    32,
     135,    33,    -1,   102,   135,    -1,    22,   121,    23,    -1,
      22,    23,    -1,   139,   122,    -1,    49,    32,   129,    33,
      -1,    49,    32,   129,     1,    -1,    49,   129,    33,    -1,
      49,     1,   129,    33,    -1,    57,   122,   139,    17,    -1,
     146,   122,    -1,   146,   122,    68,   122,    -1,   142,    -1,
      60,    32,   144,    33,    22,   143,    23,    -1,    60,     1,
     144,    33,    22,   143,    23,    -1,    60,    32,   144,     1,
      22,   143,    23,    -1,    60,    32,   144,    33,    22,   143,
       1,    -1,    60,    32,   144,    33,     1,   143,    23,    -1,
      63,    32,   145,    33,    12,   122,    61,    17,   143,    -1,
      63,    32,   145,    33,    12,   122,     1,    17,   143,    -1,
      62,    12,   122,    61,    17,    -1,    62,    12,   122,     1,
      17,    -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,
      50,    32,   129,    33,    -1,    50,    32,   129,     1,    -1,
      50,   129,    33,    -1,    50,     1,   129,    33,    -1,    51,
     148,   149,    52,    -1,   147,    -1,    11,    -1,    11,    -1,
      11,    12,   150,    -1,   150,   151,    -1,   151,    -1,    12,
     135,    -1,     1,   135,    -1,    11,    12,   135,    -1,    11,
     135,    -1,    11,     1,   135,    -1,   153,   154,    -1,    56,
      11,    -1,    79,    98,    27,    -1,    98,    27,    -1,    79,
      27,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   172,   172,   177,   178,   181,   182,   183,   189,   199,
     217,   226,   235,   241,   255,   260,   264,   269,   273,   277,
     281,   285,   292,   301,   302,   303,   309,   311,   313,   320,
     322,   324,   331,   339,   343,   352,   354,   357,   365,   387,
     391,   414,   419,   437,   441,   448,   452,   453,   454,   455,
     460,   461,   465,   466,   471,   472,   473,   474,   475,   476,
     477,   478,   486,   487,   488,   489,   496,   497,   498,   499,
     507,   508,   509,   515,   516,   523,   525,   527,   529,   534,
     538,   545,   547,   549,   551,   553,   560,   573,   575,   581,
     583,   589,   598,   607,   614,   625,   633,   638,   640,   645,
     649,   651,   659,   659,   661,   664,   661,   666,   675,   677,
     679,   681,   683,   688,   704,   708,   709,   712,   713,   714,
     722,   731,   744,   754,   762,   780,   781,   782,   787,   788,
     792,   793,   796,   818,   822,   826,   848,   852,   856,   857,
     863,   864,   865,   866,   867,   867,   868,   869,   873,   874,
     877,   878,   879,   882,   888,   894,   896,   898,   901,   907,
     909,   911,   916,   921,   924,   927,   930,   934,   942,   943,
     944,   945,   946,   947,   948,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   964,   965,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   984,   988,
     994,   999,  1000,  1015,  1022,  1030,  1030,  1038,  1041,  1076,
    1078,  1079,  1080,  1082,  1083,  1088,  1089,  1094,  1097,  1098,
    1099,  1100,  1103,  1105,  1106,  1109,  1112,  1113,  1114,  1115,
    1116,  1125,  1129,  1130,  1131,  1136,  1137,  1141,  1142,  1145,
    1146,  1147,  1148,  1151,  1154,  1155,  1158,  1159,  1162,  1163,
    1166,  1167,  1168,  1169,  1170,  1172,  1178,  1189,  1192,  1195,
    1198
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
  "instance_method_declaration", "p_type", "method_selector", "@1", "@2",
  "@3", "parameter_list", "parameter", "try_catch", "catch_statment",
  "Exception_type", "class_implementation", "class_implementation_header",
  "class_implementation_body", "implementation_definition_list",
  "implementation_definition", "class_implementation_definition",
  "class_implementation_definition_header",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "statement_list",
  "statement", "@4", "return_statement", "loop_statement", "for_loop",
  "for_loop_header", "for_initializer", "logic_expr", "expr",
  "logic_expr2", "expr2", "assign_expr", "long_id", "simple_expr", "@5",
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
     102,   102,   104,   103,   105,   106,   103,   103,   107,   107,
     107,   107,   107,   108,   109,   110,   110,   111,   111,   111,
     112,   113,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   117,   118,   118,   119,   120,   120,   121,   121,
     122,   122,   122,   122,   123,   122,   122,   122,   124,   124,
     125,   125,   125,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   133,
     134,   134,   134,   135,   135,   136,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   137,   137,   138,   139,   139,
     139,   139,   140,   141,   141,   141,   142,   142,   142,   142,
     142,   143,   143,   143,   143,   144,   144,   145,   145,   146,
     146,   146,   146,   147,   148,   148,   149,   149,   150,   150,
     151,   151,   151,   151,   151,   152,   153,   154,   154,   154,
     154
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
       3,     3,     0,     4,     0,     0,     6,     1,     3,     4,
       4,     3,     1,     2,     3,     7,     2,     1,     1,     1,
       2,     4,     4,     3,     2,     3,     2,     2,     2,     1,
       1,     1,     2,     3,     2,     2,     3,     2,     2,     1,
       1,     1,     2,     1,     0,     2,     1,     1,     3,     3,
       1,     1,     1,     2,     8,     8,     7,     8,     7,     7,
       6,     7,     7,     7,     6,     6,     6,     5,     4,     3,
       4,     3,     2,     3,     1,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     2,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     0,     3,     1,     1,     3,
       3,     3,     3,     3,     2,     3,     2,     2,     4,     4,
       3,     4,     4,     2,     4,     1,     7,     7,     7,     7,
       7,     9,     9,     5,     5,     1,     1,     1,     1,     4,
       4,     3,     4,     4,     1,     1,     1,     3,     2,     1,
       2,     2,     3,     2,     3,     2,     2,     3,     2,     2,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   256,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,     0,   120,     0,   129,   130,     0,   131,     0,
     260,     0,     0,   255,     0,    12,    11,     0,   123,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   107,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   134,     0,   137,   126,     0,   127,   128,     0,
     132,   135,   259,     0,   258,    10,     9,   122,   121,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,   102,     0,     0,     0,    94,    93,
       0,    98,    96,    15,     0,    16,    17,   133,   136,   125,
       0,   202,   216,     0,   203,   205,   207,   204,     0,     0,
       0,     0,     0,     0,     0,   143,     0,   147,     0,   139,
       0,   146,   140,   150,     0,     0,   184,   208,   185,   151,
       0,   152,   141,   225,     0,   201,   257,     0,     0,     0,
       0,    39,    38,     0,     0,     0,    24,    25,   100,     0,
       0,   101,    99,    92,    91,    97,    95,    14,     0,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   202,
       0,     0,     0,     0,     0,     0,     0,   245,   244,     0,
       0,     0,     0,     0,   214,   215,   138,   145,   153,   142,
       0,     0,     0,     0,     0,     0,   217,   223,    43,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,   103,   112,   105,     0,     0,   114,   213,
     206,     0,     0,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,   185,   180,   220,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   246,     0,   149,
     148,     0,   235,   236,     0,     0,   199,   200,   209,   210,
     211,   212,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    40,     0,     0,     0,     0,   113,     0,     0,
       0,     0,   116,     0,     0,   173,   171,     0,     0,   169,
       0,     0,     0,     0,     0,     0,   221,   219,   218,   182,
     183,   175,   176,   177,   178,   179,   242,   240,   239,     0,
     243,   222,     0,     0,     0,   224,    45,    44,     0,    52,
       0,     0,     0,     0,    54,     0,    50,    63,     0,     0,
       0,     0,     0,     0,    76,    74,     0,     0,   111,   108,
     106,     0,     0,     0,   170,   168,   181,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
       0,     0,     0,     0,    59,    53,     0,     0,    55,     0,
      51,     0,     0,     0,     0,    67,     0,    70,     0,     0,
     110,   109,   117,   118,   119,     0,     0,     0,   160,   166,
     165,     0,   164,     0,     0,     0,   251,     0,     0,   253,
     250,   248,     0,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    56,     0,     0,    73,     0,     0,     0,    75,
      72,     0,    78,     0,   161,     0,   159,   158,   162,   163,
       0,   156,   254,   252,     0,     0,   227,   228,   230,   229,
     226,    61,     0,    57,    62,     0,     0,    65,     0,    66,
       0,     0,   157,   155,   154,     0,     0,     0,     0,   237,
     238,   198,     0,    60,    64,     0,     0,    77,   115,     0,
       0,     0,   195,     0,     0,   198,   191,     0,     0,     0,
       0,     0,     0,     0,     0,    69,     0,   234,   233,   197,
     196,   192,   193,   194,   186,   187,   188,   189,   190,     0,
       0,     0,    68,     0,     0,     0,     0,   232,   231
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   155,    68,    69,   242,    70,   414,
      71,   185,   373,    72,    73,    74,    26,    27,    28,    29,
     156,    81,   189,   125,   320,   253,   254,   157,   258,   425,
       9,    10,    33,    34,    35,    36,    37,    38,    39,   158,
     159,   160,   161,   162,   163,   164,   207,   292,   213,   499,
     514,   166,   167,   168,   201,   100,   169,   170,   171,   172,
     173,   444,   294,   502,   174,   175,   219,   288,   397,   398,
      11,    12,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -374
static const short int yypact[] =
{
      23,    24,   163,   165,    45,    23,  -374,  -374,   492,  -374,
     374,  -374,   399,   592,   390,  -374,  -374,  -374,   223,   175,
    -374,   297,   297,  -374,   466,   401,   518,  -374,  -374,  -374,
     297,   297,   585,  -374,   629,  -374,  -374,   178,  -374,   178,
    -374,   643,   658,  -374,   197,  -374,   201,   212,  -374,   235,
     -27,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   636,  -374,
     248,   195,   251,   981,  -374,   249,   249,  -374,  -374,  -374,
    -374,  -374,   270,  -374,  -374,  -374,   200,   636,   121,   636,
     296,   168,   296,   210,  -374,   675,   680,  -374,   700,  -374,
    -374,   296,  -374,   296,  -374,  -374,   719,  -374,  -374,   434,
    -374,  -374,  -374,   729,  -374,  -374,  -374,  -374,  -374,  -374,
     308,   343,   385,   175,  -374,  -374,  -374,  -374,   249,    59,
     319,   370,  -374,   413,  -374,   440,    18,   214,  -374,  -374,
     278,  -374,  -374,  -374,   742,  -374,  -374,  -374,  -374,  -374,
     178,   -27,  -374,   703,  -374,  -374,  -374,  -374,   310,   265,
     767,    50,   930,   626,    36,  -374,   930,  -374,   541,  -374,
     178,  -374,  -374,  -374,   626,   456,  -374,     5,   439,  -374,
     626,  -374,  -374,  -374,   626,  -374,  -374,    68,   962,   175,
     217,  -374,  -374,   930,   111,   143,  -374,  -374,  -374,    61,
     447,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   150,   428,
     595,   455,   549,   376,   484,   779,   569,   493,   323,  -374,
     323,   930,   403,   533,   323,   323,   432,  -374,  -374,   490,
     316,   469,   779,   779,   439,  -374,  -374,  -374,  -374,  -374,
     930,   510,   930,   930,   930,   930,  -374,   458,  -374,  -374,
     930,   636,  1002,   513,   234,   520,    83,   489,   500,  -374,
     531,   530,   550,   528,  -374,  -374,   542,   178,  -374,  -374,
    -374,   779,   559,   703,   930,  -374,   795,   323,   185,   725,
     572,   779,   758,    31,   595,  -374,  -374,   779,   779,   930,
     930,   930,   930,   930,   804,    85,  -374,   587,   556,  -374,
    -374,   596,   442,   533,   591,   110,   439,  -374,   261,   261,
    -374,  -374,   626,   174,   607,   273,   636,   642,   339,   646,
     654,  -374,  -374,   162,   660,   155,   628,  -374,    38,    61,
      61,   682,  -374,   305,   779,  -374,  -374,   703,   930,  -374,
     821,   930,   812,   337,   747,   350,  -374,  -374,   836,   532,
     532,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   836,   134,
    -374,  -374,   671,   681,   116,  -374,  -374,  -374,   359,  -374,
     269,   684,   382,   930,  -374,   696,  -374,  -374,   707,   692,
     948,   948,   705,   571,  -374,  -374,   514,    61,  -374,  -374,
     528,   638,   930,   353,  -374,  -374,  -374,   704,  -374,   706,
     827,   847,   425,   930,   930,   865,   930,    37,  -374,   599,
     599,   599,   599,   930,  -374,  -374,   386,   930,  -374,   237,
    -374,   872,   686,    96,   597,  -374,   645,  -374,   708,   889,
    -374,  -374,  -374,  -374,  -374,   712,   714,   930,  -374,  -374,
    -374,   115,  -374,   718,   906,   720,   439,   703,   930,   439,
     439,  -374,   740,   723,   738,   744,   748,   118,   301,   930,
    -374,   349,  -374,   757,   655,  -374,   730,   760,   955,  -374,
    -374,   948,  -374,   178,  -374,   750,  -374,  -374,  -374,  -374,
     135,  -374,   439,   439,   626,   913,  -374,  -374,  -374,  -374,
    -374,  -374,   352,  -374,  -374,   764,   728,  -374,    98,  -374,
     677,   150,  -374,  -374,  -374,    13,   683,   683,   930,   673,
     558,   439,   753,  -374,  -374,   930,   737,  -374,  -374,   778,
     780,   856,   558,    94,   558,   595,  -374,   913,   913,   930,
     930,   930,   930,   930,   788,  -374,   754,  -374,  -374,  -374,
    -374,  -374,   532,   532,  -374,  -374,  -374,  -374,  -374,   626,
     930,    16,  -374,   785,   786,   599,   599,  -374,  -374
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -374,  -374,  -374,   805,  -374,  -374,  -374,   797,  -106,    34,
    -374,   751,   749,  -374,   -10,  -374,  -374,  -374,  -374,  -365,
    -374,  -374,  -374,   -53,  -374,  -374,     6,    -6,  -374,  -374,
     -19,    12,  -374,  -374,  -374,   501,  -278,  -374,   331,  -374,
    -374,  -374,  -374,   793,   -24,  -374,  -374,  -374,  -374,  -374,
    -149,  -374,  -374,  -374,  -374,  -374,   213,  -127,   -99,   -63,
     -17,  -374,   113,    15,  -374,   -38,  -374,   605,  -374,  -374,
    -374,  -373,   606,  -374,  -374,  -138,  -374,  -374,  -374,   437,
    -374,  -374,  -374
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -248
static const short int yytable[] =
{
     165,   101,    80,    82,   221,   110,   416,   180,    67,   226,
      98,    91,    93,   218,   509,   228,   109,   543,    42,   191,
      90,   236,   212,   216,   123,   237,   126,   445,   446,   447,
      86,    88,   337,     1,    83,    13,    90,   222,   394,   376,
     378,   379,    92,    94,    32,    16,   454,   103,   395,   396,
     377,   192,   230,   220,   165,   117,    67,     2,    85,   165,
     181,   217,    77,   231,   338,   165,   277,   278,   223,   238,
      79,   165,    98,   244,   510,   165,   182,   544,   268,     3,
      90,   272,    90,   273,   311,   239,   347,   284,   285,  -247,
     126,   134,   127,    79,   130,   530,   490,    90,   420,   421,
     312,   151,   198,   137,   265,   138,   183,   217,   117,   217,
     184,   353,   275,   232,   233,   240,   466,   401,   348,   479,
     277,   278,   227,   293,   293,   243,   234,   531,    90,   517,
     518,   235,  -104,   124,   323,   394,   493,   456,   402,   506,
     330,   480,   333,   354,   335,   395,   396,   151,   467,   151,
     339,   340,   247,   355,   256,   123,    77,   126,   200,   257,
     249,   123,   126,   248,   325,   326,   209,   329,   494,   128,
     252,   224,   547,   548,    14,   356,    15,   371,   372,   367,
     341,   342,   343,   344,   345,   129,    75,   143,   304,   307,
     250,   357,   144,   145,   251,   146,   147,   383,   246,   360,
      99,   120,   331,   165,   232,   233,   151,   392,   105,   368,
     123,   131,   106,   369,   126,   193,   374,   234,   120,   322,
     277,   278,   235,   107,   121,   274,   122,   132,   384,   385,
     274,   194,   387,   389,    50,   120,    51,    52,    53,    54,
     245,   121,    55,    56,    57,   296,   108,   298,   299,   300,
     301,    58,    59,   361,   452,   303,   199,   309,   121,   111,
      50,   112,    51,    52,    53,    54,   208,   232,   233,   199,
     120,   415,   415,   113,   123,   218,   209,    58,    59,   195,
     234,   119,   274,   426,    75,   235,   405,    60,    61,    62,
     359,   431,   433,   121,   435,   196,   199,   210,    77,   252,
     252,   252,   144,   145,   234,   146,   147,    78,    78,   235,
     211,   202,   415,    60,    61,    62,   151,   289,   481,   177,
     462,   203,   382,   123,    77,   495,   204,   205,   465,    79,
     186,   232,   233,   290,   141,   470,    51,    52,    53,    54,
     277,   278,   206,   199,   234,   199,   199,   199,   199,   235,
     218,   363,    59,   199,   390,   267,   364,   252,   252,   489,
     144,   145,   415,   146,   147,   178,   483,   393,   211,   503,
     427,   403,   277,   278,   151,   165,   404,   263,   409,   232,
     233,   187,   232,   233,   123,   277,   278,   209,   277,   278,
     541,    47,   234,  -174,   407,   234,    18,   235,   449,   408,
     235,    48,    49,   450,    30,    31,   525,   179,   143,   436,
     439,   440,  -124,   144,   145,   262,   146,   147,   448,   270,
    -124,  -124,   451,   264,    19,   491,    40,   151,    87,    21,
      22,    21,    22,   511,   513,    77,   276,   140,   277,   278,
     165,   542,   434,   123,   126,   141,   188,    51,    52,    53,
      54,   190,   472,   473,   532,   533,  -144,   142,   500,   255,
     277,   278,    58,    59,   482,   286,   143,   277,   278,   232,
     233,   144,   145,   229,   146,   147,   199,   277,   278,   512,
     148,   516,   234,   149,   150,   151,   231,   235,    18,   152,
     501,   153,   260,    84,   154,   266,    21,    22,    60,    61,
      62,   287,   534,   535,   536,   537,   538,   199,   199,   199,
     271,   501,   515,   501,    18,    77,   199,    19,   149,    20,
     199,   297,    21,    22,   308,    50,   302,    51,    52,    53,
      54,   310,   501,   501,   501,   501,   501,   501,   501,   318,
     319,   313,    77,    59,   140,    89,    79,   314,    21,    22,
     199,   199,   141,   315,    51,    52,    53,    54,   279,   280,
     203,   317,   199,  -144,   225,   204,   261,  -248,  -248,    58,
      59,   316,   281,   143,   321,   282,   324,   283,   144,   145,
     203,   146,   147,   519,   520,   204,   269,   148,   199,   334,
     149,   150,   151,    44,   418,   419,   152,   521,   153,   349,
     522,   154,   523,    45,    46,    60,    61,    62,   350,   199,
     199,   199,    95,   351,   -13,    30,    31,   -13,   358,   -13,
     457,   458,   -13,   -13,   352,   232,   233,    77,   259,   140,
     199,   199,   199,   199,   199,   199,   199,   141,   234,    51,
      52,    53,    54,   235,   422,   423,   424,    50,  -144,    51,
      52,    53,    54,   362,    58,    59,    97,   365,   143,    30,
      31,   442,   443,   144,   145,    59,   146,   147,   459,   458,
     102,   366,   148,    21,    22,   149,   150,   151,   485,   458,
     375,   152,   370,   153,   496,   104,   154,   381,    21,    22,
      60,    61,    62,   399,   141,   406,    51,    52,    53,    54,
     507,   458,   133,   400,    77,    21,    22,   135,   517,   518,
      21,    22,    59,   410,   141,   497,    51,    52,    53,    54,
     144,   145,   417,   146,   147,   460,    77,   136,   498,   411,
      21,    22,    59,   412,   151,   143,   209,   428,   455,   429,
     144,   145,   332,   146,   147,   463,   139,   464,    77,    30,
      31,   468,   474,   471,   151,   475,   176,   267,   209,    21,
      22,   476,   144,   145,   391,   146,   147,   477,   214,   197,
     211,   478,    21,    22,   484,   505,   151,   487,   209,   267,
      77,   504,   486,   492,   144,   145,   524,   146,   147,   526,
     209,   336,   211,   277,   278,   527,   327,   528,   151,   215,
     539,   540,   545,   546,   144,   145,   209,   146,   147,    41,
      17,   267,   211,    77,   116,   118,   144,   145,   151,   146,
     147,   380,   508,   209,   211,    96,   291,   143,    77,   295,
     151,     0,   144,   145,   441,   146,   147,   346,   209,   277,
     278,     0,   328,     0,   143,   388,   151,     0,    77,   144,
     145,     0,   146,   147,   386,     0,   277,   278,   209,   143,
     430,     0,     0,   151,   144,   145,   437,   146,   147,  -181,
       0,  -181,  -181,    77,     0,     0,   209,   438,   151,   143,
     432,     0,     0,   209,   144,   145,     0,   146,   147,   529,
      77,   517,   518,     0,     0,   453,     0,   143,   151,     0,
     209,     0,   144,   145,   143,   146,   147,    77,     0,   144,
     145,   461,   146,   147,   496,     0,   151,   209,     0,     0,
       0,   143,     0,   413,   209,     0,   144,   145,     0,   146,
     147,    77,     0,     0,     0,     0,     0,     0,   143,   469,
     151,   209,     0,   144,   145,   497,   146,   147,     0,    77,
     144,   145,     0,   146,   147,     0,    77,   151,   498,   209,
       0,     0,   143,     0,   151,     0,   209,   144,   145,     0,
     146,   147,     0,    50,     0,    51,    52,    53,    54,     0,
     143,   151,   114,     0,     0,   144,   145,   143,   146,   147,
     241,    59,   144,   145,     0,   146,   147,     0,     0,   413,
      55,    56,    57,     0,   115,     0,   488,     0,   -28,     0,
       0,   -28,   -28,    50,     0,    51,    52,    53,    54,     0,
       0,     0,     0,     0,     0,   305,     0,     0,     0,     0,
     306,    59
};

static const short int yycheck[] =
{
      99,    39,    21,    22,   153,    58,   371,   113,    18,   158,
      34,    30,    31,   151,     1,   164,    43,     1,    12,     1,
      26,   170,   149,   150,    77,   174,    79,   400,   401,   402,
      24,    25,     1,    10,    22,    11,    42,     1,     1,     1,
     318,   319,    30,    31,    10,     0,   411,    41,    11,    12,
      12,    33,    47,   152,   153,    65,    66,    34,    24,   158,
       1,    11,     1,    58,    33,   164,    35,    36,    32,     1,
      32,   170,    96,   179,    61,   174,    17,    61,   205,    56,
      86,   208,    88,   210,     1,    17,     1,   214,   215,    52,
     143,    85,    80,    32,    82,     1,   461,   103,   376,   377,
      17,    51,   140,    91,   203,    93,    47,    11,   118,    11,
      51,     1,   211,    30,    31,    47,     1,     1,    33,     1,
      35,    36,   160,   222,   223,   178,    43,    33,   134,    35,
      36,    48,    11,    12,   261,     1,     1,    41,    22,    41,
     267,    23,   269,    33,   271,    11,    12,    51,    33,    51,
     277,   278,    41,   302,     4,   208,     1,   210,   143,     9,
      17,   214,   215,    52,   263,   264,    11,   266,    33,     1,
     189,   156,   545,   546,    11,     1,    11,    22,    23,    17,
     279,   280,   281,   282,   283,    17,    11,    32,   241,   242,
      47,    17,    37,    38,    51,    40,    41,   324,   183,   305,
      22,     1,    17,   302,    30,    31,    51,   334,    11,    47,
     263,     1,    11,    51,   267,     1,   315,    43,     1,   257,
      35,    36,    48,    11,    24,   210,    26,    17,   327,   328,
     215,    17,   331,   332,    11,     1,    13,    14,    15,    16,
      23,    24,    19,    20,    21,   230,    11,   232,   233,   234,
     235,    28,    29,   306,    17,   240,   143,    23,    24,    11,
      11,    66,    13,    14,    15,    16,     1,    30,    31,   156,
       1,   370,   371,    22,   327,   413,    11,    28,    29,     1,
      43,    11,   267,   382,    11,    48,    17,    64,    65,    66,
      17,   390,   391,    24,   393,    17,   183,    32,     1,   318,
     319,   320,    37,    38,    43,    40,    41,    11,    11,    48,
      45,     1,   411,    64,    65,    66,    51,     1,    17,    11,
     419,    11,    17,   376,     1,   474,    16,    17,   427,    32,
      11,    30,    31,    17,    11,   434,    13,    14,    15,    16,
      35,    36,    32,   230,    43,   232,   233,   234,   235,    48,
     488,    12,    29,   240,    17,    32,    17,   376,   377,   458,
      37,    38,   461,    40,    41,    22,    17,    17,    45,    17,
      17,    12,    35,    36,    51,   474,    17,     1,   363,    30,
      31,    11,    30,    31,   437,    35,    36,    11,    35,    36,
     539,     1,    43,    17,    12,    43,    22,    48,    12,    17,
      48,    11,    12,    17,    30,    31,   505,    22,    32,   394,
     395,   396,    22,    37,    38,   202,    40,    41,   403,   206,
      30,    31,   407,    47,    25,   463,    27,    51,    27,    30,
      31,    30,    31,   496,   497,     1,    33,     3,    35,    36,
     539,   540,    17,   496,   497,    11,    33,    13,    14,    15,
      16,    11,   437,   438,   517,   518,    22,    23,   475,    12,
      35,    36,    28,    29,   449,    33,    32,    35,    36,    30,
      31,    37,    38,    17,    40,    41,   363,    35,    36,   496,
      46,   498,    43,    49,    50,    51,    58,    48,    22,    55,
     475,    57,    37,    27,    60,    11,    30,    31,    64,    65,
      66,    11,   519,   520,   521,   522,   523,   394,   395,   396,
      17,   496,   497,   498,    22,     1,   403,    25,    49,    27,
     407,    11,    30,    31,    11,    11,    68,    13,    14,    15,
      16,    11,   517,   518,   519,   520,   521,   522,   523,    11,
      12,    52,     1,    29,     3,    27,    32,    47,    30,    31,
     437,   438,    11,    22,    13,    14,    15,    16,    25,    26,
      11,    11,   449,    22,    23,    16,    17,    35,    36,    28,
      29,    41,    39,    32,    32,    42,    17,    44,    37,    38,
      11,    40,    41,    25,    26,    16,    17,    46,   475,    17,
      49,    50,    51,     1,    23,    24,    55,    39,    57,    12,
      42,    60,    44,    11,    12,    64,    65,    66,    52,   496,
     497,   498,    27,    17,    22,    30,    31,    25,    11,    27,
      23,    24,    30,    31,    33,    30,    31,     1,    33,     3,
     517,   518,   519,   520,   521,   522,   523,    11,    43,    13,
      14,    15,    16,    48,     6,     7,     8,    11,    22,    13,
      14,    15,    16,    11,    28,    29,    27,    11,    32,    30,
      31,    62,    63,    37,    38,    29,    40,    41,    23,    24,
      27,    17,    46,    30,    31,    49,    50,    51,    23,    24,
      52,    55,    22,    57,     1,    27,    60,     5,    30,    31,
      64,    65,    66,    22,    11,    11,    13,    14,    15,    16,
      23,    24,    27,    22,     1,    30,    31,    27,    35,    36,
      30,    31,    29,    17,    11,    32,    13,    14,    15,    16,
      37,    38,    17,    40,    41,    17,     1,    27,    45,    22,
      30,    31,    29,    41,    51,    32,    11,    33,    52,    33,
      37,    38,    17,    40,    41,    33,    27,    33,     1,    30,
      31,    33,    12,    33,    51,    32,    27,    32,    11,    30,
      31,    23,    37,    38,    17,    40,    41,    23,     1,    27,
      45,    23,    30,    31,    17,    47,    51,    17,    11,    32,
       1,    17,    52,    33,    37,    38,    33,    40,    41,    52,
      11,    33,    45,    35,    36,    17,     1,    17,    51,    32,
      12,    47,    17,    17,    37,    38,    11,    40,    41,    12,
       5,    32,    45,     1,    63,    66,    37,    38,    51,    40,
      41,   320,   491,    11,    45,    32,   221,    32,     1,   223,
      51,    -1,    37,    38,   397,    40,    41,    33,    11,    35,
      36,    -1,    47,    -1,    32,    33,    51,    -1,     1,    37,
      38,    -1,    40,    41,    33,    -1,    35,    36,    11,    32,
      33,    -1,    -1,    51,    37,    38,     1,    40,    41,    33,
      -1,    35,    36,     1,    -1,    -1,    11,    12,    51,    32,
      33,    -1,    -1,    11,    37,    38,    -1,    40,    41,    33,
       1,    35,    36,    -1,    -1,    23,    -1,    32,    51,    -1,
      11,    -1,    37,    38,    32,    40,    41,     1,    -1,    37,
      38,    22,    40,    41,     1,    -1,    51,    11,    -1,    -1,
      -1,    32,    -1,    51,    11,    -1,    37,    38,    -1,    40,
      41,     1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      51,    11,    -1,    37,    38,    32,    40,    41,    -1,     1,
      37,    38,    -1,    40,    41,    -1,     1,    51,    45,    11,
      -1,    -1,    32,    -1,    51,    -1,    11,    37,    38,    -1,
      40,    41,    -1,    11,    -1,    13,    14,    15,    16,    -1,
      32,    51,     1,    -1,    -1,    37,    38,    32,    40,    41,
      28,    29,    37,    38,    -1,    40,    41,    -1,    -1,    51,
      19,    20,    21,    -1,    23,    -1,    51,    -1,    27,    -1,
      -1,    30,    31,    11,    -1,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    10,    34,    56,    73,    74,    75,    76,    77,   112,
     113,   152,   153,    11,    11,    11,     0,    75,    22,    25,
      27,    30,    31,    78,    79,    81,    98,    99,   100,   101,
      30,    31,    81,   114,   115,   116,   117,   118,   119,   120,
      27,    79,    98,   154,     1,    11,    12,     1,    11,    12,
      11,    13,    14,    15,    16,    19,    20,    21,    28,    29,
      64,    65,    66,    82,    83,    84,    85,    86,    87,    88,
      90,    92,    95,    96,    97,    11,    80,     1,    11,    32,
     102,   103,   102,   103,    27,    81,    98,    27,    98,    27,
      99,   102,   103,   102,   103,    27,   115,    27,   116,    22,
     137,   137,    27,    98,    27,    11,    11,    11,    11,    43,
      95,    11,    66,    22,     1,    23,    83,    86,    84,    11,
       1,    24,    26,    95,    12,   105,    95,   103,     1,    17,
     103,     1,    17,    27,    98,    27,    27,   103,   103,    27,
       3,    11,    23,    32,    37,    38,    40,    41,    46,    49,
      50,    51,    55,    57,    60,    86,   102,   109,   121,   122,
     123,   124,   125,   126,   127,   130,   133,   134,   135,   138,
     139,   140,   141,   142,   146,   147,    27,    11,    22,    22,
      80,     1,    17,    47,    51,    93,    11,    11,    33,   104,
      11,     1,    33,     1,    17,     1,    17,    27,   137,   134,
     135,   136,     1,    11,    16,    17,    32,   128,     1,    11,
      32,    45,   129,   130,     1,    32,   129,    11,   147,   148,
     130,   122,     1,    32,   135,    23,   122,   137,   122,    17,
      47,    58,    30,    31,    43,    48,   122,   122,     1,    17,
      47,    28,    89,    95,    80,    23,   135,    41,    52,    17,
      47,    51,   102,   107,   108,    12,     4,     9,   110,    33,
      37,    17,   128,     1,    47,   130,    11,    32,   129,    17,
     128,    17,   129,   129,   135,   130,    33,    35,    36,    25,
      26,    39,    42,    44,   129,   129,    33,    11,   149,     1,
      17,   139,   129,   130,   144,   144,   135,    11,   135,   135,
     135,   135,    68,   135,    95,    23,    28,    95,    11,    23,
      11,     1,    17,    52,    47,    22,    41,    11,    11,    12,
     106,    32,   137,   129,    17,   130,   130,     1,    47,   130,
     129,    17,    17,   129,    17,   129,    33,     1,    33,   129,
     129,   130,   130,   130,   130,   130,    33,     1,    33,    12,
      52,    17,    33,     1,    33,   122,     1,    17,    11,    17,
      80,    95,    11,    12,    17,    11,    17,    17,    47,    51,
      22,    22,    23,    94,   130,    52,     1,    12,   108,   108,
     107,     5,    17,   129,   130,   130,    33,   130,    33,   130,
      17,    17,   129,    17,     1,    11,    12,   150,   151,    22,
      22,     1,    22,    12,    17,    17,    11,    12,    17,   135,
      17,    22,    41,    51,    91,   130,    91,    17,    23,    24,
     108,   108,     6,     7,     8,   111,   130,    17,    33,    33,
      33,   130,    33,   130,    17,   130,   135,     1,    12,   135,
     135,   151,    62,    63,   143,   143,   143,   143,   135,    12,
      17,   135,    17,    23,    91,    52,    41,    23,    24,    23,
      17,    22,   130,    33,    33,   130,     1,    33,    33,    33,
     130,    33,   135,   135,    12,    32,    23,    23,    23,     1,
      23,    17,   135,    17,    17,    23,    52,    17,    51,   130,
      91,   137,    33,     1,    33,   122,     1,    32,    45,   131,
     132,   135,   145,    17,    17,    47,    41,    23,   110,     1,
      61,   131,   132,   131,   132,   135,   132,    35,    36,    25,
      26,    39,    42,    44,    33,   130,    52,    17,    17,    33,
       1,    33,   131,   131,   132,   132,   132,   132,   132,    12,
      47,   122,   130,     1,    61,    17,    17,   143,   143
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
#line 172 "D:\\comp\\yacc.y"
    { ast->print((yyvsp[0].tn),0);cout<<"program: components\n";;}
    break;

  case 3:
#line 177 "D:\\comp\\yacc.y"
    {cout<<"components: components component\n"; (yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, componentsListNode));;}
    break;

  case 4:
#line 178 "D:\\comp\\yacc.y"
    {cout<<"components: component\n";			 (yyval.tn) = ast->createNode((yyvsp[0].tn), 0, componentNode);;}
    break;

  case 5:
#line 181 "D:\\comp\\yacc.y"
    {cout<<"component:	class_interface\n";			(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 6:
#line 182 "D:\\comp\\yacc.y"
    {cout<<"component:	class_implementation\n";	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 7:
#line 183 "D:\\comp\\yacc.y"
    {cout<<"component:	protocol\n";				(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 8:
#line 189 "D:\\comp\\yacc.y"
    {
		s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		(yyval.tn) =ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn), class_interface);;}
    break;

  case 9:
#line 199 "D:\\comp\\yacc.y"
    {
		i=1;

		
		datamember_offset=0;


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
#line 217 "D:\\comp\\yacc.y"
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
#line 226 "D:\\comp\\yacc.y"
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
#line 235 "D:\\comp\\yacc.y"
    {
		i=1;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 13:
#line 241 "D:\\comp\\yacc.y"
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
#line 256 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 15:
#line 261 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 16:
#line 265 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 17:
#line 270 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);;}
    break;

  case 18:
#line 274 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-1].tn),0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 19:
#line 278 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 20:
#line 282 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 21:
#line 286 "D:\\comp\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 22:
#line 292 "D:\\comp\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										(yyval.tn) = (yyvsp[-1].tn);
										;}
    break;

  case 23:
#line 301 "D:\\comp\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";									    (yyval.tn) = ast->createNode(0, 0, ids_list_Node);;}
    break;

  case 24:
#line 302 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); (yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 25:
#line 303 "D:\\comp\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 26:
#line 309 "D:\\comp\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 27:
#line 311 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 28:
#line 313 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														(yyval.tn) =(yyvsp[0].tn) ;}
    break;

  case 29:
#line 320 "D:\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node));;}
    break;

  case 30:
#line 322 "D:\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 31:
#line 324 "D:\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 32:
#line 331 "D:\\comp\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";
																	(yyval.tn) = ast->createNode((yyvsp[-1].tn), (yyvsp[0].tn), instance_variable_declaration_Node);
																	;}
    break;

  case 33:
#line 340 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node));
										;}
    break;

  case 34:
#line 344 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";
										(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node);
										;}
    break;

  case 35:
#line 352 "D:\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PRIVATE\n";
					(yyval.tn) = ast->createNode(0,0, visibility_specification_private_Node);;}
    break;

  case 36:
#line 354 "D:\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PROTECTED\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_protected_Node);;}
    break;

  case 37:
#line 357 "D:\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PUBLIC\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_public_Node);;}
    break;

  case 38:
#line 366 "D:\\comp\\yacc.y"
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
				Variable *v=(Variable*)(yyval.tn)->item;
				cout<<v->getoffset();
				(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 39:
#line 387 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_node);
											(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 40:
#line 391 "D:\\comp\\yacc.y"
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
#line 414 "D:\\comp\\yacc.y"
    {yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_assigment_node);
													(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 42:
#line 419 "D:\\comp\\yacc.y"
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
#line 437 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_node);
												(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 44:
#line 441 "D:\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,0, variable_assigment_node);
		(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 45:
#line 448 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");(yyval.tn) = ast->createNode(0,0, variable_assigment_node);
														(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 46:
#line 452 "D:\\comp\\yacc.y"
    {cout << "Enum \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_enum);;}
    break;

  case 47:
#line 453 "D:\\comp\\yacc.y"
    {cout << "Struct \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_struct);;}
    break;

  case 48:
#line 454 "D:\\comp\\yacc.y"
    {cout << "Array \n" ; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayone);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 49:
#line 455 "D:\\comp\\yacc.y"
    {cout <<"Array N \n ";				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayN);		(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 50:
#line 460 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 51:
#line 461 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 52:
#line 465 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, structNode);;}
    break;

  case 53:
#line 466 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn), structNode);;}
    break;

  case 54:
#line 471 "D:\\comp\\yacc.y"
    {;;}
    break;

  case 55:
#line 472 "D:\\comp\\yacc.y"
    {;;}
    break;

  case 56:
#line 473 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 57:
#line 474 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 475 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 476 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 477 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 478 "D:\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 486 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 63:
#line 487 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-5].tn)->expectedType;;}
    break;

  case 64:
#line 488 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-9].tn)->expectedType;;}
    break;

  case 65:
#line 489 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 66:
#line 496 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 67:
#line 497 "D:\\comp\\yacc.y"
    {(yyval.tn) =ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 68:
#line 498 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-6].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 69:
#line 499 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 70:
#line 507 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-4].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-6].tn)->expectedType;;}
    break;

  case 71:
#line 508 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-3].tn)->expectedType;;}
    break;

  case 72:
#line 509 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-5].tn),(yyvsp[-2].tn), ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-7].tn)->expectedType;;}
    break;

  case 73:
#line 515 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, ArrayNMultiNode);;}
    break;

  case 74:
#line 516 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode(0,0, ArrayNMultiNode));;}
    break;

  case 75:
#line 523 "D:\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[-1].tn),0, array_body2Node);
															;}
    break;

  case 76:
#line 525 "D:\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[0].tn),0, array_body2Node);
															;}
    break;

  case 77:
#line 527 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-4].tn), ast->createNode((yyvsp[-1].tn),0, array_body2Node));
															;}
    break;

  case 78:
#line 529 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode(0,0, array_body2Node));
															;}
    break;

  case 79:
#line 534 "D:\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);
													 (yyval.r.type1)="";
													cout<<"type: simple_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;}
    break;

  case 80:
#line 538 "D:\\comp\\yacc.y"
    { (yyval.r.type1)=(yyvsp[0].r.type1);
													(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 81:
#line 545 "D:\\comp\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;
													(yyval.tn)=ast->createNode(0,0, simple_type_INT);  (yyval.tn)->expectedType=inttype;;}
    break;

  case 82:
#line 547 "D:\\comp\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;
													(yyval.tn)=ast->createNode(0,0, simple_type_CHAR);	(yyval.tn)->expectedType=chartype;;}
    break;

  case 83:
#line 549 "D:\\comp\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;
													(yyval.tn)=ast->createNode(0,0, simple_typeFLOAT);	(yyval.tn)->expectedType=floattype;;}
    break;

  case 84:
#line 551 "D:\\comp\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;
													(yyval.tn)=ast->createNode(0,0, simple_type_NSSTRING);	(yyval.tn)->expectedType=stringtype;;}
    break;

  case 85:
#line 553 "D:\\comp\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;
													(yyval.tn)=ast->createNode(0,0, simple_type_VOID);	(yyval.tn)->expectedType=voidtype;;}
    break;

  case 86:
#line 560 "D:\\comp\\yacc.y"
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
#line 573 "D:\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node));;}
    break;

  case 88:
#line 575 "D:\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";	(yyval.tn) = ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node);;}
    break;

  case 89:
#line 581 "D:\\comp\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 90:
#line 583 "D:\\comp\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 91:
#line 589 "D:\\comp\\yacc.y"
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
#line 598 "D:\\comp\\yacc.y"
    {
		yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 93:
#line 607 "D:\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);
		;}
    break;

  case 94:
#line 614 "D:\\comp\\yacc.y"
    {
		yyclearin;
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);;}
    break;

  case 95:
#line 625 "D:\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 96:
#line 633 "D:\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 97:
#line 638 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 98:
#line 640 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 99:
#line 645 "D:\\comp\\yacc.y"
    {
																(yyval.r.type1)=(yyvsp[-1].r.type1);
																(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 100:
#line 649 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 101:
#line 651 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 102:
#line 659 "D:\\comp\\yacc.y"
    {Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 103:
#line 659 "D:\\comp\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-3].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);			;}
    break;

  case 104:
#line 661 "D:\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);		;}
    break;

  case 105:
#line 664 "D:\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[-3].r.str);Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 106:
#line 664 "D:\\comp\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-5].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);;}
    break;

  case 107:
#line 666 "D:\\comp\\yacc.y"
    {
												(yyval.r.str)=(yyvsp[0].r.str);
												(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);;}
    break;

  case 108:
#line 675 "D:\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 109:
#line 677 "D:\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 110:
#line 679 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 111:
#line 681 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 112:
#line 683 "D:\\comp\\yacc.y"
    {cout<<"parameter_list: parameter\n";
																			(yyval.tn) =ast->createNode((yyvsp[0].tn),0, paramListNode);;}
    break;

  case 113:
#line 688 "D:\\comp\\yacc.y"
    {
	add_param((yyvsp[-1].r.type));
	Type t=static_cast<Type>((yyvsp[-1].r.type));
	if(s->insertVariableInCurrentScope((yyvsp[0].r.str),t,1) == 0) 
		cout<<"error redefine variable";

	cout<<"parameter: p_type IDENTIFIER\n";	(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, parameter_Node);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;

	param_list1.push_back((yyvsp[0].r.str));
	;}
    break;

  case 114:
#line 704 "D:\\comp\\yacc.y"
    {cout<<"statment: try_catch_statment\n";;}
    break;

  case 115:
#line 708 "D:\\comp\\yacc.y"
    {cout<<"statment: catch_statment\n";;}
    break;

  case 116:
#line 709 "D:\\comp\\yacc.y"
    {cout<<"statment: finally_TRY_CATCH\n";;}
    break;

  case 117:
#line 712 "D:\\comp\\yacc.y"
    {cout<<"Exception NullPointerException";;}
    break;

  case 118:
#line 713 "D:\\comp\\yacc.y"
    {cout<<"Exception OutOfBoundryException";;}
    break;

  case 119:
#line 714 "D:\\comp\\yacc.y"
    {cout<<"Exception CastException";;}
    break;

  case 120:
#line 722 "D:\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ImpNode);
		(yyval.tn)->currST=s->currScope;
		s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 121:
#line 731 "D:\\comp\\yacc.y"
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

  case 122:
#line 744 "D:\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 123:
#line 754 "D:\\comp\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Implementation_Interface((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 124:
#line 762 "D:\\comp\\yacc.y"
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

  case 125:
#line 780 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 126:
#line 781 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";;}
    break;

  case 127:
#line 782 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";;}
    break;

  case 128:
#line 787 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 129:
#line 788 "D:\\comp\\yacc.y"
    {								(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 130:
#line 792 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 131:
#line 793 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 132:
#line 796 "D:\\comp\\yacc.y"
    {
	(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefNode);i=2;
	Scope* temp=s->currScope;
	insert_param();
	param_list1.clear();param_list.clear();
	s->currScope=s->currScope->parent;
	Type t=static_cast<Type>((yyvsp[0].r.type));
	if((yyvsp[-1].r.type)==6){
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),(yyvsp[-1].r.type1),param_list,(yyval.tn),function_offset) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	} 
	else
	{
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list,(yyval.tn),function_offset) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	}
	cout<<"class_implementation_definition: class_implementation_definition_header block_body";
	s->insert_scope((yyvsp[-1].r.str),temp);
	;}
    break;

  case 133:
#line 818 "D:\\comp\\yacc.y"
    { (yyval.r.str)=(yyvsp[0].r.str);
										(yyval.r.type1)=(yyvsp[-1].r.type1);
										Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
										(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";;}
    break;

  case 134:
#line 822 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";;}
    break;

  case 135:
#line 826 "D:\\comp\\yacc.y"
    {
		Scope* temp=s->currScope;
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefNode);i=2;
		(yyval.r.str)=(yyvsp[-1].r.str);
		insert_param();
		param_list1.clear();param_list.clear();
		s->currScope=s->currScope->parent;
		Type t=static_cast<Type>((yyvsp[0].r.type));
		if((yyvsp[-1].r.type)==6){
			if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),(yyvsp[-1].r.type1),param_list,(yyval.tn),function_offset) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		} 
		else
		{
			if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list,(yyval.tn),function_offset) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		}
		s->insert_scope((yyvsp[-1].r.str),s->currScope);
		cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 136:
#line 848 "D:\\comp\\yacc.y"
    { (yyval.r.str)=(yyvsp[0].r.str);
											 (yyval.r.type1)=(yyvsp[-1].r.type1);
											 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
											 ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";;}
    break;

  case 137:
#line 852 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 138:
#line 856 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,stmtListNode));cout<<"statement_list: statement_list statement\n";;}
    break;

  case 139:
#line 857 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,stmtListNode);cout<<"statement_list: statement\n";;}
    break;

  case 140:
#line 863 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: loop_statement\n";;}
    break;

  case 141:
#line 864 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: conditional_statement\n";;}
    break;

  case 142:
#line 865 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);cout<<"statement: expr\n";;}
    break;

  case 143:
#line 866 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: variable_declaration\n";;}
    break;

  case 144:
#line 867 "D:\\comp\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 145:
#line 867 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 146:
#line 868 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: return_statement\n";;}
    break;

  case 148:
#line 873 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,ReturnNode);cout<<"return_statement: RETURN expr\n";;}
    break;

  case 149:
#line 874 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 150:
#line 877 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: for_loop\n";;}
    break;

  case 151:
#line 878 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: while_loop\n";;}
    break;

  case 152:
#line 879 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 153:
#line 882 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ForNode);cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 154:
#line 888 "D:\\comp\\yacc.y"
    {	
		(yyval.tn)=ast->createNode((yyvsp[-5].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 155:
#line 895 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 156:
#line 897 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 157:
#line 899 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 158:
#line 901 "D:\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 159:
#line 908 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 160:
#line 910 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 161:
#line 912 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 162:
#line 917 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 163:
#line 922 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";;}
    break;

  case 164:
#line 925 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-3].tn),ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 165:
#line 928 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";;}
    break;

  case 166:
#line 931 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";;}
    break;

  case 167:
#line 935 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 168:
#line 942 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 169:
#line 943 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 170:
#line 944 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 171:
#line 945 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 172:
#line 946 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 173:
#line 947 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 174:
#line 948 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";;}
    break;

  case 175:
#line 953 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 176:
#line 954 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 177:
#line 955 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 178:
#line 956 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 179:
#line 957 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 180:
#line 958 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 181:
#line 959 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 182:
#line 960 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 183:
#line 961 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 184:
#line 964 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:assign_expr\n";	;}
    break;

  case 185:
#line 965 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 186:
#line 968 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 187:
#line 969 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 188:
#line 970 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 189:
#line 971 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 190:
#line 972 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 191:
#line 973 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 192:
#line 974 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 193:
#line 975 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 194:
#line 976 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 195:
#line 977 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 196:
#line 978 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 197:
#line 979 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 198:
#line 984 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 199:
#line 988 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";
										;}
    break;

  case 200:
#line 994 "D:\\comp\\yacc.y"
    {
		var.push((yyvsp[0].r.str));				
		(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0,0,longidNode));
		cout<<"long_id: long_id.IDENTIFIER\n";;}
    break;

  case 201:
#line 999 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"long_id: long_id.message_call\n";;}
    break;

  case 202:
#line 1000 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,IdentNode);
		if(strcmp(lexer->YYText(),".")==0) 
			var.push((yyvsp[0].r.str));
		if(s->getVariableFromCurrentScope((yyvsp[0].r.str))==0) {
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
		}
		cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 203:
#line 1015 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);    (yyval.tn)->expectedType=stringtype;
									cout<<"simple_expr:STRING_VAL\n";
									(yyval.tn)->item=(void *)yylval.r.str;;}
    break;

  case 204:
#line 1022 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,intNode);	 (yyval.tn)->expectedType=inttype;   (yyval.tn)->item=(void *)yylval.r.i;
								 cout<<" \n\n\n\n\n\n\n\n\n"<<(int)(yyval.tn)->item<<" \n\n\n\n\n\n\n\n\n";
									;}
    break;

  case 205:
#line 1030 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,floatNode);cout<<"simple_expr:FLOAT_VAL\n";	(yyval.tn)->expectedType=floattype;
								// $<tn>$->item=(void *)yylval.r.f;
								;}
    break;

  case 206:
#line 1033 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);  
								cout<<"simple_expr:STRING_VAL\n";;}
    break;

  case 207:
#line 1038 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,CharNode);cout<<"simple_expr:CHAR_VAL\n";	(yyval.tn)->expectedType=chartype;
								 (yyval.tn)->item=(void *)yylval.r.c;;}
    break;

  case 208:
#line 1041 "D:\\comp\\yacc.y"
    {
		
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

  case 209:
#line 1076 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";
											;}
    break;

  case 210:
#line 1078 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";;}
    break;

  case 211:
#line 1079 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";;}
    break;

  case 212:
#line 1080 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";;}
    break;

  case 213:
#line 1082 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";;}
    break;

  case 214:
#line 1083 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,SmpExpNode);cout<<"expr:p_type expr\n";;}
    break;

  case 215:
#line 1088 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 216:
#line 1089 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";;}
    break;

  case 217:
#line 1094 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),WhileNode);cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 218:
#line 1097 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 219:
#line 1098 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 220:
#line 1099 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 221:
#line 1100 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 222:
#line 1103 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 223:
#line 1105 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),CondtiNode);cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 224:
#line 1106 "D:\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),CondtiNode);
		cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 225:
#line 1109 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,CondtiNode);cout<<"conditional_statement: switch\n";;}
    break;

  case 226:
#line 1112 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-1].tn),SwitchNode);cout<<"switch statment";;}
    break;

  case 227:
#line 1113 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 228:
#line 1114 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 229:
#line 1115 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 230:
#line 1116 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 231:
#line 1125 "D:\\comp\\yacc.y"
    {
									(yyval.tn)=ast->createNode((yyvsp[-6].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[0].tn),SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";;}
    break;

  case 232:
#line 1129 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 233:
#line 1130 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-2].tn),SwtBdyNode);cout<<"default statment";;}
    break;

  case 234:
#line 1131 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 235:
#line 1136 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 236:
#line 1137 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 237:
#line 1141 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 238:
#line 1142 "D:\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 239:
#line 1145 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 240:
#line 1146 "D:\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 241:
#line 1147 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 242:
#line 1148 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 243:
#line 1151 "D:\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 244:
#line 1154 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,SndrNode);cout<<"sender: message_call\n";;}
    break;

  case 245:
#line 1155 "D:\\comp\\yacc.y"
    {cout<<"sender: IDENTIFIER\n";;}
    break;

  case 246:
#line 1158 "D:\\comp\\yacc.y"
    {cout<<"message: IDENTIFIER\n";;}
    break;

  case 247:
#line 1159 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,MsgNode);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 248:
#line 1162 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,argListNode));cout<<"argument_list: argument_list argument\n";;}
    break;

  case 249:
#line 1163 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argListNode);cout<<"argument_list: argument\n";;}
    break;

  case 250:
#line 1166 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 251:
#line 1167 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 252:
#line 1168 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 253:
#line 1169 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 254:
#line 1170 "D:\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 255:
#line 1172 "D:\\comp\\yacc.y"
    {
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ProtclNode);
	s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 256:
#line 1178 "D:\\comp\\yacc.y"
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

  case 257:
#line 1190 "D:\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";;}
    break;

  case 258:
#line 1192 "D:\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";;}
    break;

  case 259:
#line 1195 "D:\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";;}
    break;

  case 260:
#line 1198 "D:\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3625 "yacc.cpp"

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


#line 1201 "D:\\comp\\yacc.y"

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

