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
    LOCK = 340,
    LONG_TYPE = 341,
    NEW = 342,
    NULL_VALUE = 343,
    OBJECT = 344,
    OPERATOR = 345,
    OUT = 346,
    OVERRIDE = 347,
    PARAMS = 348,
    PRIVATE = 349,
    PROTECTED = 350,
    PUBLIC = 351,
    READONLY = 352,
    REF = 353,
    RETURN = 354,
    SBYTE_TYPE = 355,
    SEALED = 356,
    SHORT_TYPE = 357,
    SIZEOF = 358,
    STACKALLOC = 359,
    STATIC = 360,
    STRING_TYPE = 361,
    STRUCT = 362,
    SWITCH = 363,
    THIS = 364,
    THROW = 365,
    TRUE_VAL = 366,
    TYPEOF = 367,
    UINT_TYPE = 368,
    ULONG_TYPE = 369,
    UNCHECKED = 370,
    UNSAFE = 371,
    USHORT_TYPE = 372,
    VIRTUAL = 373,
    VOID = 374,
    VOLATILE = 375,
    WHILE = 376,
    INT_VAL = 377,
    UINT_VAL = 378,
    LONG_VAL = 379,
    ULONG_VAL = 380,
    FLOAT_VAL = 381,
    DOUBLE_VAL = 382,
    DECIMAL_VAL = 383,
    CHAR_VAL = 384,
    ENTER = 385,
    END_OF_FILE = 386,
    BYTE_VAL = 387,
    SBYTE_VAL = 388,
    SHORT_VAL = 389,
    USHORT_VAL = 390,
    STRING_VAL = 391
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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4566

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  137
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  205
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  417

#define YYUNDEFTOK  2
#define YYMAXUTOK   391


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
     135,   136
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    23,    23,    23,    23,    23,    23,    24,    24,    25,
      25,    25,    25,    25,    25,    25,    28,    28,    28,    28,
      29,    29,    30,    30,    30,    31,    31,    31,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    33,    33,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    35,    35,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    39,    42,    42,    42,    43,
      43,    45,    46,    47,    48,    50,    51,    52,    53,    56,
      56,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    77,    78,    78,    79,    79,    79,    79,
      82,    82,    82,    86,    87,    89,    90,    91,    92,    94,
      95,    96,    97,   100,   100,   102,   103,   105,   106,   109,
     111,   112,   113,   114,   117,   117,   118,   119,   120,   121,
     124,   124,   124,   124,   124,   124,   124,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   142,   143,
     144,   145,   146,   147,   148,   149,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   177,   181,   182,
     183,   187,   190,   191,   192,   195
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
  "IMPLICIT", "IN", "INT_TYPE", "INTERFACE", "INTERNAL", "IS", "LOCK",
  "LONG_TYPE", "NEW", "NULL_VALUE", "OBJECT", "OPERATOR", "OUT",
  "OVERRIDE", "PARAMS", "PRIVATE", "PROTECTED", "PUBLIC", "READONLY",
  "REF", "RETURN", "SBYTE_TYPE", "SEALED", "SHORT_TYPE", "SIZEOF",
  "STACKALLOC", "STATIC", "STRING_TYPE", "STRUCT", "SWITCH", "THIS",
  "THROW", "TRUE_VAL", "TYPEOF", "UINT_TYPE", "ULONG_TYPE", "UNCHECKED",
  "UNSAFE", "USHORT_TYPE", "VIRTUAL", "VOID", "VOLATILE", "WHILE",
  "INT_VAL", "UINT_VAL", "LONG_VAL", "ULONG_VAL", "FLOAT_VAL",
  "DOUBLE_VAL", "DECIMAL_VAL", "CHAR_VAL", "ENTER", "END_OF_FILE",
  "BYTE_VAL", "SBYTE_VAL", "SHORT_VAL", "USHORT_VAL", "STRING_VAL",
  "$accept", "scope", "modifier_list", "modifier", "type", "nullable_type",
  "simple_type", "numeric_type", "integer_type", "floating_type", "value",
  "vector_type", "numeric_val", "program", "obj_decl_list", "obj_decl",
  "class_decl", "struct_decl", "statement_list", "statement",
  "method_decl_statement", "parameter_list", "method_body", "parameter",
  "return_statement", "var_decl_statement", "attr_decl_statement",
  "id_list", "if_else_statement", "if_statement", "else_statement",
  "switch_statement", "cases_list", "loop_body", "while_statement",
  "do_while_statement", "for_statement", "foreach_statement", "expression",
  "assignment_expressions", "unary_operations", "binary_operations",
  "ternary_operations", "var_accessing", "method_invoking",
  "argument_list", "argument", YY_NULLPTR
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
     385,   386,   387,   388,   389,   390,   391
};
# endif

#define YYPACT_NINF (-279)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-152)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     233,    34,  -279,  -279,  -279,  -279,  -279,   -54,  -279,  -279,
    -279,  -279,    43,  -279,    -8,    98,    55,  3856,  -279,  -279,
    -279,    56,  -279,    69,    79,    93,   -47,   -46,  -279,  -279,
    -279,  2969,  2969,    99,   106,   117,   118,   128,   132,  3967,
       4,     4,     4,     4,  -279,     4,     4,     4,  -279,  -279,
    -279,  -279,   458,  -279,  -279,  -279,   130,   139,   155,  -279,
    -279,   150,  -279,  -279,  -279,   158,  -279,  -279,  -279,  -279,
     160,   167,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  3069,   392,  3828,    71,  -279,   148,
    -279,  -279,  -279,  -279,  -279,  -279,   592,  -279,  -279,  -279,
    -279,  -279,  -279,   113,  -279,  -279,  -279,  -279,  -279,  4298,
    -279,  -279,  -279,  -279,  -279,  -279,   726,  2969,  2969,   180,
     181,   182,   183,    80,  -279,   187,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,   725,  4009,  4520,
    4520,  4520,  4520,  4520,  4520,  2969,  -279,    76,     4,     4,
       4,   594,   179,  4520,     4,   196,     4,   185,   204,  3136,
     -47,    92,  3182,  -279,   100,    12,    50,    51,  -279,  -279,
    -279,   860,  -279,     4,     4,     4,     4,     4,     4,     4,
    -279,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,  -279,  -279,  -279,   994,  1128,  2969,
    2969,  2969,  2969,  -279,  2985,  -279,    23,  -279,  -279,  4520,
    4520,  4520,  4520,  4520,  4520,  4520,  4520,  4520,  4520,  4520,
    -279,  1262,   206,  4335,  4051,  4093,  -279,  -279,  4135,  3254,
    4177,   214,   216,   101,    13,   122,   217,   108,   201,   126,
    3320,     4,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,   218,  -279,   223,  2969,  -279,  4520,  4520,
    4520,  4520,  4520,  4372,  4520,  4520,  4520,  4520,  4520,  4520,
    4520,  4520,  4520,  4520,  4520,  4520,  4520,  4520,  -279,  -279,
    1396,  1530,  1664,  1798,  -279,  -279,  -279,     4,     4,   458,
    1932,   222,    22,  3782,  -279,   111,    25,  -279,   458,  3386,
     226,    14,   131,  3452,  -279,   231,    20,   137,  -279,    22,
      28,  4520,  -279,   215,  2066,     4,  -279,  -279,  -279,  -279,
    4219,  4409,  -279,  2969,  -279,   -24,  2969,     4,  -279,   115,
       4,    22,  3782,  -279,    22,    33,  3518,  3584,  -279,    22,
      36,  3650,  3716,  -279,  -279,    22,     4,  -279,  4520,   219,
       4,  2200,     4,   221,     2,  2334,  4520,     4,  4520,  -279,
    -279,  -279,    22,    22,    61,    22,    67,  -279,    22,    22,
      68,    22,    73,  -279,  4520,  -279,  4261,  -279,  4446,  2969,
    -279,     4,   224,  -279,  4520,  -279,  -279,    22,  -279,    22,
    -279,  -279,    22,  -279,    22,   458,  2969,  2461,  4483,  2969,
    -279,  -279,  -279,  -279,  -279,  2588,   225,  2969,  2715,   227,
    -279,  2842,   228,  -279,   229,  -279,  -279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      68,     0,    10,     5,    15,    11,     2,     4,     3,    13,
      14,     9,     0,    12,     0,     0,     0,     0,    67,    69,
      70,     0,     6,     0,     0,     0,     0,     0,     1,    65,
      66,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,    93,     0,     0,     0,    22,    29,
      36,    27,     0,    38,    41,    37,     0,     0,     0,    32,
      34,     0,    28,    30,    24,     0,    40,    33,    35,    31,
       0,     0,    39,    45,    44,    49,    46,    52,    43,    42,
      47,    48,    51,    50,     0,     0,     8,     0,    17,    16,
      23,    25,    26,   150,    18,    81,     0,    80,    82,    91,
      84,    83,    85,   133,    86,    87,    88,    89,    90,     0,
     153,   154,   155,   156,    95,    94,     0,     0,     0,     0,
       0,     0,     0,   204,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   151,     0,   172,
     173,   175,   174,   170,   171,     0,   145,     0,     0,     0,
       0,   151,   150,   120,     0,     0,     0,    19,     0,     0,
       8,     0,     0,     7,     0,   131,     0,     0,    20,    74,
      79,     0,   134,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,   169,    78,     0,     0,     0,
       0,     0,     0,   205,     0,   203,   200,   198,   199,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   167,   166,
     152,     0,     0,     0,     0,     0,   122,   121,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,   131,     0,
       0,     0,    53,    58,    57,    62,    59,    64,    56,    55,
      60,    61,    63,     0,   123,     0,     0,   138,   176,   177,
     179,   178,   180,     0,   196,   185,   186,   191,   192,   189,
     188,   187,   190,   182,   181,   183,   184,   195,    71,    75,
       0,     0,     0,     0,   201,   202,   144,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,   113,     0,     0,
       0,   131,     0,     0,   126,     0,   131,     0,   124,     0,
       0,   132,    54,   129,     0,     0,    72,    76,    73,    77,
       0,     0,   149,     0,   136,     0,     0,     0,    96,     0,
     116,     0,     0,   146,     0,     0,     0,     0,   128,     0,
       0,     0,     0,   127,    98,     0,     0,   137,   197,     0,
       0,     0,     0,     0,     0,     0,   115,   118,   117,    97,
     112,   100,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,    99,   130,   147,     0,   135,     0,     0,
     139,     0,     0,   114,   119,   101,   104,     0,   106,     0,
     103,   108,     0,   110,     0,     0,     0,     0,     0,     0,
     105,   107,   109,   111,   148,     0,     0,     0,     0,     0,
     143,     0,     0,   142,     0,   141,   140
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,     6,   -74,    40,   -82,  -279,  -279,  -279,  -279,  -279,
     -60,  -279,  -279,  -279,  -279,    26,  -279,  -279,   -32,   -49,
    -279,  -235,  3478,   -96,  -279,  -279,  -279,  -139,  -279,  -279,
    -279,  -279,  -279,  -278,  -279,  -279,  -279,  -279,   258,  -279,
    -279,  -279,  -279,   120,   127,  -279,    39
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   253,    16,    17,    95,    19,    20,    96,    97,
      98,   296,   328,   297,    99,   100,   101,   167,   102,   103,
     172,   104,   354,   147,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   204,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   152,   161,   146,   164,   310,    14,   137,    40,   380,
     159,   322,    35,    37,    41,    42,   240,   303,   337,    43,
     333,    27,   235,    14,   342,   239,    18,   123,   326,    22,
     331,    45,   352,   345,   241,   241,   241,    21,   362,   353,
      15,   368,   241,    30,   125,   332,    23,   170,   332,    46,
      47,    24,     2,   332,    26,    28,   332,    15,   381,   242,
      36,    38,    31,   203,   335,   382,   387,   170,   340,   327,
     254,   255,   389,   392,   165,    32,    54,   233,   394,   166,
     237,   332,    33,     4,     5,   197,   198,   332,   332,     9,
      10,   162,    27,   332,   302,   234,    34,    11,   307,    25,
     166,   364,   366,   238,   301,   117,   370,   372,   166,   166,
      13,   306,   118,   221,   330,    66,   166,   404,   357,   166,
     119,   120,   257,   166,   160,   163,    72,    73,    74,    75,
      76,   121,    77,    78,   148,   122,    79,    80,    81,    82,
      83,   304,   255,   149,   203,   308,   255,   295,   170,   170,
     338,   255,    54,   151,    40,   293,   343,   255,   295,   150,
      41,    42,   154,   155,   168,    43,   293,   280,   281,   282,
     283,   156,   170,   243,   244,   245,   246,    45,   247,   248,
     171,     3,   249,   250,   251,   252,   199,   200,   201,   202,
     206,    66,     6,     7,     8,    46,    47,   222,   227,   163,
     229,   124,    72,    73,    74,    75,    76,   231,    77,    78,
     287,   329,    79,    80,    81,    82,    83,   295,   299,   300,
     305,   295,    54,   241,   314,   293,   313,   312,   325,   293,
     336,   170,   170,   170,   170,   341,   360,   346,   375,   379,
     146,   324,   399,   285,   410,   207,   413,   415,   416,   146,
     295,     0,   208,     0,   295,   295,     0,     0,   293,   295,
     295,    66,   293,   293,     0,   170,     0,   293,   293,   294,
       0,     0,    72,    73,    74,    75,    76,     0,    77,    78,
     294,     0,    79,    80,    81,    82,    83,     0,     0,     0,
       0,   351,     1,     2,   355,     0,     0,     0,   138,   139,
     140,   141,   170,   142,   143,   144,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,   153,
       0,     0,     0,     0,     4,     5,     0,     6,     7,     8,
       9,    10,     0,   163,     0,     0,     0,     0,    11,   294,
      12,     0,     0,   294,     0,     0,   146,   397,   170,     0,
       0,    13,     0,     0,     0,     0,   170,     0,     0,   170,
       0,     0,   170,     0,   405,     0,     0,   408,     0,     0,
       0,     0,   294,     0,     0,   411,   294,   294,     0,     0,
       0,   294,   294,     0,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   224,   225,     0,
       0,     0,   228,     0,   230,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   258,   259,   260,   261,   262,   263,   264,     0,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,     2,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,     0,   145,     0,     0,     0,    41,    42,
       0,     0,     0,    43,     0,     3,     0,    44,     0,     0,
       0,     0,     0,     4,     5,    45,     6,     7,     8,     9,
      10,     0,     0,     0,     0,     0,     0,    11,     0,   311,
       0,     0,     0,    46,    47,     0,     0,     0,     0,     0,
      13,    48,     0,    49,     0,    50,     0,     1,     2,     0,
      51,     0,     0,    52,    53,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,     0,    58,     0,     0,    59,
       0,     3,     0,     0,    60,   320,   321,     0,     0,     4,
       5,     0,     6,     7,     8,     9,    10,    61,    62,     0,
      63,     0,     0,    11,    64,    12,    65,     0,     0,    66,
       0,    67,    68,   348,     0,    69,    13,    70,     0,    71,
      72,    73,    74,    75,    76,   356,    77,    78,   358,     0,
      79,    80,    81,    82,    83,    39,    40,     0,     0,   169,
       0,     0,    41,    42,   374,     0,     0,    43,   376,     0,
     378,    44,     0,   226,     0,   384,   126,     0,     0,    45,
       0,     0,     0,     0,     0,     0,   127,   128,   129,   130,
     131,   132,   133,   134,     0,     0,     0,    46,    47,   398,
       0,     0,   135,   136,     0,    48,     0,    49,     0,    50,
       0,     1,     2,     0,    51,     0,     0,    52,    53,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,     0,
      58,     0,     0,    59,     0,     3,     0,     0,    60,     0,
       0,     0,     0,     4,     5,     0,     6,     7,     8,     9,
      10,    61,    62,     0,    63,     0,     0,    11,    64,    12,
      65,     0,     0,    66,     0,    67,    68,     0,     0,    69,
      13,    70,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,    79,    80,    81,    82,    83,    39,
      40,     0,     0,   196,     0,     0,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,     0,   126,     0,     0,
       0,     0,     0,    45,     0,     0,     0,   127,   128,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,    46,    47,   135,   136,     0,     0,     0,     0,    48,
       0,    49,     0,    50,     0,     1,     2,     0,    51,     0,
       0,    52,    53,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,     0,    58,     0,     0,    59,     0,     3,
       0,     0,    60,     0,     0,     0,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    61,    62,     0,    63,     0,
       0,    11,    64,    12,    65,     0,     0,    66,     0,    67,
      68,     0,     0,    69,    13,    70,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,     0,    79,    80,
      81,    82,    83,    39,    40,     0,   256,     0,     0,     0,
      41,    42,     0,     0,     0,    43,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,    48,     0,    49,     0,    50,     0,     1,
       2,     0,    51,     0,     0,    52,    53,     0,     0,     0,
       0,     0,    54,     0,    55,    56,    57,     0,    58,     0,
       0,    59,     0,     3,     0,     0,    60,     0,     0,     0,
       0,     4,     5,     0,     6,     7,     8,     9,    10,    61,
      62,     0,    63,     0,     0,    11,    64,    12,    65,     0,
       0,    66,     0,    67,    68,     0,     0,    69,    13,    70,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,    79,    80,    81,    82,    83,    39,    40,     0,
       0,   278,     0,     0,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,    48,     0,    49,
       0,    50,     0,     1,     2,     0,    51,     0,     0,    52,
      53,     0,     0,     0,     0,     0,    54,     0,    55,    56,
      57,     0,    58,     0,     0,    59,     0,     3,     0,     0,
      60,     0,     0,     0,     0,     4,     5,     0,     6,     7,
       8,     9,    10,    61,    62,     0,    63,     0,     0,    11,
      64,    12,    65,     0,     0,    66,     0,    67,    68,     0,
       0,    69,    13,    70,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,    79,    80,    81,    82,
      83,    39,    40,     0,     0,   279,     0,     0,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,    48,     0,    49,     0,    50,     0,     1,     2,     0,
      51,     0,     0,    52,    53,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,     0,    58,     0,     0,    59,
       0,     3,     0,     0,    60,     0,     0,     0,     0,     4,
       5,     0,     6,     7,     8,     9,    10,    61,    62,     0,
      63,     0,     0,    11,    64,    12,    65,     0,     0,    66,
       0,    67,    68,     0,     0,    69,    13,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     0,
      79,    80,    81,    82,    83,    39,    40,     0,     0,   286,
       0,     0,    41,    42,     0,     0,     0,    43,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,    48,     0,    49,     0,    50,
       0,     1,     2,     0,    51,     0,     0,    52,    53,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,     0,
      58,     0,     0,    59,     0,     3,     0,     0,    60,     0,
       0,     0,     0,     4,     5,     0,     6,     7,     8,     9,
      10,    61,    62,     0,    63,     0,     0,    11,    64,    12,
      65,     0,     0,    66,     0,    67,    68,     0,     0,    69,
      13,    70,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,    79,    80,    81,    82,    83,    39,
      40,     0,     0,   316,     0,     0,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,    48,
       0,    49,     0,    50,     0,     1,     2,     0,    51,     0,
       0,    52,    53,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,     0,    58,     0,     0,    59,     0,     3,
       0,     0,    60,     0,     0,     0,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    61,    62,     0,    63,     0,
       0,    11,    64,    12,    65,     0,     0,    66,     0,    67,
      68,     0,     0,    69,    13,    70,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,     0,    79,    80,
      81,    82,    83,    39,    40,     0,     0,   317,     0,     0,
      41,    42,     0,     0,     0,    43,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,    48,     0,    49,     0,    50,     0,     1,
       2,     0,    51,     0,     0,    52,    53,     0,     0,     0,
       0,     0,    54,     0,    55,    56,    57,     0,    58,     0,
       0,    59,     0,     3,     0,     0,    60,     0,     0,     0,
       0,     4,     5,     0,     6,     7,     8,     9,    10,    61,
      62,     0,    63,     0,     0,    11,    64,    12,    65,     0,
       0,    66,     0,    67,    68,     0,     0,    69,    13,    70,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,    79,    80,    81,    82,    83,    39,    40,     0,
       0,   318,     0,     0,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,    48,     0,    49,
       0,    50,     0,     1,     2,     0,    51,     0,     0,    52,
      53,     0,     0,     0,     0,     0,    54,     0,    55,    56,
      57,     0,    58,     0,     0,    59,     0,     3,     0,     0,
      60,     0,     0,     0,     0,     4,     5,     0,     6,     7,
       8,     9,    10,    61,    62,     0,    63,     0,     0,    11,
      64,    12,    65,     0,     0,    66,     0,    67,    68,     0,
       0,    69,    13,    70,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,     0,     0,    79,    80,    81,    82,
      83,    39,    40,     0,     0,   319,     0,     0,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,    48,     0,    49,     0,    50,     0,     1,     2,     0,
      51,     0,     0,    52,    53,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,     0,    58,     0,     0,    59,
       0,     3,     0,     0,    60,     0,     0,     0,     0,     4,
       5,     0,     6,     7,     8,     9,    10,    61,    62,     0,
      63,     0,     0,    11,    64,    12,    65,     0,     0,    66,
       0,    67,    68,     0,     0,    69,    13,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,     0,     0,
      79,    80,    81,    82,    83,    39,    40,     0,   323,     0,
       0,     0,    41,    42,     0,     0,     0,    43,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,    48,     0,    49,     0,    50,
       0,     1,     2,     0,    51,     0,     0,    52,    53,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,     0,
      58,     0,     0,    59,     0,     3,     0,     0,    60,     0,
       0,     0,     0,     4,     5,     0,     6,     7,     8,     9,
      10,    61,    62,     0,    63,     0,     0,    11,    64,    12,
      65,     0,     0,    66,     0,    67,    68,     0,     0,    69,
      13,    70,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,     0,     0,    79,    80,    81,    82,    83,    39,
      40,     0,     0,   347,     0,     0,    41,    42,     0,     0,
       0,    43,     0,     0,     0,    44,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    47,     0,     0,     0,     0,     0,     0,    48,
       0,    49,     0,    50,     0,     1,     2,     0,    51,     0,
       0,    52,    53,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,     0,    58,     0,     0,    59,     0,     3,
       0,     0,    60,     0,     0,     0,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    61,    62,     0,    63,     0,
       0,    11,    64,    12,    65,     0,     0,    66,     0,    67,
      68,     0,     0,    69,    13,    70,     0,    71,    72,    73,
      74,    75,    76,     0,    77,    78,     0,     0,    79,    80,
      81,    82,    83,    39,    40,     0,     0,   377,     0,     0,
      41,    42,     0,     0,     0,    43,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    47,     0,     0,     0,
       0,     0,     0,    48,     0,    49,     0,    50,     0,     1,
       2,     0,    51,     0,     0,    52,    53,     0,     0,     0,
       0,     0,    54,     0,    55,    56,    57,     0,    58,     0,
       0,    59,     0,     3,     0,     0,    60,     0,     0,     0,
       0,     4,     5,     0,     6,     7,     8,     9,    10,    61,
      62,     0,    63,     0,     0,    11,    64,    12,    65,     0,
       0,    66,     0,    67,    68,     0,     0,    69,    13,    70,
       0,    71,    72,    73,    74,    75,    76,     0,    77,    78,
       0,     0,    79,    80,    81,    82,    83,    39,    40,     0,
       0,   383,     0,     0,    41,    42,     0,     0,     0,    43,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,    48,     0,    49,
       0,    50,     0,     1,     2,     0,    51,     0,     0,    52,
      53,     0,     0,     0,     0,     0,    54,     0,    55,    56,
      57,     0,    58,     0,     0,    59,     0,     3,     0,     0,
      60,     0,     0,     0,     0,     4,     5,     0,     6,     7,
       8,     9,    10,    61,    62,     0,    63,     0,     0,    11,
      64,    12,    65,     0,     0,    66,     0,    67,    68,     0,
       0,    69,    13,    70,     0,    71,    72,    73,    74,    75,
      76,     0,    77,    78,    39,    40,    79,    80,    81,    82,
      83,    41,    42,     0,     0,     0,    43,     0,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,    48,   406,    49,     0,    50,     0,
       1,     2,     0,    51,     0,     0,    52,    53,     0,     0,
       0,     0,     0,    54,     0,    55,    56,    57,     0,    58,
       0,     0,    59,     0,     3,     0,     0,    60,     0,     0,
       0,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      61,    62,     0,    63,     0,     0,    11,    64,    12,    65,
       0,     0,    66,     0,    67,    68,     0,     0,    69,    13,
      70,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,    39,    40,    79,    80,    81,    82,    83,    41,    42,
       0,     0,     0,    43,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,    48,   409,    49,     0,    50,     0,     1,     2,     0,
      51,     0,     0,    52,    53,     0,     0,     0,     0,     0,
      54,     0,    55,    56,    57,     0,    58,     0,     0,    59,
       0,     3,     0,     0,    60,     0,     0,     0,     0,     4,
       5,     0,     6,     7,     8,     9,    10,    61,    62,     0,
      63,     0,     0,    11,    64,    12,    65,     0,     0,    66,
       0,    67,    68,     0,     0,    69,    13,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    39,    40,
      79,    80,    81,    82,    83,    41,    42,     0,     0,     0,
      43,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,    48,   412,
      49,     0,    50,     0,     1,     2,     0,    51,     0,     0,
      52,    53,     0,     0,     0,     0,     0,    54,     0,    55,
      56,    57,     0,    58,     0,     0,    59,     0,     3,     0,
       0,    60,     0,     0,     0,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    61,    62,     0,    63,     0,     0,
      11,    64,    12,    65,     0,     0,    66,     0,    67,    68,
       0,     0,    69,    13,    70,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,    39,    40,    79,    80,    81,
      82,    83,    41,    42,     0,     0,     0,    43,     0,     0,
       0,    44,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,    48,   414,    49,     0,    50,
       0,     1,     2,     0,    51,     0,     0,    52,    53,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,     0,
      58,     0,     0,    59,     0,     3,     0,     0,    60,     0,
       0,     0,     0,     4,     5,     0,     6,     7,     8,     9,
      10,    61,    62,     0,    63,     0,     0,    11,    64,    12,
      65,     0,     0,    66,     0,    67,    68,     0,     0,    69,
      13,    70,     0,    71,    72,    73,    74,    75,    76,     0,
      77,    78,    39,    40,    79,    80,    81,    82,    83,    41,
      42,     0,     0,     0,    43,     0,     0,     0,    44,     0,
     284,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,    48,     0,    49,     0,    50,     0,     1,     2,
       0,    51,     0,     0,    52,    53,     0,     0,     0,     0,
       0,    54,     0,    55,    56,    57,     0,    58,     0,     0,
      59,     0,     3,     0,     0,    60,     0,    54,     0,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    61,    62,
       0,    63,   157,     0,    11,    64,    12,    65,     0,     0,
      66,     0,    67,    68,     0,     0,    69,    13,    70,     0,
      71,    72,    73,    74,    75,    76,    66,    77,    78,     0,
       0,    79,    80,    81,    82,    83,     0,    72,    73,    74,
      75,    76,     0,    77,    78,     0,     0,    79,    80,    81,
      82,    83,    48,     0,    49,     0,    50,     0,    24,     2,
       0,    51,     0,     0,     0,    53,     0,     0,     0,   157,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     9,    10,     0,    62,
       0,    63,     0,     0,    11,    64,    25,     0,     0,     0,
       0,     0,    67,    68,     0,   157,    69,    13,   158,    48,
       0,    49,     0,    50,     0,     0,     2,     0,    51,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     4,     5,     0,
       0,     0,     0,     9,    10,    48,    62,    49,    63,    50,
       0,    11,    64,     0,    51,     0,     0,     0,    53,    67,
      68,     0,     0,    69,    13,   232,    55,   157,     0,   292,
       0,     0,     0,    59,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,     0,    63,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,    67,    68,     0,     0,    69,
       0,   236,     0,     0,     0,     0,     0,    48,     0,    49,
       0,    50,     0,     0,     2,     0,    51,     0,     0,     0,
      53,     0,     0,   157,     0,   309,     0,     0,    55,     0,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     9,    10,     0,    62,     0,    63,     0,     0,    11,
      64,     0,     0,     0,     0,     0,     0,    67,    68,     0,
       0,    69,    13,    48,     0,    49,     0,    50,     0,     0,
       2,     0,    51,     0,     0,     0,    53,     0,     0,   157,
       0,   334,     0,     0,    55,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     4,     5,     0,     0,     0,     0,     9,    10,     0,
      62,     0,    63,     0,     0,    11,    64,     0,     0,     0,
       0,     0,     0,    67,    68,     0,     0,    69,    13,    48,
       0,    49,     0,    50,     0,     0,     2,     0,    51,     0,
       0,     0,    53,     0,     0,   157,     0,   339,     0,     0,
      55,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     4,     5,     0,
       0,     0,     0,     9,    10,     0,    62,     0,    63,     0,
       0,    11,    64,     0,     0,     0,     0,     0,     0,    67,
      68,     0,     0,    69,    13,    48,     0,    49,     0,    50,
       0,     0,     2,     0,    51,     0,     0,     0,    53,     0,
       0,   157,     0,   363,     0,     0,    55,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     9,
      10,     0,    62,     0,    63,     0,     0,    11,    64,     0,
       0,     0,     0,     0,     0,    67,    68,     0,     0,    69,
      13,    48,     0,    49,     0,    50,     0,     0,     2,     0,
      51,     0,     0,     0,    53,     0,     0,   157,     0,   365,
       0,     0,    55,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     4,
       5,     0,     0,     0,     0,     9,    10,     0,    62,     0,
      63,     0,     0,    11,    64,     0,     0,     0,     0,     0,
       0,    67,    68,     0,     0,    69,    13,    48,     0,    49,
       0,    50,     0,     0,     2,     0,    51,     0,     0,     0,
      53,     0,     0,   157,     0,   369,     0,     0,    55,     0,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     9,    10,     0,    62,     0,    63,     0,     0,    11,
      64,     0,     0,     0,     0,     0,     0,    67,    68,     0,
       0,    69,    13,    48,     0,    49,     0,    50,     0,     0,
       2,     0,    51,     0,     0,     0,    53,     0,     0,   157,
       0,   371,     0,     0,    55,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     4,     5,     0,     0,     0,     0,     9,    10,     0,
      62,     0,    63,     0,     0,    11,    64,     0,     0,     0,
       0,     0,     0,    67,    68,     0,     0,    69,    13,    48,
       0,    49,     0,    50,     0,     0,     2,     0,    51,     0,
       0,     0,    53,     0,     0,   157,     0,   344,     0,     0,
      55,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     4,     5,   359,
       0,     0,   361,     9,    10,     0,    62,   367,    63,     0,
       0,    11,    64,   373,     0,     0,     0,     0,     0,    67,
      68,   157,     0,    69,    13,    48,     0,    49,     0,    50,
     385,   386,     2,   388,    51,     0,   390,   391,    53,   393,
       0,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,    59,     0,   400,     0,   401,    60,     0,
     402,     0,   403,     4,     5,     0,     0,     0,     0,     9,
      10,    48,    62,    49,    63,    50,     0,    11,    64,     0,
      51,     0,     0,     0,    53,    67,    68,     0,     0,    69,
      13,     0,    55,     0,     0,     0,     0,     0,     0,    59,
       0,     3,     0,     0,    60,     1,     2,     0,     0,     0,
       0,     0,     6,     7,     8,     0,     0,     0,    62,     0,
      63,     0,     0,     0,    64,     0,     0,     0,     0,     3,
       0,    67,    68,     0,     0,    69,     0,     4,     5,     0,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,     0,     0,     0,     0,     0,     0,
     -19,   123,     0,     0,    13,   -19,     0,  -151,  -151,  -151,
    -151,  -151,     0,   124,  -151,     0,  -151,    29,   125,   126,
    -151,  -151,  -151,  -151,     0,  -151,  -151,  -151,  -151,   127,
     128,   129,   130,   131,   132,   133,   134,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,   220,   135,   136,     0,     0,   173,
     174,   175,   176,   177,     0,   178,   179,     0,     0,     0,
       0,     0,   181,   182,   183,   184,     0,   185,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   289,     0,     0,     0,
       0,   173,   174,   175,   176,   177,     0,   178,   179,     0,
       0,     0,     0,     0,   181,   182,   183,   184,     0,   185,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   290,     0,
       0,     0,     0,   173,   174,   175,   176,   177,     0,   178,
     179,     0,     0,     0,     0,     0,   181,   182,   183,   184,
       0,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     291,     0,     0,     0,     0,   173,   174,   175,   176,   177,
       0,   178,   179,     0,     0,     0,     0,     0,   181,   182,
     183,   184,     0,   185,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   298,     0,     0,     0,     0,   173,   174,   175,
     176,   177,     0,   178,   179,     0,     0,     0,     0,     0,
     181,   182,   183,   184,     0,   185,   186,   187,   188,     0,
       0,     0,     0,     0,     0,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   349,     0,     0,     0,     0,   173,
     174,   175,   176,   177,     0,   178,   179,     0,     0,     0,
       0,     0,   181,   182,   183,   184,     0,   185,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   395,     0,     0,     0,
       0,   173,   174,   175,   176,   177,     0,   178,   179,     0,
       0,     0,     0,     0,   181,   182,   183,   184,     0,   185,
     186,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   173,   174,
     175,   176,   177,     0,   178,   179,     0,   180,     0,     0,
       0,   181,   182,   183,   184,     0,   185,   186,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   173,   174,   175,   176,   177,
       0,   178,   179,     0,   288,     0,     0,     0,   181,   182,
     183,   184,     0,   185,   186,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   173,   174,   175,   176,   177,     0,   178,   179,
     315,     0,     0,     0,     0,   181,   182,   183,   184,     0,
     185,   186,   187,   188,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   173,
     174,   175,   176,   177,     0,   178,   179,     0,   350,     0,
       0,     0,   181,   182,   183,   184,     0,   185,   186,   187,
     188,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   173,   174,   175,   176,
     177,     0,   178,   179,   396,     0,     0,     0,     0,   181,
     182,   183,   184,     0,   185,   186,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   173,   174,   175,   176,   177,     0,   178,
     179,   407,     0,     0,     0,     0,   181,   182,   183,   184,
       0,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     173,   174,   175,   176,   177,     0,   178,   179,     0,     0,
       0,     0,     0,   181,   182,   183,   184,     0,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   190,   191,   192,   193,   194,   195
};

static const yytype_int16 yycheck[] =
{
      32,    61,    84,    52,    86,   240,     0,     3,     4,     7,
      84,   289,    59,    59,    10,    11,     4,     4,     4,    15,
     298,    15,   161,    17,     4,   164,     0,     4,     6,    83,
       5,    27,    56,     5,    22,    22,    22,     3,     5,    63,
       0,     5,    22,    17,    21,    20,     3,    96,    20,    45,
      46,    59,    60,    20,    14,     0,    20,    17,    56,     9,
     107,   107,     6,   123,   299,    63,     5,   116,   303,    47,
      19,    20,     5,     5,     3,     6,    72,   159,     5,     8,
     162,    20,     3,    91,    92,   117,   118,    20,    20,    97,
      98,    85,    86,    20,   233,     3,     3,   105,   237,   107,
       8,   336,   337,     3,     3,     6,   341,   342,     8,     8,
     118,     3,     6,   145,     3,   111,     8,   395,     3,     8,
       3,     3,   171,     8,    84,    85,   122,   123,   124,   125,
     126,     3,   128,   129,     4,     3,   132,   133,   134,   135,
     136,    19,    20,     4,   204,    19,    20,   229,   197,   198,
      19,    20,    72,     3,     4,   229,    19,    20,   240,     4,
      10,    11,     4,     3,    16,    15,   240,   199,   200,   201,
     202,     4,   221,   123,   124,   125,   126,    27,   128,   129,
      67,    83,   132,   133,   134,   135,     6,     6,     6,     6,
       3,   111,    94,    95,    96,    45,    46,   121,    19,   159,
       4,    16,   122,   123,   124,   125,   126,     3,   128,   129,
       4,   293,   132,   133,   134,   135,   136,   299,     4,     3,
       3,   303,    72,    22,   256,   299,     3,     9,     6,   303,
       4,   280,   281,   282,   283,     4,   332,    22,    19,    18,
     289,   290,    18,   204,    19,   125,    19,    19,    19,   298,
     332,    -1,   125,    -1,   336,   337,    -1,    -1,   332,   341,
     342,   111,   336,   337,    -1,   314,    -1,   341,   342,   229,
      -1,    -1,   122,   123,   124,   125,   126,    -1,   128,   129,
     240,    -1,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,   323,    59,    60,   326,    -1,    -1,    -1,    40,    41,
      42,    43,   351,    45,    46,    47,   355,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,
      97,    98,    -1,   293,    -1,    -1,    -1,    -1,   105,   299,
     107,    -1,    -1,   303,    -1,    -1,   395,   379,   397,    -1,
      -1,   118,    -1,    -1,    -1,    -1,   405,    -1,    -1,   408,
      -1,    -1,   411,    -1,   396,    -1,    -1,   399,    -1,    -1,
      -1,    -1,   332,    -1,    -1,   407,   336,   337,    -1,    -1,
      -1,   341,   342,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,    -1,
      -1,    -1,   154,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,   174,   175,   176,   177,   178,   179,    -1,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    83,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    91,    92,    27,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,   241,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
     118,    53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,   287,   288,    -1,    -1,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,   315,    -1,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,   327,   128,   129,   330,    -1,
     132,   133,   134,   135,   136,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,   346,    -1,    -1,    15,   350,    -1,
     352,    19,    -1,    19,    -1,   357,    22,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    45,    46,   381,
      -1,    -1,    48,    49,    -1,    53,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,
      78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    48,    49,    -1,    -1,    -1,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,    -1,    -1,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,     3,     4,    -1,     6,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,
      -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
      -1,    -1,   132,   133,   134,   135,   136,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,   114,    -1,
      -1,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,    -1,    -1,   132,   133,   134,   135,
     136,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,    -1,    -1,
     132,   133,   134,   135,   136,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,
      78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,    -1,    -1,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,
      -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
      -1,    -1,   132,   133,   134,   135,   136,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,   114,    -1,
      -1,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,    -1,    -1,   132,   133,   134,   135,
     136,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,    -1,    -1,
     132,   133,   134,   135,   136,     3,     4,    -1,     6,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,
      78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,    -1,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,    -1,    -1,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,
      -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,    -1,   128,   129,
      -1,    -1,   132,   133,   134,   135,   136,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,    -1,   102,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,   111,    -1,   113,   114,    -1,
      -1,   117,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,    -1,   128,   129,     3,     4,   132,   133,   134,   135,
     136,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,     3,     4,   132,   133,   134,   135,   136,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,
      -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,     3,     4,
     132,   133,   134,   135,   136,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,   111,    -1,   113,   114,
      -1,    -1,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,     3,     4,   132,   133,   134,
     135,   136,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,
      78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,    -1,   102,    -1,    -1,   105,   106,   107,
     108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,    -1,
     128,   129,     3,     4,   132,   133,   134,   135,   136,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    72,    -1,    -1,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,     3,    -1,   105,   106,   107,   108,    -1,    -1,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,   111,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,    -1,   122,   123,   124,
     125,   126,    -1,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,    53,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    97,    98,    -1,   100,
      -1,   102,    -1,    -1,   105,   106,   107,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,     3,   117,   118,   119,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    97,    98,    53,   100,    55,   102,    57,
      -1,   105,   106,    -1,    62,    -1,    -1,    -1,    66,   113,
     114,    -1,    -1,   117,   118,   119,    74,     3,    -1,     5,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   102,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,
      -1,    57,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,     3,    -1,     5,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    -1,   100,    -1,   102,    -1,    -1,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   117,   118,    53,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,     3,
      -1,     5,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    97,    98,    -1,
     100,    -1,   102,    -1,    -1,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,   117,   118,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,     3,    -1,     5,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    97,    98,    -1,   100,    -1,   102,    -1,
      -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,    -1,   117,   118,    53,    -1,    55,    -1,    57,
      -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,
      -1,     3,    -1,     5,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    97,
      98,    -1,   100,    -1,   102,    -1,    -1,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,
     118,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,     3,    -1,     5,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,
     102,    -1,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,   113,   114,    -1,    -1,   117,   118,    53,    -1,    55,
      -1,    57,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,     3,    -1,     5,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    97,    98,    -1,   100,    -1,   102,    -1,    -1,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,
      -1,   117,   118,    53,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,     3,
      -1,     5,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    97,    98,    -1,
     100,    -1,   102,    -1,    -1,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,   113,   114,    -1,    -1,   117,   118,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,     3,    -1,   309,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,   331,
      -1,    -1,   334,    97,    98,    -1,   100,   339,   102,    -1,
      -1,   105,   106,   345,    -1,    -1,    -1,    -1,    -1,   113,
     114,     3,    -1,   117,   118,    53,    -1,    55,    -1,    57,
     362,   363,    60,   365,    62,    -1,   368,   369,    66,   371,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,   387,    -1,   389,    86,    -1,
     392,    -1,   394,    91,    92,    -1,    -1,    -1,    -1,    97,
      98,    53,   100,    55,   102,    57,    -1,   105,   106,    -1,
      62,    -1,    -1,    -1,    66,   113,   114,    -1,    -1,   117,
     118,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    -1,    -1,    86,    59,    60,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    -1,    -1,    -1,   100,    -1,
     102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    83,
      -1,   113,   114,    -1,    -1,   117,    -1,    91,    92,    -1,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,   118,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,   131,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     5,    48,    49,    -1,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
       5,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,     5,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,    83,    91,    92,    94,    95,    96,    97,
      98,   105,   107,   118,   138,   140,   150,   151,   152,   153,
     154,     3,    83,     3,    59,   107,   140,   138,     0,   131,
     152,     6,     6,     3,     3,    59,   107,    59,   107,     3,
       4,    10,    11,    15,    19,    27,    45,    46,    53,    55,
      57,    62,    65,    66,    72,    74,    75,    76,    78,    81,
      86,    99,   100,   102,   106,   108,   111,   113,   114,   117,
     119,   121,   122,   123,   124,   125,   126,   128,   129,   132,
     133,   134,   135,   136,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   152,   155,   156,   157,   161,
     162,   163,   165,   166,   168,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   155,     6,     6,     3,
       3,     3,     3,     4,    16,    21,    22,    32,    33,    34,
      35,    36,    37,    38,    39,    48,    49,     3,   175,   175,
     175,   175,   175,   175,   175,     6,   156,   170,     4,     4,
       4,     3,   147,   175,     4,     3,     4,     3,   119,   139,
     140,   141,   138,   140,   141,     3,     8,   164,    16,     7,
     156,    67,   167,    10,    11,    12,    13,    14,    16,    17,
      19,    23,    24,    25,    26,    28,    29,    30,    31,    40,
      41,    42,    43,    44,    45,    46,     7,   155,   155,     6,
       6,     6,     6,   147,   182,   183,     3,   180,   181,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
       5,   155,   121,   175,   175,   175,    19,    19,   175,     4,
     175,     3,   119,   141,     3,   164,   119,   141,     3,   164,
       4,    22,     9,   123,   124,   125,   126,   128,   129,   132,
     133,   134,   135,   149,    19,    20,     6,   156,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,     7,     7,
     155,   155,   155,   155,     5,   183,     7,     4,    19,     5,
       5,     5,     5,   139,   140,   141,   158,   160,     5,     4,
       3,     3,   164,     4,    19,     3,     3,   164,    19,     5,
     158,   175,     9,     3,   155,    18,     7,     7,     7,     7,
     175,   175,   170,     6,   156,     6,     6,    47,   159,   141,
       3,     5,    20,   170,     5,   158,     4,     4,    19,     5,
     158,     4,     4,    19,   159,     5,    22,     7,   175,     5,
      19,   155,    56,    63,   169,   155,   175,     3,   175,   159,
     160,   159,     5,     5,   158,     5,   158,   159,     5,     5,
     158,     5,   158,   159,   175,    19,   175,     7,   175,    18,
       7,    56,    63,     7,   175,   159,   159,     5,   159,     5,
     159,   159,     5,   159,     5,     5,    18,   155,   175,    18,
     159,   159,   159,   159,   170,   155,    54,    18,   155,    54,
      19,   155,    54,    19,    54,    19,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   137,   138,   138,   138,   138,   138,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   141,   141,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   146,   146,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   151,   151,   151,   152,
     152,   153,   153,   153,   153,   154,   154,   154,   154,   155,
     155,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   159,   159,   160,   160,   160,   160,
     161,   161,   161,   162,   162,   163,   163,   163,   163,   164,
     164,   164,   164,   165,   165,   166,   166,   167,   167,   168,
     169,   169,   169,   169,   170,   170,   171,   172,   173,   174,
     175,   175,   175,   175,   175,   175,   175,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   180,   180,
     180,   181,   182,   182,   182,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     1,
       1,     6,     7,     7,     5,     6,     7,     7,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     5,     6,     5,     6,
       6,     7,     6,     7,     7,     8,     7,     8,     7,     8,
       7,     8,     3,     1,     3,     2,     2,     3,     3,     4,
       2,     3,     3,     3,     4,     1,     4,     5,     5,     3,
       5,     1,     3,     1,     2,     7,     5,     4,     2,     7,
       7,     6,     6,     5,     3,     1,     5,     7,     9,     5,
       1,     1,     3,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     3,     3,
       1,     4,     2,     1,     0,     1
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

#line 2826 "src/Parser/parser.c"

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
#line 197 "src/Parser/c-sharp.y"


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
