/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "miniC.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AST.h"
#include "print.h"
#include "symboltable.h"
//global variables which can be used in other .c .h
struct PROGRAM *head;
FILE *fp;   //for AST
FILE *fp2;  //for symboltable 
void yyerror(char* text) {

    fprintf(stderr, "%s\n", text);
}
/*
void lyyerror(YYLTYPE t, char *s, ...)
{
    va_list ap;
    va_start(ap, s);

    if(t.first_line)
        fprintf(stderr, "%d.%d-%d.%d: error: ", t.first_line, t.first_column, t.last_line, t.last_column);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}
*/

#line 95 "miniC.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "miniC.tab.h".  */
#ifndef YY_YY_MINIC_TAB_H_INCLUDED
# define YY_YY_MINIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTNUM = 258,
    FLOATNUM = 259,
    ID = 260,
    INT = 261,
    FLOAT = 262,
    MINUS = 263,
    PLUS = 264,
    MULT = 265,
    DIV = 266,
    LE = 267,
    GE = 268,
    EQ = 269,
    NE = 270,
    GT = 271,
    LT = 272,
    IF = 273,
    ELSE = 274,
    FOR = 275,
    WHILE = 276,
    DO = 277,
    RETURN = 278,
    DQUOT_T = 279,
    SQUOT_T = 280,
    AMP_T = 281,
    UNARY = 282,
    LOWER_THAN_ELSE = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "miniC.y" /* yacc.c:355  */

    struct PROGRAM       *ptr_program;
    struct DECLARATION   *ptr_declaration;
    struct IDENTIFIER    *ptr_identifier;
    struct FUNCTION      *ptr_function;
    struct PARAMETER     *ptr_parameter;
    struct COMPOUNDSTMT  *ptr_compoundstmt;
    struct STMT          *ptr_stmt;
    struct ASSIGN        *ptr_assign;
    struct CALL          *ptr_call;
    struct ARG           *ptr_arg;
    struct WHILE_S       *ptr_while_s;
    struct FOR_S         *ptr_for_s;
    struct IF_S          *ptr_if_s;
    struct ID_S          *ptr_id_s;
    struct EXPR          *ptr_expr;
    struct ADDIOP        *ptr_addiop;
    struct MULTOP        *ptr_multop;
    struct RELAOP        *ptr_relaop;
    struct EQLTOP        *ptr_eqltop;
    Type_e type;
    //TODO int, float to char*
    int intnum;
    float floatnum;
    char* id;

#line 191 "miniC.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINIC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "miniC.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   308

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,     2,     2,    33,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,    27,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    28,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   108,   115,   123,   126,   133,   136,   143,
     150,   153,   160,   167,   175,   181,   187,   194,   203,   212,
     213,   217,   228,   234,   241,   247,   254,   260,   266,   272,
     278,   284,   290,   296,   302,   306,   313,   321,   329,   335,
     342,   343,   350,   357,   360,   364,   374,   385,   396,   407,
     418,   424,   430,   436,   442,   449,   455,   462,   467,   474,
     479,   485,   490,   495,   500,   506,   511,   517,   524,   532,
     541,   548
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTNUM", "FLOATNUM", "ID", "INT",
  "FLOAT", "MINUS", "PLUS", "MULT", "DIV", "LE", "GE", "EQ", "NE", "GT",
  "LT", "IF", "ELSE", "FOR", "WHILE", "DO", "RETURN", "DQUOT_T", "SQUOT_T",
  "AMP_T", "'='", "UNARY", "'('", "')'", "LOWER_THAN_ELSE", "';'", "','",
  "'['", "']'", "'{'", "'}'", "$accept", "Program", "DeclList", "FuncList",
  "Declaration", "IdentList", "Identifier", "ParamList", "Parameter",
  "Function", "Type", "CompoundStmt", "StmtList", "Stmt", "AssignStmt",
  "Assign", "CallStmt", "Call", "ArgList", "Arg", "RetStmt", "Expr",
  "Id_s", "Addiop", "Multop", "Relaop", "Eqltop", "While_s", "For_s",
  "If_s", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    61,   282,    40,
      41,   283,    59,    44,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,   -60,   -60,    11,    46,    46,   -60,   -60,    14,   -60,
      46,   -60,   -60,    54,   -14,    33,   -60,    38,    -1,    72,
     -60,    73,    44,   -21,   -60,    73,    47,    62,   -60,    88,
     -60,    44,    46,   -60,   -60,    -6,    70,    74,    83,   114,
      52,   -60,   -60,   108,    73,   -60,    26,   -60,   -60,    65,
     -60,    90,   -60,   -60,   -60,   -60,   -60,   -60,   168,   113,
     168,   168,    97,   168,   102,   -60,   -60,     1,   168,   168,
     -60,   -60,   190,   -60,    68,   -60,   -60,   -60,   -60,   291,
     -60,    31,   -60,   291,   143,   225,    16,    95,   235,   104,
     168,   -60,   258,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   168,   168,   168,   168,   -60,   -60,
     168,   111,   114,   168,   114,   168,   153,   -60,   291,   291,
     291,   291,   -60,   168,   120,   200,   -60,   268,   -60,   291,
     114,    97,   109,   -60,   115,   -60,   114,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    20,     0,     3,     4,     5,     7,     0,     1,
       2,     6,     8,     0,    12,     0,    10,     0,     0,     0,
       9,     0,     0,     0,    14,     0,     0,    12,    11,     0,
      17,     0,     0,    16,    13,     0,     0,     0,     0,     0,
       0,    33,    21,     0,     0,    32,     0,    24,    26,     0,
      27,     0,    28,    29,    30,    31,    18,    15,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    55,     0,     0,
      43,    50,     0,    53,     0,    22,    25,    34,    37,    35,
      38,     0,    40,    42,     0,     0,     0,     0,     0,     0,
       0,    45,     0,    57,    58,    59,    60,    61,    62,    65,
      66,    63,    64,    44,     0,     0,     0,     0,    23,    39,
       0,     0,     0,     0,     0,     0,     0,    54,    46,    47,
      48,    49,    41,     0,    70,     0,    67,     0,    56,    36,
       0,     0,     0,    71,     0,    68,     0,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   118,   144,    -2,   -60,    17,   -60,   117,    29,
       8,   -15,   131,   -38,   -60,   -59,   -60,   -29,   -60,    67,
     -60,   -36,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    15,    16,    23,    24,     7,
       8,    45,    46,    47,    48,    49,    50,    71,    81,    82,
      52,    83,    73,   104,   105,   106,   107,    53,    54,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    64,    11,    87,    72,     1,     2,    30,    76,    31,
      51,     9,    32,    13,    51,    18,    56,    51,    13,    14,
      19,    58,    79,    59,    84,    85,    25,    88,    60,    22,
      59,    35,    91,    92,    12,    90,    76,    44,    28,    12,
      25,    11,    33,    58,    36,    51,    37,    38,    39,    40,
      60,    44,     1,     2,   116,    65,    66,    67,    41,    17,
      68,   109,    29,    75,   110,    20,    21,    18,   118,   119,
     120,   121,   134,    35,   124,    26,   126,   125,    27,   127,
      29,    69,    34,    51,    70,    51,    36,   129,    37,    38,
      39,    40,   133,    35,     1,     2,    19,    77,   137,    61,
      41,    51,    86,    62,    29,   108,    36,    51,    37,    38,
      39,    40,    63,    35,     1,     2,    65,    66,    67,    35,
      41,    68,    78,    89,    29,    42,    36,   113,    37,    38,
      39,    40,    36,   115,    37,    38,    39,    40,   123,   130,
      41,   135,    69,    80,    29,   136,    41,    43,    10,    57,
      29,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    65,    66,    67,    74,     0,    68,   122,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102
};

static const yytype_int16 yycheck[] =
{
      29,    39,     4,    62,    40,     6,     7,    22,    46,    30,
      39,     0,    33,     5,    43,    29,    31,    46,    10,     5,
      34,    27,    58,    29,    60,    61,    18,    63,    34,    30,
      29,     5,    68,    69,     5,    34,    74,    29,    21,    10,
      32,    43,    25,    27,    18,    74,    20,    21,    22,    23,
      34,    43,     6,     7,    90,     3,     4,     5,    32,     5,
       8,    30,    36,    37,    33,    32,    33,    29,   104,   105,
     106,   107,   131,     5,   112,     3,   114,   113,     5,   115,
      36,    29,    35,   112,    32,   114,    18,   123,    20,    21,
      22,    23,   130,     5,     6,     7,    34,    32,   136,    29,
      32,   130,     5,    29,    36,    37,    18,   136,    20,    21,
      22,    23,    29,     5,     6,     7,     3,     4,     5,     5,
      32,     8,    32,    21,    36,    37,    18,    32,    20,    21,
      22,    23,    18,    29,    20,    21,    22,    23,    27,    19,
      32,    32,    29,    30,    36,    30,    32,    29,     4,    32,
      36,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     3,     4,     5,    43,    -1,     8,   110,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    39,    40,    41,    42,    47,    48,     0,
      41,    42,    47,    48,     5,    43,    44,     5,    29,    34,
      32,    33,    30,    45,    46,    48,     3,     5,    44,    36,
      49,    30,    33,    44,    35,     5,    18,    20,    21,    22,
      23,    32,    37,    40,    48,    49,    50,    51,    52,    53,
      54,    55,    58,    65,    66,    67,    49,    46,    27,    29,
      34,    29,    29,    29,    51,     3,     4,     5,     8,    29,
      32,    55,    59,    60,    50,    37,    51,    32,    32,    59,
      30,    56,    57,    59,    59,    59,     5,    53,    59,    21,
      34,    59,    59,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    32,    61,    62,    63,    64,    37,    30,
      33,    35,    30,    32,    30,    29,    59,    30,    59,    59,
      59,    59,    57,    27,    51,    59,    51,    59,    35,    59,
      19,    32,    30,    51,    53,    32,    30,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    39,    40,    40,    41,    41,    42,
      43,    43,    44,    44,    45,    45,    46,    47,    47,    48,
      48,    49,    49,    49,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    63,    63,    64,    64,    65,    65,    66,
      67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     2,     1,     2,     3,
       1,     3,     1,     4,     1,     3,     2,     5,     6,     1,
       1,     2,     3,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     6,     2,     3,     4,
       1,     3,     1,     2,     3,     2,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     9,
       5,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 101 "miniC.y" /* yacc.c:1646  */
    {
            struct PROGRAM *prog = (struct PROGRAM*) malloc (sizeof (struct PROGRAM));
            prog->decl = (yyvsp[-1].ptr_declaration);
            prog->func = (yyvsp[0].ptr_function);
            head = prog;
            (yyval.ptr_program) = prog;
       }
#line 1415 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 108 "miniC.y" /* yacc.c:1646  */
    {
            struct PROGRAM *prog = (struct PROGRAM*) malloc (sizeof (struct PROGRAM));
            prog->decl = (yyvsp[0].ptr_declaration);
            prog->func = NULL;
            head = prog;
            (yyval.ptr_program) = prog;
       }
#line 1427 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "miniC.y" /* yacc.c:1646  */
    {
            struct PROGRAM *prog = (struct PROGRAM*) malloc (sizeof (struct PROGRAM));
            prog->decl = NULL;
            prog->func = (yyvsp[0].ptr_function);
            head = prog;
            (yyval.ptr_program) = prog;
       }
#line 1439 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 123 "miniC.y" /* yacc.c:1646  */
    {
            (yyval.ptr_declaration) = (yyvsp[0].ptr_declaration);
        }
#line 1447 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 126 "miniC.y" /* yacc.c:1646  */
    {
            struct DECLARATION *decl;
            decl = (yyvsp[0].ptr_declaration);
            decl->prev = (yyvsp[-1].ptr_declaration);
            (yyval.ptr_declaration) = decl;
        }
#line 1458 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 133 "miniC.y" /* yacc.c:1646  */
    {
            (yyval.ptr_function) = (yyvsp[0].ptr_function);
        }
#line 1466 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 136 "miniC.y" /* yacc.c:1646  */
    {
            struct FUNCTION *func;
            func = (yyvsp[0].ptr_function);
            func->prev = (yyvsp[-1].ptr_function);
            (yyval.ptr_function) = func;
        }
#line 1477 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 143 "miniC.y" /* yacc.c:1646  */
    {
                struct DECLARATION *decl = (struct DECLARATION*) malloc (sizeof (struct DECLARATION));
                decl->t = (yyvsp[-2].type);
                decl->id = (yyvsp[-1].ptr_identifier);
                (yyval.ptr_declaration) = decl;
            }
#line 1488 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 150 "miniC.y" /* yacc.c:1646  */
    {
            (yyval.ptr_identifier) = (yyvsp[0].ptr_identifier);
        }
#line 1496 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 153 "miniC.y" /* yacc.c:1646  */
    {
            struct IDENTIFIER *iden;
            iden = (yyvsp[0].ptr_identifier);
            iden->prev = (yyvsp[-2].ptr_identifier);
            (yyval.ptr_identifier) = iden;
        }
#line 1507 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 160 "miniC.y" /* yacc.c:1646  */
    {
            struct IDENTIFIER *iden = (struct IDENTIFIER*) malloc (sizeof (struct IDENTIFIER));
            iden->ID = (yyvsp[0].id);
            iden->intnum = 0;   // zero, If scalar
            iden->prev = NULL;
            (yyval.ptr_identifier) = iden;
          }
#line 1519 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "miniC.y" /* yacc.c:1646  */
    {
            struct IDENTIFIER *iden = (struct IDENTIFIER*) malloc (sizeof (struct IDENTIFIER));
            iden->ID = (yyvsp[-3].id);
            iden->intnum = (yyvsp[-1].intnum);   // zero, If scalar
            iden->prev = NULL;
            (yyval.ptr_identifier) = iden;
           }
#line 1531 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 175 "miniC.y" /* yacc.c:1646  */
    {
            struct PARAMETER *param;
            param = (yyvsp[0].ptr_parameter);
            param->prev = NULL;
            (yyval.ptr_parameter) = param;
        }
#line 1542 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 181 "miniC.y" /* yacc.c:1646  */
    {
            struct PARAMETER *param;
            param = (yyvsp[0].ptr_parameter);
            param->prev = (yyvsp[-2].ptr_parameter);
            (yyval.ptr_parameter) = param;
        }
#line 1553 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 187 "miniC.y" /* yacc.c:1646  */
    {
            struct PARAMETER *param = (struct PARAMETER*) malloc (sizeof (struct PARAMETER));
            param->t = (yyvsp[-1].type);
            param->id = (yyvsp[0].ptr_identifier);
            param->prev = NULL;
            (yyval.ptr_parameter) = param;
        }
#line 1565 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 194 "miniC.y" /* yacc.c:1646  */
    {
            struct FUNCTION *func = (struct FUNCTION*) malloc (sizeof (struct FUNCTION));
            func->t = (yyvsp[-4].type);
            func->ID = (yyvsp[-3].id);
            func->param = NULL;
            func->cstmt = (yyvsp[0].ptr_compoundstmt);
            (yyval.ptr_function) = func;

        }
#line 1579 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 203 "miniC.y" /* yacc.c:1646  */
    {
        struct FUNCTION *func = (struct FUNCTION*) malloc (sizeof (struct FUNCTION));
        func->t = (yyvsp[-5].type);
        func->ID = (yyvsp[-4].id);
        func->param = (yyvsp[-2].ptr_parameter);
        func->cstmt = (yyvsp[0].ptr_compoundstmt);
        (yyval.ptr_function) = func;
    }
#line 1592 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 212 "miniC.y" /* yacc.c:1646  */
    { (yyval.type) = eInt;}
#line 1598 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 213 "miniC.y" /* yacc.c:1646  */
    { (yyval.type) = eFloat;}
#line 1604 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 217 "miniC.y" /* yacc.c:1646  */
    {
                struct COMPOUNDSTMT *comp = (struct COMPOUNDSTMT*) malloc (sizeof (struct COMPOUNDSTMT));
                comp->decl = NULL;
                comp->stmt = NULL;
                (yyval.ptr_compoundstmt) = comp;
                /*
                { } 안에 { } 만 들어 있는 경우도 표현하기 위하여,
                NULL을 반환하지 않고 내용이 비어있어도 동적할당을 하였다.
                */
                
            }
#line 1620 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 228 "miniC.y" /* yacc.c:1646  */
    {
                struct COMPOUNDSTMT *comp = (struct COMPOUNDSTMT*) malloc (sizeof (struct COMPOUNDSTMT));
                comp->decl = NULL;
                comp->stmt = (yyvsp[-1].ptr_stmt);
                (yyval.ptr_compoundstmt) = comp;
            }
#line 1631 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 234 "miniC.y" /* yacc.c:1646  */
    {
                struct COMPOUNDSTMT *comp = (struct COMPOUNDSTMT*) malloc (sizeof (struct COMPOUNDSTMT));
                comp->decl = (yyvsp[-2].ptr_declaration);
                comp->stmt = (yyvsp[-1].ptr_stmt);
                (yyval.ptr_compoundstmt) = comp;
            }
#line 1642 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 241 "miniC.y" /* yacc.c:1646  */
    {
            struct STMT *stmt;
            stmt = (yyvsp[0].ptr_stmt);
            stmt->prev = NULL;
            (yyval.ptr_stmt) = stmt;
        }
#line 1653 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 247 "miniC.y" /* yacc.c:1646  */
    {
            struct STMT *stmt;
            stmt = (yyvsp[0].ptr_stmt);
            stmt->prev = (yyvsp[-1].ptr_stmt);
            (yyval.ptr_stmt) = stmt;
        }
#line 1664 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 254 "miniC.y" /* yacc.c:1646  */
    { 
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eAssign;
        stmt->stmt.assign_ = (yyvsp[0].ptr_assign);
        (yyval.ptr_stmt) = stmt;
    }
#line 1675 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 260 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eCall;
        stmt->stmt.call_ = (yyvsp[0].ptr_call);
        (yyval.ptr_stmt) = stmt;
    }
#line 1686 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 266 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eRet;
        stmt->stmt.return_ = (yyvsp[0].ptr_expr);
        (yyval.ptr_stmt) = stmt;
    }
#line 1697 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 272 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eWhile;
        stmt->stmt.while_ = (yyvsp[0].ptr_while_s);
        (yyval.ptr_stmt) = stmt;
    }
#line 1708 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 278 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eFor;
        stmt->stmt.for_ = (yyvsp[0].ptr_for_s);
        (yyval.ptr_stmt) = stmt;
    }
#line 1719 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 284 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eIf;
        stmt->stmt.if_ = (yyvsp[0].ptr_if_s);
        (yyval.ptr_stmt) = stmt;
    }
#line 1730 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 290 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eCompound;
        stmt->stmt.cstmt_ = (yyvsp[0].ptr_compoundstmt);
        (yyval.ptr_stmt) = stmt;
    }
#line 1741 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 296 "miniC.y" /* yacc.c:1646  */
    {
        struct STMT *stmt = (struct STMT*) malloc (sizeof (struct STMT));
        stmt->s = eSemi;
        (yyval.ptr_stmt) = stmt;
    }
#line 1751 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 302 "miniC.y" /* yacc.c:1646  */
    { 
            (yyval.ptr_assign) = (yyvsp[-1].ptr_assign);
          }
#line 1759 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 306 "miniC.y" /* yacc.c:1646  */
    {
            struct ASSIGN *assign = (struct ASSIGN*) malloc (sizeof (struct ASSIGN));
            assign->ID = (yyvsp[-2].id);
            assign->index = NULL; //NUL, if LHS is scalar variable
            assign->expr = (yyvsp[0].ptr_expr);
            (yyval.ptr_assign) = assign;
        }
#line 1771 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 313 "miniC.y" /* yacc.c:1646  */
    {
            struct ASSIGN *assign = (struct ASSIGN*) malloc (sizeof (struct ASSIGN));
            assign->ID = (yyvsp[-5].id);
            assign->index = (yyvsp[-3].ptr_expr); 
            assign->expr = (yyvsp[0].ptr_expr);
            (yyval.ptr_assign) = assign;
        }
#line 1783 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 321 "miniC.y" /* yacc.c:1646  */
    {
            (yyval.ptr_call) = (yyvsp[-1].ptr_call);
        }
#line 1791 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 329 "miniC.y" /* yacc.c:1646  */
    {
        struct CALL *call = (struct CALL*) malloc (sizeof (struct CALL));
        call->ID = (yyvsp[-2].id);
        call->arg = NULL;
        (yyval.ptr_call) = call;
    }
#line 1802 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 335 "miniC.y" /* yacc.c:1646  */
    {
        struct CALL *call = (struct CALL*) malloc (sizeof (struct CALL));
        call->ID = (yyvsp[-3].id);
        call->arg = (yyvsp[-1].ptr_arg);
        (yyval.ptr_call) = call;
    }
#line 1813 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 342 "miniC.y" /* yacc.c:1646  */
    { (yyval.ptr_arg) = (yyvsp[0].ptr_arg);}
#line 1819 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 343 "miniC.y" /* yacc.c:1646  */
    {
            struct ARG *arg;
            arg = (yyvsp[0].ptr_arg);
            arg->prev = (yyvsp[-2].ptr_arg);
            (yyval.ptr_arg) = arg;
        }
#line 1830 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 350 "miniC.y" /* yacc.c:1646  */
    {
    struct ARG *arg = (struct ARG*) malloc (sizeof (struct ARG));
    arg->expr = (yyvsp[0].ptr_expr);
    arg->prev = NULL;
    (yyval.ptr_arg) = arg;
   }
#line 1841 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 357 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.ptr_expr) = NULL;
        }
#line 1849 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 360 "miniC.y" /* yacc.c:1646  */
    {
        (yyval.ptr_expr) = (yyvsp[-1].ptr_expr);
       }
#line 1857 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 364 "miniC.y" /* yacc.c:1646  */
    {
        struct UNOP *unop = (struct UNOP*) malloc (sizeof (struct UNOP));
        unop->u = eNegative;
        unop->expr = (yyvsp[0].ptr_expr);

        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eUnop;
        expr->expression.unop_ = unop;
        (yyval.ptr_expr) = expr;
    }
#line 1872 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 374 "miniC.y" /* yacc.c:1646  */
    {
        struct ADDIOP *addiop;
        addiop = (yyvsp[-1].ptr_addiop);
        addiop->lhs=(yyvsp[-2].ptr_expr);
        addiop->rhs=(yyvsp[0].ptr_expr);

        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eAddi;
        expr->expression.addiop_ = addiop;
        (yyval.ptr_expr) = expr;
    }
#line 1888 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 385 "miniC.y" /* yacc.c:1646  */
    {
        struct MULTOP *multop;
        multop = (yyvsp[-1].ptr_multop);
        multop->lhs=(yyvsp[-2].ptr_expr);
        multop->rhs=(yyvsp[0].ptr_expr);

        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eMulti;   // eMult와 다름 
        expr->expression.multop_ = multop;
        (yyval.ptr_expr) = expr;
    }
#line 1904 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 396 "miniC.y" /* yacc.c:1646  */
    {
        struct RELAOP *relaop;
        relaop = (yyvsp[-1].ptr_relaop);
        relaop->lhs=(yyvsp[-2].ptr_expr);
        relaop->rhs=(yyvsp[0].ptr_expr);

        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eRela;  
        expr->expression.relaop_ = relaop;
        (yyval.ptr_expr) = expr;
    }
#line 1920 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 407 "miniC.y" /* yacc.c:1646  */
    {
        struct EQLTOP *eqltop;
        eqltop = (yyvsp[-1].ptr_eqltop);
        eqltop->lhs=(yyvsp[-2].ptr_expr);
        eqltop->rhs=(yyvsp[0].ptr_expr);

        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eEqlt;  
        expr->expression.eqltop_ = eqltop;
        (yyval.ptr_expr) = expr;
    }
#line 1936 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 418 "miniC.y" /* yacc.c:1646  */
    {
        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eCallExpr;  
        expr->expression.call_ = (yyvsp[0].ptr_call);
        (yyval.ptr_expr) = expr;
    }
#line 1947 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 424 "miniC.y" /* yacc.c:1646  */
    {
        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eIntnum;  
        expr->expression.intnum = (yyvsp[0].intnum);
        (yyval.ptr_expr) = expr;
    }
#line 1958 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 430 "miniC.y" /* yacc.c:1646  */
    {
        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eFloatnum;  
        expr->expression.floatnum = (yyvsp[0].floatnum);
        (yyval.ptr_expr) = expr;
    }
#line 1969 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 436 "miniC.y" /* yacc.c:1646  */
    {
        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eId;  
        expr->expression.ID_ = (yyvsp[0].ptr_id_s);
        (yyval.ptr_expr) = expr;
    }
#line 1980 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 442 "miniC.y" /* yacc.c:1646  */
    {
        struct EXPR *expr = (struct EXPR*) malloc (sizeof (struct EXPR));
        expr->e = eExpr;  
        expr->expression.bracket = (yyvsp[-1].ptr_expr);
        (yyval.ptr_expr) = expr;
    }
#line 1991 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 449 "miniC.y" /* yacc.c:1646  */
    {
        struct ID_S *id_s = (struct ID_S*)malloc(sizeof (struct ID_S));
        id_s->ID = (yyvsp[0].id);
        id_s->expr = NULL;
        (yyval.ptr_id_s) = id_s;
    }
#line 2002 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 455 "miniC.y" /* yacc.c:1646  */
    {
        struct ID_S *id_s = (struct ID_S*)malloc(sizeof (struct ID_S));
        id_s->ID = (yyvsp[-3].id);
        id_s->expr = (yyvsp[-1].ptr_expr);
        (yyval.ptr_id_s) = id_s;
    }
#line 2013 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 462 "miniC.y" /* yacc.c:1646  */
    {
         struct ADDIOP *addiop = (struct ADDIOP*) malloc (sizeof (struct ADDIOP));
         addiop->a = eMinus;
         (yyval.ptr_addiop) = addiop;
      }
#line 2023 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 467 "miniC.y" /* yacc.c:1646  */
    { 
        struct ADDIOP *addiop = (struct ADDIOP*) malloc (sizeof (struct ADDIOP));
        addiop->a = ePlus;
      (yyval.ptr_addiop) = addiop;
      }
#line 2033 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 474 "miniC.y" /* yacc.c:1646  */
    {
         struct MULTOP *multop = (struct MULTOP*) malloc (sizeof (struct MULTOP));
         multop->m = eMult;
         (yyval.ptr_multop) = multop;
      }
#line 2043 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 479 "miniC.y" /* yacc.c:1646  */
    {
         struct MULTOP *multop = (struct MULTOP*) malloc (sizeof (struct MULTOP));
         multop->m = eDiv;
         (yyval.ptr_multop) = multop;
      }
#line 2053 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 485 "miniC.y" /* yacc.c:1646  */
    {
         struct RELAOP *relaop = (struct RELAOP*) malloc (sizeof (struct RELAOP));
         relaop->r = eLE;
         (yyval.ptr_relaop) = relaop;
      }
#line 2063 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 490 "miniC.y" /* yacc.c:1646  */
    {
         struct RELAOP *relaop = (struct RELAOP*) malloc (sizeof (struct RELAOP));
         relaop->r = eGE;
         (yyval.ptr_relaop) = relaop;
      }
#line 2073 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 495 "miniC.y" /* yacc.c:1646  */
    {
         struct RELAOP *relaop = (struct RELAOP*) malloc (sizeof (struct RELAOP));
         relaop->r = eGT;
         (yyval.ptr_relaop) = relaop;
      }
#line 2083 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 500 "miniC.y" /* yacc.c:1646  */
    { 
         struct RELAOP *relaop = (struct RELAOP*) malloc (sizeof (struct RELAOP));
         relaop->r = eLT;
         (yyval.ptr_relaop) = relaop;
      }
#line 2093 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 506 "miniC.y" /* yacc.c:1646  */
    {
         struct EQLTOP *eqltop = (struct EQLTOP*) malloc (sizeof (struct EQLTOP));
         eqltop->e = eEQ;
         (yyval.ptr_eqltop) = eqltop;
      }
#line 2103 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 511 "miniC.y" /* yacc.c:1646  */
    { 
         struct EQLTOP *eqltop = (struct EQLTOP*) malloc (sizeof (struct EQLTOP));
         eqltop->e = eNE;
         (yyval.ptr_eqltop) = eqltop;
      }
#line 2113 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 517 "miniC.y" /* yacc.c:1646  */
    {
           struct WHILE_S* while_s = (struct WHILE_S*) malloc (sizeof(struct WHILE_S));
           while_s->do_while = false;
           while_s->cond = (yyvsp[-2].ptr_expr);
           while_s->stmt = (yyvsp[0].ptr_stmt);
           (yyval.ptr_while_s) = while_s;
        }
#line 2125 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 524 "miniC.y" /* yacc.c:1646  */
    {
           struct WHILE_S* while_s = (struct WHILE_S*) malloc (sizeof(struct WHILE_S));
           while_s->do_while = true;
           while_s->cond = (yyvsp[-2].ptr_expr);
           while_s->stmt = (yyvsp[-5].ptr_stmt);
           (yyval.ptr_while_s) = while_s;
        }
#line 2137 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 532 "miniC.y" /* yacc.c:1646  */
    {
           struct FOR_S *for_s = (struct FOR_S*) malloc (sizeof(struct FOR_S));
           for_s->init = (yyvsp[-6].ptr_assign);
           for_s->cond = (yyvsp[-4].ptr_expr);
           for_s->inc = (yyvsp[-2].ptr_assign);
           for_s->stmt = (yyvsp[0].ptr_stmt);
           (yyval.ptr_for_s) = for_s;
        }
#line 2150 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 541 "miniC.y" /* yacc.c:1646  */
    {
       struct IF_S *if_s = (struct IF_S*) malloc (sizeof(struct IF_S));
       if_s->cond=(yyvsp[-2].ptr_expr);
       if_s->if_=(yyvsp[0].ptr_stmt);
       if_s->else_=NULL;
       (yyval.ptr_if_s) = if_s;
    }
#line 2162 "miniC.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 548 "miniC.y" /* yacc.c:1646  */
    {
       struct IF_S *if_s = (struct IF_S*) malloc (sizeof(struct IF_S));
       if_s->cond=(yyvsp[-4].ptr_expr);
       if_s->if_=(yyvsp[-2].ptr_stmt);
       if_s->else_=(yyvsp[0].ptr_stmt);
       (yyval.ptr_if_s) = if_s;
      }
#line 2174 "miniC.tab.c" /* yacc.c:1646  */
    break;


#line 2178 "miniC.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 556 "miniC.y" /* yacc.c:1906  */

void doProcess();
int main(int argc, char* argv[]) {
    //헤드 초기화, 만일 토큰이 없다면 dfs(), bfs() 를 작동하지 않게 함.
    head = NULL;
    scopeHead = NULL;
    scopeTail = NULL;
    //print AST
    fp = fopen("tree.txt","w");
    fp2 = fopen("table.txt","w");
    if(!yyparse())
        doProcess();
    fprintf(fp, "\n");
    close(fp);
    close(fp2);
    return 0;
}
void doProcess() {
    //TODO
    if(head == NULL)
        exit(1);
    //make global node
    scopeHead = newScope(sGLOBAL, NULL);
    scopeTail = scopeHead;
    if(head->decl != NULL)
        visitDeclaration(head->decl);
    if(head->func != NULL)
        visitFunction(head->func);
}
