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
	#include "comp\code_generation1.h"
	#include "comp\Symbol_Table.h"
	#include "comp\Interface.h"
	#include "comp\Method.h"
	#include "comp\Variable.h"
	#include "comp\Scope.h"
	#include "comp\Defs.h"
	#include "comp\C.h"
	#include "comp\A.h"
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
	bool ignore=false;
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
	char Interface_name[50];
	char Prev_Interface_name[50];
	char main_interface[50];
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
#line 157 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 319 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 331 "yacc.cpp"

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
#define YYLAST   1059

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  80
/* YYNRULES -- Number of rules. */
#define YYNRULES  257
/* YYNRULES -- Number of states. */
#define YYNSTATES  545

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
     811,   813,   815,   817,   819,   823,   827,   831,   835,   839,
     842,   844,   849,   853,   856,   859,   864,   869,   873,   878,
     883,   886,   891,   893,   901,   909,   917,   925,   933,   943,
     953,   959,   965,   967,   969,   971,   973,   978,   983,   987,
     992,   997,   999,  1001,  1003,  1007,  1010,  1012,  1015,  1018,
    1022,  1025,  1029,  1032,  1035,  1039,  1042,  1045
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
      -1,    41,    -1,    38,    -1,    40,    -1,   131,    -1,   132,
      30,   132,    -1,   132,    31,   132,    -1,   132,    43,   132,
      -1,   132,    48,   132,    -1,    32,   132,    33,    -1,   102,
     132,    -1,   133,    -1,    11,    32,   132,    33,    -1,    22,
     118,    23,    -1,    22,    23,    -1,   136,   119,    -1,    49,
      32,   126,    33,    -1,    49,    32,   126,     1,    -1,    49,
     126,    33,    -1,    49,     1,   126,    33,    -1,    57,   119,
     136,    17,    -1,   143,   119,    -1,   143,   119,    68,   119,
      -1,   139,    -1,    60,    32,   141,    33,    22,   140,    23,
      -1,    60,     1,   141,    33,    22,   140,    23,    -1,    60,
      32,   141,     1,    22,   140,    23,    -1,    60,    32,   141,
      33,    22,   140,     1,    -1,    60,    32,   141,    33,     1,
     140,    23,    -1,    63,    32,   142,    33,    12,   119,    61,
      17,   140,    -1,    63,    32,   142,    33,    12,   119,     1,
      17,   140,    -1,    62,    12,   119,    61,    17,    -1,    62,
      12,   119,     1,    17,    -1,   126,    -1,   127,    -1,   128,
      -1,   129,    -1,    50,    32,   126,    33,    -1,    50,    32,
     126,     1,    -1,    50,   126,    33,    -1,    50,     1,   126,
      33,    -1,    51,   145,   146,    52,    -1,   144,    -1,    11,
      -1,    11,    -1,    11,    12,   147,    -1,   147,   148,    -1,
     148,    -1,    12,   132,    -1,     1,   132,    -1,    11,    12,
     132,    -1,    11,   132,    -1,    11,     1,   132,    -1,   150,
     151,    -1,    56,    11,    -1,    79,    98,    27,    -1,    98,
      27,    -1,    79,    27,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   173,   173,   176,   177,   180,   181,   182,   188,   196,
     208,   217,   226,   232,   245,   250,   254,   259,   263,   267,
     271,   275,   282,   289,   290,   291,   297,   299,   301,   305,
     307,   309,   314,   320,   324,   330,   333,   337,   342,   362,
     365,   388,   391,   406,   408,   413,   415,   416,   417,   418,
     423,   424,   428,   429,   434,   435,   436,   437,   438,   439,
     440,   441,   445,   446,   447,   448,   450,   451,   452,   453,
     456,   457,   458,   464,   465,   468,   470,   472,   474,   479,
     483,   490,   492,   494,   496,   498,   503,   516,   518,   524,
     526,   532,   541,   547,   552,   563,   571,   576,   578,   583,
     587,   589,   595,   597,   600,   602,   604,   606,   608,   611,
     630,   634,   635,   638,   639,   640,   643,   650,   665,   675,
     683,   700,   701,   702,   707,   708,   712,   713,   716,   739,
     749,   758,   782,   791,   801,   802,   806,   807,   808,   809,
     810,   810,   811,   812,   816,   817,   820,   821,   822,   825,
     828,   832,   834,   836,   839,   845,   847,   849,   854,   859,
     862,   865,   868,   872,   877,   878,   879,   880,   881,   882,
     883,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     899,   900,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   919,   923,   926,   968,   971,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1019,  1021,  1022,  1026,  1030,  1031,  1032,  1033,  1036,
    1038,  1039,  1042,  1045,  1046,  1047,  1048,  1049,  1058,  1062,
    1063,  1064,  1069,  1070,  1074,  1075,  1078,  1079,  1080,  1081,
    1084,  1087,  1088,  1091,  1092,  1095,  1096,  1099,  1100,  1101,
    1102,  1103,  1105,  1111,  1122,  1125,  1128,  1131
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
  "logic_expr2", "expr2", "assign_expr", "long_id", "simple_expr",
  "method_call", "block_body", "while_loop", "while_loop_header",
  "do_while_loop", "conditional_statement", "switch", "switch_body",
  "switch_statement", "case_statement", "if_header", "message_call",
  "sender", "message", "argument_list", "argument", "protocol",
  "protocol_header", "protocol_body", 0
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
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   133,   134,   134,   135,   136,   136,   136,   136,   137,
     138,   138,   138,   139,   139,   139,   139,   139,   140,   140,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   149,   150,   151,   151,   151,   151
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
       1,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       1,     4,     3,     2,     2,     4,     4,     3,     4,     4,
       2,     4,     1,     7,     7,     7,     7,     7,     9,     9,
       5,     5,     1,     1,     1,     1,     4,     4,     3,     4,
       4,     1,     1,     1,     3,     2,     1,     2,     2,     3,
       2,     3,     2,     2,     3,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   253,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,     0,   116,     0,   125,   126,     0,   127,     0,
     257,     0,     0,   252,     0,    12,    11,     0,   119,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   103,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   130,     0,   133,   122,     0,   123,   124,     0,
     128,   131,   256,     0,   255,    10,     9,   118,   117,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,     0,     0,     0,    94,    93,     0,
      98,    96,    15,     0,    16,    17,   129,   132,   121,     0,
     198,   213,     0,   199,   201,   202,   200,     0,     0,     0,
       0,     0,     0,     0,   139,     0,   143,     0,   135,     0,
     142,   136,   146,     0,     0,   180,   203,   181,   210,   147,
       0,   148,   137,   222,     0,   197,   254,     0,     0,     0,
       0,    39,    38,     0,     0,     0,    24,    25,   100,     0,
     102,   108,   101,    99,    92,    91,    97,    95,    14,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,     0,   242,   241,
       0,     0,     0,     0,     0,   209,   212,   134,   141,   149,
     138,     0,     0,     0,     0,     0,     0,   214,   220,    43,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,   109,     0,     0,     0,     0,   110,     0,
     208,     0,     0,     0,     0,   168,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   176,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,   243,     0,   145,
     144,     0,   232,   233,     0,     0,   195,   196,   204,   205,
     206,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    40,     0,     0,     0,     0,     0,     0,   107,
     104,     0,   112,   211,     0,     0,   169,   167,     0,     0,
     165,     0,     0,     0,     0,     0,     0,   218,   216,   215,
     178,   179,   171,   172,   173,   174,   175,   239,   237,   236,
       0,   240,   219,     0,     0,     0,   221,    45,    44,     0,
      52,     0,     0,     0,     0,    54,     0,    50,    63,     0,
       0,     0,     0,     0,     0,    76,    74,   106,   105,     0,
       0,     0,   166,   164,   177,     0,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,     0,     0,     0,
       0,     0,    59,    53,     0,     0,    55,     0,    51,     0,
       0,     0,     0,    67,     0,    70,     0,     0,   113,   114,
     115,     0,     0,     0,   156,   162,   161,     0,   160,     0,
       0,     0,   248,     0,     0,   250,   247,   245,     0,     0,
       0,     0,     0,     0,     0,     0,    58,     0,    56,     0,
       0,    73,     0,     0,     0,    75,    72,     0,    78,     0,
     157,     0,   155,   154,   158,   159,     0,   152,   251,   249,
       0,     0,   224,   225,   227,   226,   223,    61,     0,    57,
      62,     0,     0,    65,     0,    66,     0,     0,   153,   151,
     150,     0,     0,     0,     0,   234,   235,   194,     0,    60,
      64,     0,     0,    77,   111,     0,     0,     0,   191,     0,
       0,   194,   187,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,   231,   230,   193,   192,   188,   189,   190,
     182,   183,   184,   185,   186,     0,     0,     0,    68,     0,
       0,     0,     0,   229,   228
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   154,    68,    69,   243,    70,   412,
      71,   185,   374,    72,    73,    74,    26,    27,    28,    29,
     155,    81,   190,   191,   156,   258,   421,     9,    10,    33,
      34,    35,    36,    37,    38,    39,   157,   158,   159,   160,
     161,   162,   163,   208,   292,   214,   495,   510,   165,   166,
     167,   168,   100,   169,   170,   171,   172,   173,   440,   294,
     498,   174,   175,   220,   288,   395,   396,    11,    12,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -383
static const short int yypact[] =
{
      31,    14,    65,    77,    19,    31,  -383,  -383,   393,  -383,
     238,  -383,   347,   978,   778,  -383,  -383,  -383,   229,   104,
    -383,   186,   186,  -383,   473,   467,   520,  -383,  -383,  -383,
     186,   186,   565,  -383,   587,  -383,  -383,   182,  -383,   182,
    -383,   623,   682,  -383,   116,  -383,   145,   211,  -383,   214,
     224,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  1023,  -383,
     242,   218,   255,   996,  -383,   286,   286,  -383,  -383,  -383,
    -383,  -383,   277,  -383,  -383,  -383,   197,  1023,   291,  1023,
     287,   105,   287,   125,  -383,   687,   707,  -383,   726,  -383,
    -383,   287,  -383,   287,  -383,  -383,   736,  -383,  -383,   517,
    -383,  -383,  -383,   751,  -383,  -383,  -383,  -383,  -383,  -383,
     300,   297,   310,   104,  -383,  -383,  -383,  -383,   286,    10,
     325,   328,  -383,   316,   129,    30,   133,  -383,  -383,   184,
    -383,  -383,  -383,   771,  -383,  -383,  -383,  -383,  -383,   182,
      54,  -383,   710,  -383,  -383,  -383,  -383,   230,   402,   774,
      34,   923,   633,   162,  -383,   923,  -383,   575,  -383,   182,
    -383,  -383,  -383,   633,   336,  -383,   155,   580,  -383,  -383,
     633,  -383,  -383,  -383,   633,  -383,  -383,    49,   868,   104,
     154,  -383,  -383,   923,   176,    86,  -383,  -383,  -383,   362,
     400,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   247,
     923,   305,   981,   462,   524,   365,   786,   526,   363,   470,
     354,   470,   923,   329,   438,   470,   470,   491,  -383,  -383,
     384,   210,   343,   786,   786,   580,  -383,  -383,  -383,  -383,
    -383,   923,   390,   923,   923,   923,   923,  -383,   364,  -383,
    -383,   923,  1023,  1017,   411,   231,   424,   101,   396,   405,
    -383,   433,   418,  -383,   194,   129,   430,   182,  -383,  1011,
    -383,   786,   448,   710,   923,  -383,   802,   470,    43,   732,
     452,   786,   645,   103,   981,  -383,  -383,   786,   786,   923,
     923,   923,   923,   923,   828,   153,  -383,   460,   422,  -383,
    -383,   459,   549,   438,   463,    58,   580,  -383,   248,   248,
    -383,  -383,   633,   311,   490,    15,  1023,   494,   372,   498,
     496,  -383,  -383,   124,   495,   359,   477,   956,   129,  -383,
    -383,   514,  -383,  -383,   134,   786,  -383,  -383,   710,   923,
    -383,   871,   923,   568,   244,   754,   312,  -383,  -383,   875,
     558,   558,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   875,
     315,  -383,  -383,   512,   516,    13,  -383,  -383,  -383,   397,
    -383,   258,   525,   421,   923,  -383,   527,  -383,  -383,   551,
     507,   943,   943,   570,   529,  -383,  -383,  -383,  -383,   679,
     923,   352,  -383,  -383,  -383,   566,  -383,   569,   626,   819,
     381,   923,   923,   834,   923,    32,  -383,   497,   497,   497,
     497,   923,  -383,  -383,   429,   923,  -383,   235,  -383,   854,
     577,    66,   619,  -383,   628,  -383,   603,   877,  -383,  -383,
    -383,   589,   598,   923,  -383,  -383,  -383,    61,  -383,   600,
     889,   605,   580,   710,   923,   580,   580,  -383,   648,   613,
     646,   649,   677,    50,   292,   923,  -383,   313,  -383,   651,
     672,  -383,   658,   685,   955,  -383,  -383,   943,  -383,   182,
    -383,   683,  -383,  -383,  -383,  -383,    81,  -383,   580,   580,
     633,   901,  -383,  -383,  -383,  -383,  -383,  -383,   427,  -383,
    -383,   698,   673,  -383,    69,  -383,   684,   247,  -383,  -383,
    -383,     8,   690,   690,   923,   621,   650,   580,   696,  -383,
    -383,   923,   680,  -383,  -383,   719,   723,   912,   650,   157,
     650,   981,  -383,   901,   901,   923,   923,   923,   923,   923,
     733,  -383,   697,  -383,  -383,  -383,  -383,  -383,   558,   558,
    -383,  -383,  -383,  -383,  -383,   633,   923,    20,  -383,   729,
     735,   497,   497,  -383,  -383
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -383,  -383,  -383,   749,  -383,  -383,  -383,   746,  -109,   152,
    -383,   699,   693,  -383,   -10,  -383,  -383,  -383,  -383,  -367,
    -383,  -383,  -383,   -43,  -383,  -383,    -2,   -14,  -383,  -383,
      16,    18,  -383,  -225,  -383,   273,  -383,  -383,  -383,  -383,
     742,   -28,  -383,  -383,  -383,  -383,  -383,  -150,  -383,  -383,
    -383,  -383,  -383,   118,   245,   -99,  -206,  -280,  -383,   -26,
     -88,  -383,   -38,  -383,   546,  -383,  -383,  -383,  -382,   552,
    -383,  -383,  -147,  -383,  -383,  -383,   385,  -383,  -383,  -383
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -245
static const short int yytable[] =
{
     164,   101,   222,   219,   180,   414,    98,   227,    67,   505,
      42,   181,    90,   229,   399,   110,   441,   442,   443,    16,
     237,   539,    86,    88,   238,    13,    75,   182,    90,   319,
     320,   192,   360,   392,   123,   400,   125,    80,    82,   103,
      83,     1,   450,   393,   394,   218,    91,    93,    92,    94,
     239,   475,   221,   164,   202,   117,    67,   183,   164,   354,
     332,   184,   462,   193,   164,     2,   240,   225,    98,   506,
     245,   164,    90,   476,    90,   164,    14,   218,   277,   278,
     218,   540,   489,   133,  -244,   150,   200,     3,    15,    90,
     486,   355,   377,   378,   463,   247,   241,   109,   126,   125,
     129,   199,   311,   250,   338,   265,   127,   452,   117,   136,
     502,   137,   259,   275,   490,    75,   201,   150,   312,    90,
     150,   228,   128,   274,   293,   293,   130,   105,   274,   201,
      77,   233,   234,   251,   194,   244,   339,   252,   277,   278,
     189,   368,   131,   296,   235,   298,   299,   300,   301,   236,
     195,   380,   356,   303,   348,   120,   106,   201,   526,   543,
     544,    79,    32,   223,   326,   327,   123,   330,   125,   277,
     278,   369,   123,   125,   201,   370,    85,   246,   121,   274,
     342,   343,   344,   345,   346,   196,   349,    77,   277,   278,
     527,   496,   513,   514,   224,   317,   361,    78,   120,   304,
     307,   197,   231,   164,    99,   201,   318,   201,   201,   201,
     201,   289,   508,   232,   512,   201,   375,   248,    79,   322,
     123,   121,   107,   122,   125,   108,    79,   290,   249,   382,
     383,   203,   120,   385,   387,   530,   531,   532,   533,   534,
      50,   204,    51,    52,    53,    54,   205,   206,    55,    56,
      57,   256,   448,   111,   309,   121,   257,    58,    59,   120,
      18,   388,   207,   362,   219,   233,   234,   109,    30,    31,
     189,   189,   413,   413,   123,   403,   407,   113,   235,   277,
     278,   422,   121,   236,   112,   123,   507,   509,   119,   427,
     429,   235,   431,    60,    61,    62,   236,    50,    78,    51,
      52,    53,    54,   124,   432,   435,   436,   528,   529,   477,
     413,   177,   357,   444,    58,    59,   392,   447,   458,   178,
     491,   262,   233,   234,   461,   270,   393,   394,   358,   391,
     479,   466,   179,   189,   189,   235,   186,   219,   201,   187,
     236,   233,   234,   233,   234,   468,   469,   277,   278,   188,
      60,    61,    62,   230,   235,   485,   235,   478,   413,   236,
      77,   236,   276,   232,   277,   278,   201,   201,   201,   423,
     210,   164,    19,   253,    40,   201,   266,    21,    22,   201,
     271,   372,   373,   497,   364,   537,   200,   277,   278,   365,
     123,   142,   148,   213,   217,   287,   143,   144,   430,   145,
     146,   297,   521,   209,   497,   511,   497,   201,   201,   401,
     150,   254,   255,   210,   402,    18,   277,   278,    19,   201,
      20,   487,   308,    21,    22,   497,   497,   497,   497,   497,
     497,   497,   302,   405,   211,   310,   164,   538,   406,   143,
     144,   445,   145,   146,   499,   201,   446,   212,   313,   123,
     125,   268,   314,   150,   272,   315,   273,   233,   234,   316,
     284,   285,   321,   279,   280,   325,   201,   201,   201,   335,
     235,    77,   350,   204,   351,   236,   352,   281,   205,   261,
     282,   140,   283,    51,    52,    53,    54,   201,   201,   201,
     201,   201,   201,   201,    87,    18,   353,    21,    22,    59,
      84,   359,   267,    21,    22,   363,   324,   143,   144,   366,
     145,   146,   331,   367,   334,   212,   336,   371,    77,   379,
     139,   150,   340,   341,   286,   263,   277,   278,   140,   376,
      51,    52,    53,    54,   397,   210,   404,   204,   398,  -140,
     141,  -170,   205,   269,   408,    58,    59,    89,   410,   142,
      21,    22,   416,   417,   143,   144,   142,   145,   146,   438,
     439,   143,   144,   147,   145,   146,   148,   149,   150,    77,
     381,   264,   151,   409,   152,   150,    77,   153,   139,   210,
     390,    60,    61,    62,   277,   278,   140,   415,    51,    52,
      53,    54,    95,  -245,  -245,    30,    31,  -140,   226,   424,
     142,   386,   425,    58,    59,   143,   144,   142,   145,   146,
     233,   234,   143,   144,    97,   145,   146,    30,    31,   150,
     456,   147,   459,   235,   148,   149,   150,    77,   236,   451,
     151,   460,   152,   464,    77,   153,   139,   210,   467,    60,
      61,    62,   453,   454,   140,   471,    51,    52,    53,    54,
     102,   455,   454,    21,    22,  -140,   513,   514,   142,   426,
     470,    58,    59,   143,   144,   142,   145,   146,   480,   472,
     143,   144,   473,   145,   146,   515,   516,   150,   337,   147,
     277,   278,   148,   149,   150,   418,   419,   420,   151,   517,
     152,   492,   518,   153,   519,   481,   454,    60,    61,    62,
     474,   140,   483,    51,    52,    53,    54,   503,   454,   104,
     482,    77,    21,    22,   132,   500,   488,    21,    22,    59,
     501,   140,   493,    51,    52,    53,    54,   143,   144,   520,
     145,   146,   522,    77,   134,   494,   523,    21,    22,    59,
     524,   150,   142,   210,   536,   535,   541,   143,   144,   333,
     145,   146,   542,   135,    17,    77,    21,    22,    41,   118,
     504,   150,   116,   138,   267,   210,    30,    31,   291,   143,
     144,   389,   145,   146,    96,   215,   295,   212,   176,    47,
     437,    21,    22,   150,     0,   210,   267,    77,     0,    48,
      49,   143,   144,     0,   145,   146,     0,   210,   198,   212,
    -120,    21,    22,   328,     0,   150,   216,     0,  -120,  -120,
       0,   143,   144,   210,   145,   146,     0,     0,   267,   212,
      77,     0,     0,   143,   144,   150,   145,   146,     0,     0,
     210,   212,     0,     0,   142,   433,     0,   150,     0,   143,
     144,     0,   145,   146,     0,   210,   434,     0,     0,   329,
       0,   142,   428,   150,     0,    77,   143,   144,     0,   145,
     146,   347,     0,   277,   278,   210,   142,     0,     0,     0,
     150,   143,   144,     0,   145,   146,     0,   449,    77,    50,
       0,    51,    52,    53,    54,   150,   142,     0,   210,     0,
      77,   143,   144,     0,   145,   146,   242,    59,     0,   457,
     210,     0,   492,     0,   384,   411,   277,   278,  -177,   142,
    -177,  -177,   210,     0,   143,   144,     0,   145,   146,     0,
       0,   142,   465,     0,    77,     0,   143,   144,   150,   145,
     146,     0,     0,   493,   210,     0,     0,     0,   143,   144,
     150,   145,   146,     0,    77,   525,   494,   513,   514,     0,
       0,     0,   150,     0,   210,   142,    77,    77,     0,     0,
     143,   144,     0,   145,   146,     0,   210,    50,     0,    51,
      52,    53,    54,     0,   150,   142,     0,     0,     0,    44,
     143,   144,     0,   145,   146,    59,     0,   142,    79,    45,
      46,     0,   143,   144,   411,   145,   146,   114,     0,     0,
     -13,     0,     0,   -13,     0,   -13,   484,     0,   -13,   -13,
       0,   233,   234,     0,   260,    55,    56,    57,     0,   115,
       0,     0,     0,   -28,   235,     0,   -28,   -28,    50,   236,
      51,    52,    53,    54,    50,     0,    51,    52,    53,    54,
     305,   233,   234,     0,   323,   306,    59,     0,     0,     0,
       0,     0,    59,     0,   235,     0,     0,     0,     0,   236
};

static const short int yycheck[] =
{
      99,    39,   152,   150,   113,   372,    34,   157,    18,     1,
      12,     1,    26,   163,     1,    58,   398,   399,   400,     0,
     170,     1,    24,    25,   174,    11,    11,    17,    42,   254,
     255,     1,    17,     1,    77,    22,    79,    21,    22,    41,
      22,    10,   409,    11,    12,    11,    30,    31,    30,    31,
       1,     1,   151,   152,   142,    65,    66,    47,   157,     1,
      17,    51,     1,    33,   163,    34,    17,   155,    96,    61,
     179,   170,    86,    23,    88,   174,    11,    11,    35,    36,
      11,    61,     1,    85,    52,    51,    32,    56,    11,   103,
     457,    33,   317,   318,    33,   183,    47,    43,    80,   142,
      82,   139,     1,    17,     1,   204,     1,    41,   118,    91,
      41,    93,   200,   212,    33,    11,   142,    51,    17,   133,
      51,   159,    17,   211,   223,   224,     1,    11,   216,   155,
       1,    30,    31,    47,     1,   178,    33,    51,    35,    36,
     124,    17,    17,   231,    43,   233,   234,   235,   236,    48,
      17,    17,   302,   241,     1,     1,    11,   183,     1,   541,
     542,    32,    10,     1,   263,   264,   209,   266,   211,    35,
      36,    47,   215,   216,   200,    51,    24,    23,    24,   267,
     279,   280,   281,   282,   283,     1,    33,     1,    35,    36,
      33,   471,    35,    36,    32,     1,   305,    11,     1,   242,
     243,    17,    47,   302,    22,   231,    12,   233,   234,   235,
     236,     1,   492,    58,   494,   241,   315,    41,    32,   257,
     263,    24,    11,    26,   267,    11,    32,    17,    52,   328,
     329,     1,     1,   332,   333,   515,   516,   517,   518,   519,
      11,    11,    13,    14,    15,    16,    16,    17,    19,    20,
      21,     4,    17,    11,    23,    24,     9,    28,    29,     1,
      22,    17,    32,   306,   411,    30,    31,    43,    30,    31,
     254,   255,   371,   372,   317,    17,   364,    22,    43,    35,
      36,   380,    24,    48,    66,   328,   492,   493,    11,   388,
     389,    43,   391,    64,    65,    66,    48,    11,    11,    13,
      14,    15,    16,    12,   392,   393,   394,   513,   514,    17,
     409,    11,     1,   401,    28,    29,     1,   405,   417,    22,
     470,   203,    30,    31,   423,   207,    11,    12,    17,    17,
      17,   430,    22,   317,   318,    43,    11,   484,   364,    11,
      48,    30,    31,    30,    31,   433,   434,    35,    36,    33,
      64,    65,    66,    17,    43,   454,    43,   445,   457,    48,
       1,    48,    33,    58,    35,    36,   392,   393,   394,    17,
      11,   470,    25,    11,    27,   401,    11,    30,    31,   405,
      17,    22,    23,   471,    12,   535,    32,    35,    36,    17,
     433,    32,    49,   148,   149,    11,    37,    38,    17,    40,
      41,    11,   501,     1,   492,   493,   494,   433,   434,    12,
      51,    11,    12,    11,    17,    22,    35,    36,    25,   445,
      27,   459,    11,    30,    31,   513,   514,   515,   516,   517,
     518,   519,    68,    12,    32,    11,   535,   536,    17,    37,
      38,    12,    40,    41,    17,   471,    17,    45,    52,   492,
     493,   206,    47,    51,   209,    22,   211,    30,    31,    41,
     215,   216,    32,    25,    26,    17,   492,   493,   494,    17,
      43,     1,    12,    11,    52,    48,    17,    39,    16,    17,
      42,    11,    44,    13,    14,    15,    16,   513,   514,   515,
     516,   517,   518,   519,    27,    22,    33,    30,    31,    29,
      27,    11,    32,    30,    31,    11,   261,    37,    38,    11,
      40,    41,   267,    17,   269,    45,   271,    22,     1,     5,
       3,    51,   277,   278,    33,     1,    35,    36,    11,    52,
      13,    14,    15,    16,    22,    11,    11,    11,    22,    22,
      23,    17,    16,    17,    17,    28,    29,    27,    41,    32,
      30,    31,    23,    24,    37,    38,    32,    40,    41,    62,
      63,    37,    38,    46,    40,    41,    49,    50,    51,     1,
     325,    47,    55,    22,    57,    51,     1,    60,     3,    11,
     335,    64,    65,    66,    35,    36,    11,    17,    13,    14,
      15,    16,    27,    35,    36,    30,    31,    22,    23,    33,
      32,    33,    33,    28,    29,    37,    38,    32,    40,    41,
      30,    31,    37,    38,    27,    40,    41,    30,    31,    51,
      17,    46,    33,    43,    49,    50,    51,     1,    48,    52,
      55,    33,    57,    33,     1,    60,     3,    11,    33,    64,
      65,    66,    23,    24,    11,    32,    13,    14,    15,    16,
      27,    23,    24,    30,    31,    22,    35,    36,    32,    33,
      12,    28,    29,    37,    38,    32,    40,    41,    17,    23,
      37,    38,    23,    40,    41,    25,    26,    51,    33,    46,
      35,    36,    49,    50,    51,     6,     7,     8,    55,    39,
      57,     1,    42,    60,    44,    23,    24,    64,    65,    66,
      23,    11,    17,    13,    14,    15,    16,    23,    24,    27,
      52,     1,    30,    31,    27,    17,    33,    30,    31,    29,
      47,    11,    32,    13,    14,    15,    16,    37,    38,    33,
      40,    41,    52,     1,    27,    45,    17,    30,    31,    29,
      17,    51,    32,    11,    47,    12,    17,    37,    38,    17,
      40,    41,    17,    27,     5,     1,    30,    31,    12,    66,
     487,    51,    63,    27,    32,    11,    30,    31,   222,    37,
      38,    17,    40,    41,    32,     1,   224,    45,    27,     1,
     395,    30,    31,    51,    -1,    11,    32,     1,    -1,    11,
      12,    37,    38,    -1,    40,    41,    -1,    11,    27,    45,
      22,    30,    31,     1,    -1,    51,    32,    -1,    30,    31,
      -1,    37,    38,    11,    40,    41,    -1,    -1,    32,    45,
       1,    -1,    -1,    37,    38,    51,    40,    41,    -1,    -1,
      11,    45,    -1,    -1,    32,     1,    -1,    51,    -1,    37,
      38,    -1,    40,    41,    -1,    11,    12,    -1,    -1,    47,
      -1,    32,    33,    51,    -1,     1,    37,    38,    -1,    40,
      41,    33,    -1,    35,    36,    11,    32,    -1,    -1,    -1,
      51,    37,    38,    -1,    40,    41,    -1,    23,     1,    11,
      -1,    13,    14,    15,    16,    51,    32,    -1,    11,    -1,
       1,    37,    38,    -1,    40,    41,    28,    29,    -1,    22,
      11,    -1,     1,    -1,    33,    51,    35,    36,    33,    32,
      35,    36,    11,    -1,    37,    38,    -1,    40,    41,    -1,
      -1,    32,    33,    -1,     1,    -1,    37,    38,    51,    40,
      41,    -1,    -1,    32,    11,    -1,    -1,    -1,    37,    38,
      51,    40,    41,    -1,     1,    33,    45,    35,    36,    -1,
      -1,    -1,    51,    -1,    11,    32,     1,     1,    -1,    -1,
      37,    38,    -1,    40,    41,    -1,    11,    11,    -1,    13,
      14,    15,    16,    -1,    51,    32,    -1,    -1,    -1,     1,
      37,    38,    -1,    40,    41,    29,    -1,    32,    32,    11,
      12,    -1,    37,    38,    51,    40,    41,     1,    -1,    -1,
      22,    -1,    -1,    25,    -1,    27,    51,    -1,    30,    31,
      -1,    30,    31,    -1,    33,    19,    20,    21,    -1,    23,
      -1,    -1,    -1,    27,    43,    -1,    30,    31,    11,    48,
      13,    14,    15,    16,    11,    -1,    13,    14,    15,    16,
      23,    30,    31,    -1,    33,    28,    29,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    43,    -1,    -1,    -1,    -1,    48
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
     121,   122,   123,   124,   127,   130,   131,   132,   133,   135,
     136,   137,   138,   139,   143,   144,    27,    11,    22,    22,
      80,     1,    17,    47,    51,    93,    11,    11,    33,   102,
     104,   105,     1,    33,     1,    17,     1,    17,    27,   134,
      32,   131,   132,     1,    11,    16,    17,    32,   125,     1,
      11,    32,    45,   126,   127,     1,    32,   126,    11,   144,
     145,   127,   119,     1,    32,   132,    23,   119,   134,   119,
      17,    47,    58,    30,    31,    43,    48,   119,   119,     1,
      17,    47,    28,    89,    95,    80,    23,   132,    41,    52,
      17,    47,    51,    11,    11,    12,     4,     9,   107,   132,
      33,    17,   125,     1,    47,   127,    11,    32,   126,    17,
     125,    17,   126,   126,   132,   127,    33,    35,    36,    25,
      26,    39,    42,    44,   126,   126,    33,    11,   146,     1,
      17,   136,   126,   127,   141,   141,   132,    11,   132,   132,
     132,   132,    68,   132,    95,    23,    28,    95,    11,    23,
      11,     1,    17,    52,    47,    22,    41,     1,    12,   105,
     105,    32,   134,    33,   126,    17,   127,   127,     1,    47,
     127,   126,    17,    17,   126,    17,   126,    33,     1,    33,
     126,   126,   127,   127,   127,   127,   127,    33,     1,    33,
      12,    52,    17,    33,     1,    33,   119,     1,    17,    11,
      17,    80,    95,    11,    12,    17,    11,    17,    17,    47,
      51,    22,    22,    23,    94,   127,    52,   105,   105,     5,
      17,   126,   127,   127,    33,   127,    33,   127,    17,    17,
     126,    17,     1,    11,    12,   147,   148,    22,    22,     1,
      22,    12,    17,    17,    11,    12,    17,   132,    17,    22,
      41,    51,    91,   127,    91,    17,    23,    24,     6,     7,
       8,   108,   127,    17,    33,    33,    33,   127,    33,   127,
      17,   127,   132,     1,    12,   132,   132,   148,    62,    63,
     140,   140,   140,   140,   132,    12,    17,   132,    17,    23,
      91,    52,    41,    23,    24,    23,    17,    22,   127,    33,
      33,   127,     1,    33,    33,    33,   127,    33,   132,   132,
      12,    32,    23,    23,    23,     1,    23,    17,   132,    17,
      17,    23,    52,    17,    51,   127,    91,   134,    33,     1,
      33,   119,     1,    32,    45,   128,   129,   132,   142,    17,
      17,    47,    41,    23,   107,     1,    61,   128,   129,   128,
     129,   132,   129,    35,    36,    25,    26,    39,    42,    44,
      33,   127,    52,    17,    17,    33,     1,    33,   128,   128,
     129,   129,   129,   129,   129,    12,    47,   119,   127,     1,
      61,    17,    17,   140,   140
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
#line 173 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    { ast->print((yyvsp[0].tn),0);cout<<"program: components hello\n";;}
    break;

  case 3:
#line 176 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"components: components component\n"; (yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, componentsListNode));;}
    break;

  case 4:
#line 177 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"components: component\n";			 (yyval.tn) = ast->createNode((yyvsp[0].tn), 0, componentNode);;}
    break;

  case 5:
#line 180 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"component:	class_interface\n";			(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 6:
#line 181 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"component:	class_implementation\n";	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 7:
#line 182 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"component:	protocol\n";				(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 8:
#line 188 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		s->insert_scope((yyvsp[-1].r.str),s->currScope);
		s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		(yyval.tn) =ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn), class_interface);;}
    break;

  case 9:
#line 196 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 208 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 217 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 226 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		i=1;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 13:
#line 232 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 246 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 15:
#line 251 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 16:
#line 255 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 17:
#line 260 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);;}
    break;

  case 18:
#line 264 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-1].tn),0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 19:
#line 268 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 20:
#line 272 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 21:
#line 276 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 22:
#line 282 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										(yyval.tn) = (yyvsp[-1].tn);
										;}
    break;

  case 23:
#line 289 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";									    (yyval.tn) = ast->createNode(0, 0, ids_list_Node);;}
    break;

  case 24:
#line 290 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); (yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 25:
#line 291 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 26:
#line 297 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 27:
#line 299 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 28:
#line 301 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														(yyval.tn) =(yyvsp[0].tn) ;}
    break;

  case 29:
#line 305 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node));;}
    break;

  case 30:
#line 307 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 31:
#line 309 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 32:
#line 314 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";
																	(yyval.tn) = ast->createNode((yyvsp[-1].tn), (yyvsp[0].tn), instance_variable_declaration_Node);
																	visability=2;
																	;}
    break;

  case 33:
#line 321 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node));
										;}
    break;

  case 34:
#line 325 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";
										(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node);
										;}
    break;

  case 35:
#line 330 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PRIVATE\n";
					visability=0;
					(yyval.tn) = ast->createNode(0,0, visibility_specification_private_Node);;}
    break;

  case 36:
#line 333 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PROTECTED\n";
					visability=1;
						(yyval.tn) = ast->createNode(0,0, visibility_specification_protected_Node);;}
    break;

  case 37:
#line 337 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"visibility_specification:AT_PUBLIC\n";
					visability=2;
						(yyval.tn) = ast->createNode(0,0, visibility_specification_public_Node);;}
    break;

  case 38:
#line 343 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 362 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_node);
											(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 40:
#line 365 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		int offset;
		if(i==1)
			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		TreeNode * temp=ast->createNode(0,0,IdentNode);
		temp->item=(yyvsp[-3].r.str);
		(yyval.tn) = ast->createNode(temp,(yyvsp[-1].tn),variable_assigment_node);
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
#line 388 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_assigment_node);
													(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 42:
#line 391 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 406 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_node);
												(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 44:
#line 408 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,0, variable_assigment_node);
		(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 45:
#line 413 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");(yyval.tn) = ast->createNode(0,0, variable_assigment_node);
														(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 46:
#line 415 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout << "Enum \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_enum);;}
    break;

  case 47:
#line 416 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout << "Struct \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_struct);;}
    break;

  case 48:
#line 417 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout << "Array \n" ; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayone);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 49:
#line 418 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout <<"Array N \n ";				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayN);		(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 50:
#line 423 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 51:
#line 424 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 52:
#line 428 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, structNode);;}
    break;

  case 53:
#line 429 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn), structNode);;}
    break;

  case 54:
#line 434 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {;;}
    break;

  case 55:
#line 435 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {;;}
    break;

  case 56:
#line 436 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 57:
#line 437 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 438 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 439 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 440 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 441 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 445 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 63:
#line 446 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-5].tn)->expectedType;;}
    break;

  case 64:
#line 447 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-9].tn)->expectedType;;}
    break;

  case 65:
#line 448 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 66:
#line 450 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 67:
#line 451 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) =ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 68:
#line 452 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-6].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 69:
#line 453 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 70:
#line 456 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-4].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-6].tn)->expectedType;;}
    break;

  case 71:
#line 457 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-3].tn)->expectedType;;}
    break;

  case 72:
#line 458 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-5].tn),(yyvsp[-2].tn), ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-7].tn)->expectedType;;}
    break;

  case 73:
#line 464 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, ArrayNMultiNode);;}
    break;

  case 74:
#line 465 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode(0,0, ArrayNMultiNode));;}
    break;

  case 75:
#line 468 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[-1].tn),0, array_body2Node);
															;}
    break;

  case 76:
#line 470 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[0].tn),0, array_body2Node);
															;}
    break;

  case 77:
#line 472 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-4].tn), ast->createNode((yyvsp[-1].tn),0, array_body2Node));
															;}
    break;

  case 78:
#line 474 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode(0,0, array_body2Node));
															;}
    break;

  case 79:
#line 479 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);
													 (yyval.r.type1)="";
													cout<<"type: simple_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;}
    break;

  case 80:
#line 483 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    { (yyval.r.type1)=(yyvsp[0].r.type1);
													(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 81:
#line 490 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;
													(yyval.tn)=ast->createNode(0,0, simple_type_INT);  (yyval.tn)->expectedType=inttype;;}
    break;

  case 82:
#line 492 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;
													(yyval.tn)=ast->createNode(0,0, simple_type_CHAR);	(yyval.tn)->expectedType=chartype;;}
    break;

  case 83:
#line 494 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;
													(yyval.tn)=ast->createNode(0,0, simple_typeFLOAT);	(yyval.tn)->expectedType=floattype;;}
    break;

  case 84:
#line 496 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;
													(yyval.tn)=ast->createNode(0,0, simple_type_NSSTRING);	(yyval.tn)->expectedType=stringtype;;}
    break;

  case 85:
#line 498 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;
													(yyval.tn)=ast->createNode(0,0, simple_type_VOID);	(yyval.tn)->expectedType=voidtype;;}
    break;

  case 86:
#line 503 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 516 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node));;}
    break;

  case 88:
#line 518 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";	(yyval.tn) = ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node);;}
    break;

  case 89:
#line 524 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 90:
#line 526 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 91:
#line 532 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 541 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 93:
#line 547 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);
		;}
    break;

  case 94:
#line 552 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		yyclearin;
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);;}
    break;

  case 95:
#line 563 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 96:
#line 571 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 97:
#line 576 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 98:
#line 578 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 99:
#line 583 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
																(yyval.r.type1)=(yyvsp[-1].r.type1);
																(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 100:
#line 587 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 101:
#line 589 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 102:
#line 595 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {i=3;(yyval.r.str)=(yyvsp[-2].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
											(yyval.tn) = ast->createNode(0,0, method_selector_Node);			;}
    break;

  case 103:
#line 597 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
											(yyval.tn) = ast->createNode(0,0, method_selector_Node);		;}
    break;

  case 104:
#line 600 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 105:
#line 602 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 106:
#line 604 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 107:
#line 606 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 108:
#line 608 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"parameter_list: parameter\n";
																			(yyval.tn) =ast->createNode((yyvsp[0].tn),0, paramListNode);;}
    break;

  case 109:
#line 611 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 630 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"statment: try_catch_statment\n";;}
    break;

  case 111:
#line 634 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"statment: catch_statment\n";;}
    break;

  case 112:
#line 635 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"statment: finally_TRY_CATCH\n";;}
    break;

  case 113:
#line 638 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"Exception NullPointerException";;}
    break;

  case 114:
#line 639 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"Exception OutOfBoundryException";;}
    break;

  case 115:
#line 640 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {cout<<"Exception CastException";;}
    break;

  case 116:
#line 643 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ImpNode);
		(yyval.tn)->currST=s->currScope;
		s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 117:
#line 650 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		Interface_name[0]='\0';
		strcat(Interface_name,(yyvsp[-2].r.str));
		cout<<endl<<Interface_name<<endl;
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
#line 665 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 675 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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
#line 683 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		Interface_name[0]='\0';
		strcat(Interface_name,(yyvsp[0].r.str));
		cout<<Interface_name;
		i=2;(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Implementation_Interface((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[0].r.str),"NSObject")==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER \n";
																;}
    break;

  case 121:
#line 700 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 122:
#line 701 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";;}
    break;

  case 123:
#line 702 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";;}
    break;

  case 124:
#line 707 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 125:
#line 708 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {								(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 126:
#line 712 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 127:
#line 713 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 128:
#line 716 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
	(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefNode);i=2;
	Scope* temp=s->currScope;
	insert_param();
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
	param_list1.clear();
	param_list.clear();
	cout<<"class_implementation_definition: class_implementation_definition_header block_body";
	s->insert_scope((yyvsp[-1].r.str),temp);
	;}
    break;

  case 129:
#line 739 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);
										if(strcmp((yyvsp[0].r.str),"main")==0){
											strcat(main_interface,Interface_name);
											cout<<Interface_name<<endl;
											cout<<main_interface<<endl;
										}
										(yyval.r.type1)=(yyvsp[-1].r.type1);
										Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
										
										(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";;}
    break;

  case 130:
#line 749 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {if(strcmp((yyvsp[0].r.str),"main")==0){
											strcat(main_interface,Interface_name);
											cout<<Interface_name<<endl;
											cout<<main_interface<<endl;
										}
										(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";;}
    break;

  case 131:
#line 758 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		Scope* temp=s->currScope;
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefNode);
		i=2;
		(yyval.r.str)=(yyvsp[-1].r.str);
		insert_param();
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
		param_list1.clear();
		param_list.clear();
		s->insert_scope((yyvsp[-1].r.str),s->currScope);
		cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 132:
#line 782 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);
											if(strcmp((yyvsp[0].r.str),"main")==0){
												strcat(main_interface,Interface_name);
												cout<<Interface_name<<endl;
												cout<<main_interface<<endl;
											}
											 (yyval.r.type1)=(yyvsp[-1].r.type1);
											 Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
											 (yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";;}
    break;

  case 133:
#line 791 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
											if(strcmp((yyvsp[0].r.str),"main")==0){
												strcat(main_interface,Interface_name);
												cout<<Interface_name<<endl;
												cout<<main_interface<<endl;
											}
											(yyval.tn) = ast->createNode((yyvsp[0].tn),0,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 134:
#line 801 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,stmtListNode));cout<<"statement_list: statement_list statement\n";;}
    break;

  case 135:
#line 802 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,stmtListNode);cout<<"statement_list: statement\n";;}
    break;

  case 136:
#line 806 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: loop_statement\n";;}
    break;

  case 137:
#line 807 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: conditional_statement\n";;}
    break;

  case 138:
#line 808 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);cout<<"statement: expr\n";;}
    break;

  case 139:
#line 809 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: variable_declaration\n";;}
    break;

  case 140:
#line 810 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 141:
#line 810 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 142:
#line 811 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: return_statement\n";;}
    break;

  case 144:
#line 816 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,ReturnNode);cout<<"return_statement: RETURN expr\n";;}
    break;

  case 145:
#line 817 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 146:
#line 820 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: for_loop\n";;}
    break;

  case 147:
#line 821 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: while_loop\n";;}
    break;

  case 148:
#line 822 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 149:
#line 825 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ForNode);cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 150:
#line 828 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {	
		(yyval.tn)=ast->createNode((yyvsp[-5].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 151:
#line 833 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 152:
#line 835 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 153:
#line 837 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 154:
#line 839 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 155:
#line 846 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 156:
#line 848 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 157:
#line 850 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 158:
#line 855 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 159:
#line 860 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";;}
    break;

  case 160:
#line 863 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-3].tn),ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 161:
#line 866 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";;}
    break;

  case 162:
#line 869 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";;}
    break;

  case 163:
#line 873 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 164:
#line 877 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 165:
#line 878 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 166:
#line 879 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 167:
#line 880 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 168:
#line 881 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 169:
#line 882 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 170:
#line 883 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";;}
    break;

  case 171:
#line 888 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 172:
#line 889 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 173:
#line 890 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 174:
#line 891 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 175:
#line 892 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 176:
#line 893 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 177:
#line 894 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 178:
#line 895 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 179:
#line 896 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 180:
#line 899 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:assign_expr\n";	;}
    break;

  case 181:
#line 900 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 182:
#line 903 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 183:
#line 904 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 184:
#line 905 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 185:
#line 906 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 186:
#line 907 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 187:
#line 908 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 188:
#line 909 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 189:
#line 910 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 190:
#line 911 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 191:
#line 912 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 192:
#line 913 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 193:
#line 914 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 194:
#line 919 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 195:
#line 923 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";								;}
    break;

  case 196:
#line 926 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		TreeNode * temp=ast->createNode(0,0,IdentNode);
		temp->complexType[0]='\0';	
		temp->item=(yyvsp[0].r.str);
		if(ignore==false){
			var.push((yyvsp[0].r.str));
			cout<<endl<<"2"<<endl;
			(yyval.r.str)=(yyvsp[0].r.str);
			cout<<"\n"<<Prev_Interface_name<<"          "<<(yyvsp[0].r.str)<<endl;
			Variable* v=s->getVariableFromInhertInterface(Prev_Interface_name,(yyvsp[0].r.str));	
			if(v==0){
				char error[50]="class ";
				strcat(error,Prev_Interface_name);
				strcat(error," has no member ");
				strcat(error,(yyvsp[0].r.str));
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",error);
				ignore=true;
			}
			else{
				if(v->getSpecifier()!=2){
					char error[50]="member ";
					strcat(error,(yyvsp[0].r.str));
					strcat(error," is inaccesible");
					Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",error);
					ignore=true;
				}
				else{
					Prev_Interface_name[0]='\0';
					if(v->getType()!=complexType)
						ignore=true;
					else
						strcat(Prev_Interface_name,v->getType1());	
					strcat(temp->complexType,Prev_Interface_name);
				}
			}
		}
		else{
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","simple type has no member");
		}
		(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),temp);
		cout<<"long_id: long_id.IDENTIFIER\n";
	;}
    break;

  case 197:
#line 968 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=(yyvsp[0].tn);cout<<"long_id: long_id.message_call\n";
	;}
    break;

  case 198:
#line 971 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		ignore=false;
		(yyval.tn)=ast->createNode(0,0,IdentNode);
		(yyval.tn)->item=(yyvsp[0].r.str);
		cout<<endl<<"1"<<endl;
		Variable* v=s->getVariableFromCurrentScope((yyvsp[0].r.str));
		if(v==0) {
			v=s->getVariableFromInterface(Interface_name,(yyvsp[0].r.str));
			if(v==0){
				v=s->getVariableFromInhertInterface(Interface_name,(yyvsp[0].r.str));
				if(v->getSpecifier()==0)
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable is private cannot access");
						//add header private error here
				}
		}
		Prev_Interface_name[0]='\0';
		(yyval.tn)->complexType[0]='\0';
		if(v!=0){
			if(v->getType()!=complexType)
				ignore=true;
			else
				strcat(Prev_Interface_name,v->getType1());					
		}
		else
		{
			ignore=true;
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not Found");
		}
		strcat((yyval.tn)->complexType,Interface_name);	
		if(strcmp(lexer->YYText(),".")==0) 
			var.push((yyvsp[0].r.str));
		cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 199:
#line 1005 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);  (yyval.tn)->expectedType=stringtype; cout<<"simple_expr:STRING_VAL\n";(yyval.tn)->item=(void *)yylval.r.str;;}
    break;

  case 200:
#line 1006 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,intNode);	  (yyval.tn)->expectedType=inttype;   cout<<"simple_expr:INT_VAL\n"; (yyval.tn)->item=(void *)yylval.r.i;;}
    break;

  case 201:
#line 1007 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,floatNode);	  cout<<"simple_expr:FLOAT_VAL\n"; (yyval.tn)->expectedType=floattype;;}
    break;

  case 202:
#line 1008 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,CharNode);	  cout<<"simple_expr:CHAR_VAL\n";  cout<<"simple_expr:CHAR_VAL\n"; (yyval.tn)->expectedType=chartype; (yyval.tn)->item=(void *)yylval.r.c;;}
    break;

  case 203:
#line 1009 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);							  cout<<"simple_expr:long_id\n";										;}
    break;

  case 204:
#line 1010 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";			;}
    break;

  case 205:
#line 1011 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";;}
    break;

  case 206:
#line 1012 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";;}
    break;

  case 207:
#line 1013 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";;}
    break;

  case 208:
#line 1014 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";;}
    break;

  case 209:
#line 1015 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,SmpExpNode);cout<<"expr:p_type expr\n";;}
    break;

  case 210:
#line 1016 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);		cout<<"method call"<<endl;;}
    break;

  case 211:
#line 1019 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {if(strcmp((yyvsp[-3].r.str),"NSLog")==0){(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,NSLogNode);}    cout<<"IDENTIFIER OPEN_P simple_expr CLOSE_P"<<endl;;}
    break;

  case 212:
#line 1021 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 213:
#line 1022 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";;}
    break;

  case 214:
#line 1026 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),WhileNode);cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 215:
#line 1030 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 216:
#line 1031 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 217:
#line 1032 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 218:
#line 1033 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 219:
#line 1036 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 220:
#line 1038 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),CondtiNode);cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 221:
#line 1039 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),CondtiNode);
		cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 222:
#line 1042 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,CondtiNode);cout<<"conditional_statement: switch\n";;}
    break;

  case 223:
#line 1045 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-1].tn),SwitchNode);cout<<"switch statment";;}
    break;

  case 224:
#line 1046 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 225:
#line 1047 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 226:
#line 1048 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 227:
#line 1049 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 228:
#line 1058 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
									(yyval.tn)=ast->createNode((yyvsp[-6].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[0].tn),SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";;}
    break;

  case 229:
#line 1062 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 230:
#line 1063 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-2].tn),SwtBdyNode);cout<<"default statment";;}
    break;

  case 231:
#line 1064 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 232:
#line 1069 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 233:
#line 1070 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 234:
#line 1074 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 235:
#line 1075 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 236:
#line 1078 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 237:
#line 1079 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 238:
#line 1080 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 239:
#line 1081 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 240:
#line 1084 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {if(strcmp((yyvsp[-1].r.str),"NSLog")) (yyval.tn) = ast->createNode((yyvsp[-1].tn),0,NSLogNode); else (yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 241:
#line 1087 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,SndrNode);cout<<"sender: message_call\n";;}
    break;

  case 242:
#line 1088 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0,IdentNode); (yyval.tn)->item=(yyvsp[0].r.str);cout<<"sender: IDENTIFIER\n";;}
    break;

  case 243:
#line 1091 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0,IdentNode); (yyval.tn)->item=(yyvsp[0].r.str);cout<<"message: IDENTIFIER\n";;}
    break;

  case 244:
#line 1092 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.r.str)=(yyvsp[-2].r.str);(yyval.tn) = ast->createNode((yyvsp[0].tn),0,MsgNode); (yyval.tn)->item=(yyvsp[-2].r.str);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 245:
#line 1095 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,argListNode));cout<<"argument_list: argument_list argument\n";;}
    break;

  case 246:
#line 1096 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argListNode);cout<<"argument_list: argument\n";;}
    break;

  case 247:
#line 1099 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = (yyvsp[-1].tn); cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 248:
#line 1100 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 249:
#line 1101 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 250:
#line 1102 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 251:
#line 1103 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 252:
#line 1105 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ProtclNode);
	s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 253:
#line 1111 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
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

  case 254:
#line 1123 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";;}
    break;

  case 255:
#line 1125 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";;}
    break;

  case 256:
#line 1128 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";;}
    break;

  case 257:
#line 1131 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3660 "yacc.cpp"

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


#line 1134 "C:\\Users\\hossam\\Documents\\GitHub\\comp\\comp\\yacc.y"

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
	cout<<main_interface<<endl;
	code_generation1 code(main_interface);
	code.generate_code(s->currScope);
	code.end();
	system("pause");	
}

