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
    STRING_VAL = 388
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
#define YYLAST   8324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  679

#define YYUNDEFTOK  2
#define YYMAXUTOK   388


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
     125,   126,   127,   128,   129,   130,   131,   132,   133
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    23,    23,    23,    23,    23,    23,    24,    24,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    28,    28,    28,    28,    28,
      29,    29,    30,    30,    30,    31,    31,    31,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    33,    33,    35,
      36,    37,    38,    38,    39,    39,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    45,    48,    48,    48,    49,    49,    49,    49,
      51,    52,    53,    54,    55,    57,    58,    59,    60,    61,
      63,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      75,    76,    77,    78,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   104,   105,   105,   105,   106,
     106,   106,   106,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   136,   136,   136,   140,   141,   143,   144,   145,   146,
     148,   149,   150,   151,   154,   154,   156,   157,   159,   160,
     163,   165,   166,   167,   168,   171,   171,   172,   173,   174,
     175,   179,   180,   183,   184,   187,   189,   192,   193,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   200,   201,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   258,
     262,   263,   264,   265,   266,   267,   271,   272,   272,   275,
     276,   277,   279,   279,   282,   284
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
  "USHORT_VAL", "STRING_VAL", "$accept", "scope", "modifier_list",
  "modifier", "type", "nullable_type", "simple_type", "numeric_type",
  "integer_type", "floating_type", "matrix_type", "dimensions_def",
  "dimensions_undef", "value", "numeric_val", "program", "obj_decl_list",
  "obj_decl", "class_decl", "struct_decl", "interface_decl", "enum_decl",
  "enum_list", "statement_list", "statement", "method_decl_statement",
  "parameter_list", "method_body", "parameter", "operator",
  "operator_overloading", "return_statement", "var_decl_statement",
  "attr_decl_statement", "id_list", "if_else_statement", "if_statement",
  "else_statement", "switch_statement", "cases_list", "loop_body",
  "while_statement", "do_while_statement", "for_statement",
  "foreach_statement", "checked_scope", "unchecked_scope", "unsafe_scope",
  "fixed_scope", "label", "go_to_statement", "expression",
  "obj_instancing", "assignment_expressions", "unary_operations",
  "binary_operations", "ternary_operations", "attr_access",
  "method_invoking", "argument_list", "argument", "matrix_indexing",
  "matrix_instancing", YY_NULLPTR
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
     385,   386,   387,   388
};
# endif

#define YYPACT_NINF (-457)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-302)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    8091,  -457,    17,  -457,    35,  -457,  -457,  -457,  -457,    44,
    -457,  -457,  -457,  -457,  -457,  -457,   -28,  -457,  -457,  -457,
    -457,  -457,    60,  -457,  -457,  8169,  8130,  -457,   103,  8091,
    -457,  -457,  -457,  -457,  -457,    77,   107,   126,  -457,   194,
     217,   250,   262,   269,  8208,   270,   272,   274,   276,    92,
    -457,  -457,  -457,  4372,   283,  4372,  4372,   264,   286,   290,
     295,   302,   304,   305,   307,   311,   315,   318,   319,   324,
     326,   327,   328,   922,   308,   308,   308,   308,  -457,   308,
     308,   308,   159,  -457,  -457,  -457,  -457,    83,  -457,  -457,
     973,  -457,  -457,   218,  -457,   330,   333,   336,   338,  -457,
    -457,   221,  -457,  -457,  5743,  -457,  -457,   339,   340,  -457,
     341,   325,  -457,   343,  -457,  -457,   260,   334,  -457,     6,
     344,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  5828,  8052,  5482,     8,  -457,   335,
    -457,  -457,  -457,  -457,  -457,  -457,  1104,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,   282,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  7783,  -457,  -457,  -457,
    -457,  -457,   421,  -457,  -457,  -457,   337,    59,  1235,  1366,
    4372,   283,  4372,  4372,   346,   349,   350,   351,  4372,   283,
    4372,  4372,   352,   357,   358,   359,  -457,  -457,    16,   595,
     221,  7198,  8053,  8053,  8053,  8053,  8053,  8053,    22,   308,
    4372,  4372,  -457,   232,   308,   308,   308,  -457,   308,   247,
     362,   548,   347,  8053,   308,   308,   308,    40,   308,   308,
    4372,  4372,   363,  5795,   308,   355,     7,  5897,    32,   369,
       3,   104,    48,    41,  5795,   261,  -457,  -457,  -457,  1497,
    -457,   168,   308,   308,   308,   308,   308,   308,   308,  -457,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,  -457,  -457,   308,   308,   308,  4999,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
      82,  -457,   371,  -457,  -457,  1628,    86,  1759,  1890,  4372,
     283,  4372,  4372,  2021,   189,  2152,  2283,  4372,   283,  4372,
    4372,   356,  -457,  -457,   356,  -457,  7243,  2414,  2545,   375,
    7288,  7828,  7333,  7378,  5130,    41,  -457,  -457,  7423,  7468,
    7513,   356,  -457,  7558,  7603,  2676,  2807,   680,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
     378,  7648,   381,  5795,     9,    33,    50,  5795,   265,   382,
      10,    34,   365,   284,  5967,   308,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,    19,   169,  -457,
     384,  -457,   386,  4372,  -457,   177,  8053,  8053,  8053,  8053,
    8053,  7873,  8053,  8053,  8053,  8053,  8053,  8053,  8053,  8053,
    8053,  8053,  8053,  8053,  8053,  8053,  8053,  8053,  8053,  -457,
     308,  8053,  5261,  -457,  8053,  8053,  8053,  8053,  8053,  8053,
    8053,  8053,  8053,  8053,  8053,  -457,   368,  -457,  -457,  -457,
    -457,  2938,   219,  3069,  3200,  -457,  -457,  -457,  -457,  3331,
     238,  3462,  3593,  -457,  -457,  -457,   308,   387,   308,   973,
    3724,  -457,  5392,   239,  -457,  -457,   390,  -457,  -457,  -457,
    -457,    26,  7086,   149,    39,  -457,  6037,   973,  6107,   393,
     395,  5795,    72,  5795,   294,  6177,   396,  -457,  6247,   398,
    5795,    78,  5795,   296,  -457,    26,    81,  8053,  -457,   168,
    -457,  -457,  6317,   383,  3855,  -457,   308,  8053,  -457,  -457,
      82,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  7693,
    4372,  7918,  -457,  4372,  -457,  -457,   399,   160,  4372,  -457,
     308,  -457,   253,  5523,    26,  7086,    26,    85,  -457,    26,
     111,  6387,  6457,   400,  6527,   402,  -457,    26,   129,  6597,
      26,   139,  6667,   408,  6737,   409,  -457,  -457,    26,  -457,
      26,   145,   308,  -457,  8053,  -457,   401,  3986,   308,  4117,
     308,   397,     1,  4248,  8053,  5654,  8053,  -457,  -457,  -457,
      26,  -457,    26,    26,   148,    26,   172,  6807,    26,   174,
    6877,  -457,    26,    26,   179,  -457,    26,    26,   205,  6947,
      26,   212,  7017,  -457,  -457,    26,  8053,  -457,  -457,  7738,
    -457,  7963,  4372,  -457,   308,   403,  -457,  8053,  -457,  -457,
    -457,    26,  -457,    26,    26,   213,  -457,    26,    26,   214,
    -457,  -457,    26,  -457,  -457,    26,    26,   216,  -457,    26,
      26,   237,  -457,   973,  4372,  4496,  8008,  4372,  -457,  -457,
    -457,    26,  -457,  -457,    26,  -457,  -457,  -457,    26,  -457,
    -457,    26,  -457,  4620,   404,  4372,  4744,  -457,  -457,  -457,
    -457,   405,  -457,  4868,   416,  -457,   423,  -457,  -457
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      85,    17,     0,    10,     0,    21,    23,    18,    22,     0,
       5,    16,    15,    11,    20,     2,     4,     3,    13,    14,
      24,     9,     0,    19,    12,     0,     0,     8,     0,    82,
      84,    86,    87,    88,    89,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     1,    83,   308,     0,   308,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,   308,   308,   308,   308,   135,   308,
     308,   308,     0,    32,   252,    39,    46,     0,   251,    37,
     308,    48,    58,     0,    47,     0,     0,     0,     0,    42,
      44,    16,    71,    29,   308,    38,    40,     0,     0,    34,
       0,     0,    57,     0,    43,    45,     0,    19,    41,     0,
       0,    56,    62,    61,    66,    63,    70,    69,    60,    59,
      64,    65,    68,    67,     0,     0,     8,     0,    26,    25,
      33,    35,    36,    27,   239,   116,   308,   115,   117,   118,
     127,   120,   119,   121,   214,   122,   123,   124,   125,   126,
     128,   129,   130,   131,   132,   133,     0,   248,   242,   243,
     244,   245,   247,   246,   249,   250,   112,     0,   308,   308,
     308,     0,   308,   308,     0,     0,     0,     0,   308,     0,
     308,   308,     0,     0,     0,     0,    31,   237,     0,   240,
       0,     0,   270,   271,   273,   272,   268,   269,     0,   308,
     308,   308,   226,     0,   308,   308,   308,   238,   308,    28,
       0,   240,   239,   201,   308,   308,   308,     0,   308,   308,
     308,   308,     0,     0,   308,    28,     0,     0,     0,     0,
       0,     0,   212,    55,     0,     0,    30,    94,   114,   308,
     215,     0,   308,   308,   308,   308,   308,   308,   308,   134,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   266,   267,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
       0,   109,     0,   104,    99,   308,     0,   308,   308,   308,
       0,   308,   308,   308,     0,   308,   308,   308,     0,   308,
     308,   301,   300,   241,   301,   304,     0,   308,   308,     0,
       0,     0,     0,     0,   308,    55,   203,   202,     0,     0,
       0,   301,   302,     0,     0,   308,   308,     0,   165,   166,
     168,   167,   169,   184,   183,   174,   175,   180,   181,   178,
     177,   176,   179,   171,   170,   172,   173,   182,   163,   164,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,   212,     0,     0,   308,    49,    75,    74,    79,
      76,    81,    73,    72,    77,    78,    80,     0,     0,    53,
       0,   204,     0,   308,   219,     0,   277,   278,   280,   279,
     281,     0,   295,   286,   287,   292,   293,   290,   289,   288,
     291,   283,   282,   284,   285,   294,   297,   298,   296,   307,
     308,   312,   308,   310,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   265,   264,   113,   110,    90,   105,   100,
      95,   308,     0,   308,   308,    91,   106,   101,    96,   308,
       0,   308,   308,   231,   232,   225,   308,     0,   308,   308,
     308,   253,   308,     0,   275,   276,     0,   274,   233,   234,
     235,     0,     0,     0,     0,   155,     0,   308,     0,     0,
       0,     0,   212,     0,     0,     0,     0,   207,     0,     0,
       0,   212,     0,     0,   205,     0,     0,   213,    50,     0,
      51,    54,     0,   210,   308,   314,   308,   313,   306,   309,
       0,    92,   107,   102,    97,    93,   108,   103,    98,     0,
     308,     0,   230,   308,   217,   254,   315,     0,   308,   158,
     308,   136,     0,   308,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   208,   138,     0,    52,
       0,     0,   308,   218,   299,   111,     0,   308,   308,   308,
     308,     0,     0,   308,   157,   308,   160,   137,   154,   185,
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,     0,     0,     0,   144,     0,     0,     0,     0,
       0,     0,     0,   139,   187,     0,   211,   228,   236,     0,
     216,     0,   308,   220,   308,     0,   156,   162,   186,   141,
     189,     0,   146,     0,     0,     0,   148,     0,     0,     0,
     143,   191,     0,   145,   150,     0,     0,     0,   152,     0,
       0,     0,   188,   308,   308,   308,     0,   308,   190,   147,
     193,     0,   149,   195,     0,   192,   151,   197,     0,   153,
     199,     0,   229,   308,   252,   308,   308,   194,   196,   198,
     200,   252,   224,   308,   252,   223,   252,   222,   221
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -457,     5,    24,     4,   267,  -457,  -457,  -457,  -457,  -457,
    -457,  -244,  -457,  -102,   -85,  -457,  -457,    46,  -457,  -457,
    -457,  -457,  -163,   -55,   -68,  -457,  -359,   288,  -116,  -221,
    -457,  -457,  -457,  -457,  -224,  -457,  -457,  -457,  -457,  -457,
    -456,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,   439,  -457,  -457,  -457,  -457,  -457,  -147,  -457,    98,
    -395,  -457,  -457
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   387,   388,   144,   389,    28,    29,   145,    31,    32,
      33,    34,   177,   146,   147,   148,   474,   531,   475,   360,
     149,   150,   151,   152,   245,   153,   154,   250,   155,   572,
     213,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   422,
     423,   174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     178,   179,   222,   522,    27,    25,   235,   395,   613,   232,
     362,   242,   480,   489,   368,   496,   243,   373,   296,   311,
      35,   538,   212,   390,    26,   314,   304,   509,   498,    27,
      50,    49,   528,    27,    25,   366,   482,   491,    36,   499,
     243,   243,   243,   331,   534,   529,    30,    37,    50,    44,
     376,   312,   374,    26,   485,    38,    83,   614,    85,   535,
      86,   315,    69,    39,   615,    89,   291,   509,    82,    91,
     375,    70,   375,   530,    82,    52,   544,    94,   248,   292,
     332,   463,   554,    53,    99,    71,   558,   209,   100,   210,
     580,   103,    82,   438,   375,   233,   363,   244,   481,   490,
     375,   535,   105,    51,   106,   535,   292,   372,   109,    72,
     248,   248,   243,    54,   114,   115,   582,   537,   118,   540,
     370,   367,   483,   492,   111,   295,   548,   297,   298,   551,
     111,   535,    55,   303,   592,   305,   306,   442,    27,    50,
     240,   484,   479,   561,   596,   450,   486,   493,   111,   535,
     605,    69,   533,   621,    92,   317,   318,   243,   237,   535,
      70,   377,   378,   379,   380,   535,   381,   382,   535,   102,
     383,   384,   385,   386,    71,   335,   336,   623,   500,   627,
     208,   394,   584,   586,   632,   589,   505,   662,   435,   501,
     594,   112,   535,   598,   535,   601,   446,   499,    72,   535,
      56,   121,   122,   123,   124,   125,   126,   127,   128,   292,
     635,   129,   130,   131,   132,   133,   570,   639,   651,   654,
      57,   658,   214,   571,   219,   535,   512,   248,   625,   248,
     248,   629,   535,   535,   535,   248,   535,   248,   248,   292,
     637,    50,   661,   641,   441,   516,   443,   444,   526,   248,
     248,   324,   449,    58,   451,   452,   575,   535,   292,   499,
     543,   243,   545,   196,   229,    59,   230,   248,   248,   553,
     180,   555,    60,    65,    83,    66,    85,    67,    86,    68,
     391,   392,   420,    89,   487,   392,   176,    91,   377,   378,
     379,   380,   181,   381,   382,    94,   182,   383,   384,   385,
     386,   183,    99,   494,   392,   184,   100,   185,   186,   103,
     187,   199,    74,   546,   392,   556,   392,   188,    75,    76,
     105,   189,   106,    77,   190,   191,   109,   192,   420,   193,
     194,   195,   114,   115,   215,    79,   118,   216,   504,   217,
     231,    27,   218,   224,   225,   226,   227,   228,   234,   249,
     319,   246,   299,    80,    81,   300,   301,   302,   307,   290,
      82,   472,    84,   308,   309,   310,   327,   337,   220,    88,
     325,   196,   369,   248,   436,   248,   248,   198,    27,   456,
      92,   248,   476,   248,   248,   478,   488,   375,   502,   503,
     510,   212,   524,   520,   200,   102,   527,   541,   472,   542,
     549,   238,   552,   241,   587,   562,   590,   -50,   565,   212,
     107,   108,   599,   602,   559,   612,   111,   112,   113,   578,
     607,   647,   462,   672,   675,   278,   420,   121,   122,   123,
     124,   125,   126,   127,   128,   677,   248,   129,   130,   131,
     132,   133,   678,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,     0,   567,   420,   220,   569,   288,
     289,     0,     0,   573,     0,     0,    50,     0,     0,     0,
      27,     0,    27,     0,     0,     0,     0,     0,     0,    27,
       0,     0,    27,     0,     0,     0,     0,     0,     0,   248,
     472,   248,   472,     0,   365,   248,    27,   371,     0,   472,
       0,     0,   472,   201,   202,   203,   204,     0,   205,   206,
     207,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,   223,     0,    27,    27,     0,    27,     0,
       0,     0,     0,    27,     0,     0,    27,   645,    27,   472,
       0,     0,     0,     0,     0,   472,   472,   326,   472,   198,
    -301,     0,     0,   472,     0,   212,   472,   248,   472,     0,
    -301,  -301,  -301,  -301,  -301,  -301,  -301,  -301,     0,   663,
       0,    27,   666,     0,    27,   248,  -301,  -301,   248,     0,
       0,     0,     0,    27,   473,   248,    27,     0,     0,     0,
     673,   472,     0,     0,   472,     0,   198,  -301,     0,     0,
       0,     0,     0,   472,     0,     0,   472,  -301,  -301,  -301,
    -301,  -301,  -301,  -301,  -301,     0,     0,     0,     0,     0,
       0,   473,     0,  -301,  -301,     0,     0,     0,   316,     0,
       0,     0,     0,   320,   321,   322,     0,   323,     0,     0,
       0,     0,     0,   328,   329,   330,     0,   333,   334,     0,
       0,     0,     0,   361,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,   471,     0,     0,     0,     0,
       0,   396,   397,   398,   399,   400,   401,   402,     0,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,     0,     0,   416,   417,   418,   421,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,     0,
       1,     0,     0,    83,     0,    85,     0,    86,     0,   532,
       3,     0,    89,   473,     0,   473,    91,     0,     0,     5,
       6,     7,   473,     0,    94,   473,     0,     0,     0,     8,
       0,    99,     0,   421,     0,   100,    11,     0,   103,   473,
      12,    13,    14,     0,     0,     0,    18,    19,     0,   105,
      20,   106,     0,   557,    21,   109,     0,     0,     0,     0,
       0,   114,   115,     0,    23,   118,    24,     0,     0,     0,
       0,     0,   473,     0,     0,     0,     0,     0,   473,   473,
       0,   473,     0,     0,   497,     0,   473,     0,     0,   473,
       0,   473,   577,     0,   579,     0,     0,   581,     0,     0,
       0,     0,     0,     0,     0,   591,     0,     0,   595,     0,
       0,     0,     0,     0,     0,     0,   603,     0,   604,     0,
       0,     0,     0,     0,   473,     0,     0,   473,     0,   507,
       0,   421,     0,     0,     0,     0,   473,     0,   618,   473,
     619,   620,     0,   622,     0,     0,   626,     0,     0,     0,
     630,   631,     0,     0,   633,   634,     0,     0,   638,     0,
       0,     0,     0,   642,     0,   519,     0,   521,     0,     0,
       0,   421,     0,     0,     0,     0,     0,     0,     0,   648,
       0,   649,   650,     0,     0,   652,   653,     0,     0,     0,
     655,     0,     0,   656,   657,   -28,  -301,   659,   660,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,   196,   667,
     197,     0,   668,   198,  -301,   564,   669,     0,     0,   670,
       0,     0,     0,     0,  -301,  -301,  -301,  -301,  -301,  -301,
    -301,  -301,     0,     0,     0,     0,     0,     0,     0,   574,
    -301,  -301,   576,     0,     0,     0,    73,    74,     0,   211,
       0,     0,     0,    75,    76,     0,     0,     0,    77,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
      79,   606,     0,     0,     0,     0,     0,   609,     0,   611,
       0,   -28,     0,     0,   617,     0,     0,     0,    80,    81,
       0,     0,     0,     1,     0,    82,    83,    84,    85,     0,
      86,    87,     2,     3,    88,    89,     0,     0,    90,    91,
       0,     4,     5,     6,     7,    92,    93,    94,    95,    96,
      97,    98,     8,   646,    99,     9,    10,     0,   100,   101,
     102,   103,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   104,   105,    20,   106,   107,   108,    21,   109,    22,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    24,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,   129,   130,   131,   132,   133,    73,    74,     0,
       0,   247,     0,     0,    75,    76,     0,     0,     0,    77,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     1,     0,    82,    83,    84,    85,
       0,    86,    87,     2,     3,    88,    89,     0,     0,    90,
      91,     0,     4,     5,     6,     7,    92,    93,    94,    95,
      96,    97,    98,     8,     0,    99,     9,    10,     0,   100,
     101,   102,   103,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   104,   105,    20,   106,   107,   108,    21,   109,
      22,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      24,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,   129,   130,   131,   132,   133,    73,    74,
       0,     0,   293,     0,     0,    75,    76,     0,     0,     0,
      77,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,     1,     0,    82,    83,    84,
      85,     0,    86,    87,     2,     3,    88,    89,     0,     0,
      90,    91,     0,     4,     5,     6,     7,    92,    93,    94,
      95,    96,    97,    98,     8,     0,    99,     9,    10,     0,
     100,   101,   102,   103,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   104,   105,    20,   106,   107,   108,    21,
     109,    22,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    24,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,   129,   130,   131,   132,   133,    73,
      74,     0,     0,   294,     0,     0,    75,    76,     0,     0,
       0,    77,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,     1,     0,    82,    83,
      84,    85,     0,    86,    87,     2,     3,    88,    89,     0,
       0,    90,    91,     0,     4,     5,     6,     7,    92,    93,
      94,    95,    96,    97,    98,     8,     0,    99,     9,    10,
       0,   100,   101,   102,   103,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   104,   105,    20,   106,   107,   108,
      21,   109,    22,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    24,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,   129,   130,   131,   132,   133,
      73,    74,     0,   393,     0,     0,     0,    75,    76,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,     0,     0,     0,     1,     0,    82,
      83,    84,    85,     0,    86,    87,     2,     3,    88,    89,
       0,     0,    90,    91,     0,     4,     5,     6,     7,    92,
      93,    94,    95,    96,    97,    98,     8,     0,    99,     9,
      10,     0,   100,   101,   102,   103,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   104,   105,    20,   106,   107,
     108,    21,   109,    22,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    24,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,   129,   130,   131,   132,
     133,    73,    74,     0,     0,   437,     0,     0,    75,    76,
       0,     0,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,     1,     0,
      82,    83,    84,    85,     0,    86,    87,     2,     3,    88,
      89,     0,     0,    90,    91,     0,     4,     5,     6,     7,
      92,    93,    94,    95,    96,    97,    98,     8,     0,    99,
       9,    10,     0,   100,   101,   102,   103,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   104,   105,    20,   106,
     107,   108,    21,   109,    22,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    24,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,   129,   130,   131,
     132,   133,    73,    74,     0,     0,   439,     0,     0,    75,
      76,     0,     0,     0,    77,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,     0,     0,     0,     1,
       0,    82,    83,    84,    85,     0,    86,    87,     2,     3,
      88,    89,     0,     0,    90,    91,     0,     4,     5,     6,
       7,    92,    93,    94,    95,    96,    97,    98,     8,     0,
      99,     9,    10,     0,   100,   101,   102,   103,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   104,   105,    20,
     106,   107,   108,    21,   109,    22,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    24,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,   129,   130,
     131,   132,   133,    73,    74,     0,     0,   440,     0,     0,
      75,    76,     0,     0,     0,    77,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       1,     0,    82,    83,    84,    85,     0,    86,    87,     2,
       3,    88,    89,     0,     0,    90,    91,     0,     4,     5,
       6,     7,    92,    93,    94,    95,    96,    97,    98,     8,
       0,    99,     9,    10,     0,   100,   101,   102,   103,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   104,   105,
      20,   106,   107,   108,    21,   109,    22,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    24,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,   129,
     130,   131,   132,   133,    73,    74,     0,     0,   445,     0,
       0,    75,    76,     0,     0,     0,    77,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    81,     0,     0,
       0,     1,     0,    82,    83,    84,    85,     0,    86,    87,
       2,     3,    88,    89,     0,     0,    90,    91,     0,     4,
       5,     6,     7,    92,    93,    94,    95,    96,    97,    98,
       8,     0,    99,     9,    10,     0,   100,   101,   102,   103,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   104,
     105,    20,   106,   107,   108,    21,   109,    22,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    24,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
     129,   130,   131,   132,   133,    73,    74,     0,     0,   447,
       0,     0,    75,    76,     0,     0,     0,    77,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     1,     0,    82,    83,    84,    85,     0,    86,
      87,     2,     3,    88,    89,     0,     0,    90,    91,     0,
       4,     5,     6,     7,    92,    93,    94,    95,    96,    97,
      98,     8,     0,    99,     9,    10,     0,   100,   101,   102,
     103,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     104,   105,    20,   106,   107,   108,    21,   109,    22,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    24,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,   129,   130,   131,   132,   133,    73,    74,     0,     0,
     448,     0,     0,    75,    76,     0,     0,     0,    77,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    81,
       0,     0,     0,     1,     0,    82,    83,    84,    85,     0,
      86,    87,     2,     3,    88,    89,     0,     0,    90,    91,
       0,     4,     5,     6,     7,    92,    93,    94,    95,    96,
      97,    98,     8,     0,    99,     9,    10,     0,   100,   101,
     102,   103,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   104,   105,    20,   106,   107,   108,    21,   109,    22,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    24,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,   129,   130,   131,   132,   133,    73,    74,     0,
       0,   454,     0,     0,    75,    76,     0,     0,     0,    77,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     1,     0,    82,    83,    84,    85,
       0,    86,    87,     2,     3,    88,    89,     0,     0,    90,
      91,     0,     4,     5,     6,     7,    92,    93,    94,    95,
      96,    97,    98,     8,     0,    99,     9,    10,     0,   100,
     101,   102,   103,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   104,   105,    20,   106,   107,   108,    21,   109,
      22,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      24,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,   129,   130,   131,   132,   133,    73,    74,
       0,     0,   455,     0,     0,    75,    76,     0,     0,     0,
      77,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,     1,     0,    82,    83,    84,
      85,     0,    86,    87,     2,     3,    88,    89,     0,     0,
      90,    91,     0,     4,     5,     6,     7,    92,    93,    94,
      95,    96,    97,    98,     8,     0,    99,     9,    10,     0,
     100,   101,   102,   103,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   104,   105,    20,   106,   107,   108,    21,
     109,    22,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    24,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,   129,   130,   131,   132,   133,    73,
      74,     0,     0,   469,     0,     0,    75,    76,     0,     0,
       0,    77,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,     1,     0,    82,    83,
      84,    85,     0,    86,    87,     2,     3,    88,    89,     0,
       0,    90,    91,     0,     4,     5,     6,     7,    92,    93,
      94,    95,    96,    97,    98,     8,     0,    99,     9,    10,
       0,   100,   101,   102,   103,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   104,   105,    20,   106,   107,   108,
      21,   109,    22,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    24,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,   129,   130,   131,   132,   133,
      73,    74,     0,     0,   470,     0,     0,    75,    76,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,     0,     0,     0,     1,     0,    82,
      83,    84,    85,     0,    86,    87,     2,     3,    88,    89,
       0,     0,    90,    91,     0,     4,     5,     6,     7,    92,
      93,    94,    95,    96,    97,    98,     8,     0,    99,     9,
      10,     0,   100,   101,   102,   103,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   104,   105,    20,   106,   107,
     108,    21,   109,    22,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    24,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,   129,   130,   131,   132,
     133,    73,    74,     0,     0,   511,     0,     0,    75,    76,
       0,     0,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,     1,     0,
      82,    83,    84,    85,     0,    86,    87,     2,     3,    88,
      89,     0,     0,    90,    91,     0,     4,     5,     6,     7,
      92,    93,    94,    95,    96,    97,    98,     8,     0,    99,
       9,    10,     0,   100,   101,   102,   103,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   104,   105,    20,   106,
     107,   108,    21,   109,    22,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    24,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,   129,   130,   131,
     132,   133,    73,    74,     0,     0,   513,     0,     0,    75,
      76,     0,     0,     0,    77,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,     0,     0,     0,     1,
       0,    82,    83,    84,    85,     0,    86,    87,     2,     3,
      88,    89,     0,     0,    90,    91,     0,     4,     5,     6,
       7,    92,    93,    94,    95,    96,    97,    98,     8,     0,
      99,     9,    10,     0,   100,   101,   102,   103,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   104,   105,    20,
     106,   107,   108,    21,   109,    22,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    24,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,   129,   130,
     131,   132,   133,    73,    74,     0,     0,   514,     0,     0,
      75,    76,     0,     0,     0,    77,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       1,     0,    82,    83,    84,    85,     0,    86,    87,     2,
       3,    88,    89,     0,     0,    90,    91,     0,     4,     5,
       6,     7,    92,    93,    94,    95,    96,    97,    98,     8,
       0,    99,     9,    10,     0,   100,   101,   102,   103,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   104,   105,
      20,   106,   107,   108,    21,   109,    22,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    24,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,   129,
     130,   131,   132,   133,    73,    74,     0,     0,   515,     0,
       0,    75,    76,     0,     0,     0,    77,     0,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    81,     0,     0,
       0,     1,     0,    82,    83,    84,    85,     0,    86,    87,
       2,     3,    88,    89,     0,     0,    90,    91,     0,     4,
       5,     6,     7,    92,    93,    94,    95,    96,    97,    98,
       8,     0,    99,     9,    10,     0,   100,   101,   102,   103,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   104,
     105,    20,   106,   107,   108,    21,   109,    22,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    24,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
     129,   130,   131,   132,   133,    73,    74,     0,     0,   517,
       0,     0,    75,    76,     0,     0,     0,    77,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     1,     0,    82,    83,    84,    85,     0,    86,
      87,     2,     3,    88,    89,     0,     0,    90,    91,     0,
       4,     5,     6,     7,    92,    93,    94,    95,    96,    97,
      98,     8,     0,    99,     9,    10,     0,   100,   101,   102,
     103,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     104,   105,    20,   106,   107,   108,    21,   109,    22,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    24,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,   129,   130,   131,   132,   133,    73,    74,     0,     0,
     518,     0,     0,    75,    76,     0,     0,     0,    77,     0,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    81,
       0,     0,     0,     1,     0,    82,    83,    84,    85,     0,
      86,    87,     2,     3,    88,    89,     0,     0,    90,    91,
       0,     4,     5,     6,     7,    92,    93,    94,    95,    96,
      97,    98,     8,     0,    99,     9,    10,     0,   100,   101,
     102,   103,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   104,   105,    20,   106,   107,   108,    21,   109,    22,
     110,   111,   112,   113,   114,   115,   116,   117,   118,    24,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,   129,   130,   131,   132,   133,    73,    74,     0,
     523,     0,     0,     0,    75,    76,     0,     0,     0,    77,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     1,     0,    82,    83,    84,    85,
       0,    86,    87,     2,     3,    88,    89,     0,     0,    90,
      91,     0,     4,     5,     6,     7,    92,    93,    94,    95,
      96,    97,    98,     8,     0,    99,     9,    10,     0,   100,
     101,   102,   103,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   104,   105,    20,   106,   107,   108,    21,   109,
      22,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      24,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,   129,   130,   131,   132,   133,    73,    74,
       0,     0,   563,     0,     0,    75,    76,     0,     0,     0,
      77,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    81,     0,     0,     0,     1,     0,    82,    83,    84,
      85,     0,    86,    87,     2,     3,    88,    89,     0,     0,
      90,    91,     0,     4,     5,     6,     7,    92,    93,    94,
      95,    96,    97,    98,     8,     0,    99,     9,    10,     0,
     100,   101,   102,   103,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   104,   105,    20,   106,   107,   108,    21,
     109,    22,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    24,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,     0,     0,   129,   130,   131,   132,   133,    73,
      74,     0,     0,   608,     0,     0,    75,    76,     0,     0,
       0,    77,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,     1,     0,    82,    83,
      84,    85,     0,    86,    87,     2,     3,    88,    89,     0,
       0,    90,    91,     0,     4,     5,     6,     7,    92,    93,
      94,    95,    96,    97,    98,     8,     0,    99,     9,    10,
       0,   100,   101,   102,   103,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   104,   105,    20,   106,   107,   108,
      21,   109,    22,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    24,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     0,     0,   129,   130,   131,   132,   133,
      73,    74,     0,     0,   610,     0,     0,    75,    76,     0,
       0,     0,    77,     0,     0,     0,    78,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,     0,     0,     0,     1,     0,    82,
      83,    84,    85,     0,    86,    87,     2,     3,    88,    89,
       0,     0,    90,    91,     0,     4,     5,     6,     7,    92,
      93,    94,    95,    96,    97,    98,     8,     0,    99,     9,
      10,     0,   100,   101,   102,   103,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   104,   105,    20,   106,   107,
     108,    21,   109,    22,   110,   111,   112,   113,   114,   115,
     116,   117,   118,    24,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,     0,     0,   129,   130,   131,   132,
     133,    73,    74,     0,     0,   616,     0,     0,    75,    76,
       0,     0,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,     1,     0,
      82,    83,    84,    85,     0,    86,    87,     2,     3,    88,
      89,     0,     0,    90,    91,     0,     4,     5,     6,     7,
      92,    93,    94,    95,    96,    97,    98,     8,     0,    99,
       9,    10,     0,   100,   101,   102,   103,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   104,   105,    20,   106,
     107,   108,    21,   109,    22,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    24,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,    73,    74,   129,   130,   131,
     132,   133,    75,    76,     0,     0,     0,    77,     0,     0,
       0,    78,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     1,     0,    82,    83,    84,    85,     0,    86,
      87,     2,     3,    88,    89,     0,     0,    90,    91,     0,
       4,     5,     6,     7,    92,    93,    94,    95,    96,    97,
      98,     8,     0,    99,     9,    10,     0,   100,   101,   102,
     103,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     104,   105,    20,   106,   107,   108,    21,   109,    22,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    24,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    73,
      74,   129,   130,   131,   132,   133,    75,    76,     0,     0,
       0,    77,     0,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,     0,     0,     0,     1,     0,    82,    83,
     664,    85,     0,    86,    87,     2,     3,    88,    89,     0,
       0,    90,    91,     0,     4,     5,     6,     7,    92,    93,
      94,    95,    96,    97,    98,     8,     0,    99,     9,    10,
       0,   100,   101,   102,   103,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   104,   105,    20,   106,   107,   108,
      21,   109,    22,   110,   111,   112,   113,   114,   115,   116,
     117,   118,    24,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    73,    74,   129,   130,   131,   132,   133,
      75,    76,     0,     0,     0,    77,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       1,     0,    82,    83,   671,    85,     0,    86,    87,     2,
       3,    88,    89,     0,     0,    90,    91,     0,     4,     5,
       6,     7,    92,    93,    94,    95,    96,    97,    98,     8,
       0,    99,     9,    10,     0,   100,   101,   102,   103,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   104,   105,
      20,   106,   107,   108,    21,   109,    22,   110,   111,   112,
     113,   114,   115,   116,   117,   118,    24,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    73,    74,   129,
     130,   131,   132,   133,    75,    76,     0,     0,     0,    77,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     1,     0,    82,    83,   674,    85,
       0,    86,    87,     2,     3,    88,    89,     0,     0,    90,
      91,     0,     4,     5,     6,     7,    92,    93,    94,    95,
      96,    97,    98,     8,     0,    99,     9,    10,     0,   100,
     101,   102,   103,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   104,   105,    20,   106,   107,   108,    21,   109,
      22,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      24,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    73,    74,   129,   130,   131,   132,   133,    75,    76,
       0,     0,     0,    77,     0,     0,     0,    78,     0,     0,
       0,     0,     0,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,     0,     0,     0,     1,     0,
      82,    83,   676,    85,     0,    86,    87,     2,     3,    88,
      89,     0,     0,    90,    91,     0,     4,     5,     6,     7,
      92,    93,    94,    95,    96,    97,    98,     8,     0,    99,
       9,    10,     0,   100,   101,   102,   103,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   104,   105,    20,   106,
     107,   108,    21,   109,    22,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    24,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,     0,     0,   129,   130,   131,
     132,   133,   199,    74,   419,     0,     0,     0,     0,    75,
      76,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,     0,     0,     0,     1,
       0,    82,     0,    84,     0,     0,     0,     0,     0,     3,
      88,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,    92,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,   101,   102,     0,     0,    12,
      13,    14,     0,     0,     0,    18,    19,     0,     0,    20,
       0,   107,   108,    21,     0,     0,     0,   111,   112,   113,
       0,     0,     0,    23,     0,    24,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,     0,     0,   129,   130,
     131,   132,   133,   199,    74,   461,     0,     0,     0,     0,
      75,    76,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,     0,     0,     0,
       1,     0,    82,     0,    84,     0,     0,     0,     0,     0,
       3,    88,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,    92,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,     0,
      20,     0,   107,   108,    21,     0,     0,     0,   111,   112,
     113,     0,     0,     0,    23,     0,    24,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,   129,
     130,   131,   132,   133,   199,    74,   508,     0,     0,     0,
       0,    75,    76,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    81,     0,     0,
       0,     1,     0,    82,     0,    84,     0,     0,     0,     0,
       0,     3,    88,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,    92,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,   101,   102,     0,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
       0,    20,     0,   107,   108,    21,     0,     0,     0,   111,
     112,   113,     0,     0,     0,    23,     0,    24,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,     0,     0,
     129,   130,   131,   132,   133,   199,    74,   525,     0,     0,
       0,     0,    75,    76,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,     0,
       0,     0,     1,     0,    82,     0,    84,     0,     0,     0,
       0,     0,     3,    88,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,    92,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,   101,   102,
       0,     0,    12,    13,    14,   235,     0,     0,    18,    19,
       0,     0,    20,     0,   107,   108,    21,     0,     0,     0,
     111,   112,   113,     0,     0,     0,    23,     0,    24,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,     0,
       0,   129,   130,   131,   132,   133,   199,    74,  -159,     0,
       0,     0,     0,    75,    76,    83,     0,    85,    77,    86,
       0,     0,     0,  -159,    89,     0,     0,     0,    91,     0,
      79,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,   100,    80,    81,
     103,     0,     0,     0,     0,    82,     0,    84,     0,     0,
       0,   105,     0,   106,    88,     0,     0,   109,     0,     0,
       0,     0,     0,   114,   115,    92,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,     0,     0,     0,
       0,   111,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,   129,   130,   131,   132,   133,   199,    74,  -161,
       0,     0,     0,     0,    75,    76,     0,     0,     0,    77,
       0,     0,     0,     0,  -161,     0,     0,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
      81,     0,     0,     0,     0,     0,    82,     0,    84,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,   102,     0,     0,     0,     0,   221,    74,     0,     0,
       0,     0,     0,    75,    76,     0,   107,   108,    77,     0,
       0,     0,   111,   112,   113,     0,     0,     0,     0,     0,
      79,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,     0,     0,   129,   130,   131,   132,   133,    80,    81,
       0,     0,     0,     0,     0,    82,     0,    84,     0,     0,
       0,     0,     0,     0,    88,   338,   339,   340,   341,   342,
       0,   343,   344,     0,     0,    92,     0,     0,   345,   346,
     347,   348,     0,   349,   350,   351,   352,     0,     0,   200,
     102,   235,     0,     0,     0,   353,   354,   355,   356,   357,
     358,   359,     0,     0,     0,   107,   108,     0,     0,     0,
       0,   111,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
       0,     0,   129,   130,   131,   132,   133,     0,     1,     0,
       0,    83,     0,    85,     0,    86,     0,    40,     3,     0,
      89,     0,     0,     0,    91,     0,    41,     5,     6,     7,
     235,     0,    94,     0,     0,     0,     0,     8,     0,    99,
      42,     0,     0,   100,    11,     0,   103,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   105,    20,   106,
       0,     0,    21,   109,    43,     0,     0,     0,     0,   114,
     115,     0,    23,   118,    24,   236,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,    61,     3,     0,    89,
       0,     0,     0,    91,     0,    62,     5,     6,     7,     0,
     235,    94,   495,     0,     0,     0,     8,     0,    99,    63,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,    64,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,   364,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   536,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   539,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   547,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   550,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   560,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   583,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   585,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   588,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   593,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   597,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   600,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   624,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   628,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   636,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,     0,
     235,    94,   640,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     0,     1,     0,     0,
      83,     0,    85,     0,    86,     0,     0,     3,     0,    89,
       0,     0,     0,    91,     0,     0,     5,     6,     7,   235,
       0,    94,     0,     0,     0,     0,     8,     0,    99,     0,
       0,     0,   100,    11,     0,   103,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   105,    20,   106,     0,
       0,    21,   109,     0,     0,     0,     0,     0,   114,   115,
       0,    23,   118,    24,     0,     0,     1,     0,     0,    83,
       0,    85,     0,    86,     0,     0,     3,     0,    89,     0,
       0,     0,    91,     0,     0,     5,     6,     7,     0,     0,
      94,     0,     0,     0,     0,     8,     0,    99,     0,     0,
       0,   100,    11,     0,   103,     0,    12,    13,    14,     0,
       0,     0,    18,    19,     0,   105,    20,   106,     0,     0,
      21,   109,     0,     0,     0,     0,     0,   114,   115,     0,
      23,   118,    24,   313,     0,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,     0,     0,     0,     0,     0,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,   453,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,   457,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,   459,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,   460,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,   464,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,   465,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,   466,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,   467,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,   468,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,   477,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,   566,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,   643,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,     0,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,   259,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,     0,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,   458,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,     0,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,   506,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,     0,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,     0,   568,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,     0,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,   644,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,     0,   275,     0,   251,     0,   252,   253,
     254,   255,   256,     0,   257,   258,   665,     0,     0,     0,
       0,   260,   261,   262,   263,     0,   264,   265,   266,   267,
       0,     0,     0,   276,     0,     0,     0,   277,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,     0,   275,
       0,   251,     0,   252,   253,   254,   255,   256,     0,   257,
     258,     0,     0,     0,     0,     0,   260,   261,   262,   263,
       0,   264,   265,   266,   267,     0,     0,     0,   276,     0,
       0,     0,   277,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     1,     0,   275,     0,     0,     0,     0,     0,
       0,    45,     3,     0,     0,     0,     0,     0,     0,     0,
      46,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       0,     8,     0,   276,    47,    10,     0,   277,    11,     0,
       0,     1,    12,    13,    14,    15,    16,    17,    18,    19,
       2,     3,    20,     0,     0,     0,    21,     0,    48,     4,
       5,     6,     7,     0,     0,     0,    23,     0,    24,   239,
       8,     0,     0,     9,    10,     0,     0,    11,     0,     0,
       1,    12,    13,    14,    15,    16,    17,    18,    19,    45,
       3,    20,     0,     0,     0,    21,     0,    22,    46,     5,
       6,     7,     0,     0,     0,    23,     0,    24,     0,     8,
       0,     0,    47,    10,     0,     0,    11,     0,     0,     1,
      12,    13,    14,    15,    16,    17,    18,    19,    40,     3,
      20,     0,     0,     0,    21,     0,    48,    41,     5,     6,
       7,     0,     0,     0,    23,     0,    24,     0,     8,     0,
       0,    42,     0,     0,     0,    11,     0,     0,     1,    12,
      13,    14,     0,     0,     0,    18,    19,    61,     3,    20,
       0,     0,     0,    21,     0,    43,    62,     5,     6,     7,
       0,     0,     0,    23,     0,    24,     0,     8,     0,     0,
      63,     0,     0,     0,    11,     0,     0,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,     0,    20,     0,
       0,     0,    21,     0,    64,     0,     0,     0,     0,     0,
       0,     0,    23,     0,    24
};

static const yytype_int16 yycheck[] =
{
      55,    56,   104,   459,     0,     0,     3,   251,     7,     3,
       3,     3,     3,     3,   238,   374,     8,   241,   181,     3,
       3,   477,    90,   244,     0,     3,   189,   422,     9,    25,
      26,    26,     6,    29,    29,     3,     3,     3,     3,    20,
       8,     8,     8,     3,     5,    19,     0,     3,    44,    25,
       9,   198,     4,    29,     4,    83,    53,    56,    55,    20,
      57,   208,    59,     3,    63,    62,     7,   462,    52,    66,
      22,    68,    22,    47,    52,    29,     4,    74,   146,    20,
     227,   325,     4,     6,    81,    82,     5,     4,    85,     6,
       5,    88,    52,     7,    22,    89,    89,    89,    89,    89,
      22,    20,    99,     0,   101,    20,    20,     3,   105,   106,
     178,   179,     8,     6,   111,   112,     5,   476,   115,   478,
     117,    89,    89,    89,   108,   180,   485,   182,   183,   488,
     108,    20,     6,   188,     5,   190,   191,   300,   134,   135,
     135,   365,   363,   502,     5,   308,   367,   371,   108,    20,
       5,    59,     3,     5,    72,   210,   211,     8,   134,    20,
      68,   120,   121,   122,   123,    20,   125,   126,    20,    87,
     129,   130,   131,   132,    82,   230,   231,     5,     9,     5,
      21,   249,   541,   542,     5,   544,     9,   643,   290,    20,
     549,   109,    20,   552,    20,   554,     7,    20,   106,    20,
       6,   119,   120,   121,   122,   123,   124,   125,   126,    20,
       5,   129,   130,   131,   132,   133,    56,     5,     5,     5,
       3,     5,     4,    63,     3,    20,     7,   295,   587,   297,
     298,   590,    20,    20,    20,   303,    20,   305,   306,    20,
     599,   237,     5,   602,   299,     7,   301,   302,     9,   317,
     318,     4,   307,     3,   309,   310,     3,    20,    20,    20,
     481,     8,   483,    16,     4,     3,     6,   335,   336,   490,
       6,   492,     3,     3,    53,     3,    55,     3,    57,     3,
      19,    20,   278,    62,    19,    20,     3,    66,   120,   121,
     122,   123,     6,   125,   126,    74,     6,   129,   130,   131,
     132,     6,    81,    19,    20,     3,    85,     3,     3,    88,
       3,     3,     4,    19,    20,    19,    20,     6,    10,    11,
      99,     6,   101,    15,     6,     6,   105,     3,   324,     3,
       3,     3,   111,   112,     4,    27,   115,     4,   393,     3,
       6,   337,     4,     4,     4,     4,    21,     4,     4,    67,
     118,    16,     6,    45,    46,     6,     6,     6,     6,    22,
      52,   337,    54,     6,     6,     6,    19,     4,   101,    61,
       8,    16,     3,   441,     3,   443,   444,    21,   374,     4,
      72,   449,     4,   451,   452,     4,     4,    22,     4,     3,
      22,   459,   460,     6,    86,    87,     6,     4,   374,     4,
       4,   134,     4,   136,     4,    22,     4,     8,   510,   477,
     102,   103,     4,     4,   499,    18,   108,   109,   110,   535,
      19,    18,   324,    19,    19,     4,   422,   119,   120,   121,
     122,   123,   124,   125,   126,    19,   504,   129,   130,   131,
     132,   133,    19,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,   520,   462,   200,   523,    48,
      49,    -1,    -1,   528,    -1,    -1,   472,    -1,    -1,    -1,
     476,    -1,   478,    -1,    -1,    -1,    -1,    -1,    -1,   485,
      -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,   567,
     476,   569,   478,    -1,   237,   573,   502,   240,    -1,   485,
      -1,    -1,   488,    74,    75,    76,    77,    -1,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   535,
      -1,    -1,    -1,   104,    -1,   541,   542,    -1,   544,    -1,
      -1,    -1,    -1,   549,    -1,    -1,   552,   612,   554,   535,
      -1,    -1,    -1,    -1,    -1,   541,   542,    19,   544,    21,
      22,    -1,    -1,   549,    -1,   643,   552,   645,   554,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,   644,
      -1,   587,   647,    -1,   590,   663,    48,    49,   666,    -1,
      -1,    -1,    -1,   599,   337,   673,   602,    -1,    -1,    -1,
     665,   587,    -1,    -1,   590,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,   599,    -1,    -1,   602,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,   374,    -1,    48,    49,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,   214,   215,   216,    -1,   218,    -1,    -1,
      -1,    -1,    -1,   224,   225,   226,    -1,   228,   229,    -1,
      -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      -1,   252,   253,   254,   255,   256,   257,   258,    -1,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,    -1,
      50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,   472,
      60,    -1,    62,   476,    -1,   478,    66,    -1,    -1,    69,
      70,    71,   485,    -1,    74,   488,    -1,    -1,    -1,    79,
      -1,    81,    -1,   324,    -1,    85,    86,    -1,    88,   502,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    99,
     100,   101,    -1,   495,   104,   105,    -1,    -1,    -1,    -1,
      -1,   111,   112,    -1,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   535,    -1,    -1,    -1,    -1,    -1,   541,   542,
      -1,   544,    -1,    -1,   375,    -1,   549,    -1,    -1,   552,
      -1,   554,   534,    -1,   536,    -1,    -1,   539,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   547,    -1,    -1,   550,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,   560,    -1,
      -1,    -1,    -1,    -1,   587,    -1,    -1,   590,    -1,   420,
      -1,   422,    -1,    -1,    -1,    -1,   599,    -1,   580,   602,
     582,   583,    -1,   585,    -1,    -1,   588,    -1,    -1,    -1,
     592,   593,    -1,    -1,   596,   597,    -1,    -1,   600,    -1,
      -1,    -1,    -1,   605,    -1,   456,    -1,   458,    -1,    -1,
      -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   621,
      -1,   623,   624,    -1,    -1,   627,   628,    -1,    -1,    -1,
     632,    -1,    -1,   635,   636,     3,     4,   639,   640,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,   651,
      18,    -1,   654,    21,    22,   506,   658,    -1,    -1,   661,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   530,
      48,    49,   533,    -1,    -1,    -1,     3,     4,    -1,     6,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,   562,    -1,    -1,    -1,    -1,    -1,   568,    -1,   570,
      -1,    89,    -1,    -1,   575,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,   614,    81,    82,    83,    -1,    85,    86,
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
       3,     4,    -1,     6,    -1,    -1,    -1,    10,    11,    -1,
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
       6,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
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
     122,   123,   124,   125,   126,     3,     4,   129,   130,   131,
     132,   133,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
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
     118,   119,   120,   121,   122,   123,   124,   125,   126,     3,
       4,   129,   130,   131,   132,   133,    10,    11,    -1,    -1,
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
     124,   125,   126,     3,     4,   129,   130,   131,   132,   133,
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
     120,   121,   122,   123,   124,   125,   126,     3,     4,   129,
     130,   131,   132,   133,    10,    11,    -1,    -1,    -1,    15,
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
     126,     3,     4,   129,   130,   131,   132,   133,    10,    11,
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
     132,   133,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,   100,
      -1,   102,   103,   104,    -1,    -1,    -1,   108,   109,   110,
      -1,    -1,    -1,   114,    -1,   116,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,
      90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,    -1,
     100,    -1,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,    -1,    -1,    -1,   114,    -1,   116,    -1,    -1,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,     3,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    92,    -1,    -1,    -1,    96,    97,    -1,
      -1,   100,    -1,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,    -1,    -1,    -1,   114,    -1,   116,    -1,    -1,
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
      -1,    -1,    90,    91,    92,     3,    -1,    -1,    96,    97,
      -1,    -1,   100,    -1,   102,   103,   104,    -1,    -1,    -1,
     108,   109,   110,    -1,    -1,    -1,   114,    -1,   116,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    53,    -1,    55,    15,    57,
      -1,    -1,    -1,    20,    62,    -1,    -1,    -1,    66,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    45,    46,
      88,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    99,    -1,   101,    61,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,   111,   112,    72,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    10,    11,    -1,   102,   103,    15,    -1,
      -1,    -1,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,   119,   120,   121,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,   131,   132,   133,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    72,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    -1,    86,
      87,     3,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
       3,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,   117,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    82,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,   117,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,     3,
      -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,    -1,
     104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,
     114,   115,   116,     5,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     5,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     5,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     5,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     5,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     5,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     5,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    84,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    50,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    80,    82,    83,    -1,    84,    86,    -1,
      -1,    50,    90,    91,    92,    93,    94,    95,    96,    97,
      59,    60,   100,    -1,    -1,    -1,   104,    -1,   106,    68,
      69,    70,    71,    -1,    -1,    -1,   114,    -1,   116,   117,
      79,    -1,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,
      50,    90,    91,    92,    93,    94,    95,    96,    97,    59,
      60,   100,    -1,    -1,    -1,   104,    -1,   106,    68,    69,
      70,    71,    -1,    -1,    -1,   114,    -1,   116,    -1,    79,
      -1,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,    50,
      90,    91,    92,    93,    94,    95,    96,    97,    59,    60,
     100,    -1,    -1,    -1,   104,    -1,   106,    68,    69,    70,
      71,    -1,    -1,    -1,   114,    -1,   116,    -1,    79,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    50,    90,
      91,    92,    -1,    -1,    -1,    96,    97,    59,    60,   100,
      -1,    -1,    -1,   104,    -1,   106,    68,    69,    70,    71,
      -1,    -1,    -1,   114,    -1,   116,    -1,    79,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    59,    60,    68,    69,    70,    71,    79,    82,
      83,    86,    90,    91,    92,    93,    94,    95,    96,    97,
     100,   104,   106,   114,   116,   135,   136,   137,   149,   150,
     151,   152,   153,   154,   155,     3,     3,     3,    83,     3,
      59,    68,    82,   106,   136,    59,    68,    82,   106,   135,
     137,     0,   151,     6,     6,     6,     6,     3,     3,     3,
       3,    59,    68,    82,   106,     3,     3,     3,     3,    59,
      68,    82,   106,     3,     4,    10,    11,    15,    19,    27,
      45,    46,    52,    53,    54,    55,    57,    58,    61,    62,
      65,    66,    72,    73,    74,    75,    76,    77,    78,    81,
      85,    86,    87,    88,    98,    99,   101,   102,   103,   105,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   129,
     130,   131,   132,   133,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   147,   151,   157,   158,   159,   164,
     165,   166,   167,   169,   170,   172,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   195,   196,     3,   156,   157,   157,
       6,     6,     6,     6,     3,     3,     3,     3,     6,     6,
       6,     6,     3,     3,     3,     3,    16,    18,    21,     3,
      86,   185,   185,   185,   185,   185,   185,   185,    21,     4,
       6,     6,   158,   174,     4,     4,     4,     3,     4,     3,
     138,     3,   147,   185,     4,     4,     4,    21,     4,     4,
       6,     6,     3,    89,     4,     3,   117,   136,   138,   117,
     135,   138,     3,     8,    89,   168,    16,     7,   158,    67,
     171,     8,    10,    11,    12,    13,    14,    16,    17,    19,
      23,    24,    25,    26,    28,    29,    30,    31,    40,    41,
      42,    43,    44,    45,    46,    51,    80,    84,     4,    22,
      32,    33,    34,    35,    36,    37,    38,    39,    48,    49,
      22,     7,    20,     7,     7,   157,   156,   157,   157,     6,
       6,     6,     6,   157,   156,   157,   157,     6,     6,     6,
       6,     3,   191,     5,     3,   191,   185,   157,   157,   118,
     185,   185,   185,   185,     4,     8,    19,    19,   185,   185,
     185,     3,   191,   185,   185,   157,   157,     4,    10,    11,
      12,    13,    14,    16,    17,    23,    24,    25,    26,    28,
      29,    30,    31,    40,    41,    42,    43,    44,    45,    46,
     163,   185,     3,    89,   117,   138,     3,    89,   168,     3,
     117,   138,     3,   168,     4,    22,     9,   120,   121,   122,
     123,   125,   126,   129,   130,   131,   132,   145,   146,   148,
     163,    19,    20,     6,   158,   145,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,     5,
     137,   185,   193,   194,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   147,     3,     7,     7,     7,
       7,   157,   156,   157,   157,     7,     7,     7,     7,   157,
     156,   157,   157,     5,     7,     7,     4,     5,    19,     5,
       5,     5,   193,   145,     5,     5,     5,     5,     5,     7,
       7,     5,   136,   138,   160,   162,     4,     5,     4,   163,
       3,    89,     3,    89,   168,     4,   163,    19,     4,     3,
      89,     3,    89,   168,    19,     5,   160,   185,     9,    20,
       9,    20,     4,     3,   157,     9,    18,   185,     5,   194,
      22,     7,     7,     7,     7,     7,     7,     7,     7,   185,
       6,   185,   174,     6,   158,     5,     9,     6,     6,    19,
      47,   161,   138,     3,     5,    20,     5,   160,   174,     5,
     160,     4,     4,   163,     4,   163,    19,     5,   160,     4,
       5,   160,     4,   163,     4,   163,    19,   161,     5,   148,
       5,   160,    22,     7,   185,   147,     5,   157,    19,   157,
      56,    63,   173,   157,   185,     3,   185,   161,   162,   161,
       5,   161,     5,     5,   160,     5,   160,     4,     5,   160,
       4,   161,     5,     5,   160,   161,     5,     5,   160,     4,
       5,   160,     4,   161,   161,     5,   185,    19,     7,   185,
       7,   185,    18,     7,    56,    63,     7,   185,   161,   161,
     161,     5,   161,     5,     5,   160,   161,     5,     5,   160,
     161,   161,     5,   161,   161,     5,     5,   160,   161,     5,
       5,   160,   161,     5,    18,   157,   185,    18,   161,   161,
     161,     5,   161,   161,     5,   161,   161,   161,     5,   161,
     161,     5,   174,   157,    54,    18,   157,   161,   161,   161,
     161,    54,    19,   157,    54,    19,    54,    19,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   134,   135,   135,   135,   135,   135,   136,   136,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   140,   140,   140,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     144,   144,   145,   145,   146,   146,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   150,   150,   150,   151,   151,   151,   151,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   153,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   155,
     156,   156,   156,   156,   157,   157,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   161,   161,   161,   162,
     162,   162,   162,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   165,   165,   165,   166,   166,   167,   167,   167,   167,
     168,   168,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   173,   173,   173,   173,   174,   174,   175,   176,   177,
     178,   179,   179,   180,   180,   181,   182,   183,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     191,   191,   191,   191,   191,   191,   192,   192,   192,   193,
     193,   193,   194,   194,   195,   196
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
       6,     6,     7,     7,     5,     6,     6,     7,     7,     5,
       6,     6,     7,     7,     5,     6,     6,     7,     7,     5,
       3,     5,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     6,     5,     6,
       6,     7,     6,     7,     6,     7,     7,     8,     7,     8,
       7,     8,     7,     8,     3,     1,     3,     2,     1,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     7,     6,     7,     7,
       8,     7,     8,     8,     9,     8,     9,     8,     9,     8,
       9,     2,     3,     3,     3,     4,     1,     4,     5,     5,
       3,     5,     1,     3,     1,     2,     7,     5,     4,     2,
       7,     7,     6,     6,     5,     3,     1,     5,     7,     9,
       5,     4,     4,     4,     4,     4,     7,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     1,     3,     3,     3,     3,     4,     3,     0,     2,
       1,     0,     1,     2,     4,     5
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

#line 3693 "src/Parser/parser.c"

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
#line 287 "src/Parser/c-sharp.y"


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
