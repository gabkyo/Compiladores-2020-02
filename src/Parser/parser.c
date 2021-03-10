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

/* All symbols defined below should begin with yy or YY, to avoid
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
#line 4 "src/Parser/c-sharp.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern void yyerror(char const *s);

extern int yylineno;


#line 78 "src/Parser/parser.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
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
    BIT_XOR = 272,
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
    BIT_XOR_ASSIGN = 294,
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
    INNER_PAR = 390,
    HIGH = 391,
    HIGHER = 392
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

/* Copy the second part of user declarations.  */

#line 267 "src/Parser/parser.c" /* yacc.c:358  */

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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8610

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  311
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  670

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

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
     135,   136,   137
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    50,    51,    52,    55,    55,    55,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    62,    63,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    67,    68,    69,    70,    70,    71,    71,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,   139,   139,   139,   139,
     141,   142,   144,   145,   146,   147,   148,   150,   151,   152,
     153,   154,   156,   157,   158,   159,   160,   162,   163,   164,
     165,   166,   168,   169,   170,   171,   191,   191,   191,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   214,   215,
     215,   215,   216,   216,   216,   216,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   246,   250,   251,   264,   265,   266,
     268,   269,   270,   271,   292,   293,   296,   297,   299,   300,
     303,   305,   306,   307,   308,   311,   311,   312,   313,   314,
     315,   319,   320,   323,   324,   327,   329,   332,   333,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   340,   341,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   398,   402,
     403,   404,   405,   409,   409,   412,   413,   414,   416,   416,
     419,   421
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "START_PAR", "END_PAR",
  "START_CURLY", "END_CURLY", "START_BRCKT", "END_BRCKT", "ADD", "SUB",
  "DIV", "MUL", "MOD", "NOT", "QMARK", "BIT_XOR", "COLON", "SEMI", "COMMA",
  "DOT", "ASSIGN", "LESS_THEN", "GREATER_THEN", "BIT_AND", "BIT_OR",
  "BIT_NOT", "EQ", "GEQ", "LEQ", "NOT_EQ", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "BIT_AND_ASSIGN",
  "BIT_OR_ASSIGN", "BIT_XOR_ASSIGN", "LEFT_SHIFT", "RIGHT_SHIFT", "AND",
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
  "USHORT_VAL", "STRING_VAL", "LOW", "INNER_PAR", "HIGH", "HIGHER",
  "$accept", "program", "obj_decl_list", "scope", "modifier_list",
  "modifier", "type", "nullable_type", "simple_type", "numeric_type",
  "integer_type", "floating_type", "matrix_type", "dimensions_def",
  "dimensions_undef", "value", "numeric_val", "obj_decl", "class_father",
  "class_decl", "struct_decl", "interface_decl", "enum_decl", "enum_list",
  "statement_list", "statement", "method_decl_statement", "parameter_list",
  "method_body", "parameter", "operator", "operator_overloading",
  "return_statement", "var_decl_statement", "attr_decl_statement",
  "id_list", "if_else_statement", "if_statement", "else_statement",
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
static const yytype_uint16 yytoknum[] =
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
     385,   386,   387,   388,   389,   390,   391,   392
};
# endif

#define YYPACT_NINF -453

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-453)))

#define YYTABLE_NINF -225

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    8377,  -453,    30,  -453,    66,  -453,  -453,  -453,  -453,    93,
    -453,  -453,  -453,  -453,  -453,  -453,   -40,  -453,  -453,  -453,
    -453,  -453,   100,  -453,  -453,    73,  8377,  8455,  8416,  -453,
    -453,  -453,  -453,  -453,  -453,   103,   118,   170,  -453,   193,
    -453,  -453,   203,   211,   229,   236,  8494,   238,   240,   246,
     255,   -17,  -453,   258,   212,   260,  4905,  4905,   103,   248,
     261,   263,   267,   272,   273,   274,   103,   275,   276,   285,
     277,   290,   291,   292,  -453,  4905,   180,    70,    41,  5773,
    5773,  5773,  5773,  -453,  5773,  5773,  5773,   206,  -453,  -453,
    -453,  -453,   149,  -453,  -453,  1506,  -453,  -453,   297,  -453,
     298,   300,   302,   303,  -453,  -453,   535,  -453,  -453,  5773,
    -453,  -453,   304,   305,  -453,   306,   257,  -453,   307,  -453,
    -453,   224,   308,  -453,     5,   309,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,   854,
    8338,  5512,    12,  -453,   296,  -453,  -453,  -453,  -453,  -453,
    -453,  1637,  -453,  -453,  -453,  -453,  -453,  -453,  -453,   239,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  7814,  -453,  -453,  -453,  -453,  -453,   251,  -453,  -453,
    -453,  1768,   313,   260,  4905,  4905,   103,   314,   316,   317,
     320,   260,  4905,  4905,   103,   321,   322,   323,  1899,  5076,
    -453,   312,  -453,  -453,     3,   310,   535,  7229,   123,   123,
     123,   123,   123,   123,     3,  5773,  4905,  4905,  -453,   161,
    5773,  5773,  5773,  -453,  5773,    63,   325,  8084,  5773,  5773,
    5773,     3,  5773,  5773,  4905,  4905,   326,   743,  5773,   324,
       9,  5858,    16,   318,   315,    96,    25,    62,   743,   153,
    -453,  -453,  -453,  2030,  -453,   234,  5773,  5773,  5773,  5773,
    5773,  5773,  5773,  -453,  5773,  5773,  5773,  5773,  5773,  5773,
    5773,  5773,  5773,  5773,  5773,  5773,  5773,  -453,  -453,  5773,
    5773,  5773,  5422,  5773,  5773,  5773,  5773,  5773,  5773,  5773,
    5773,  5773,  5773,  5773,  -453,  4905,    80,  2161,  2292,   333,
     260,  4905,  4905,  4905,   122,  2423,  2554,   335,   260,  4905,
    4905,  -453,  -453,   327,  -453,  -453,  -453,  7274,  2685,  2816,
     338,  7319,  7859,  7364,  7409,  5036,    62,  7454,  7499,  7544,
    -453,  7589,  7634,  2947,  3078,  5928,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,   339,  7679,
     340,   743,    13,    20,    42,   743,   215,   342,    24,    31,
     328,   217,  5998,  5773,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,   189,   196,  -453,   343,  -453,
     345,  4905,  -453,   199,   252,   252,   123,   123,   123,  7904,
    8255,   397,   397,  8297,  8213,  8339,   397,   397,  8339,    72,
      72,  8171,  8129,  8084,  8084,  8084,  8084,  5773,  8084,  5167,
    -453,  8084,  8084,  8084,  8084,  8084,  8084,  8084,  8084,  8084,
    8084,  8084,  3209,  -453,  -453,  -453,  4905,   155,  3340,  3471,
    3602,  -453,  -453,  -453,  4905,   190,  3733,  3864,  5076,  -453,
    -453,  -453,  5773,   352,  5773,  1506,  3995,  -453,  5298,   202,
    -453,  -453,   356,  -453,  -453,  -453,  -453,    29,  7117,   218,
      55,  -453,  6068,  1506,  6138,   347,   363,   743,    46,   743,
     228,  6208,   365,  -453,  6278,   369,   743,    50,   743,   237,
    -453,    29,    86,  8084,  -453,   234,  -453,  -453,  6348,   353,
    4126,  -453,  5773,  8084,  -453,  -453,  -453,  4257,  -453,  -453,
    -453,  -453,  4388,  -453,  -453,  -453,  -453,  7724,  4905,  7949,
    -453,  4905,  -453,  -453,   368,     7,  4905,  -453,  5773,  -453,
     221,  5553,    29,  7117,    29,    87,  -453,    29,    88,  6418,
    6488,   374,  6558,   376,  -453,    29,    90,  6628,    29,    92,
    6698,   380,  6768,   381,  -453,  -453,    29,  -453,    29,   117,
    5773,  -453,  8084,  -453,  -453,   367,  4519,  5773,  4650,  5773,
     370,    18,  4781,  8084,  5684,  8084,  -453,  -453,  -453,    29,
    -453,    29,    29,   120,    29,   138,  6838,    29,   141,  6908,
    -453,    29,    29,   143,  -453,    29,    29,   146,  6978,    29,
     159,  7048,  -453,  -453,    29,  8084,  -453,  -453,  7769,  -453,
    7994,  4905,  -453,  5773,   372,  -453,  8084,  -453,  -453,  -453,
      29,  -453,    29,    29,   175,  -453,    29,    29,   176,  -453,
    -453,    29,  -453,  -453,    29,    29,   181,  -453,    29,    29,
     184,  -453,  1506,  4905,   982,  8039,  4905,  -453,  -453,  -453,
      29,  -453,  -453,    29,  -453,  -453,  -453,    29,  -453,  -453,
      29,  -453,  1113,  4905,  1244,  -453,  -453,  -453,  -453,  1375
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    21,     0,    14,     0,    25,    27,    22,    26,     0,
       9,    20,    19,    15,    24,     6,     8,     7,    17,    18,
      28,    13,     0,    23,    16,     0,     2,     0,     0,    12,
       4,    86,    87,    88,    89,    91,     0,     0,    10,     0,
       1,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,   118,   118,    91,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,    90,   118,   114,     0,   300,   304,
     304,   304,   304,   138,   304,   304,   304,     0,    36,   251,
      43,    50,     0,   250,    41,   304,    52,    62,     0,    51,
       0,     0,     0,     0,    46,    48,    20,    75,    33,   304,
      42,    44,     0,     0,    38,     0,     0,    61,     0,    47,
      49,     0,    23,    45,     0,     0,    60,    66,    65,    70,
      67,    74,    73,    64,    63,    68,    69,    72,    71,     0,
       0,    12,     0,    30,    29,    37,    39,    40,    31,   239,
     119,   304,   117,   120,   121,   130,   123,   122,   124,   214,
     125,   126,   127,   128,   129,   131,   132,   133,   134,   135,
     136,     0,   247,   241,   242,   243,   244,   246,   245,   248,
     249,   304,     0,     0,   118,   118,    91,     0,     0,     0,
       0,     0,   118,   118,    91,     0,     0,     0,   304,     0,
     111,     0,    35,   237,     0,   300,     0,     0,   269,   270,
     272,   271,   267,   268,     0,   304,   118,   118,   226,     0,
     304,   304,   304,   238,   304,    32,     0,   204,   304,   304,
     304,     0,   304,   304,   118,   118,     0,     0,   304,    32,
       0,     0,     0,     0,     0,     0,   212,    59,     0,     0,
      34,   106,   116,   304,   215,     0,   304,   304,   304,   304,
     304,   304,   304,   137,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   265,   266,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   101,   118,     0,   304,   304,     0,
       0,   118,   118,   118,     0,   304,   304,     0,     0,   118,
     118,    96,   115,   112,   299,   240,   302,     0,   304,   304,
       0,     0,     0,     0,     0,   304,    59,     0,     0,     0,
     301,     0,     0,   304,   304,     0,   168,   169,   171,   170,
     172,   187,   186,   177,   178,   183,   184,   181,   180,   179,
     182,   174,   173,   175,   176,   185,   166,   167,     0,     0,
       0,     0,     0,     0,   212,     0,     0,     0,     0,     0,
     212,     0,     0,   304,    53,    79,    78,    83,    80,    85,
      77,    76,    81,    82,    84,     0,     0,    57,     0,   205,
       0,   118,   219,     0,   276,   277,   279,   278,   280,     0,
     294,   285,   286,   291,   292,   289,   288,   287,   290,   282,
     281,   283,   284,   293,   296,   297,   295,   304,   308,   304,
     306,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     264,   263,   304,   107,   102,    97,   118,     0,   304,   304,
     304,   108,   103,    98,   118,     0,   304,   304,     0,   231,
     232,   225,   304,     0,   304,   304,   304,   252,   304,     0,
     274,   275,     0,   273,   233,   234,   235,     0,     0,     0,
       0,   158,     0,   304,     0,     0,     0,     0,   212,     0,
       0,     0,     0,   207,     0,     0,     0,   212,     0,     0,
     206,     0,     0,   213,    54,     0,    55,    58,     0,   210,
     304,   310,   304,   309,   303,   305,    92,   304,   109,   104,
      99,    93,   304,   110,   105,   100,   113,     0,   118,     0,
     230,   118,   217,   253,   311,     0,   118,   161,   304,   139,
       0,   304,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   208,   141,     0,    56,     0,     0,
     304,   218,   298,    94,    95,     0,   304,   304,   304,   304,
       0,     0,   304,   160,   304,   163,   140,   157,   188,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,     0,   142,   190,     0,   211,   228,   236,     0,   216,
       0,   118,   220,   304,     0,   159,   165,   189,   144,   192,
       0,   149,     0,     0,     0,   151,     0,     0,     0,   146,
     194,     0,   148,   153,     0,     0,     0,   155,     0,     0,
       0,   191,   304,   118,   304,     0,   118,   193,   150,   196,
       0,   152,   198,     0,   195,   154,   200,     0,   156,   202,
       0,   229,   304,   118,   304,   197,   199,   201,   203,   304
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -453,  -453,  -453,     4,    26,    10,   265,  -453,  -453,  -453,
    -453,  -453,  -453,  -248,  -453,  -198,  -104,    40,   -53,  -453,
    -453,  -453,  -453,  -174,   -57,    19,  -453,  -327,   245,  -141,
    -246,  -453,  -453,  -453,  -453,  -231,  -453,  -453,  -453,  -453,
    -453,  -452,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   436,  -453,  -453,  -453,  -453,  -453,  -173,  -453,
      68,  -397,  -453,  -453
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   385,   386,   149,   387,   150,    54,    31,
      32,    33,    34,    77,   151,   152,   153,   470,   529,   471,
     358,   154,   155,   156,   157,   249,   158,   159,   254,   160,
     571,   219,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     419,   420,   179,   180
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     181,   312,   388,   520,    27,   182,   205,   393,   236,   296,
      29,   366,   360,   190,   371,   246,   476,   304,   198,   364,
     247,   536,   505,   478,   247,   612,    28,   485,   247,   372,
      27,   314,    51,    35,   487,   526,    29,    29,    52,   247,
      30,   316,    70,    38,   -32,   492,   481,   373,   527,   -32,
     542,    71,    28,    46,   552,    87,    52,   202,   330,   203,
     532,   505,   204,   569,   373,    72,    41,   325,   373,    36,
     570,   374,   373,    40,   613,   533,   528,   200,   459,   202,
     255,   614,   256,   257,   258,   259,   260,   433,   261,    73,
     201,   556,   579,   581,   237,   591,    37,   595,   361,   370,
     201,   248,   477,    39,   247,   365,   533,   533,   533,   479,
     533,   116,   533,   486,   218,   475,   276,   277,   278,   482,
     488,    53,   604,   279,    55,   620,   437,   297,   298,   441,
     -32,   255,   480,   299,   445,   305,   306,   533,   489,   261,
     533,   307,   201,   622,   244,   535,   626,   538,   631,    29,
      52,   634,   280,   215,   546,   216,   281,   549,   533,   318,
     319,   533,   508,   533,   638,   241,   533,   276,   277,   278,
     252,   559,   389,   390,   279,   201,    56,   333,   334,   533,
     650,   653,   375,   376,   377,   378,   657,   379,   380,   660,
     661,   381,   382,   383,   384,   533,   533,   513,   494,    57,
     252,   533,   199,   280,   533,   496,    58,   281,   501,   495,
     201,   524,   583,   585,    59,   588,   497,   252,    75,   495,
     593,   531,   495,   597,   574,   600,   247,   214,   233,   247,
     234,   541,    60,   543,   483,   390,   490,   390,   432,    61,
     551,    66,   553,    67,   438,   439,   440,   544,   390,    68,
     516,    52,   446,   447,   183,   282,   554,   390,    69,   624,
     255,    74,   628,    76,   258,   259,   260,   184,   261,   185,
     186,   636,   392,   283,   640,   187,   188,   189,   231,   320,
     194,   191,   192,   284,   285,   286,   287,   288,   289,   290,
     291,   193,   417,   195,   196,   197,   276,   277,   278,   292,
     293,   220,   221,   279,   222,   223,   253,   224,   228,   229,
     230,   232,   250,   238,   235,   313,   252,   252,   239,   295,
     300,   367,   301,   302,   252,   252,   303,   308,   309,   310,
     335,   204,   280,   326,   500,   417,   281,   252,   252,   436,
     202,   444,   452,   472,   474,    29,   484,   498,   499,   448,
     373,   539,   252,   252,   375,   376,   377,   378,   518,   379,
     380,   468,   525,   381,   382,   383,   384,   540,    88,   547,
      90,   226,    91,   550,    70,   560,   -54,    94,   586,   507,
     589,    96,    29,    71,   598,   601,   606,   512,   611,    99,
     646,   557,   577,   458,     0,     0,   104,    72,   468,     0,
     105,     0,     0,   108,   242,   255,   245,   256,   257,   258,
     259,   260,     0,   261,   110,     0,   111,     0,     0,     0,
     114,    73,     0,     0,     0,     0,   119,   120,     0,   417,
     123,     0,   368,     0,     0,     0,     0,   272,   273,     0,
       0,   276,   277,   278,     0,     0,     0,     0,   279,     0,
       0,   252,     0,     0,     0,     0,     0,   252,   252,   252,
       0,   566,     0,     0,   568,   252,   252,     0,   417,   572,
       0,   226,     0,     0,   218,   522,     0,   280,    52,     0,
       0,   281,    29,     0,    29,     0,     0,     0,     0,     0,
       0,    29,   218,     0,    29,     0,     0,     0,   468,     0,
     468,     0,     0,     0,     0,     0,   363,   468,    29,   369,
     468,     0,     0,     0,     0,   207,   208,   209,   210,   252,
     211,   212,   213,     0,   468,     0,   252,     0,     0,     0,
       0,   252,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,    29,     0,   227,     0,     0,     0,    29,
      29,     0,    29,     0,   644,     0,     0,    29,     0,   468,
      29,     0,    29,     0,     0,   468,   468,     0,   468,     0,
       0,     0,     0,   468,     0,     0,   468,     0,   468,     0,
       0,     0,     0,     0,     0,   252,   662,   252,    88,   664,
      90,   252,    91,     0,     0,     0,    29,    94,     0,    29,
     469,    96,     0,     0,     0,     0,   669,     0,    29,    99,
       0,    29,   468,     0,     0,   468,   104,     0,     0,     0,
     105,     0,     0,   108,   468,     0,     0,   468,     0,     0,
       0,     0,     0,     0,   110,     0,   111,   469,     0,     0,
     114,     0,     0,     0,     0,     0,   119,   120,     0,     0,
     123,   317,     0,     0,     0,     0,   321,   322,   323,     0,
     324,   218,     0,   252,   327,   328,   329,     0,   331,   332,
       0,     0,     0,     0,   359,     0,     0,     0,     0,     0,
       0,   252,     0,   252,     0,     0,     0,     0,   252,     0,
       0,     0,   394,   395,   396,   397,   398,   399,   400,     0,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,     0,     0,   414,   415,   416,   418,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
       0,     0,     0,   530,     0,     0,   555,   469,     0,   469,
       0,     0,     0,     0,     0,     0,   469,     0,     0,   469,
       0,     0,     0,   336,   337,   338,   339,   340,     0,   341,
     342,   418,     0,   469,     0,     0,   343,   344,   345,   346,
       0,   347,   348,   349,   350,     0,     0,   576,     0,   578,
       0,     0,   580,   351,   352,   353,   354,   355,   356,   357,
     590,     0,     0,   594,     0,     0,     0,     0,   469,     0,
       0,   602,     0,   603,   469,   469,     0,   469,     0,   493,
       0,     0,   469,     0,     0,   469,     0,   469,     0,     0,
       0,     0,     0,     0,   617,     0,   618,   619,     0,   621,
       0,     0,   625,     0,     0,     0,   629,   630,     0,     0,
     632,   633,     0,     0,   637,     0,     0,     0,     0,   641,
       0,   469,     0,   503,   469,   418,     0,   239,     0,     0,
       0,     0,     0,   469,     0,   647,   469,   648,   649,     0,
       0,   651,   652,     0,     0,     0,   654,     0,     0,   655,
     656,     0,     0,   658,   659,     0,     0,     0,   517,     0,
     519,     0,     0,     0,   418,   665,     0,     0,   666,     0,
       0,     0,   667,     0,     1,   668,     0,    88,     0,    90,
       0,    91,     0,    42,     3,     0,    94,     0,     0,     0,
      96,     0,    43,     5,     6,     7,     0,     0,    99,     0,
       0,     0,     0,     8,     0,   104,    44,     0,   562,   105,
      11,     0,   108,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,   110,    20,   111,     0,     0,    21,   114,
      45,     0,     0,     0,   573,   119,   120,   575,    23,   123,
      24,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,  -224,
       0,     0,    80,    81,     0,     0,   605,    82,     0,     0,
       0,    83,     0,   608,     0,   610,     0,     0,     0,    84,
     616,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
       0,     0,     1,     0,    87,    88,    89,    90,  -224,    91,
      92,     2,     3,    93,    94,  -224,     0,    95,    96,   645,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
     103,     8,     0,   104,     9,    10,     0,   105,   106,   107,
     108,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     109,   110,    20,   111,   112,   113,    21,   114,    22,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    24,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   136,   137,   138,    78,    79,     0,     0,
    -223,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,  -223,
      91,    92,     2,     3,    93,    94,  -223,     0,    95,    96,
       0,     4,     5,     6,     7,    97,    98,    99,   100,   101,
     102,   103,     8,     0,   104,     9,    10,     0,   105,   106,
     107,   108,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   109,   110,    20,   111,   112,   113,    21,   114,    22,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    24,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   136,   137,   138,    78,    79,     0,
       0,  -222,     0,     0,    80,    81,     0,     0,     0,    82,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,     0,     1,     0,    87,    88,    89,    90,
    -222,    91,    92,     2,     3,    93,    94,  -222,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,   103,     8,     0,   104,     9,    10,     0,   105,
     106,   107,   108,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   109,   110,    20,   111,   112,   113,    21,   114,
      22,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      24,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,     0,     0,   134,   135,   136,   137,   138,    78,    79,
       0,     0,  -221,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,  -221,    91,    92,     2,     3,    93,    94,  -221,     0,
      95,    96,     0,     4,     5,     6,     7,    97,    98,    99,
     100,   101,   102,   103,     8,     0,   104,     9,    10,     0,
     105,   106,   107,   108,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   109,   110,    20,   111,   112,   113,    21,
     114,    22,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    24,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     0,     0,   134,   135,   136,   137,   138,    78,
      79,     0,   217,     0,     0,     0,    80,    81,     0,     0,
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
      78,    79,     0,     0,   251,     0,     0,    80,    81,     0,
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
     138,    78,    79,     0,     0,   294,     0,     0,    80,    81,
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
     137,   138,    78,    79,     0,     0,   311,     0,     0,    80,
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
     136,   137,   138,    78,    79,     0,   391,     0,     0,     0,
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
     135,   136,   137,   138,    78,    79,     0,     0,   434,     0,
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
     134,   135,   136,   137,   138,    78,    79,     0,     0,   435,
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
     442,     0,     0,    80,    81,     0,     0,     0,    82,     0,
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
       0,   443,     0,     0,    80,    81,     0,     0,     0,    82,
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
       0,     0,   450,     0,     0,    80,    81,     0,     0,     0,
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
      79,     0,     0,   451,     0,     0,    80,    81,     0,     0,
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
      78,    79,     0,     0,   465,     0,     0,    80,    81,     0,
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
     138,    78,    79,     0,     0,   466,     0,     0,    80,    81,
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
     137,   138,    78,    79,     0,     0,   506,     0,     0,    80,
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
     136,   137,   138,    78,    79,     0,     0,   509,     0,     0,
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
     135,   136,   137,   138,    78,    79,     0,     0,   510,     0,
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
     134,   135,   136,   137,   138,    78,    79,     0,     0,   511,
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
     514,     0,     0,    80,    81,     0,     0,     0,    82,     0,
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
       0,   515,     0,     0,    80,    81,     0,     0,     0,    82,
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
       0,   521,     0,     0,     0,    80,    81,     0,     0,     0,
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
      79,     0,     0,   561,     0,     0,    80,    81,     0,     0,
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
      78,    79,     0,     0,   563,     0,     0,    80,    81,     0,
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
     138,    78,    79,     0,     0,   564,     0,     0,    80,    81,
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
     137,   138,    78,    79,     0,     0,   607,     0,     0,    80,
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
     136,   137,   138,    78,    79,     0,     0,   609,     0,     0,
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
     135,   136,   137,   138,    78,    79,     0,     0,   615,     0,
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
     132,   133,     0,     0,   134,   135,   136,   137,   138,   205,
      79,   457,     0,     0,     0,     0,    80,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     1,     0,    87,     0,
      89,     0,     0,     0,     0,     0,     3,    93,     0,     0,
       0,     0,     0,     0,     0,     5,     6,     7,    97,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
       0,     0,   106,   107,     0,     0,    12,    13,    14,     0,
       0,     0,    18,    19,     0,     0,    20,     0,   112,   113,
      21,     0,     0,     0,   116,   117,   118,     0,    97,     0,
      23,     0,    24,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   107,     0,   134,   135,   136,   137,   138,
     205,    79,   504,     0,     0,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,    84,   126,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   136,   137,   138,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
       0,    89,     0,     0,     0,     0,     0,     3,    93,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,    97,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,   106,   107,     0,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,     0,    20,     0,   112,
     113,    21,     0,     0,     0,   116,   117,   118,     0,     0,
       0,    23,     0,    24,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,     0,     0,   134,   135,   136,   137,
     138,   205,    79,   523,     0,     0,     0,     0,    80,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    86,     0,     0,     0,     1,     0,
      87,     0,    89,     0,     0,     0,     0,     0,     3,    93,
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
      97,     0,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,   106,   107,     0,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,     0,    20,     0,
     112,   113,    21,     0,     0,     0,   116,   117,   118,     0,
       0,     0,    23,     0,    24,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   205,    79,   134,   135,   136,
     137,   138,    80,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
       0,     0,     1,     0,    87,     0,    89,     0,     0,     0,
       0,     0,     3,    93,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,    97,     0,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,   106,   107,
       0,     0,    12,    13,    14,   239,     0,     0,    18,    19,
       0,     0,    20,     0,   112,   113,    21,     0,     0,     0,
     116,   117,   118,     0,     0,     0,    23,     0,    24,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   136,   137,   138,   205,    79,  -162,     0,
       0,     0,     0,    80,    81,    88,     0,    90,    82,    91,
       0,     0,     0,  -162,    94,     0,     0,     0,    96,     0,
      84,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,   104,     0,     0,     0,   105,    85,    86,
     108,     0,     0,     0,     0,    87,     0,    89,     0,     0,
       0,   110,     0,   111,    93,     0,     0,   114,     0,     0,
       0,     0,     0,   119,   120,    97,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,     0,     0,     0,
       0,   116,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   136,   137,   138,   205,    79,  -164,
       0,     0,     0,     0,    80,    81,     0,     0,     0,    82,
       0,     0,     0,     0,  -164,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,     0,     0,     0,    87,     0,    89,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     206,   107,     0,     0,     0,     0,   205,    79,     0,     0,
       0,     0,     0,    80,    81,     0,   112,   113,    82,     0,
       0,     0,   116,   117,   118,     0,     0,     0,     0,     0,
      84,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,     0,     0,   134,   135,   136,   137,   138,    85,    86,
       0,     0,     0,     0,     0,    87,     0,    89,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
     107,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,     0,     0,     0,
       0,   116,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   136,   137,   138,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,    62,     3,     0,
      94,     0,     0,     0,    96,     0,    63,     5,     6,     7,
       0,   239,    99,   467,     0,     0,     0,     8,     0,   104,
      64,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,    65,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,   362,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   491,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   534,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   537,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   545,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   548,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   558,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   582,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   584,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   587,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   592,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   596,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   599,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   623,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   627,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   635,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
       0,   239,    99,   639,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,     0,     0,    96,     0,     0,     5,     6,     7,
     239,     0,    99,     0,     0,     0,     0,     8,     0,   104,
       0,     0,     0,   105,    11,     0,   108,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   110,    20,   111,
       0,     0,    21,   114,     0,     0,     0,     0,     0,   119,
     120,     0,    23,   123,    24,     0,     0,     1,     0,     0,
      88,     0,    90,     0,    91,     0,     0,     3,     0,    94,
       0,     0,     0,    96,     0,     0,     5,     6,     7,     0,
       0,    99,     0,     0,     0,     0,     8,     0,   104,     0,
       0,     0,   105,    11,     0,   108,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   110,    20,   111,     0,
       0,    21,   114,     0,     0,     0,     0,     0,   119,   120,
       0,    23,   123,    24,   315,     0,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,     0,     0,     0,     0,     0,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   449,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   453,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   455,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   456,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   460,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   461,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   462,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   463,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   464,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   473,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,   565,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,   642,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,   263,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,   454,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,   502,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,   567,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,   643,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,   663,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
     279,     0,   255,     0,   256,   257,   258,   259,   260,     0,
     261,   262,     0,     0,     0,     0,     0,   264,   265,   266,
     267,     0,   268,   269,   270,   271,     0,     0,     0,   280,
       0,     0,     0,   281,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,   279,     0,   255,     0,   256,
     257,   258,   259,   260,     0,   261,   262,     0,     0,     0,
       0,     0,   264,   265,   266,   267,     0,   268,   269,   270,
     271,     0,     0,     0,   280,     0,     0,     0,   281,   272,
     273,   274,     0,   276,   277,   278,     0,     0,     0,   255,
     279,   256,   257,   258,   259,   260,     0,   261,   262,     0,
       0,     0,     0,     0,   264,   265,   266,   267,     0,   268,
     269,   270,   271,     0,     0,     0,     0,     0,     0,   280,
       0,   272,   273,   281,     0,   276,   277,   278,     0,     0,
       0,   255,   279,   256,   257,   258,   259,   260,     0,   261,
     262,     0,     0,     0,     0,     0,   264,   265,   266,     0,
       0,   268,   269,   270,   271,     0,     0,     0,     0,     0,
       0,   280,     0,   272,   273,   281,     0,   276,   277,   278,
       0,     0,     0,   255,   279,   256,   257,   258,   259,   260,
       0,   261,     0,     0,     0,     0,     0,     0,   264,   265,
     266,     0,     0,   268,   269,   270,   271,     0,     0,     0,
       0,     0,     0,   280,     0,   272,   273,   281,     0,   276,
     277,   278,     0,     0,     0,   255,   279,   256,   257,   258,
     259,   260,     0,   261,     0,     0,     0,     0,     0,     0,
     264,   265,     0,     0,     0,   268,   269,   270,   271,     0,
       0,     0,     0,     0,     0,   280,     0,   272,   273,   281,
       0,   276,   277,   278,     0,     0,     0,   255,   279,   256,
     257,   258,   259,   260,     0,   261,     0,     0,     0,     0,
       0,     0,   264,   265,     0,     0,     0,     0,   269,   270,
       0,     0,     0,     0,     0,     0,     0,   280,     0,   272,
     273,   281,     0,   276,   277,   278,     0,     0,     1,     0,
     279,     0,     0,     0,     0,     0,     0,    47,     3,     0,
       0,     0,     0,     0,     0,     0,    48,     5,     6,     7,
       0,     0,     0,     0,     0,     0,     0,     8,     0,   280,
      49,    10,     0,   281,    11,     0,     0,     1,    12,    13,
      14,    15,    16,    17,    18,    19,     2,     3,    20,     0,
       0,     0,    21,     0,    50,     4,     5,     6,     7,     0,
       0,     0,    23,     0,    24,   243,     8,     0,     0,     9,
      10,     0,     0,    11,     0,     0,     1,    12,    13,    14,
      15,    16,    17,    18,    19,    47,     3,    20,     0,     0,
       0,    21,     0,    22,    48,     5,     6,     7,     0,     0,
       0,    23,     0,    24,     0,     8,     0,     0,    49,    10,
       0,     0,    11,     0,     0,     1,    12,    13,    14,    15,
      16,    17,    18,    19,    42,     3,    20,     0,     0,     0,
      21,     0,    50,    43,     5,     6,     7,     0,     0,     0,
      23,     0,    24,     0,     8,     0,     0,    44,     0,     0,
       0,    11,     0,     0,     1,    12,    13,    14,     0,     0,
       0,    18,    19,    62,     3,    20,     0,     0,     0,    21,
       0,    45,    63,     5,     6,     7,     0,     0,     0,    23,
       0,    24,     0,     8,     0,     0,    64,     0,     0,     0,
      11,     0,     0,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,     0,    20,     0,     0,     0,    21,     0,
      65,     0,     0,     0,     0,     0,     0,     0,    23,     0,
      24
};

static const yytype_int16 yycheck[] =
{
      57,   199,   248,   455,     0,    58,     3,   255,     3,   183,
       0,   242,     3,    66,   245,     3,     3,   191,    75,     3,
       8,   473,   419,     3,     8,     7,     0,     3,     8,     4,
      26,   204,    28,     3,     3,     6,    26,    27,    28,     8,
       0,   214,    59,    83,     3,   372,     4,    22,    19,     8,
       4,    68,    26,    27,     4,    52,    46,    16,   231,    18,
       5,   458,    21,    56,    22,    82,    26,     4,    22,     3,
      63,     9,    22,     0,    56,    20,    47,     7,   326,    16,
       8,    63,    10,    11,    12,    13,    14,     7,    16,   106,
      20,     5,     5,     5,    89,     5,     3,     5,    89,     3,
      20,    89,    89,     3,     8,    89,    20,    20,    20,    89,
      20,   108,    20,    89,    95,   361,    44,    45,    46,   365,
      89,    18,     5,    51,     6,     5,   300,   184,   185,     7,
      89,     8,   363,   186,   308,   192,   193,    20,   369,    16,
      20,   194,    20,     5,   140,   472,     5,   474,     5,   139,
     140,     5,    80,     4,   481,     6,    84,   484,    20,   216,
     217,    20,     7,    20,     5,   139,    20,    44,    45,    46,
     151,   498,    19,    20,    51,    20,     6,   234,   235,    20,
       5,     5,   120,   121,   122,   123,     5,   125,   126,     5,
     642,   129,   130,   131,   132,    20,    20,     7,     9,     6,
     181,    20,    22,    80,    20,     9,     3,    84,     9,    20,
      20,     9,   539,   540,     3,   542,    20,   198,     6,    20,
     547,     3,    20,   550,     3,   552,     8,    21,     4,     8,
       6,   477,     3,   479,    19,    20,    19,    20,   295,     3,
     486,     3,   488,     3,   301,   302,   303,    19,    20,     3,
     448,   241,   309,   310,     6,     4,    19,    20,     3,   586,
       8,     3,   589,     3,    12,    13,    14,     6,    16,     6,
       3,   598,   253,    22,   601,     3,     3,     3,    21,   118,
       3,     6,     6,    32,    33,    34,    35,    36,    37,    38,
      39,     6,   282,     3,     3,     3,    44,    45,    46,    48,
      49,     4,     4,    51,     4,     3,    67,     4,     4,     4,
       4,     4,    16,     4,     6,     3,   297,   298,     3,     6,
       6,     3,     6,     6,   305,   306,     6,     6,     6,     6,
       4,    21,    80,     8,   391,   325,    84,   318,   319,     6,
      16,     6,     4,     4,     4,   335,     4,     4,     3,    22,
      22,     4,   333,   334,   120,   121,   122,   123,     6,   125,
     126,   335,     6,   129,   130,   131,   132,     4,    53,     4,
      55,   106,    57,     4,    59,    22,     8,    62,     4,   436,
       4,    66,   372,    68,     4,     4,    19,   444,    18,    74,
      18,   495,   533,   325,    -1,    -1,    81,    82,   372,    -1,
      85,    -1,    -1,    88,   139,     8,   141,    10,    11,    12,
      13,    14,    -1,    16,    99,    -1,   101,    -1,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,   111,   112,    -1,   419,
     115,    -1,   117,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,   432,    -1,    -1,    -1,    -1,    -1,   438,   439,   440,
      -1,   518,    -1,    -1,   521,   446,   447,    -1,   458,   526,
      -1,   206,    -1,    -1,   455,   456,    -1,    80,   468,    -1,
      -1,    84,   472,    -1,   474,    -1,    -1,    -1,    -1,    -1,
      -1,   481,   473,    -1,   484,    -1,    -1,    -1,   472,    -1,
     474,    -1,    -1,    -1,    -1,    -1,   241,   481,   498,   244,
     484,    -1,    -1,    -1,    -1,    79,    80,    81,    82,   500,
      84,    85,    86,    -1,   498,    -1,   507,    -1,    -1,    -1,
      -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,   533,    -1,   109,    -1,    -1,    -1,   539,
     540,    -1,   542,    -1,   611,    -1,    -1,   547,    -1,   533,
     550,    -1,   552,    -1,    -1,   539,   540,    -1,   542,    -1,
      -1,    -1,    -1,   547,    -1,    -1,   550,    -1,   552,    -1,
      -1,    -1,    -1,    -1,    -1,   566,   643,   568,    53,   646,
      55,   572,    57,    -1,    -1,    -1,   586,    62,    -1,   589,
     335,    66,    -1,    -1,    -1,    -1,   663,    -1,   598,    74,
      -1,   601,   586,    -1,    -1,   589,    81,    -1,    -1,    -1,
      85,    -1,    -1,    88,   598,    -1,    -1,   601,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,   101,   372,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
     115,   215,    -1,    -1,    -1,    -1,   220,   221,   222,    -1,
     224,   642,    -1,   644,   228,   229,   230,    -1,   232,   233,
      -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,    -1,    -1,
      -1,   662,    -1,   664,    -1,    -1,    -1,    -1,   669,    -1,
      -1,    -1,   256,   257,   258,   259,   260,   261,   262,    -1,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
      -1,    -1,    -1,   468,    -1,    -1,   491,   472,    -1,   474,
      -1,    -1,    -1,    -1,    -1,    -1,   481,    -1,    -1,   484,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,   325,    -1,   498,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,   532,    -1,   534,
      -1,    -1,   537,    40,    41,    42,    43,    44,    45,    46,
     545,    -1,    -1,   548,    -1,    -1,    -1,    -1,   533,    -1,
      -1,   556,    -1,   558,   539,   540,    -1,   542,    -1,   373,
      -1,    -1,   547,    -1,    -1,   550,    -1,   552,    -1,    -1,
      -1,    -1,    -1,    -1,   579,    -1,   581,   582,    -1,   584,
      -1,    -1,   587,    -1,    -1,    -1,   591,   592,    -1,    -1,
     595,   596,    -1,    -1,   599,    -1,    -1,    -1,    -1,   604,
      -1,   586,    -1,   417,   589,   419,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   598,    -1,   620,   601,   622,   623,    -1,
      -1,   626,   627,    -1,    -1,    -1,   631,    -1,    -1,   634,
     635,    -1,    -1,   638,   639,    -1,    -1,    -1,   452,    -1,
     454,    -1,    -1,    -1,   458,   650,    -1,    -1,   653,    -1,
      -1,    -1,   657,    -1,    50,   660,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    -1,   502,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    99,   100,   101,    -1,    -1,   104,   105,
     106,    -1,    -1,    -1,   528,   111,   112,   531,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,   560,    15,    -1,    -1,
      -1,    19,    -1,   567,    -1,   569,    -1,    -1,    -1,    27,
     574,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    65,    66,   613,
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
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
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
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    81,    82,    83,    -1,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,     3,
       4,    -1,     6,    -1,    -1,    -1,    10,    11,    -1,    -1,
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
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    -1,    -1,   100,    -1,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,    -1,    72,    -1,
     114,    -1,   116,    -1,    -1,   119,   120,   121,   122,   123,
     124,   125,   126,    87,    -1,   129,   130,   131,   132,   133,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,   119,   120,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,    -1,    -1,
      -1,   114,    -1,   116,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,     3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,    -1,
      -1,    -1,   114,    -1,   116,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,     3,     4,   129,   130,   131,
     132,   133,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
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
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      87,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
      -1,   108,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      82,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,   117,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
      -1,     3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,
       3,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,     5,    -1,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,     5,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,     5,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,     5,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,     5,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,     5,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,     5,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,     5,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,    -1,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    84,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,
      41,    42,    -1,    44,    45,    46,    -1,    -1,    -1,     8,
      51,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    40,    41,    84,    -1,    44,    45,    46,    -1,    -1,
      -1,     8,    51,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    40,    41,    84,    -1,    44,    45,    46,
      -1,    -1,    -1,     8,    51,    10,    11,    12,    13,    14,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    40,    41,    84,    -1,    44,
      45,    46,    -1,    -1,    -1,     8,    51,    10,    11,    12,
      13,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    40,    41,    84,
      -1,    44,    45,    46,    -1,    -1,    -1,     8,    51,    10,
      11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    40,
      41,    84,    -1,    44,    45,    46,    -1,    -1,    50,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    80,
      82,    83,    -1,    84,    86,    -1,    -1,    50,    90,    91,
      92,    93,    94,    95,    96,    97,    59,    60,   100,    -1,
      -1,    -1,   104,    -1,   106,    68,    69,    70,    71,    -1,
      -1,    -1,   114,    -1,   116,   117,    79,    -1,    -1,    82,
      83,    -1,    -1,    86,    -1,    -1,    50,    90,    91,    92,
      93,    94,    95,    96,    97,    59,    60,   100,    -1,    -1,
      -1,   104,    -1,   106,    68,    69,    70,    71,    -1,    -1,
      -1,   114,    -1,   116,    -1,    79,    -1,    -1,    82,    83,
      -1,    -1,    86,    -1,    -1,    50,    90,    91,    92,    93,
      94,    95,    96,    97,    59,    60,   100,    -1,    -1,    -1,
     104,    -1,   106,    68,    69,    70,    71,    -1,    -1,    -1,
     114,    -1,   116,    -1,    79,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    50,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    59,    60,   100,    -1,    -1,    -1,   104,
      -1,   106,    68,    69,    70,    71,    -1,    -1,    -1,   114,
      -1,   116,    -1,    79,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    59,    60,    68,    69,    70,    71,    79,    82,
      83,    86,    90,    91,    92,    93,    94,    95,    96,    97,
     100,   104,   106,   114,   116,   139,   140,   141,   142,   143,
     155,   157,   158,   159,   160,     3,     3,     3,    83,     3,
       0,   155,    59,    68,    82,   106,   142,    59,    68,    82,
     106,   141,   143,    18,   156,     6,     6,     6,     3,     3,
       3,     3,    59,    68,    82,   106,     3,     3,     3,     3,
      59,    68,    82,   106,     3,     6,     3,   161,     3,     4,
      10,    11,    15,    19,    27,    45,    46,    52,    53,    54,
      55,    57,    58,    61,    62,    65,    66,    72,    73,    74,
      75,    76,    77,    78,    81,    85,    86,    87,    88,    98,
      99,   101,   102,   103,   105,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   129,   130,   131,   132,   133,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   153,
     155,   162,   163,   164,   169,   170,   171,   172,   174,   175,
     177,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   200,
     201,   162,   156,     6,     6,     6,     3,     3,     3,     3,
     156,     6,     6,     6,     3,     3,     3,     3,   162,    22,
       7,    20,    16,    18,    21,     3,    86,   190,   190,   190,
     190,   190,   190,   190,    21,     4,     6,     6,   163,   179,
       4,     4,     4,     3,     4,     3,   144,   190,     4,     4,
       4,    21,     4,     4,     6,     6,     3,    89,     4,     3,
     117,   142,   144,   117,   141,   144,     3,     8,    89,   173,
      16,     7,   163,    67,   176,     8,    10,    11,    12,    13,
      14,    16,    17,    19,    23,    24,    25,    26,    28,    29,
      30,    31,    40,    41,    42,    43,    44,    45,    46,    51,
      80,    84,     4,    22,    32,    33,    34,    35,    36,    37,
      38,    39,    48,    49,     7,     6,   161,   162,   162,   156,
       6,     6,     6,     6,   161,   162,   162,   156,     6,     6,
       6,     7,   153,     3,   196,     5,   196,   190,   162,   162,
     118,   190,   190,   190,   190,     4,     8,   190,   190,   190,
     196,   190,   190,   162,   162,     4,    10,    11,    12,    13,
      14,    16,    17,    23,    24,    25,    26,    28,    29,    30,
      31,    40,    41,    42,    43,    44,    45,    46,   168,   190,
       3,    89,   117,   144,     3,    89,   173,     3,   117,   144,
       3,   173,     4,    22,     9,   120,   121,   122,   123,   125,
     126,   129,   130,   131,   132,   151,   152,   154,   168,    19,
      20,     6,   163,   151,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   143,   190,   198,
     199,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   162,     7,     7,     7,     6,   161,   162,   162,
     162,     7,     7,     7,     6,   161,   162,   162,    22,     5,
       7,     7,     4,     5,    19,     5,     5,     5,   198,   151,
       5,     5,     5,     5,     5,     7,     7,     5,   142,   144,
     165,   167,     4,     5,     4,   168,     3,    89,     3,    89,
     173,     4,   168,    19,     4,     3,    89,     3,    89,   173,
      19,     5,   165,   190,     9,    20,     9,    20,     4,     3,
     162,     9,    18,   190,     5,   199,     7,   162,     7,     7,
       7,     7,   162,     7,     7,     7,   153,   190,     6,   190,
     179,     6,   163,     5,     9,     6,     6,    19,    47,   166,
     144,     3,     5,    20,     5,   165,   179,     5,   165,     4,
       4,   168,     4,   168,    19,     5,   165,     4,     5,   165,
       4,   168,     4,   168,    19,   166,     5,   154,     5,   165,
      22,     7,   190,     7,     7,     5,   162,    19,   162,    56,
      63,   178,   162,   190,     3,   190,   166,   167,   166,     5,
     166,     5,     5,   165,     5,   165,     4,     5,   165,     4,
     166,     5,     5,   165,   166,     5,     5,   165,     4,     5,
     165,     4,   166,   166,     5,   190,    19,     7,   190,     7,
     190,    18,     7,    56,    63,     7,   190,   166,   166,   166,
       5,   166,     5,     5,   165,   166,     5,     5,   165,   166,
     166,     5,   166,   166,     5,     5,   165,   166,     5,     5,
     165,   166,     5,    18,   162,   190,    18,   166,   166,   166,
       5,   166,   166,     5,   166,   166,   166,     5,   166,   166,
       5,   179,   162,    18,   162,   166,   166,   166,   166,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   138,   139,   140,   140,   140,   141,   141,   141,   141,
     141,   142,   142,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   144,   144,   144,   145,   145,   146,   146,   146,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   150,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   155,   155,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   158,   158,   158,
     158,   158,   159,   159,   159,   159,   159,   160,   160,   160,
     160,   160,   161,   161,   161,   161,   162,   162,   162,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   166,
     166,   166,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   170,   171,   171,   172,   172,   172,
     173,   173,   173,   173,   174,   174,   175,   175,   176,   176,
     177,   178,   178,   178,   178,   179,   179,   180,   181,   182,
     183,   184,   184,   185,   185,   186,   187,   188,   189,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   195,   196,
     196,   196,   196,   197,   197,   198,   198,   198,   199,   199,
     200,   201
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     3,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       8,     9,     8,     9,     2,     3,     4,     4,     5,     5,
       3,     5,     1,     3,     1,     2,     7,     5,     4,     2,
       7,     5,     4,     4,     3,     3,     1,     5,     7,     9,
       5,     4,     4,     4,     4,     4,     7,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     3,
       1,     3,     3,     4,     0,     2,     1,     0,     1,     2,
       4,     5
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
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
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
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
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
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
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
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
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
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
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
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


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
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

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
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
        
#line 3652 "src/Parser/parser.c" /* yacc.c:1646  */
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
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 423 "src/Parser/c-sharp.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
