/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with SoCalc_yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 18 "SoCalcParse.y" /* yacc.c:339  */

#include <Inventor/misc/SoBasic.h>
#include <Inventor/errors/SoDebugError.h>
#include "SoCalcExpr.h"
#include <stdio.h>
#ifdef __APPLE__
#include <float.h>
#include <limits.h>
#else
#include <values.h>
#endif
#include <math.h>
#include <ctype.h>
#include <strings.h>
#include <stdlib.h>

void SoCalc_yyerror(const char *);
extern "C" int	SoCalc_yylex();
int SoCalc_yyparse();

static const char *In;
static ExprList	*EList;

static const struct {
    const char *name;
    float	val;
} Constants[] = {
    { "MAXFLOAT",	MAXFLOAT },
#ifdef __APPLE__
    { "MINFLOAT",	FLT_MIN },
#else
    { "MINFLOAT",	MINFLOAT },
#endif
    { "M_E",		M_E },
    { "M_LOG2E",	M_LOG2E },
    { "M_LOG10E",	M_LOG10E },
    { "M_LN2",		M_LN2 },
    { "M_LN10",		M_LN10 },
    { "M_PI",		M_PI },
    { "M_SQRT2",	M_SQRT2 },
    { "M_SQRT1_2",	M_SQRT1_2 },
};
#define NCONSTANTS (sizeof(Constants)/sizeof(Constants[0]))

static const struct {
    const char *name;
    Expr::Type	type;
} Inputs[] = {
    { "a", Expr::FLOAT}, { "b", Expr::FLOAT},
    { "c", Expr::FLOAT}, { "d", Expr::FLOAT},
    { "e", Expr::FLOAT}, { "f", Expr::FLOAT},
    { "g", Expr::FLOAT}, { "h", Expr::FLOAT},
    { "A", Expr::VEC3F}, { "B", Expr::VEC3F},
    { "C", Expr::VEC3F}, { "D", Expr::VEC3F},
    { "E", Expr::VEC3F}, { "F", Expr::VEC3F},
    { "G", Expr::VEC3F}, { "H", Expr::VEC3F},
}, Outputs[] = {
    { "oa", Expr::FLOAT}, { "ob", Expr::FLOAT},
    { "oc", Expr::FLOAT}, { "od", Expr::FLOAT},
    { "oA", Expr::VEC3F}, { "oB", Expr::VEC3F},
    { "oC", Expr::VEC3F}, { "oD", Expr::VEC3F},
}, Vars[] = {
    { "ta", Expr::FLOAT}, { "tb", Expr::FLOAT},
    { "tc", Expr::FLOAT}, { "td", Expr::FLOAT},
    { "te", Expr::FLOAT}, { "tf", Expr::FLOAT},
    { "tg", Expr::FLOAT}, { "th", Expr::FLOAT},
    { "tA", Expr::VEC3F}, { "tB", Expr::VEC3F},
    { "tC", Expr::VEC3F}, { "tD", Expr::VEC3F},
    { "tE", Expr::VEC3F}, { "tF", Expr::VEC3F},
    { "tG", Expr::VEC3F}, { "tH", Expr::VEC3F},
};
#define NINPUTS (sizeof(Inputs)/sizeof(Inputs[0]))
#define NOUTPUTS (sizeof(Outputs)/sizeof(Outputs[0]))
#define NVARS (sizeof(Vars)/sizeof(Vars[0]))

static double rand(double max) { return max * drand48(); }
static SbVec3f cross(const SbVec3f &a, const SbVec3f &b) { return a.cross(b); }
static double dot(const SbVec3f &a, const SbVec3f &b) { return a.dot(b); }
static double length(const SbVec3f &a) { return a.length(); }
static SbVec3f normalize(const SbVec3f &v) { SbVec3f t=v; t.normalize(); return t; }
static SbVec3f vec3f(double a, double b, double c) { return SbVec3f(a,b,c); }

// Keep this up to date with the info in initFuncs()
#define NFUNCS 25

static struct {
    const Func *func;
} Funcs[NFUNCS];


#line 157 "y.tab.c" /* yacc.c:339  */

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int SoCalc_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum SoCalc_yytokentype
  {
    LEXERR = 258,
    CONST = 259,
    FUNC = 260,
    INPUT = 261,
    OUTPUT = 262,
    VAR = 263,
    OROR = 264,
    ANDAND = 265,
    GEQ = 266,
    LEQ = 267,
    EQEQ = 268,
    NEQ = 269
  };
#endif
/* Tokens.  */
#define LEXERR 258
#define CONST 259
#define FUNC 260
#define INPUT 261
#define OUTPUT 262
#define VAR 263
#define OROR 264
#define ANDAND 265
#define GEQ 266
#define LEQ 267
#define EQEQ 268
#define NEQ 269

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 114 "SoCalcParse.y" /* yacc.c:355  */

    Expr	*expr;
    ExprList	*list;

#line 227 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE SoCalc_yylval;

int SoCalc_yyparse (void);



/* Copy the second part of user declarations.  */

#line 244 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 SoCalc_yytype_uint8;
#else
typedef unsigned char SoCalc_yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 SoCalc_yytype_int8;
#else
typedef signed char SoCalc_yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 SoCalc_yytype_uint16;
#else
typedef unsigned short int SoCalc_yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 SoCalc_yytype_int16;
#else
typedef short int SoCalc_yytype_int16;
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
/* Suppress an incorrect diagnostic about SoCalc_yylval being uninitialized.  */
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


#if ! defined SoCalc_yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined SoCalc_yyoverflow || YYERROR_VERBOSE */


#if (! defined SoCalc_yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union SoCalc_yyalloc
{
  SoCalc_yytype_int16 SoCalc_yyss_alloc;
  YYSTYPE SoCalc_yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union SoCalc_yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (SoCalc_yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T SoCalc_yynewbytes;                                            \
        YYCOPY (&SoCalc_yyptr->Stack_alloc, Stack, SoCalc_yysize);                    \
        Stack = &SoCalc_yyptr->Stack_alloc;                                    \
        SoCalc_yynewbytes = SoCalc_yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        SoCalc_yyptr += SoCalc_yynewbytes / sizeof (*SoCalc_yyptr);                          \
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
          YYSIZE_T SoCalc_yyi;                         \
          for (SoCalc_yyi = 0; SoCalc_yyi < (Count); SoCalc_yyi++)   \
            (Dst)[SoCalc_yyi] = (Src)[SoCalc_yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   71

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  42
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  82

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by SoCalc_yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   269

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? SoCalc_yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by SoCalc_yylex, without out-of-bounds checking.  */
static const SoCalc_yytype_uint8 SoCalc_yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,     2,     2,    26,     2,     2,
      19,    20,    24,    27,    21,    22,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,    15,
      28,    16,    29,    30,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    17,     2,    18,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const SoCalc_yytype_uint8 SoCalc_yyrline[] =
{
       0,   130,   130,   131,   132,   136,   138,   140,   142,   147,
     148,   149,   150,   151,   155,   156,   158,   162,   163,   167,
     168,   169,   173,   174,   176,   178,   183,   184,   186,   191,
     192,   194,   196,   198,   203,   204,   206,   211,   212,   217,
     218,   223,   224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const SoCalc_yytname[] =
{
  "$end", "error", "$undefined", "LEXERR", "CONST", "FUNC", "INPUT",
  "OUTPUT", "VAR", "OROR", "ANDAND", "GEQ", "LEQ", "EQEQ", "NEQ", "';'",
  "'='", "'['", "']'", "'('", "')'", "','", "'-'", "'!'", "'*'", "'/'",
  "'%'", "'+'", "'<'", "'>'", "'?'", "':'", "$accept", "asgnlist", "asgn",
  "primary_expression", "postfix_expression", "args", "unary_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_AND_expression",
  "logical_OR_expression", "conditional_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const SoCalc_yytype_uint16 SoCalc_yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    59,    61,    91,    93,    40,
      41,    44,    45,    33,    42,    47,    37,    43,    60,    62,
      63,    58
};
# endif

#define YYPACT_NINF -15

#define SoCalc_yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-15)))

#define YYTABLE_NINF -1

#define SoCalc_yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const SoCalc_yytype_int8 SoCalc_yypact[] =
{
       1,    30,    32,     6,   -15,    10,    10,    10,    10,   -15,
       1,   -15,    16,   -15,   -15,   -15,    10,    10,    10,   -15,
     -12,   -15,   -13,    12,     8,     9,    20,    -2,   -15,    26,
     -15,    35,   -15,    10,    18,   -15,   -15,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    34,    40,    31,   -15,   -15,    39,   -15,   -15,
     -15,   -13,   -13,    12,    12,    12,    12,     8,     8,     9,
      20,    29,    10,    10,   -15,    10,   -15,    10,   -15,   -15,
     -15,   -15
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const SoCalc_yytype_uint8 SoCalc_yydefact[] =
{
       0,     0,     0,     0,     2,     0,     0,     0,     0,     1,
       4,     9,     0,    10,    11,    12,     0,     0,     0,    14,
      19,    22,    26,    29,    34,    37,    39,    41,     5,     0,
       7,     0,     3,     0,     0,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    13,     0,    23,    24,
      25,    28,    27,    33,    32,    30,    31,    35,    36,    38,
      40,     0,     0,     0,    16,     0,    15,     0,     6,     8,
      18,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const SoCalc_yytype_int8 SoCalc_yypgoto[] =
{
     -15,   -15,    51,   -15,   -15,   -15,   -14,    13,    -3,    11,
      14,    15,   -15,    -6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const SoCalc_yytype_int8 SoCalc_yydefgoto[] =
{
      -1,     3,     4,    19,    20,    54,    21,    22,    23,    24,
      25,    26,    27,    28
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const SoCalc_yytype_uint8 SoCalc_yytable[] =
{
      29,    30,    31,    35,    36,    37,     9,    50,     1,     2,
      34,    38,    39,    40,    11,    12,    13,    14,    15,    43,
      44,    10,    47,    48,    58,    59,    60,    55,    51,    16,
      49,    57,    17,    18,    41,    33,    45,    46,    56,    42,
      63,    64,    65,    66,    52,    71,     5,     6,     7,     8,
      72,    74,    75,    53,    61,    62,    73,    76,    67,    68,
      77,    32,     0,    69,     0,    70,    78,    79,     0,    80,
       0,    81
};

static const SoCalc_yytype_int8 SoCalc_yycheck[] =
{
       6,     7,     8,    17,    18,    17,     0,     9,     7,     8,
      16,    24,    25,    26,     4,     5,     6,     7,     8,    11,
      12,    15,    13,    14,    38,    39,    40,    33,    30,    19,
      10,    37,    22,    23,    22,    19,    28,    29,    20,    27,
      43,    44,    45,    46,    18,    51,    16,    17,    16,    17,
      16,    20,    21,    18,    41,    42,    16,    18,    47,    48,
      31,    10,    -1,    49,    -1,    50,    72,    73,    -1,    75,
      -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const SoCalc_yytype_uint8 SoCalc_yystos[] =
{
       0,     7,     8,    33,    34,    16,    17,    16,    17,     0,
      15,     4,     5,     6,     7,     8,    19,    22,    23,    35,
      36,    38,    39,    40,    41,    42,    43,    44,    45,    45,
      45,    45,    34,    19,    45,    38,    38,    17,    24,    25,
      26,    22,    27,    11,    12,    28,    29,    13,    14,    10,
       9,    30,    18,    18,    37,    45,    20,    45,    38,    38,
      38,    39,    39,    40,    40,    40,    40,    41,    41,    42,
      43,    45,    16,    16,    20,    21,    18,    31,    45,    45,
      45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const SoCalc_yytype_uint8 SoCalc_yyr1[] =
{
       0,    32,    33,    33,    33,    34,    34,    34,    34,    35,
      35,    35,    35,    35,    36,    36,    36,    37,    37,    38,
      38,    38,    39,    39,    39,    39,    40,    40,    40,    41,
      41,    41,    41,    41,    42,    42,    42,    43,    43,    44,
      44,    45,    45
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const SoCalc_yytype_uint8 SoCalc_yyr2[] =
{
       0,     2,     1,     3,     2,     3,     6,     3,     6,     1,
       1,     1,     1,     3,     1,     4,     4,     1,     3,     1,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     5
};


#define SoCalc_yyerrok         (SoCalc_yyerrstatus = 0)
#define SoCalc_yyclearin       (SoCalc_yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto SoCalc_yyacceptlab
#define YYABORT         goto SoCalc_yyabortlab
#define YYERROR         goto SoCalc_yyerrorlab


#define YYRECOVERING()  (!!SoCalc_yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (SoCalc_yychar == YYEMPTY)                                        \
    {                                                           \
      SoCalc_yychar = (Token);                                         \
      SoCalc_yylval = (Value);                                         \
      YYPOPSTACK (SoCalc_yylen);                                       \
      SoCalc_yystate = *SoCalc_yyssp;                                         \
      goto SoCalc_yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      SoCalc_yyerror (YY_("syntax error: cannot back up")); \
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
  if (SoCalc_yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (SoCalc_yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      SoCalc_yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
SoCalc_yy_symbol_value_print (FILE *SoCalc_yyoutput, int SoCalc_yytype, YYSTYPE const * const SoCalc_yyvaluep)
{
  FILE *SoCalc_yyo = SoCalc_yyoutput;
  YYUSE (SoCalc_yyo);
  if (!SoCalc_yyvaluep)
    return;
# ifdef YYPRINT
  if (SoCalc_yytype < YYNTOKENS)
    YYPRINT (SoCalc_yyoutput, SoCalc_yytoknum[SoCalc_yytype], *SoCalc_yyvaluep);
# endif
  YYUSE (SoCalc_yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
SoCalc_yy_symbol_print (FILE *SoCalc_yyoutput, int SoCalc_yytype, YYSTYPE const * const SoCalc_yyvaluep)
{
  YYFPRINTF (SoCalc_yyoutput, "%s %s (",
             SoCalc_yytype < YYNTOKENS ? "token" : "nterm", SoCalc_yytname[SoCalc_yytype]);

  SoCalc_yy_symbol_value_print (SoCalc_yyoutput, SoCalc_yytype, SoCalc_yyvaluep);
  YYFPRINTF (SoCalc_yyoutput, ")");
}

/*------------------------------------------------------------------.
| SoCalc_yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
SoCalc_yy_stack_print (SoCalc_yytype_int16 *SoCalc_yybottom, SoCalc_yytype_int16 *SoCalc_yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; SoCalc_yybottom <= SoCalc_yytop; SoCalc_yybottom++)
    {
      int SoCalc_yybot = *SoCalc_yybottom;
      YYFPRINTF (stderr, " %d", SoCalc_yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (SoCalc_yydebug)                                                  \
    SoCalc_yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
SoCalc_yy_reduce_print (SoCalc_yytype_int16 *SoCalc_yyssp, YYSTYPE *SoCalc_yyvsp, int SoCalc_yyrule)
{
  unsigned long int SoCalc_yylno = SoCalc_yyrline[SoCalc_yyrule];
  int SoCalc_yynrhs = SoCalc_yyr2[SoCalc_yyrule];
  int SoCalc_yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             SoCalc_yyrule - 1, SoCalc_yylno);
  /* The symbols being reduced.  */
  for (SoCalc_yyi = 0; SoCalc_yyi < SoCalc_yynrhs; SoCalc_yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", SoCalc_yyi + 1);
      SoCalc_yy_symbol_print (stderr,
                       SoCalc_yystos[SoCalc_yyssp[SoCalc_yyi + 1 - SoCalc_yynrhs]],
                       &(SoCalc_yyvsp[(SoCalc_yyi + 1) - (SoCalc_yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (SoCalc_yydebug)                          \
    SoCalc_yy_reduce_print (SoCalc_yyssp, SoCalc_yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int SoCalc_yydebug;
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

# ifndef SoCalc_yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define SoCalc_yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
SoCalc_yystrlen (const char *SoCalc_yystr)
{
  YYSIZE_T SoCalc_yylen;
  for (SoCalc_yylen = 0; SoCalc_yystr[SoCalc_yylen]; SoCalc_yylen++)
    continue;
  return SoCalc_yylen;
}
#  endif
# endif

# ifndef SoCalc_yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define SoCalc_yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
SoCalc_yystpcpy (char *SoCalc_yydest, const char *SoCalc_yysrc)
{
  char *SoCalc_yyd = SoCalc_yydest;
  const char *SoCalc_yys = SoCalc_yysrc;

  while ((*SoCalc_yyd++ = *SoCalc_yys++) != '\0')
    continue;

  return SoCalc_yyd - 1;
}
#  endif
# endif

# ifndef SoCalc_yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for SoCalc_yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from SoCalc_yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
SoCalc_yytnamerr (char *SoCalc_yyres, const char *SoCalc_yystr)
{
  if (*SoCalc_yystr == '"')
    {
      YYSIZE_T SoCalc_yyn = 0;
      char const *SoCalc_yyp = SoCalc_yystr;

      for (;;)
        switch (*++SoCalc_yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++SoCalc_yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (SoCalc_yyres)
              SoCalc_yyres[SoCalc_yyn] = *SoCalc_yyp;
            SoCalc_yyn++;
            break;

          case '"':
            if (SoCalc_yyres)
              SoCalc_yyres[SoCalc_yyn] = '\0';
            return SoCalc_yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! SoCalc_yyres)
    return SoCalc_yystrlen (SoCalc_yystr);

  return SoCalc_yystpcpy (SoCalc_yyres, SoCalc_yystr) - SoCalc_yyres;
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
SoCalc_yysyntax_error (YYSIZE_T *SoCalc_yymsg_alloc, char **SoCalc_yymsg,
                SoCalc_yytype_int16 *SoCalc_yyssp, int SoCalc_yytoken)
{
  YYSIZE_T SoCalc_yysize0 = SoCalc_yytnamerr (YY_NULLPTR, SoCalc_yytname[SoCalc_yytoken]);
  YYSIZE_T SoCalc_yysize = SoCalc_yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *SoCalc_yyformat = YY_NULLPTR;
  /* Arguments of SoCalc_yyformat. */
  char const *SoCalc_yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int SoCalc_yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in SoCalc_yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated SoCalc_yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (SoCalc_yytoken != YYEMPTY)
    {
      int SoCalc_yyn = SoCalc_yypact[*SoCalc_yyssp];
      SoCalc_yyarg[SoCalc_yycount++] = SoCalc_yytname[SoCalc_yytoken];
      if (!SoCalc_yypact_value_is_default (SoCalc_yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int SoCalc_yyxbegin = SoCalc_yyn < 0 ? -SoCalc_yyn : 0;
          /* Stay within bounds of both SoCalc_yycheck and SoCalc_yytname.  */
          int SoCalc_yychecklim = YYLAST - SoCalc_yyn + 1;
          int SoCalc_yyxend = SoCalc_yychecklim < YYNTOKENS ? SoCalc_yychecklim : YYNTOKENS;
          int SoCalc_yyx;

          for (SoCalc_yyx = SoCalc_yyxbegin; SoCalc_yyx < SoCalc_yyxend; ++SoCalc_yyx)
            if (SoCalc_yycheck[SoCalc_yyx + SoCalc_yyn] == SoCalc_yyx && SoCalc_yyx != YYTERROR
                && !SoCalc_yytable_value_is_error (SoCalc_yytable[SoCalc_yyx + SoCalc_yyn]))
              {
                if (SoCalc_yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    SoCalc_yycount = 1;
                    SoCalc_yysize = SoCalc_yysize0;
                    break;
                  }
                SoCalc_yyarg[SoCalc_yycount++] = SoCalc_yytname[SoCalc_yyx];
                {
                  YYSIZE_T SoCalc_yysize1 = SoCalc_yysize + SoCalc_yytnamerr (YY_NULLPTR, SoCalc_yytname[SoCalc_yyx]);
                  if (! (SoCalc_yysize <= SoCalc_yysize1
                         && SoCalc_yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  SoCalc_yysize = SoCalc_yysize1;
                }
              }
        }
    }

  switch (SoCalc_yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        SoCalc_yyformat = S;                       \
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
    YYSIZE_T SoCalc_yysize1 = SoCalc_yysize + SoCalc_yystrlen (SoCalc_yyformat);
    if (! (SoCalc_yysize <= SoCalc_yysize1 && SoCalc_yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    SoCalc_yysize = SoCalc_yysize1;
  }

  if (*SoCalc_yymsg_alloc < SoCalc_yysize)
    {
      *SoCalc_yymsg_alloc = 2 * SoCalc_yysize;
      if (! (SoCalc_yysize <= *SoCalc_yymsg_alloc
             && *SoCalc_yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *SoCalc_yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *SoCalc_yyp = *SoCalc_yymsg;
    int SoCalc_yyi = 0;
    while ((*SoCalc_yyp = *SoCalc_yyformat) != '\0')
      if (*SoCalc_yyp == '%' && SoCalc_yyformat[1] == 's' && SoCalc_yyi < SoCalc_yycount)
        {
          SoCalc_yyp += SoCalc_yytnamerr (SoCalc_yyp, SoCalc_yyarg[SoCalc_yyi++]);
          SoCalc_yyformat += 2;
        }
      else
        {
          SoCalc_yyp++;
          SoCalc_yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
SoCalc_yydestruct (const char *SoCalc_yymsg, int SoCalc_yytype, YYSTYPE *SoCalc_yyvaluep)
{
  YYUSE (SoCalc_yyvaluep);
  if (!SoCalc_yymsg)
    SoCalc_yymsg = "Deleting";
  YY_SYMBOL_PRINT (SoCalc_yymsg, SoCalc_yytype, SoCalc_yyvaluep, SoCalc_yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (SoCalc_yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int SoCalc_yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE SoCalc_yylval;
/* Number of syntax errors so far.  */
int SoCalc_yynerrs;


/*----------.
| SoCalc_yyparse.  |
`----------*/

int
SoCalc_yyparse (void)
{
    int SoCalc_yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int SoCalc_yyerrstatus;

    /* The stacks and their tools:
       'SoCalc_yyss': related to states.
       'SoCalc_yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow SoCalc_yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    SoCalc_yytype_int16 SoCalc_yyssa[YYINITDEPTH];
    SoCalc_yytype_int16 *SoCalc_yyss;
    SoCalc_yytype_int16 *SoCalc_yyssp;

    /* The semantic value stack.  */
    YYSTYPE SoCalc_yyvsa[YYINITDEPTH];
    YYSTYPE *SoCalc_yyvs;
    YYSTYPE *SoCalc_yyvsp;

    YYSIZE_T SoCalc_yystacksize;

  int SoCalc_yyn;
  int SoCalc_yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int SoCalc_yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE SoCalc_yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char SoCalc_yymsgbuf[128];
  char *SoCalc_yymsg = SoCalc_yymsgbuf;
  YYSIZE_T SoCalc_yymsg_alloc = sizeof SoCalc_yymsgbuf;
#endif

#define YYPOPSTACK(N)   (SoCalc_yyvsp -= (N), SoCalc_yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int SoCalc_yylen = 0;

  SoCalc_yyssp = SoCalc_yyss = SoCalc_yyssa;
  SoCalc_yyvsp = SoCalc_yyvs = SoCalc_yyvsa;
  SoCalc_yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  SoCalc_yystate = 0;
  SoCalc_yyerrstatus = 0;
  SoCalc_yynerrs = 0;
  SoCalc_yychar = YYEMPTY; /* Cause a token to be read.  */
  goto SoCalc_yysetstate;

/*------------------------------------------------------------.
| SoCalc_yynewstate -- Push a new state, which is found in SoCalc_yystate.  |
`------------------------------------------------------------*/
 SoCalc_yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  SoCalc_yyssp++;

 SoCalc_yysetstate:
  *SoCalc_yyssp = SoCalc_yystate;

  if (SoCalc_yyss + SoCalc_yystacksize - 1 <= SoCalc_yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T SoCalc_yysize = SoCalc_yyssp - SoCalc_yyss + 1;

#ifdef SoCalc_yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *SoCalc_yyvs1 = SoCalc_yyvs;
        SoCalc_yytype_int16 *SoCalc_yyss1 = SoCalc_yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if SoCalc_yyoverflow is a macro.  */
        SoCalc_yyoverflow (YY_("memory exhausted"),
                    &SoCalc_yyss1, SoCalc_yysize * sizeof (*SoCalc_yyssp),
                    &SoCalc_yyvs1, SoCalc_yysize * sizeof (*SoCalc_yyvsp),
                    &SoCalc_yystacksize);

        SoCalc_yyss = SoCalc_yyss1;
        SoCalc_yyvs = SoCalc_yyvs1;
      }
#else /* no SoCalc_yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto SoCalc_yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= SoCalc_yystacksize)
        goto SoCalc_yyexhaustedlab;
      SoCalc_yystacksize *= 2;
      if (YYMAXDEPTH < SoCalc_yystacksize)
        SoCalc_yystacksize = YYMAXDEPTH;

      {
        SoCalc_yytype_int16 *SoCalc_yyss1 = SoCalc_yyss;
        union SoCalc_yyalloc *SoCalc_yyptr =
          (union SoCalc_yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (SoCalc_yystacksize));
        if (! SoCalc_yyptr)
          goto SoCalc_yyexhaustedlab;
        YYSTACK_RELOCATE (SoCalc_yyss_alloc, SoCalc_yyss);
        YYSTACK_RELOCATE (SoCalc_yyvs_alloc, SoCalc_yyvs);
#  undef YYSTACK_RELOCATE
        if (SoCalc_yyss1 != SoCalc_yyssa)
          YYSTACK_FREE (SoCalc_yyss1);
      }
# endif
#endif /* no SoCalc_yyoverflow */

      SoCalc_yyssp = SoCalc_yyss + SoCalc_yysize - 1;
      SoCalc_yyvsp = SoCalc_yyvs + SoCalc_yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) SoCalc_yystacksize));

      if (SoCalc_yyss + SoCalc_yystacksize - 1 <= SoCalc_yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", SoCalc_yystate));

  if (SoCalc_yystate == YYFINAL)
    YYACCEPT;

  goto SoCalc_yybackup;

/*-----------.
| SoCalc_yybackup.  |
`-----------*/
SoCalc_yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  SoCalc_yyn = SoCalc_yypact[SoCalc_yystate];
  if (SoCalc_yypact_value_is_default (SoCalc_yyn))
    goto SoCalc_yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (SoCalc_yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      SoCalc_yychar = SoCalc_yylex ();
    }

  if (SoCalc_yychar <= YYEOF)
    {
      SoCalc_yychar = SoCalc_yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      SoCalc_yytoken = YYTRANSLATE (SoCalc_yychar);
      YY_SYMBOL_PRINT ("Next token is", SoCalc_yytoken, &SoCalc_yylval, &SoCalc_yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  SoCalc_yyn += SoCalc_yytoken;
  if (SoCalc_yyn < 0 || YYLAST < SoCalc_yyn || SoCalc_yycheck[SoCalc_yyn] != SoCalc_yytoken)
    goto SoCalc_yydefault;
  SoCalc_yyn = SoCalc_yytable[SoCalc_yyn];
  if (SoCalc_yyn <= 0)
    {
      if (SoCalc_yytable_value_is_error (SoCalc_yyn))
        goto SoCalc_yyerrlab;
      SoCalc_yyn = -SoCalc_yyn;
      goto SoCalc_yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (SoCalc_yyerrstatus)
    SoCalc_yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", SoCalc_yytoken, &SoCalc_yylval, &SoCalc_yylloc);

  /* Discard the shifted token.  */
  SoCalc_yychar = YYEMPTY;

  SoCalc_yystate = SoCalc_yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++SoCalc_yyvsp = SoCalc_yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto SoCalc_yynewstate;


/*-----------------------------------------------------------.
| SoCalc_yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
SoCalc_yydefault:
  SoCalc_yyn = SoCalc_yydefact[SoCalc_yystate];
  if (SoCalc_yyn == 0)
    goto SoCalc_yyerrlab;
  goto SoCalc_yyreduce;


/*-----------------------------.
| SoCalc_yyreduce -- Do a reduction.  |
`-----------------------------*/
SoCalc_yyreduce:
  /* SoCalc_yyn is the number of a rule to reduce with.  */
  SoCalc_yylen = SoCalc_yyr2[SoCalc_yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  SoCalc_yyval = SoCalc_yyvsp[1-SoCalc_yylen];


  YY_REDUCE_PRINT (SoCalc_yyn);
  switch (SoCalc_yyn)
    {
        case 2:
#line 130 "SoCalcParse.y" /* yacc.c:1646  */
    { EList->append((SoCalc_yyvsp[0].expr)); }
#line 1371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 131 "SoCalcParse.y" /* yacc.c:1646  */
    { EList->append((SoCalc_yyvsp[0].expr)); }
#line 1377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 137 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Assign((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 139 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new AssignIndex((SoCalc_yyvsp[-5].expr), (SoCalc_yyvsp[-3].expr), (SoCalc_yyvsp[0].expr)); }
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Assign((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 143 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new AssignIndex((SoCalc_yyvsp[-5].expr), (SoCalc_yyvsp[-3].expr), (SoCalc_yyvsp[0].expr)); }
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 147 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = (SoCalc_yyvsp[0].expr); }
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 148 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = (SoCalc_yyvsp[0].expr); }
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = (SoCalc_yyvsp[0].expr); }
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 150 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = (SoCalc_yyvsp[0].expr); }
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 151 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = (SoCalc_yyvsp[-1].expr); }
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = (SoCalc_yyvsp[0].expr); }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Index((SoCalc_yyvsp[-3].expr), (SoCalc_yyvsp[-1].expr)); }
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 158 "SoCalcParse.y" /* yacc.c:1646  */
    { ((Func *)(SoCalc_yyvsp[-3].expr))->setArgs((SoCalc_yyvsp[-1].list)); (SoCalc_yyval.expr) = (SoCalc_yyvsp[-3].expr); }
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 162 "SoCalcParse.y" /* yacc.c:1646  */
    { ((SoCalc_yyval.list) = new ExprList)->append((SoCalc_yyvsp[0].expr)); }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyvsp[-2].list)->append((SoCalc_yyvsp[0].expr)); (SoCalc_yyval.list) = (SoCalc_yyvsp[-2].list); }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 168 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Negate((SoCalc_yyvsp[0].expr)); }
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 169 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Not((SoCalc_yyvsp[0].expr)); }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 175 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Mult((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 177 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Divide((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 179 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Mod((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 185 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Plus((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 187 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Minus((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 193 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new LessThan((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 195 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new GreaterThan((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 197 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new LessEQ((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 199 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new GreaterEQ((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 205 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Equals((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 207 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new NotEquals((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 213 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new And((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 219 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Or((SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 226 "SoCalcParse.y" /* yacc.c:1646  */
    { (SoCalc_yyval.expr) = new Ternary((SoCalc_yyvsp[-4].expr), (SoCalc_yyvsp[-2].expr), (SoCalc_yyvsp[0].expr)); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1561 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter SoCalc_yychar, and that requires
     that SoCalc_yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of SoCalc_yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering SoCalc_yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", SoCalc_yyr1[SoCalc_yyn], &SoCalc_yyval, &SoCalc_yyloc);

  YYPOPSTACK (SoCalc_yylen);
  SoCalc_yylen = 0;
  YY_STACK_PRINT (SoCalc_yyss, SoCalc_yyssp);

  *++SoCalc_yyvsp = SoCalc_yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  SoCalc_yyn = SoCalc_yyr1[SoCalc_yyn];

  SoCalc_yystate = SoCalc_yypgoto[SoCalc_yyn - YYNTOKENS] + *SoCalc_yyssp;
  if (0 <= SoCalc_yystate && SoCalc_yystate <= YYLAST && SoCalc_yycheck[SoCalc_yystate] == *SoCalc_yyssp)
    SoCalc_yystate = SoCalc_yytable[SoCalc_yystate];
  else
    SoCalc_yystate = SoCalc_yydefgoto[SoCalc_yyn - YYNTOKENS];

  goto SoCalc_yynewstate;


/*--------------------------------------.
| SoCalc_yyerrlab -- here on detecting error.  |
`--------------------------------------*/
SoCalc_yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  SoCalc_yytoken = SoCalc_yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (SoCalc_yychar);

  /* If not already recovering from an error, report this error.  */
  if (!SoCalc_yyerrstatus)
    {
      ++SoCalc_yynerrs;
#if ! YYERROR_VERBOSE
      SoCalc_yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR SoCalc_yysyntax_error (&SoCalc_yymsg_alloc, &SoCalc_yymsg, \
                                        SoCalc_yyssp, SoCalc_yytoken)
      {
        char const *SoCalc_yymsgp = YY_("syntax error");
        int SoCalc_yysyntax_error_status;
        SoCalc_yysyntax_error_status = YYSYNTAX_ERROR;
        if (SoCalc_yysyntax_error_status == 0)
          SoCalc_yymsgp = SoCalc_yymsg;
        else if (SoCalc_yysyntax_error_status == 1)
          {
            if (SoCalc_yymsg != SoCalc_yymsgbuf)
              YYSTACK_FREE (SoCalc_yymsg);
            SoCalc_yymsg = (char *) YYSTACK_ALLOC (SoCalc_yymsg_alloc);
            if (!SoCalc_yymsg)
              {
                SoCalc_yymsg = SoCalc_yymsgbuf;
                SoCalc_yymsg_alloc = sizeof SoCalc_yymsgbuf;
                SoCalc_yysyntax_error_status = 2;
              }
            else
              {
                SoCalc_yysyntax_error_status = YYSYNTAX_ERROR;
                SoCalc_yymsgp = SoCalc_yymsg;
              }
          }
        SoCalc_yyerror (SoCalc_yymsgp);
        if (SoCalc_yysyntax_error_status == 2)
          goto SoCalc_yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (SoCalc_yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (SoCalc_yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (SoCalc_yychar == YYEOF)
            YYABORT;
        }
      else
        {
          SoCalc_yydestruct ("Error: discarding",
                      SoCalc_yytoken, &SoCalc_yylval);
          SoCalc_yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto SoCalc_yyerrlab1;


/*---------------------------------------------------.
| SoCalc_yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
SoCalc_yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label SoCalc_yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto SoCalc_yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (SoCalc_yylen);
  SoCalc_yylen = 0;
  YY_STACK_PRINT (SoCalc_yyss, SoCalc_yyssp);
  SoCalc_yystate = *SoCalc_yyssp;
  goto SoCalc_yyerrlab1;


/*-------------------------------------------------------------.
| SoCalc_yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
SoCalc_yyerrlab1:
  SoCalc_yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      SoCalc_yyn = SoCalc_yypact[SoCalc_yystate];
      if (!SoCalc_yypact_value_is_default (SoCalc_yyn))
        {
          SoCalc_yyn += YYTERROR;
          if (0 <= SoCalc_yyn && SoCalc_yyn <= YYLAST && SoCalc_yycheck[SoCalc_yyn] == YYTERROR)
            {
              SoCalc_yyn = SoCalc_yytable[SoCalc_yyn];
              if (0 < SoCalc_yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (SoCalc_yyssp == SoCalc_yyss)
        YYABORT;


      SoCalc_yydestruct ("Error: popping",
                  SoCalc_yystos[SoCalc_yystate], SoCalc_yyvsp);
      YYPOPSTACK (1);
      SoCalc_yystate = *SoCalc_yyssp;
      YY_STACK_PRINT (SoCalc_yyss, SoCalc_yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++SoCalc_yyvsp = SoCalc_yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", SoCalc_yystos[SoCalc_yyn], SoCalc_yyvsp, SoCalc_yylsp);

  SoCalc_yystate = SoCalc_yyn;
  goto SoCalc_yynewstate;


/*-------------------------------------.
| SoCalc_yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
SoCalc_yyacceptlab:
  SoCalc_yyresult = 0;
  goto SoCalc_yyreturn;

/*-----------------------------------.
| SoCalc_yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
SoCalc_yyabortlab:
  SoCalc_yyresult = 1;
  goto SoCalc_yyreturn;

#if !defined SoCalc_yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| SoCalc_yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
SoCalc_yyexhaustedlab:
  SoCalc_yyerror (YY_("memory exhausted"));
  SoCalc_yyresult = 2;
  /* Fall through.  */
#endif

SoCalc_yyreturn:
  if (SoCalc_yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      SoCalc_yytoken = YYTRANSLATE (SoCalc_yychar);
      SoCalc_yydestruct ("Cleanup: discarding lookahead",
                  SoCalc_yytoken, &SoCalc_yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (SoCalc_yylen);
  YY_STACK_PRINT (SoCalc_yyss, SoCalc_yyssp);
  while (SoCalc_yyssp != SoCalc_yyss)
    {
      SoCalc_yydestruct ("Cleanup: popping",
                  SoCalc_yystos[*SoCalc_yyssp], SoCalc_yyvsp);
      YYPOPSTACK (1);
    }
#ifndef SoCalc_yyoverflow
  if (SoCalc_yyss != SoCalc_yyssa)
    YYSTACK_FREE (SoCalc_yyss);
#endif
#if YYERROR_VERBOSE
  if (SoCalc_yymsg != SoCalc_yymsgbuf)
    YYSTACK_FREE (SoCalc_yymsg);
#endif
  return SoCalc_yyresult;
}
#line 229 "SoCalcParse.y" /* yacc.c:1906  */


//
// The static Funcs array contains instances of objects that have
// constructors. Since this wouldn't get set up correctly in a DSO, we
// have to initialize the array at run-time.
//

static void
initFuncs()
{
    int	i = 0;

#define MAKEFUNC(CLASS, NAME)						      \
	Funcs[i++].func = new CLASS(SO__QUOTE(NAME),NAME)

    MAKEFUNC(Func_d, acos);
    MAKEFUNC(Func_d, asin);
    MAKEFUNC(Func_d, atan);
    MAKEFUNC(Func_dd, atan2);
    MAKEFUNC(Func_d, ceil);
    MAKEFUNC(Func_d, cos);
    MAKEFUNC(Func_d, cosh);
    MAKEFUNC(Funcv_vv, cross);
    MAKEFUNC(Func_vv, dot);
    MAKEFUNC(Func_d, exp);
    MAKEFUNC(Func_d, fabs);
    MAKEFUNC(Func_d, floor);
    MAKEFUNC(Func_dd, fmod);
    MAKEFUNC(Func_v, length);
    MAKEFUNC(Func_d, log);
    MAKEFUNC(Func_d, log10);
    MAKEFUNC(Funcv_v, normalize);
    MAKEFUNC(Func_dd, pow);
    MAKEFUNC(Func_d, rand);
    MAKEFUNC(Func_d, sin);
    MAKEFUNC(Func_d, sinh);
    MAKEFUNC(Func_d, sqrt);
    MAKEFUNC(Func_d, tan);
    MAKEFUNC(Func_d, tanh);
    MAKEFUNC(Funcv_ddd, vec3f);

#ifdef DEBUG
    // Sanity check
    if (i != NFUNCS)
	SoDebugError::post("SoCalcParse initFuncs (internal)",
			   "Wrong number of functions declared");
#endif /* DEBUG */
}

static Const *
isConst(const char *nm)
{
    for (size_t i=0; i<NCONSTANTS; i++)
	if (strcmp(nm, Constants[i].name)==0)
	    return new Const(Constants[i].val);
    return NULL;
}

static Func *
isFunc(const char *nm)
{
    for (size_t i=0; i<NFUNCS; i++) {
	const Func *f = Funcs[i].func;
	if (strcmp(nm, f->name)==0)
	    return f->dup();
    }
    return NULL;
}

static Var *
isInput(const char *nm)
{
    for (size_t i=0; i<NINPUTS; i++) if (strcmp(nm, Inputs[i].name)==0) 
	return new Var(nm, Inputs[i].type);
    return NULL;
}

static Var *
isOutput(const char *nm)
{
    for (size_t i=0; i<NOUTPUTS; i++) if (strcmp(nm, Outputs[i].name)==0) 
	return new Var(nm, Outputs[i].type);
    return NULL;
}

static Var *
isVar(const char *nm)
{
    for (size_t i=0; i<NVARS; i++) if (strcmp(nm, Vars[i].name)==0) 
	return new Var(nm, Vars[i].type);
    return NULL;
}

int SoCalc_yylex()
{
#define BSZ 100
    char c, buf[BSZ+1], *cp = buf;

    // skip over blanks
    while (isspace(*In))
	In++;

    if (!In[0])
	return EOF;

    if (isdigit(In[0]) || In[0] == '.') {

	// skip past a valid floating-point number
	// (don't need to compute the number, will
	// use atof() to do that).
	SbBool dot = FALSE;
	SbBool exp = FALSE;
	for (;;) {
	    c = *In++;
	    if (cp - buf < BSZ)
		*cp++ = c;
	    *cp = c;
	    if (isdigit(c))
		continue;
	    if (c== '.') {
		if (dot || exp)
		    return LEXERR;
		dot = TRUE;
		continue;
	    }
	    if (c == 'e' || c == 'E') {
		if (exp)
		    return LEXERR;
		exp = TRUE;
		continue;
	    }
	    // Check for negative exponent
	    if (c == '-' && exp && (In[-2] == 'e' || In[-2] == 'E')) {
		continue;
	    }
	    break;	// end of number
	}
	if (In[-1] == 'e')
	    return LEXERR;

	*cp = 0;
	In--;	// push back last character "read"

	SoCalc_yylval.expr = new Const(atof(buf));
	return CONST;
    }

    if (isalpha(In[0])) {
	while (isalnum(In[0]) || In[0] == '_') {
	    if (cp - buf < BSZ)
		*cp++ = *In++;
	}
	*cp = 0;

	if (SoCalc_yylval.expr = isConst(buf))
	    return CONST;

	if (SoCalc_yylval.expr = isFunc(buf))
	    return FUNC;

	if (SoCalc_yylval.expr = isInput(buf))
	    return INPUT;

	if (SoCalc_yylval.expr = isOutput(buf))
	    return OUTPUT;

	if (SoCalc_yylval.expr = isVar(buf))
	    return VAR;

    }

#define EQ2(x,y)	(x[0]==y[0] && x[1]==y[1])
    if (EQ2(In, "==")) { In += 2; return EQEQ; }
    if (EQ2(In, "!=")) { In += 2; return NEQ; }
    if (EQ2(In, ">=")) { In += 2; return GEQ; }
    if (EQ2(In, "<=")) { In += 2; return LEQ; }
    if (EQ2(In, "&&")) { In += 2; return ANDAND; }
    if (EQ2(In, "||")) { In += 2; return OROR; }

    return *In++;
}

void
SoCalc_yyerror(const char *)
{
    // printf("parse error: %s\n", s);
}

SbBool
SoCalcParse(ExprList *elist, const char *buf)
{
    static SbBool initted = FALSE;

    if (! initted) {
	initFuncs();
	initted = TRUE;
    }

    In = buf;
    EList = elist;
    return(SoCalc_yyparse());
}

#ifdef TESTMAIN

void
main()
{
    char buf[1000];
#if YYDEBUG
    extern int SoCalc_yydebug;
    SoCalc_yydebug = 1;
#endif
    EList = new ExprList;

    while (gets(buf)) {
	In = buf;
	EList->truncate(0);
	if (SoCalc_yyparse())
	    printf("Parse error.\n");
	else {
	    EList->eval();
	    for (int i=0; i<EList->length(); i++) {
		(*EList)[i]->pr();
	    }
	}
    }
}

#endif
