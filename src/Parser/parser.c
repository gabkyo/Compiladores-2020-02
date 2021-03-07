/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "src/Parser/c-sharp.y"


#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(char const *s);

extern int yylineno;


#line 82 "src/Parser/parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_INCLUDE_PARSER_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_PARSER_H_INCLUDED
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
    IDENTIFIER = 258,
    START_PAR = 259,
    END_PAR = 260,
    START_CURLY = 261,
    END_CURLY = 262,
    START_BRCKT = 263,
    END_BRCKT = 264,
    ADD = 265,
    SUB = 266,
    DIV = 267,
    MUL = 268,
    MOD = 269,
    NOT = 270,
    QMARK = 271,
    CIRCUMFLEX = 272,
    COLON = 273,
    SEMI = 274,
    COMMA = 275,
    DOT = 276,
    ASSIGN = 277,
    LESS_THEN = 278,
    GREATER_THEN = 279,
    BIT_AND = 280,
    BIT_OR = 281,
    BIT_NOT = 282,
    EQ = 283,
    GEQ = 284,
    LEQ = 285,
    NOT_EQ = 286,
    ADD_ASSIGN = 287,
    SUB_ASSIGN = 288,
    MUL_ASSIGN = 289,
    DIV_ASSIGN = 290,
    MOD_ASSIGN = 291,
    BIT_AND_ASSIGN = 292,
    BIT_OR_ASSIGN = 293,
    CIRCUMFLEX_ASSIGN = 294,
    LEFT_SHIFT = 295,
    RIGHT_SHIFT = 296,
    AND = 297,
    OR = 298,
    DOUBLE_QMARK = 299,
    INCREMENT = 300,
    DECREMENT = 301,
    LAMBDA = 302,
    LEFT_SHIFT_ASSIGN = 303,
    RIGHT_SHIFT_ASSIGN = 304,
    ABSTRACT = 305,
    AS = 306,
    BASE = 307,
    BOOL_TYPE = 308,
    BREAK = 309,
    BYTE_TYPE = 310,
    CASE = 311,
    CHAR_TYPE = 312,
    CHECKED = 313,
    CLASS = 314,
    CONST = 315,
    CONTINUE = 316,
    DECIMAL_TYPE = 317,
    DEFAULT = 318,
    DELEGATE = 319,
    DO = 320,
    DOUBLE_TYPE = 321,
    ELSE = 322,
    ENUM = 323,
    EVENT = 324,
    EXPLICIT = 325,
    EXTERN = 326,
    FALSE_VAL = 327,
    FIXED = 328,
    FLOAT_TYPE = 329,
    FOR = 330,
    FOREACH = 331,
    GOTO = 332,
    IF = 333,
    IMPLICIT = 334,
    IN = 335,
    INT_TYPE = 336,
    INTERFACE = 337,
    INTERNAL = 338,
    IS = 339,
    LONG_TYPE = 340,
    NEW = 341,
    NULL_VALUE = 342,
    OBJECT = 343,
    OPERATOR = 344,
    OUT = 345,
    OVERRIDE = 346,
    PARAMS = 347,
    PRIVATE = 348,
    PROTECTED = 349,
    PUBLIC = 350,
    READONLY = 351,
    REF = 352,
    RETURN = 353,
    SBYTE_TYPE = 354,
    SEALED = 355,
    SHORT_TYPE = 356,
    SIZEOF = 357,
    STACKALLOC = 358,
    STATIC = 359,
    STRING_TYPE = 360,
    STRUCT = 361,
    SWITCH = 362,
    THIS = 363,
    TRUE_VAL = 364,
    TYPEOF = 365,
    UINT_TYPE = 366,
    ULONG_TYPE = 367,
    UNCHECKED = 368,
    UNSAFE = 369,
    USHORT_TYPE = 370,
    VIRTUAL = 371,
    VOID = 372,
    WHILE = 373,
    INT_VAL = 374,
    UINT_VAL = 375,
    LONG_VAL = 376,
    ULONG_VAL = 377,
    FLOAT_VAL = 378,
    DOUBLE_VAL = 379,
    DECIMAL_VAL = 380,
    CHAR_VAL = 381,
    ENTER = 382,
    END_OF_FILE = 383,
    BYTE_VAL = 384,
    SBYTE_VAL = 385,
    SHORT_VAL = 386,
    USHORT_VAL = 387,
    STRING_VAL = 388,
    LOW = 389,
    INNER_PAR = 390
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INCLUDE_PARSER_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  51
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  683

#define YYUNDEFTOK  2
#define YYMAXUTOK   390


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    30,    30,    30,    30,    31,    31,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    35,    35,    35,    35,    35,
      36,    36,    37,    37,    37,    38,    38,    38,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    40,    40,    42,
      43,    44,    45,    45,    46,    46,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,   115,   119,   120,   121,   124,   124,   124,   124,
     126,   127,   129,   130,   131,   132,   133,   135,   136,   137,
     138,   139,   141,   142,   143,   144,   145,   147,   148,   149,
     150,   151,   153,   154,   155,   156,   176,   176,   176,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   199,   200,
     200,   200,   201,   201,   201,   201,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   231,   231,   231,   235,   236,   248,
     249,   250,   252,   253,   254,   255,   276,   277,   281,   282,
     284,   285,   288,   290,   291,   292,   293,   296,   296,   297,
     298,   299,   300,   304,   305,   308,   309,   312,   314,   317,
     318,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   325,   326,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   383,   387,   388,   389,   390,   394,   394,   397,   398,
     399,   401,   401,   404,   406
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "START_PAR", "END_PAR",
  "START_CURLY", "END_CURLY", "START_BRCKT", "END_BRCKT", "ADD", "SUB",
  "DIV", "MUL", "MOD", "NOT", "QMARK", "CIRCUMFLEX", "COLON", "SEMI",
  "COMMA", "DOT", "ASSIGN", "LESS_THEN", "GREATER_THEN", "BIT_AND",
  "BIT_OR", "BIT_NOT", "EQ", "GEQ", "LEQ", "NOT_EQ", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "BIT_AND_ASSIGN",
  "BIT_OR_ASSIGN", "CIRCUMFLEX_ASSIGN", "LEFT_SHIFT", "RIGHT_SHIFT", "AND",
  "OR", "DOUBLE_QMARK", "INCREMENT", "DECREMENT", "LAMBDA",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "ABSTRACT", "AS", "BASE",
  "BOOL_TYPE", "BREAK", "BYTE_TYPE", "CASE", "CHAR_TYPE", "CHECKED",
  "CLASS", "CONST", "CONTINUE", "DECIMAL_TYPE", "DEFAULT", "DELEGATE",
  "DO", "DOUBLE_TYPE", "ELSE", "ENUM", "EVENT", "EXPLICIT", "EXTERN",
  "FALSE_VAL", "FIXED", "FLOAT_TYPE", "FOR", "FOREACH", "GOTO", "IF",
  "IMPLICIT", "IN", "INT_TYPE", "INTERFACE", "INTERNAL", "IS", "LONG_TYPE",
  "NEW", "NULL_VALUE", "OBJECT", "OPERATOR", "OUT", "OVERRIDE", "PARAMS",
  "PRIVATE", "PROTECTED", "PUBLIC", "READONLY", "REF", "RETURN",
  "SBYTE_TYPE", "SEALED", "SHORT_TYPE", "SIZEOF", "STACKALLOC", "STATIC",
  "STRING_TYPE", "STRUCT", "SWITCH", "THIS", "TRUE_VAL", "TYPEOF",
  "UINT_TYPE", "ULONG_TYPE", "UNCHECKED", "UNSAFE", "USHORT_TYPE",
  "VIRTUAL", "VOID", "WHILE", "INT_VAL", "UINT_VAL", "LONG_VAL",
  "ULONG_VAL", "FLOAT_VAL", "DOUBLE_VAL", "DECIMAL_VAL", "CHAR_VAL",
  "ENTER", "END_OF_FILE", "BYTE_VAL", "SBYTE_VAL", "SHORT_VAL",
  "USHORT_VAL", "STRING_VAL", "LOW", "INNER_PAR", "$accept", "scope",
  "modifier_list", "modifier", "type", "nullable_type", "simple_type",
  "numeric_type", "integer_type", "floating_type", "matrix_type",
  "dimensions_def", "dimensions_undef", "value", "numeric_val", "program",
  "obj_decl_list", "obj_decl", "class_father", "class_decl", "struct_decl",
  "interface_decl", "enum_decl", "enum_list", "statement_list",
  "statement", "method_decl_statement", "parameter_list", "method_body",
  "parameter", "operator", "operator_overloading", "return_statement",
  "var_decl_statement", "attr_decl_statement", "id_list",
  "if_else_statement", "if_statement", "else_statement",
  "switch_statement", "cases_list", "loop_body", "while_statement",
  "do_while_statement", "for_statement", "foreach_statement",
  "checked_scope", "unchecked_scope", "unsafe_scope", "fixed_scope",
  "label", "go_to_statement", "expression", "obj_instancing",
  "assignment_expressions", "unary_operations", "binary_operations",
  "ternary_operations", "attr_access", "method_invoking", "argument_list",
  "argument", "matrix_indexing", "matrix_instancing", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390
};
# endif

#define YYPACT_NINF (-458)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-304)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    8160,  -458,    38,  -458,    85,  -458,  -458,  -458,  -458,    95,
    -458,  -458,  -458,  -458,  -458,  -458,   -56,  -458,  -458,  -458,
    -458,  -458,    99,  -458,  -458,  8238,  8199,  -458,    47,  8160,
    -458,  -458,  -458,  -458,  -458,   111,   127,   133,  -458,   139,
     175,   192,   194,   204,  8277,   222,   228,   235,   250,   -20,
    -458,  -458,  -458,   262,   243,   266,  4385,  4385,   111,   264,
     269,   270,   274,   275,   276,   277,   111,   278,   279,   280,
     284,   298,   299,   301,  -458,  4385,   219,    60,  7225,  5618,
    5618,  5618,  5618,  -458,  5618,  5618,  5618,   148,  -458,  -458,
    -458,  -458,    68,  -458,  -458,   986,  -458,  -458,   268,  -458,
     302,   303,   306,   307,  -458,  -458,   687,  -458,  -458,  5707,
    -458,  -458,   310,   311,  -458,   313,   289,  -458,   314,  -458,
    -458,   246,   315,  -458,    10,   316,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  5792,
    8121,  5488,    17,  -458,   267,  -458,  -458,  -458,  -458,  -458,
    -458,  1117,  -458,  -458,  -458,  -458,  -458,  -458,  -458,   255,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  7852,  -458,  -458,  -458,  -458,  -458,   167,  -458,  -458,
    -458,  1248,   317,   266,  4385,  4385,   111,   318,   319,   320,
     322,   266,  4385,  4385,   111,   324,   325,   326,  1379,   897,
    -458,   330,  -458,  -458,    13,   571,   687,  7267,  8122,  8122,
    8122,  8122,  8122,  8122,    13,  5618,  4385,  4385,  -458,   216,
    5618,  5618,  5618,  -458,  5618,   214,   327,   408,   321,  8122,
    5618,  5618,  5618,    13,  5618,  5618,  4385,  4385,   333,  5759,
    5618,   328,    11,  5861,    20,   335,     2,   225,    36,    62,
    5759,   155,  -458,  -458,  -458,  1510,  -458,   168,  5618,  5618,
    5618,  5618,  5618,  5618,  5618,  -458,  5618,  5618,  5618,  5618,
    5618,  5618,  5618,  5618,  5618,  5618,  5618,  5618,  5618,  -458,
    -458,  5618,  5618,  5618,  5398,  5618,  5618,  5618,  5618,  5618,
    5618,  5618,  5618,  5618,  5618,  5618,  -458,  4385,   103,  1641,
    1772,   336,   266,  4385,  4385,  4385,   150,  1903,  2034,   337,
     266,  4385,  4385,  -458,  -458,   329,   338,  -458,  -458,  -458,
    7312,  2165,  2296,   342,  7357,  7897,  7402,  7447,  5012,    62,
    -458,  -458,  7492,  7537,  7582,  -458,  7627,  7672,  2427,  2558,
    5931,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,  -458,   343,  7717,   345,  5759,    26,    23,    41,
    5759,   238,   350,    27,    35,   334,   241,  6001,  5618,  -458,
    -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
      84,   144,  -458,   353,  -458,   357,  4385,  -458,   212,  8122,
    8122,  8122,  8122,  8122,  7942,  8122,  8122,  8122,  8122,  8122,
    8122,  8122,  8122,  8122,  8122,  8122,  8122,  8122,  8122,  8122,
    8122,  8122,  5618,  8122,  5143,  -458,  8122,  8122,  8122,  8122,
    8122,  8122,  8122,  8122,  8122,  8122,  8122,  2689,  -458,  -458,
    -458,  4385,   166,  2820,  2951,  3082,  -458,  -458,  -458,  4385,
     207,  3213,  3344,   897,  -458,  -458,  -458,  5618,   355,  5618,
     986,  3475,  -458,  5274,   215,  -458,  -458,   359,  -458,  -458,
    -458,  -458,     3,  7120,   234,    46,  -458,  6071,   986,  6141,
     364,   365,  5759,    56,  5759,   244,  6211,   367,  -458,  6281,
     368,  5759,    73,  5759,   247,  -458,     3,    74,  8122,  -458,
     168,  -458,  -458,  6351,   351,  3606,  -458,  5618,  8122,  -458,
    -458,  -458,  3737,  -458,  -458,  -458,  -458,  3868,  -458,  -458,
    -458,  -458,  7762,  4385,  7987,  -458,  4385,  -458,  -458,   366,
     163,  4385,  -458,  5618,  -458,   236,   780,     3,  7120,     3,
      76,  -458,     3,    77,  6421,  6491,   372,  6561,   373,  -458,
       3,   100,  6631,     3,   106,  6701,   374,  6771,   375,  -458,
    -458,     3,  -458,     3,   129,  5618,  -458,  8122,  -458,  -458,
     361,  3999,  5618,  4130,  5618,   323,    29,  4261,  8122,  5529,
    8122,  -458,  -458,  -458,     3,  -458,     3,     3,   136,     3,
     138,  6841,     3,   145,  6911,  -458,     3,     3,   147,  -458,
       3,     3,   156,  6981,     3,   157,  7051,  -458,  -458,     3,
    8122,  -458,  -458,  7807,  -458,  8032,  4385,  -458,  5618,   363,
    -458,  8122,  -458,  -458,  -458,     3,  -458,     3,     3,   161,
    -458,     3,     3,   191,  -458,  -458,     3,  -458,  -458,     3,
       3,   193,  -458,     3,     3,   203,  -458,   986,  4385,  4509,
    8077,  4385,  -458,  -458,  -458,     3,  -458,  -458,     3,  -458,
    -458,  -458,     3,  -458,  -458,     3,  -458,  4633,   369,  4385,
    4757,  -458,  -458,  -458,  -458,   370,  -458,  4881,   371,  -458,
     376,  -458,  -458
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      85,    17,     0,    10,     0,    21,    23,    18,    22,     0,
       5,    16,    15,    11,    20,     2,     4,     3,    13,    14,
      24,     9,     0,    19,    12,     0,     0,     8,     0,    82,
      84,    86,    87,    88,    89,    91,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     1,    83,     0,     0,     0,   118,   118,    91,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,    90,   118,   114,     0,   242,   307,
     307,   307,   307,   138,   307,   307,   307,     0,    32,   254,
      39,    46,     0,   253,    37,   307,    48,    58,     0,    47,
       0,     0,     0,     0,    42,    44,    16,    71,    29,   307,
      38,    40,     0,     0,    34,     0,     0,    57,     0,    43,
      45,     0,    19,    41,     0,     0,    56,    62,    61,    66,
      63,    70,    69,    60,    59,    64,    65,    68,    67,     0,
       0,     8,     0,    26,    25,    33,    35,    36,    27,   241,
     119,   307,   117,   120,   121,   130,   123,   122,   124,   216,
     125,   126,   127,   128,   129,   131,   132,   133,   134,   135,
     136,     0,   250,   244,   245,   246,   247,   249,   248,   251,
     252,   307,     0,     0,   118,   118,    91,     0,     0,     0,
       0,     0,   118,   118,    91,     0,     0,     0,   307,     0,
     111,     0,    31,   239,     0,   242,     0,     0,   272,   273,
     275,   274,   270,   271,     0,   307,   118,   118,   228,     0,
     307,   307,   307,   240,   307,    28,     0,   242,   241,   204,
     307,   307,   307,     0,   307,   307,   118,   118,     0,     0,
     307,    28,     0,     0,     0,     0,     0,     0,   214,    55,
       0,     0,    30,   106,   116,   307,   217,     0,   307,   307,
     307,   307,   307,   307,   307,   137,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   268,
     269,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   101,   118,     0,   307,
     307,     0,     0,   118,   118,   118,     0,   307,   307,     0,
       0,   118,   118,    96,   115,   112,   303,   302,   243,   305,
       0,   307,   307,     0,     0,     0,     0,     0,   307,    55,
     206,   205,     0,     0,     0,   304,     0,     0,   307,   307,
       0,   168,   169,   171,   170,   172,   187,   186,   177,   178,
     183,   184,   181,   180,   179,   182,   174,   173,   175,   176,
     185,   166,   167,     0,     0,     0,     0,     0,     0,   214,
       0,     0,     0,     0,     0,   214,     0,     0,   307,    49,
      75,    74,    79,    76,    81,    73,    72,    77,    78,    80,
       0,     0,    53,     0,   207,     0,   118,   221,     0,   279,
     280,   282,   281,   283,     0,   297,   288,   289,   294,   295,
     292,   291,   290,   293,   285,   284,   286,   287,   296,   299,
     300,   298,   307,   311,   307,   309,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   267,   266,   307,   107,   102,
      97,   118,     0,   307,   307,   307,   108,   103,    98,   118,
       0,   307,   307,     0,   233,   234,   227,   307,     0,   307,
     307,   307,   255,   307,     0,   277,   278,     0,   276,   235,
     236,   237,     0,     0,     0,     0,   158,     0,   307,     0,
       0,     0,     0,   214,     0,     0,     0,     0,   209,     0,
       0,     0,   214,     0,     0,   208,     0,     0,   215,    50,
       0,    51,    54,     0,   212,   307,   313,   307,   312,   306,
     308,    92,   307,   109,   104,    99,    93,   307,   110,   105,
     100,   113,     0,   118,     0,   232,   118,   219,   256,   314,
       0,   118,   161,   307,   139,     0,   307,     0,     0,     0,
       0,   229,     0,     0,     0,     0,     0,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   210,
     141,     0,    52,     0,     0,   307,   220,   301,    94,    95,
       0,   307,   307,   307,   307,     0,     0,   307,   160,   307,
     163,   140,   157,   188,     0,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,     0,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,   142,   190,     0,
     213,   230,   238,     0,   218,     0,   118,   222,   307,     0,
     159,   165,   189,   144,   192,     0,   149,     0,     0,     0,
     151,     0,     0,     0,   146,   194,     0,   148,   153,     0,
       0,     0,   155,     0,     0,     0,   191,   307,   118,   307,
       0,   118,   193,   150,   196,     0,   152,   198,     0,   195,
     154,   200,     0,   156,   202,     0,   231,   307,   254,   118,
     307,   197,   199,   201,   203,   254,   226,   307,   254,   225,
     254,   224,   223
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -458,     6,    24,     8,   392,  -458,  -458,  -458,  -458,  -458,
    -458,  -240,  -458,  -108,  -118,  -458,  -458,    44,   -54,  -458,
    -458,  -458,  -458,  -172,   -57,   -26,  -458,  -335,  -234,  -155,
    -248,  -458,  -458,  -458,  -458,  -237,  -458,  -458,  -458,  -458,
    -458,  -457,  -458,  -458,  -458,  -458,  -458,  -458,  -458,  -458,
    -458,  -458,   435,  -458,  -458,  -458,  -458,  -458,  -158,  -458,
      58,  -409,  -458,  -458
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   390,   391,   149,   392,    28,    29,   150,    54,    31,
      32,    33,    34,    77,   151,   152,   153,   475,   534,   476,
     363,   154,   155,   156,   157,   251,   158,   159,   256,   160,
     576,   219,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     424,   425,   179,   180
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     181,   228,   393,   525,   182,   241,    25,   371,    27,   531,
     376,   298,   190,   238,   365,   510,   316,   398,   198,   306,
     248,   541,   532,   369,    26,   249,   483,    38,   249,   481,
     490,   249,    49,    27,    50,    25,   617,    27,   492,    70,
     377,    35,   497,   249,    30,   486,   317,    51,    71,    44,
     533,   537,    50,    26,   510,    88,   319,    90,   378,    91,
     547,    70,    72,   378,    94,    87,   538,   200,    96,   218,
      71,   379,   215,    52,   216,   335,    99,   557,   378,   561,
     201,   584,   586,   104,    72,   618,    73,   105,    36,   464,
     108,   314,   619,   499,   538,   378,   538,   538,    37,   239,
     366,   110,    39,   111,   500,   596,   250,   114,    73,   370,
     438,   600,   484,   119,   120,   482,   491,   123,   480,   373,
     538,   116,   487,   201,   493,   254,   538,   299,   300,    53,
     442,   485,   301,    55,   609,   307,   308,   494,   450,    56,
     309,   625,   540,   627,   543,    57,   246,    27,    50,   538,
     631,   551,   636,   501,   554,   254,   538,   446,   538,   321,
     322,   639,   643,   243,   502,   538,   655,   538,   564,   214,
     201,   284,   254,   513,   394,   395,   538,   538,    58,   338,
     339,   538,   380,   381,   382,   383,   201,   384,   385,   285,
     666,   386,   387,   388,   389,    59,   658,    60,   662,   286,
     287,   288,   289,   290,   291,   292,   293,    61,   665,   588,
     590,   538,   593,   538,   518,   294,   295,   598,   328,   574,
     602,   506,   605,   538,   529,    66,   575,   201,   375,   397,
     202,    67,   500,   249,   546,   500,   548,   536,    68,   579,
     437,   199,   249,   556,   249,   558,   443,   444,   445,    75,
     235,    50,   236,    69,   451,   452,   629,   488,   395,   633,
     495,   395,   560,   549,   395,    74,   559,   395,   641,    76,
     183,   645,   220,   254,   254,   184,   185,   186,   187,   188,
     189,   254,   254,   252,   191,   192,   193,   194,   380,   381,
     382,   383,   422,   384,   385,   254,   254,   386,   387,   388,
     389,   195,   196,   581,   197,   583,   221,   222,   585,   223,
     233,   224,   254,   254,   230,   231,   595,   232,   234,   599,
     240,   237,   255,   297,   302,   303,   304,   607,   305,   608,
     310,   311,   312,   315,   323,   329,   422,   340,   372,   505,
     331,   616,   441,   449,   202,   521,   457,   477,    27,   479,
     622,   453,   623,   624,   489,   626,   378,   503,   630,   204,
     504,   523,   634,   635,   473,   530,   637,   638,   544,   545,
     642,   552,   555,   565,   -50,   646,   591,   594,   603,   606,
     611,   651,   562,   582,   512,    27,   463,     0,   676,   679,
     681,   652,   517,   653,   654,   682,     0,   656,   657,     0,
       0,   473,   659,     0,     0,   660,   661,     0,     0,   663,
     664,   254,     0,     0,     0,     0,     0,   254,   254,   254,
       0,   671,     0,     0,   672,   254,   254,   330,   673,   204,
    -303,   674,   422,     0,   218,   527,     0,     0,     0,     0,
    -303,  -303,  -303,  -303,  -303,  -303,  -303,  -303,     0,     0,
       0,     0,   218,     0,     0,     0,  -303,  -303,     0,     0,
       0,     0,     0,     0,     0,     0,   571,     0,     0,   573,
       0,   422,     0,     0,   577,     0,     0,     0,     0,   254,
       0,    50,     0,     0,     0,    27,   254,    27,     0,     0,
       0,   254,     0,     0,    27,     0,     0,    27,   226,     0,
       0,   473,     0,   473,     0,     0,     0,     0,     0,     0,
     473,    27,     0,   473,   207,   208,   209,   210,     0,   211,
     212,   213,     0,     0,     0,     0,     0,   473,     0,     0,
       0,   244,     0,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,   254,    27,   254,     0,     0,
       0,   254,    27,    27,     0,    27,     0,     0,     0,   649,
      27,     0,   473,    27,     0,    27,     0,     0,   473,   473,
       0,   473,     0,     0,     0,     0,   473,     0,     0,   473,
       0,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   667,   204,  -303,   670,     0,     0,     0,   226,    27,
       0,     0,    27,  -303,  -303,  -303,  -303,  -303,  -303,  -303,
    -303,    27,   677,     0,    27,   473,     0,     0,   473,  -303,
    -303,   218,     0,   254,     0,     0,     0,   473,     0,     0,
     473,     0,     0,     0,     0,   368,     0,     0,   374,     0,
       0,   254,     0,     0,   254,     0,     0,     0,     0,     0,
     320,   254,     0,     0,     0,   324,   325,   326,     0,   327,
       0,     0,     0,     0,     0,   332,   333,   334,     0,   336,
     337,     0,     0,     0,     0,   364,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,     0,   399,   400,   401,   402,   403,   404,   405,
       0,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,     0,     0,   419,   420,   421,   423,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,     0,   474,     0,     0,     0,     0,     0,     0,     0,
      88,     0,    90,     0,    91,     0,     0,     0,     0,    94,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,    99,     0,   423,     0,     0,     0,     0,   104,   474,
       0,     0,   105,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,   205,    79,  -162,   110,     0,   111,     0,
      80,    81,   114,     0,     0,    82,     0,     0,   119,   120,
    -162,     0,   123,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,   498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,     0,     0,
       0,     0,    87,     0,    89,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,   508,     0,   423,
       0,     0,     0,     0,     0,   535,   206,   107,     0,   474,
       0,   474,     0,     0,     0,     0,     0,     0,   474,     0,
       0,   474,   112,   113,     0,     0,     0,     0,   116,   117,
     118,     0,   522,     0,   524,   474,     0,     0,   423,   126,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,     0,     0,     0,     0,     0,   474,   474,     0,   474,
       0,     0,   567,     0,   474,     0,     0,   474,     0,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   578,    97,
       0,   580,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   474,   107,     0,   474,     0,     0,    78,
      79,     0,   217,     0,     0,   474,    80,    81,   474,     0,
     610,    82,     0,     0,     0,    83,   117,   613,     0,   615,
       0,     0,     0,    84,   621,     0,   126,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   134,   135,   136,   137,
     138,    85,    86,     0,     0,     0,     1,     0,    87,    88,
      89,    90,     0,    91,    92,     2,     3,    93,    94,     0,
       0,    95,    96,   650,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,   103,     8,     0,   104,     9,    10,
       0,   105,   106,   107,   108,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   109,   110,    20,   111,   112,   113,
      21,   114,    22,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    24,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   136,   137,   138,
      78,    79,     0,     0,   253,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,     0,    95,    96,     0,     4,     5,     6,     7,    97,
      98,    99,   100,   101,   102,   103,     8,     0,   104,     9,
      10,     0,   105,   106,   107,   108,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   109,   110,    20,   111,   112,
     113,    21,   114,    22,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    24,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   134,   135,   136,   137,
     138,    78,    79,     0,     0,   296,     0,     0,    80,    81,
       0,     0,     0,    82,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     1,     0,
      87,    88,    89,    90,     0,    91,    92,     2,     3,    93,
      94,     0,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,   103,     8,     0,   104,
       9,    10,     0,   105,   106,   107,   108,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   109,   110,    20,   111,
     112,   113,    21,   114,    22,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    24,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   136,
     137,   138,    78,    79,     0,     0,   313,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,     0,    95,    96,     0,     4,     5,     6,
       7,    97,    98,    99,   100,   101,   102,   103,     8,     0,
     104,     9,    10,     0,   105,   106,   107,   108,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   109,   110,    20,
     111,   112,   113,    21,   114,    22,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    24,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,     0,   134,   135,
     136,   137,   138,    78,    79,     0,   396,     0,     0,     0,
      80,    81,     0,     0,     0,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,     0,     0,
       1,     0,    87,    88,    89,    90,     0,    91,    92,     2,
       3,    93,    94,     0,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,   103,     8,
       0,   104,     9,    10,     0,   105,   106,   107,   108,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   109,   110,
      20,   111,   112,   113,    21,   114,    22,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    24,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
     135,   136,   137,   138,    78,    79,     0,     0,   439,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,     0,    95,    96,     0,     4,
       5,     6,     7,    97,    98,    99,   100,   101,   102,   103,
       8,     0,   104,     9,    10,     0,   105,   106,   107,   108,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   109,
     110,    20,   111,   112,   113,    21,   114,    22,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    24,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,     0,     0,
     134,   135,   136,   137,   138,    78,    79,     0,     0,   440,
       0,     0,    80,    81,     0,     0,     0,    82,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
       0,     0,     1,     0,    87,    88,    89,    90,     0,    91,
      92,     2,     3,    93,    94,     0,     0,    95,    96,     0,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
     103,     8,     0,   104,     9,    10,     0,   105,   106,   107,
     108,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     109,   110,    20,   111,   112,   113,    21,   114,    22,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    24,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   136,   137,   138,    78,    79,     0,     0,
     447,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,     0,
      91,    92,     2,     3,    93,    94,     0,     0,    95,    96,
       0,     4,     5,     6,     7,    97,    98,    99,   100,   101,
     102,   103,     8,     0,   104,     9,    10,     0,   105,   106,
     107,   108,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   109,   110,    20,   111,   112,   113,    21,   114,    22,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    24,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   136,   137,   138,    78,    79,     0,
       0,   448,     0,     0,    80,    81,     0,     0,     0,    82,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,     0,     1,     0,    87,    88,    89,    90,
       0,    91,    92,     2,     3,    93,    94,     0,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,   103,     8,     0,   104,     9,    10,     0,   105,
     106,   107,   108,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   109,   110,    20,   111,   112,   113,    21,   114,
      22,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      24,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,     0,   134,   135,   136,   137,   138,    78,    79,
       0,     0,   455,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,     0,
      95,    96,     0,     4,     5,     6,     7,    97,    98,    99,
     100,   101,   102,   103,     8,     0,   104,     9,    10,     0,
     105,   106,   107,   108,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   109,   110,    20,   111,   112,   113,    21,
     114,    22,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    24,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     0,     0,   134,   135,   136,   137,   138,    78,
      79,     0,     0,   456,     0,     0,    80,    81,     0,     0,
       0,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     1,     0,    87,    88,
      89,    90,     0,    91,    92,     2,     3,    93,    94,     0,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,   103,     8,     0,   104,     9,    10,
       0,   105,   106,   107,   108,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   109,   110,    20,   111,   112,   113,
      21,   114,    22,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    24,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   136,   137,   138,
      78,    79,     0,     0,   470,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,     0,    95,    96,     0,     4,     5,     6,     7,    97,
      98,    99,   100,   101,   102,   103,     8,     0,   104,     9,
      10,     0,   105,   106,   107,   108,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   109,   110,    20,   111,   112,
     113,    21,   114,    22,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    24,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   134,   135,   136,   137,
     138,    78,    79,     0,     0,   471,     0,     0,    80,    81,
       0,     0,     0,    82,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     1,     0,
      87,    88,    89,    90,     0,    91,    92,     2,     3,    93,
      94,     0,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,   103,     8,     0,   104,
       9,    10,     0,   105,   106,   107,   108,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   109,   110,    20,   111,
     112,   113,    21,   114,    22,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    24,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   136,
     137,   138,    78,    79,     0,     0,   511,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,     0,    95,    96,     0,     4,     5,     6,
       7,    97,    98,    99,   100,   101,   102,   103,     8,     0,
     104,     9,    10,     0,   105,   106,   107,   108,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   109,   110,    20,
     111,   112,   113,    21,   114,    22,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    24,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,     0,   134,   135,
     136,   137,   138,    78,    79,     0,     0,   514,     0,     0,
      80,    81,     0,     0,     0,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,     0,     0,
       1,     0,    87,    88,    89,    90,     0,    91,    92,     2,
       3,    93,    94,     0,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,   103,     8,
       0,   104,     9,    10,     0,   105,   106,   107,   108,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   109,   110,
      20,   111,   112,   113,    21,   114,    22,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    24,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
     135,   136,   137,   138,    78,    79,     0,     0,   515,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,     0,    95,    96,     0,     4,
       5,     6,     7,    97,    98,    99,   100,   101,   102,   103,
       8,     0,   104,     9,    10,     0,   105,   106,   107,   108,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   109,
     110,    20,   111,   112,   113,    21,   114,    22,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    24,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,     0,     0,
     134,   135,   136,   137,   138,    78,    79,     0,     0,   516,
       0,     0,    80,    81,     0,     0,     0,    82,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
       0,     0,     1,     0,    87,    88,    89,    90,     0,    91,
      92,     2,     3,    93,    94,     0,     0,    95,    96,     0,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
     103,     8,     0,   104,     9,    10,     0,   105,   106,   107,
     108,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     109,   110,    20,   111,   112,   113,    21,   114,    22,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    24,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   136,   137,   138,    78,    79,     0,     0,
     519,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,     0,
      91,    92,     2,     3,    93,    94,     0,     0,    95,    96,
       0,     4,     5,     6,     7,    97,    98,    99,   100,   101,
     102,   103,     8,     0,   104,     9,    10,     0,   105,   106,
     107,   108,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   109,   110,    20,   111,   112,   113,    21,   114,    22,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    24,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   136,   137,   138,    78,    79,     0,
       0,   520,     0,     0,    80,    81,     0,     0,     0,    82,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,     0,     1,     0,    87,    88,    89,    90,
       0,    91,    92,     2,     3,    93,    94,     0,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,   103,     8,     0,   104,     9,    10,     0,   105,
     106,   107,   108,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   109,   110,    20,   111,   112,   113,    21,   114,
      22,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      24,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,     0,   134,   135,   136,   137,   138,    78,    79,
       0,   526,     0,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,     0,
      95,    96,     0,     4,     5,     6,     7,    97,    98,    99,
     100,   101,   102,   103,     8,     0,   104,     9,    10,     0,
     105,   106,   107,   108,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   109,   110,    20,   111,   112,   113,    21,
     114,    22,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    24,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     0,     0,   134,   135,   136,   137,   138,    78,
      79,     0,     0,   566,     0,     0,    80,    81,     0,     0,
       0,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     1,     0,    87,    88,
      89,    90,     0,    91,    92,     2,     3,    93,    94,     0,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,   103,     8,     0,   104,     9,    10,
       0,   105,   106,   107,   108,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   109,   110,    20,   111,   112,   113,
      21,   114,    22,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    24,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   136,   137,   138,
      78,    79,     0,     0,   568,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,     0,    95,    96,     0,     4,     5,     6,     7,    97,
      98,    99,   100,   101,   102,   103,     8,     0,   104,     9,
      10,     0,   105,   106,   107,   108,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   109,   110,    20,   111,   112,
     113,    21,   114,    22,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    24,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   134,   135,   136,   137,
     138,    78,    79,     0,     0,   569,     0,     0,    80,    81,
       0,     0,     0,    82,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     1,     0,
      87,    88,    89,    90,     0,    91,    92,     2,     3,    93,
      94,     0,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,   103,     8,     0,   104,
       9,    10,     0,   105,   106,   107,   108,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   109,   110,    20,   111,
     112,   113,    21,   114,    22,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    24,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   136,
     137,   138,    78,    79,     0,     0,   612,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,     0,    95,    96,     0,     4,     5,     6,
       7,    97,    98,    99,   100,   101,   102,   103,     8,     0,
     104,     9,    10,     0,   105,   106,   107,   108,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   109,   110,    20,
     111,   112,   113,    21,   114,    22,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    24,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,     0,     0,   134,   135,
     136,   137,   138,    78,    79,     0,     0,   614,     0,     0,
      80,    81,     0,     0,     0,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,     0,     0,
       1,     0,    87,    88,    89,    90,     0,    91,    92,     2,
       3,    93,    94,     0,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,   103,     8,
       0,   104,     9,    10,     0,   105,   106,   107,   108,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   109,   110,
      20,   111,   112,   113,    21,   114,    22,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    24,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
     135,   136,   137,   138,    78,    79,     0,     0,   620,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,     0,    95,    96,     0,     4,
       5,     6,     7,    97,    98,    99,   100,   101,   102,   103,
       8,     0,   104,     9,    10,     0,   105,   106,   107,   108,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   109,
     110,    20,   111,   112,   113,    21,   114,    22,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    24,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,    78,    79,
     134,   135,   136,   137,   138,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,     0,
      95,    96,     0,     4,     5,     6,     7,    97,    98,    99,
     100,   101,   102,   103,     8,     0,   104,     9,    10,     0,
     105,   106,   107,   108,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   109,   110,    20,   111,   112,   113,    21,
     114,    22,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    24,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    78,    79,   134,   135,   136,   137,   138,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,   668,    90,     0,    91,    92,     2,     3,
      93,    94,     0,     0,    95,    96,     0,     4,     5,     6,
       7,    97,    98,    99,   100,   101,   102,   103,     8,     0,
     104,     9,    10,     0,   105,   106,   107,   108,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   109,   110,    20,
     111,   112,   113,    21,   114,    22,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    24,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    78,    79,   134,   135,
     136,   137,   138,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,   675,    90,     0,
      91,    92,     2,     3,    93,    94,     0,     0,    95,    96,
       0,     4,     5,     6,     7,    97,    98,    99,   100,   101,
     102,   103,     8,     0,   104,     9,    10,     0,   105,   106,
     107,   108,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   109,   110,    20,   111,   112,   113,    21,   114,    22,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    24,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      78,    79,   134,   135,   136,   137,   138,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,   678,    90,     0,    91,    92,     2,     3,    93,    94,
       0,     0,    95,    96,     0,     4,     5,     6,     7,    97,
      98,    99,   100,   101,   102,   103,     8,     0,   104,     9,
      10,     0,   105,   106,   107,   108,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   109,   110,    20,   111,   112,
     113,    21,   114,    22,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    24,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,    78,    79,   134,   135,   136,   137,
     138,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,   680,    90,     0,    91,    92,
       2,     3,    93,    94,     0,     0,    95,    96,     0,     4,
       5,     6,     7,    97,    98,    99,   100,   101,   102,   103,
       8,     0,   104,     9,    10,     0,   105,   106,   107,   108,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   109,
     110,    20,   111,   112,   113,    21,   114,    22,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    24,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,     0,     0,
     134,   135,   136,   137,   138,   205,    79,   462,     0,     0,
       0,     0,    80,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
       0,     0,     1,     0,    87,     0,    89,     0,     0,     0,
       0,     0,     3,    93,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,    97,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,   106,   107,
       0,     0,    12,    13,    14,     0,     0,     0,    18,    19,
       0,     0,    20,     0,   112,   113,    21,     0,     0,     0,
     116,   117,   118,     0,     0,     0,    23,     0,    24,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   136,   137,   138,   205,    79,   509,     0,
       0,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,     0,    89,     0,     0,
       0,     0,     0,     3,    93,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,    97,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,   106,
     107,     0,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,     0,    20,     0,   112,   113,    21,     0,     0,
       0,   116,   117,   118,     0,     0,     0,    23,     0,    24,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   136,   137,   138,   205,    79,   528,
       0,     0,     0,     0,    80,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,     0,     1,     0,    87,     0,    89,     0,
       0,     0,     0,     0,     3,    93,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,    97,     0,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
     106,   107,     0,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,     0,    20,     0,   112,   113,    21,     0,
       0,     0,   116,   117,   118,     0,     0,     0,    23,     0,
      24,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   205,    79,   134,   135,   136,   137,   138,    80,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     1,     0,
      87,     0,    89,     0,     0,     0,     0,     0,     3,    93,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
      97,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,   106,   107,     0,     0,    12,    13,
      14,   241,     0,     0,    18,    19,     0,     0,    20,     0,
     112,   113,    21,     0,     0,     0,   116,   117,   118,     0,
       0,     0,    23,     0,    24,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   136,
     137,   138,   205,    79,  -164,     0,     0,     0,     0,    80,
      81,    88,     0,    90,    82,    91,     0,     0,     0,  -164,
      94,     0,     0,     0,    96,     0,    84,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,   105,    85,    86,   108,     0,     0,     0,
       0,    87,     0,    89,     0,     0,     0,   110,     0,   111,
      93,     0,     0,   114,     0,     0,     0,     0,     0,   119,
     120,    97,     0,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,   107,     0,     0,     0,
       0,   205,    79,     0,     0,     0,     0,     0,    80,    81,
       0,   112,   113,    82,     0,     0,     0,   116,   117,   118,
       0,     0,     0,     0,     0,    84,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,     0,     0,   134,   135,
     136,   137,   138,    85,    86,     0,     0,     0,     0,     0,
      87,     0,    89,     0,     0,     0,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   107,     0,     0,     0,     0,
     227,    79,     0,     0,     0,     0,     0,    80,    81,     0,
     112,   113,    82,     0,     0,     0,   116,   117,   118,     0,
       0,     0,     0,     0,    84,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   136,
     137,   138,    85,    86,     0,     0,     0,     0,     0,    87,
       0,    89,     0,     0,     0,     0,     0,     0,    93,   341,
     342,   343,   344,   345,     0,   346,   347,     0,     0,    97,
       0,     0,   348,   349,   350,   351,     0,   352,   353,   354,
     355,     0,     0,   206,   107,   241,     0,     0,     0,   356,
     357,   358,   359,   360,   361,   362,     0,     0,     0,   112,
     113,     0,     0,     0,     0,   116,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   134,   135,   136,   137,
     138,     0,     1,     0,     0,    88,     0,    90,     0,    91,
       0,    40,     3,     0,    94,     0,     0,     0,    96,     0,
      41,     5,     6,     7,   241,     0,    99,     0,     0,     0,
       0,     8,     0,   104,    42,     0,     0,   105,    11,     0,
     108,     0,    12,    13,    14,     0,     0,     0,    18,    19,
       0,   110,    20,   111,     0,     0,    21,   114,    43,     0,
       0,     0,     0,   119,   120,     0,    23,   123,    24,   242,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
      62,     3,     0,    94,     0,     0,     0,    96,     0,    63,
       5,     6,     7,     0,   241,    99,   472,     0,     0,     0,
       8,     0,   104,    64,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,    65,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,   367,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   496,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   539,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   542,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   550,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   553,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   563,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   587,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   589,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   592,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   597,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   601,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   604,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   628,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   632,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   640,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,     0,   241,    99,   644,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,     0,    96,     0,     0,
       5,     6,     7,   241,     0,    99,     0,     0,     0,     0,
       8,     0,   104,     0,     0,     0,   105,    11,     0,   108,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     110,    20,   111,     0,     0,    21,   114,     0,     0,     0,
       0,     0,   119,   120,     0,    23,   123,    24,     0,     0,
       1,     0,     0,    88,     0,    90,     0,    91,     0,     0,
       3,     0,    94,     0,     0,     0,    96,     0,     0,     5,
       6,     7,     0,     0,    99,     0,     0,     0,     0,     8,
       0,   104,     0,     0,     0,   105,    11,     0,   108,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,   110,
      20,   111,     0,     0,    21,   114,     0,     0,   -28,  -303,
       0,   119,   120,   -28,    23,   123,    24,     0,     0,     0,
       0,   202,     0,   203,     0,     0,   204,  -303,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -303,  -303,  -303,
    -303,  -303,  -303,  -303,  -303,     0,     0,     0,     0,     0,
       0,     0,   318,  -303,  -303,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,     0,     0,     0,     0,     0,   274,   275,   276,
     277,   278,   279,   280,   -28,     0,     0,   454,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,   458,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,   460,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,   461,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,   465,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,   466,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,   467,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,   468,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,   469,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,   478,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,   570,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,   647,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,     0,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,   265,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,     0,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,   459,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,     0,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
     507,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,     0,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,     0,   572,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,     0,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
     648,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,     0,   281,     0,   257,     0,   258,   259,   260,
     261,   262,     0,   263,   264,   669,     0,     0,     0,     0,
     266,   267,   268,   269,     0,   270,   271,   272,   273,     0,
       0,     0,   282,     0,     0,     0,   283,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,     0,   281,     0,
     257,     0,   258,   259,   260,   261,   262,     0,   263,   264,
       0,     0,     0,     0,     0,   266,   267,   268,   269,     0,
     270,   271,   272,   273,     0,     0,     0,   282,     0,     0,
       0,   283,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     1,     0,   281,     0,     0,     0,     0,     0,     0,
      45,     3,     0,     0,     0,     0,     0,     0,     0,    46,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     0,
       8,     0,   282,    47,    10,     0,   283,    11,     0,     0,
       1,    12,    13,    14,    15,    16,    17,    18,    19,     2,
       3,    20,     0,     0,     0,    21,     0,    48,     4,     5,
       6,     7,     0,     0,     0,    23,     0,    24,   245,     8,
       0,     0,     9,    10,     0,     0,    11,     0,     0,     1,
      12,    13,    14,    15,    16,    17,    18,    19,    45,     3,
      20,     0,     0,     0,    21,     0,    22,    46,     5,     6,
       7,     0,     0,     0,    23,     0,    24,     0,     8,     0,
       0,    47,    10,     0,     0,    11,     0,     0,     1,    12,
      13,    14,    15,    16,    17,    18,    19,    40,     3,    20,
       0,     0,     0,    21,     0,    48,    41,     5,     6,     7,
       0,     0,     0,    23,     0,    24,     0,     8,     0,     0,
      42,     0,     0,     0,    11,     0,     0,     1,    12,    13,
      14,     0,     0,     0,    18,    19,    62,     3,    20,     0,
       0,     0,    21,     0,    43,    63,     5,     6,     7,     0,
       0,     0,    23,     0,    24,     0,     8,     0,     0,    64,
       0,     0,     0,    11,     0,     0,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,     0,    20,     0,     0,
       0,    21,     0,    65,     0,     0,     0,     0,     0,     0,
       0,    23,     0,    24
};

static const yytype_int16 yycheck[] =
{
      57,   109,   250,   460,    58,     3,     0,   244,     0,     6,
     247,   183,    66,     3,     3,   424,     3,   257,    75,   191,
       3,   478,    19,     3,     0,     8,     3,    83,     8,     3,
       3,     8,    26,    25,    26,    29,     7,    29,     3,    59,
       4,     3,   377,     8,     0,     4,   204,     0,    68,    25,
      47,     5,    44,    29,   463,    53,   214,    55,    22,    57,
       4,    59,    82,    22,    62,    52,    20,     7,    66,    95,
      68,     9,     4,    29,     6,   233,    74,     4,    22,     5,
      20,     5,     5,    81,    82,    56,   106,    85,     3,   329,
      88,   199,    63,     9,    20,    22,    20,    20,     3,    89,
      89,    99,     3,   101,    20,     5,    89,   105,   106,    89,
       7,     5,    89,   111,   112,    89,    89,   115,   366,   117,
      20,   108,   370,    20,    89,   151,    20,   184,   185,    18,
     302,   368,   186,     6,     5,   192,   193,   374,   310,     6,
     194,     5,   477,     5,   479,     6,   140,   139,   140,    20,
       5,   486,     5,     9,   489,   181,    20,     7,    20,   216,
     217,     5,     5,   139,    20,    20,     5,    20,   503,    21,
      20,     4,   198,     7,    19,    20,    20,    20,     3,   236,
     237,    20,   120,   121,   122,   123,    20,   125,   126,    22,
     647,   129,   130,   131,   132,     3,     5,     3,     5,    32,
      33,    34,    35,    36,    37,    38,    39,     3,     5,   544,
     545,    20,   547,    20,     7,    48,    49,   552,     4,    56,
     555,     9,   557,    20,     9,     3,    63,    20,     3,   255,
      16,     3,    20,     8,   482,    20,   484,     3,     3,     3,
     297,    22,     8,   491,     8,   493,   303,   304,   305,     6,
       4,   243,     6,     3,   311,   312,   591,    19,    20,   594,
      19,    20,   496,    19,    20,     3,    19,    20,   603,     3,
       6,   606,     4,   299,   300,     6,     6,     3,     3,     3,
       3,   307,   308,    16,     6,     6,     6,     3,   120,   121,
     122,   123,   284,   125,   126,   321,   322,   129,   130,   131,
     132,     3,     3,   537,     3,   539,     4,     4,   542,     3,
      21,     4,   338,   339,     4,     4,   550,     4,     4,   553,
       4,     6,    67,     6,     6,     6,     6,   561,     6,   563,
       6,     6,     6,     3,   118,     8,   328,     4,     3,   396,
      19,    18,     6,     6,    16,   453,     4,     4,   340,     4,
     584,    22,   586,   587,     4,   589,    22,     4,   592,    21,
       3,     6,   596,   597,   340,     6,   600,   601,     4,     4,
     604,     4,     4,    22,     8,   609,     4,     4,     4,     4,
      19,    18,   500,   538,   441,   377,   328,    -1,    19,    19,
      19,   625,   449,   627,   628,    19,    -1,   631,   632,    -1,
      -1,   377,   636,    -1,    -1,   639,   640,    -1,    -1,   643,
     644,   437,    -1,    -1,    -1,    -1,    -1,   443,   444,   445,
      -1,   655,    -1,    -1,   658,   451,   452,    19,   662,    21,
      22,   665,   424,    -1,   460,   461,    -1,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,   478,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   523,    -1,    -1,   526,
      -1,   463,    -1,    -1,   531,    -1,    -1,    -1,    -1,   505,
      -1,   473,    -1,    -1,    -1,   477,   512,   479,    -1,    -1,
      -1,   517,    -1,    -1,   486,    -1,    -1,   489,   106,    -1,
      -1,   477,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,
     486,   503,    -1,   489,    79,    80,    81,    82,    -1,    84,
      85,    86,    -1,    -1,    -1,    -1,    -1,   503,    -1,    -1,
      -1,   139,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,   571,   538,   573,    -1,    -1,
      -1,   577,   544,   545,    -1,   547,    -1,    -1,    -1,   616,
     552,    -1,   538,   555,    -1,   557,    -1,    -1,   544,   545,
      -1,   547,    -1,    -1,    -1,    -1,   552,    -1,    -1,   555,
      -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   648,    21,    22,   651,    -1,    -1,    -1,   206,   591,
      -1,    -1,   594,    32,    33,    34,    35,    36,    37,    38,
      39,   603,   669,    -1,   606,   591,    -1,    -1,   594,    48,
      49,   647,    -1,   649,    -1,    -1,    -1,   603,    -1,    -1,
     606,    -1,    -1,    -1,    -1,   243,    -1,    -1,   246,    -1,
      -1,   667,    -1,    -1,   670,    -1,    -1,    -1,    -1,    -1,
     215,   677,    -1,    -1,    -1,   220,   221,   222,    -1,   224,
      -1,    -1,    -1,    -1,    -1,   230,   231,   232,    -1,   234,
     235,    -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    -1,    -1,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,   328,    -1,    -1,    -1,    -1,    81,   377,
      -1,    -1,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    99,    -1,   101,    -1,
      10,    11,   105,    -1,    -1,    15,    -1,    -1,   111,   112,
      20,    -1,   115,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,   422,    -1,   424,
      -1,    -1,    -1,    -1,    -1,   473,    86,    87,    -1,   477,
      -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,
      -1,   489,   102,   103,    -1,    -1,    -1,    -1,   108,   109,
     110,    -1,   457,    -1,   459,   503,    -1,    -1,   463,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     538,    -1,    -1,    -1,    -1,    -1,   544,   545,    -1,   547,
      -1,    -1,   507,    -1,   552,    -1,    -1,   555,    -1,   557,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   533,    72,
      -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   591,    87,    -1,   594,    -1,    -1,     3,
       4,    -1,     6,    -1,    -1,   603,    10,    11,   606,    -1,
     565,    15,    -1,    -1,    -1,    19,   109,   572,    -1,   574,
      -1,    -1,    -1,    27,   579,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    66,   618,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      -1,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    83,    -1,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,     3,     4,    -1,     6,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    -1,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    83,    -1,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,   131,   132,   133,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      -1,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    83,    -1,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    -1,    81,    82,    83,    -1,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    82,    83,    -1,    85,
      86,    87,    88,    -1,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,   131,   132,   133,     3,     4,
      -1,     6,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    81,    82,    83,
      -1,    85,    86,    87,    88,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    81,
      82,    83,    -1,    85,    86,    87,    88,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     3,     4,
     129,   130,   131,   132,   133,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     3,     4,   129,   130,   131,   132,   133,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    -1,
      81,    82,    83,    -1,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     3,     4,   129,   130,
     131,   132,   133,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    82,    83,    -1,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       3,     4,   129,   130,   131,   132,   133,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    -1,    81,    82,
      83,    -1,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     3,     4,   129,   130,   131,   132,
     133,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    82,    83,    -1,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,
      -1,    -1,   100,    -1,   102,   103,   104,    -1,    -1,    -1,
     108,   109,   110,    -1,    -1,    -1,   114,    -1,   116,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    -1,    -1,    -1,    96,
      97,    -1,    -1,   100,    -1,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,    -1,    -1,    -1,   114,    -1,   116,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,   100,    -1,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,    -1,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,     3,     4,   129,   130,   131,   132,   133,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      92,     3,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,    -1,
      -1,    -1,   114,    -1,   116,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    53,    -1,    55,    15,    57,    -1,    -1,    -1,    20,
      62,    -1,    -1,    -1,    66,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    45,    46,    88,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    99,    -1,   101,
      61,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    72,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,
      -1,   102,   103,    15,    -1,    -1,    -1,   108,   109,   110,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    10,    11,    -1,
     102,   103,    15,    -1,    -1,    -1,   108,   109,   110,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,   131,
     132,   133,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    72,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    86,    87,     3,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,   108,   109,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,    -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,     3,    -1,    74,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    -1,    -1,    85,    86,    -1,
      88,    -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,
      -1,    99,   100,   101,    -1,    -1,   104,   105,   106,    -1,
      -1,    -1,    -1,   111,   112,    -1,   114,   115,   116,   117,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    82,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,   117,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,    -1,     3,    74,     5,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
      69,    70,    71,     3,    -1,    74,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    69,
      70,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    99,
     100,   101,    -1,    -1,   104,   105,    -1,    -1,     3,     4,
      -1,   111,   112,     8,   114,   115,   116,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    48,    49,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    89,    -1,    -1,     5,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,     5,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,     5,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,     5,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,     5,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,     5,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    84,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    50,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    80,    82,    83,    -1,    84,    86,    -1,    -1,
      50,    90,    91,    92,    93,    94,    95,    96,    97,    59,
      60,   100,    -1,    -1,    -1,   104,    -1,   106,    68,    69,
      70,    71,    -1,    -1,    -1,   114,    -1,   116,   117,    79,
      -1,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,    50,
      90,    91,    92,    93,    94,    95,    96,    97,    59,    60,
     100,    -1,    -1,    -1,   104,    -1,   106,    68,    69,    70,
      71,    -1,    -1,    -1,   114,    -1,   116,    -1,    79,    -1,
      -1,    82,    83,    -1,    -1,    86,    -1,    -1,    50,    90,
      91,    92,    93,    94,    95,    96,    97,    59,    60,   100,
      -1,    -1,    -1,   104,    -1,   106,    68,    69,    70,    71,
      -1,    -1,    -1,   114,    -1,   116,    -1,    79,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    50,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    59,    60,   100,    -1,
      -1,    -1,   104,    -1,   106,    68,    69,    70,    71,    -1,
      -1,    -1,   114,    -1,   116,    -1,    79,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    59,    60,    68,    69,    70,    71,    79,    82,
      83,    86,    90,    91,    92,    93,    94,    95,    96,    97,
     100,   104,   106,   114,   116,   137,   138,   139,   151,   152,
     153,   155,   156,   157,   158,     3,     3,     3,    83,     3,
      59,    68,    82,   106,   138,    59,    68,    82,   106,   137,
     139,     0,   153,    18,   154,     6,     6,     6,     3,     3,
       3,     3,    59,    68,    82,   106,     3,     3,     3,     3,
      59,    68,    82,   106,     3,     6,     3,   159,     3,     4,
      10,    11,    15,    19,    27,    45,    46,    52,    53,    54,
      55,    57,    58,    61,    62,    65,    66,    72,    73,    74,
      75,    76,    77,    78,    81,    85,    86,    87,    88,    98,
      99,   101,   102,   103,   105,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   129,   130,   131,   132,   133,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   149,
     153,   160,   161,   162,   167,   168,   169,   170,   172,   173,
     175,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   198,
     199,   160,   154,     6,     6,     6,     3,     3,     3,     3,
     154,     6,     6,     6,     3,     3,     3,     3,   160,    22,
       7,    20,    16,    18,    21,     3,    86,   188,   188,   188,
     188,   188,   188,   188,    21,     4,     6,     6,   161,   177,
       4,     4,     4,     3,     4,     3,   140,     3,   149,   188,
       4,     4,     4,    21,     4,     4,     6,     6,     3,    89,
       4,     3,   117,   138,   140,   117,   137,   140,     3,     8,
      89,   171,    16,     7,   161,    67,   174,     8,    10,    11,
      12,    13,    14,    16,    17,    19,    23,    24,    25,    26,
      28,    29,    30,    31,    40,    41,    42,    43,    44,    45,
      46,    51,    80,    84,     4,    22,    32,    33,    34,    35,
      36,    37,    38,    39,    48,    49,     7,     6,   159,   160,
     160,   154,     6,     6,     6,     6,   159,   160,   160,   154,
       6,     6,     6,     7,   149,     3,     3,   194,     5,   194,
     188,   160,   160,   118,   188,   188,   188,   188,     4,     8,
      19,    19,   188,   188,   188,   194,   188,   188,   160,   160,
       4,    10,    11,    12,    13,    14,    16,    17,    23,    24,
      25,    26,    28,    29,    30,    31,    40,    41,    42,    43,
      44,    45,    46,   166,   188,     3,    89,   117,   140,     3,
      89,   171,     3,   117,   140,     3,   171,     4,    22,     9,
     120,   121,   122,   123,   125,   126,   129,   130,   131,   132,
     147,   148,   150,   166,    19,    20,     6,   161,   147,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   139,   188,   196,   197,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   160,     7,     7,
       7,     6,   159,   160,   160,   160,     7,     7,     7,     6,
     159,   160,   160,    22,     5,     7,     7,     4,     5,    19,
       5,     5,     5,   196,   147,     5,     5,     5,     5,     5,
       7,     7,     5,   138,   140,   163,   165,     4,     5,     4,
     166,     3,    89,     3,    89,   171,     4,   166,    19,     4,
       3,    89,     3,    89,   171,    19,     5,   163,   188,     9,
      20,     9,    20,     4,     3,   160,     9,    18,   188,     5,
     197,     7,   160,     7,     7,     7,     7,   160,     7,     7,
       7,   149,   188,     6,   188,   177,     6,   161,     5,     9,
       6,     6,    19,    47,   164,   140,     3,     5,    20,     5,
     163,   177,     5,   163,     4,     4,   166,     4,   166,    19,
       5,   163,     4,     5,   163,     4,   166,     4,   166,    19,
     164,     5,   150,     5,   163,    22,     7,   188,     7,     7,
       5,   160,    19,   160,    56,    63,   176,   160,   188,     3,
     188,   164,   165,   164,     5,   164,     5,     5,   163,     5,
     163,     4,     5,   163,     4,   164,     5,     5,   163,   164,
       5,     5,   163,     4,     5,   163,     4,   164,   164,     5,
     188,    19,     7,   188,     7,   188,    18,     7,    56,    63,
       7,   188,   164,   164,   164,     5,   164,     5,     5,   163,
     164,     5,     5,   163,   164,   164,     5,   164,   164,     5,
       5,   163,   164,     5,     5,   163,   164,     5,    18,   160,
     188,    18,   164,   164,   164,     5,   164,   164,     5,   164,
     164,   164,     5,   164,   164,     5,   177,   160,    54,    18,
     160,   164,   164,   164,   164,    54,    19,   160,    54,    19,
      54,    19,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   136,   137,   137,   137,   137,   137,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   140,   140,
     141,   141,   142,   142,   142,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   146,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   151,   152,   152,   152,   153,   153,   153,   153,
     154,   154,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   158,   158,   158,
     158,   158,   159,   159,   159,   159,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   164,
     164,   164,   165,   165,   165,   165,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   169,   169,   170,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   174,   175,   176,   176,   176,   176,   177,   177,   178,
     179,   180,   181,   182,   182,   183,   183,   184,   185,   186,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   189,   189,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   194,   194,   194,   194,   195,   195,   196,   196,
     196,   197,   197,   198,   199
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     3,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     1,     1,     1,     1,
       2,     0,     7,     7,     8,     8,     6,     6,     6,     7,
       7,     5,     6,     6,     7,     7,     5,     6,     6,     7,
       7,     5,     3,     5,     1,     3,     2,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       6,     5,     6,     6,     7,     6,     7,     6,     7,     7,
       8,     7,     8,     7,     8,     7,     8,     3,     1,     3,
       2,     1,     2,     3,     3,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     6,     7,
       6,     7,     7,     8,     7,     8,     8,     9,     8,     9,
       8,     9,     8,     9,     2,     3,     3,     3,     4,     4,
       5,     5,     3,     5,     1,     3,     1,     2,     7,     5,
       4,     2,     7,     7,     6,     6,     5,     3,     1,     5,
       7,     9,     5,     4,     4,     4,     4,     4,     7,     2,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     1,     3,     3,     4,     0,     2,     1,
       0,     1,     2,     4,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
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
| yyreduce -- do a reduction.  |
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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {

#line 3713 "src/Parser/parser.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 409 "src/Parser/c-sharp.y"


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
