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
    TERNARY_IF = 390,
    INNER_PAR = 391,
    HIGH = 392,
    HIGHER = 393
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

#line 268 "src/Parser/parser.c" /* yacc.c:358  */

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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7882

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  311
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  671

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   393

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
     135,   136,   137,   138
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    52,    53,    56,    56,    56,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      61,    61,    61,    61,    61,    62,    62,    63,    63,    63,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    68,    69,    70,    71,    71,    72,
      72,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,   140,   140,   140,
     140,   142,   143,   145,   146,   147,   148,   149,   151,   152,
     153,   154,   155,   157,   158,   159,   160,   161,   163,   164,
     165,   166,   167,   169,   170,   171,   172,   192,   192,   192,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   215,
     216,   216,   216,   217,   217,   217,   217,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   240,   244,   245,   258,   259,
     260,   262,   263,   264,   265,   286,   287,   290,   291,   293,
     294,   297,   299,   300,   301,   302,   305,   305,   306,   307,
     308,   309,   313,   314,   317,   318,   321,   323,   326,   327,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   334,   335,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   392,
     396,   397,   398,   399,   403,   406,   407,   408,   410,   410,
     413,   415
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
  "USHORT_VAL", "STRING_VAL", "LOW", "TERNARY_IF", "INNER_PAR", "HIGH",
  "HIGHER", "$accept", "program", "obj_decl_list", "scope",
  "modifier_list", "modifier", "type", "nullable_type", "simple_type",
  "numeric_type", "integer_type", "floating_type", "matrix_type",
  "dimensions_def", "dimensions_undef", "value", "numeric_val", "obj_decl",
  "class_father", "class_decl", "struct_decl", "interface_decl",
  "enum_decl", "enum_list", "statement_list", "statement",
  "method_decl_statement", "parameter_list", "method_body", "parameter",
  "operator", "operator_overloading", "return_statement",
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
     385,   386,   387,   388,   389,   390,   391,   392,   393
};
# endif

#define YYPACT_NINF -454

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-454)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7649,  -454,    38,  -454,  -454,    71,  -454,  -454,  -454,  -454,
      75,  -454,  -454,  -454,  -454,  -454,  -454,   -39,  -454,  -454,
    -454,  -454,  -454,   101,  -454,  -454,    90,  7649,  7727,  7688,
    -454,  -454,  -454,  -454,  -454,  -454,   116,   147,   192,  -454,
     205,  -454,  -454,   141,   223,   227,   234,  7766,   236,   238,
     246,   255,   -17,  -454,   260,   258,   263,  4381,  4381,   116,
     261,   262,   267,   266,   280,   281,   287,   116,   285,   288,
     289,   290,   293,   294,   296,  -454,  4381,   225,    43,    12,
    5022,  5022,  5022,  5022,  -454,  5022,  5022,  5022,   249,  -454,
    -454,  -454,  -454,    80,  -454,  -454,   982,  -454,  -454,   297,
    -454,   299,   301,   303,   304,  -454,  -454,    11,  -454,  -454,
    5022,  -454,  -454,   305,   306,  -454,   308,   300,  -454,   314,
    -454,  -454,   114,   309,  -454,     4,   316,  -454,  -454,  -454,
    -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,
     854,  7610,   311,    14,  -454,   307,  -454,  -454,  -454,  -454,
    -454,  -454,  1113,  -454,  -454,  -454,  -454,  -454,  -454,  -454,
     265,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,
    -454,  -454,  7063,  -454,  -454,  -454,  -454,  -454,   597,  -454,
    -454,  -454,  1244,   322,   263,  4381,  4381,   116,   323,   325,
     330,   333,   263,  4381,  4381,   116,   334,   335,   336,  1375,
     156,  -454,   319,  -454,  -454,     3,   326,    11,  6478,   122,
     122,   122,   122,   122,   122,     3,  5022,  4381,  4381,  -454,
     230,  5022,  5022,  5022,  -454,  5022,    42,   341,  7333,  5022,
    5022,  5022,     3,  5022,  5022,  4381,  4381,   339,   743,  5022,
     338,     8,  5107,    16,   352,   245,    64,    35,    62,   743,
     132,  -454,  -454,  -454,  1506,  -454,   310,  5022,  5022,  5022,
    5022,  5022,  5022,  5022,  -454,  5022,  5022,  5022,  5022,  5022,
    5022,  5022,  5022,  5022,  5022,  5022,  5022,  5022,  -454,  -454,
    5022,  5022,  5022,  4898,  5022,  5022,  5022,  5022,  5022,  5022,
    5022,  5022,  5022,  5022,  5022,  -454,  4381,    87,  1637,  1768,
     353,   263,  4381,  4381,  4381,    88,  1899,  2030,   357,   263,
    4381,  4381,  -454,  -454,   343,  -454,  -454,  -454,  6523,  2161,
    2292,   354,  6568,  7108,  6613,  6658,  4512,    62,  6703,  6748,
    6793,  -454,  6838,  6883,  2423,  2554,  5177,  -454,  -454,  -454,
    -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,
    -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,   363,
    6928,   365,   743,    20,    32,    57,   743,   216,   366,    24,
      40,   350,   235,  5247,  5022,  -454,  -454,  -454,  -454,  -454,
    -454,  -454,  -454,  -454,  -454,  -454,   152,   188,  -454,   370,
    -454,   372,  4381,  -454,   196,   401,   401,   122,   122,   122,
    7153,  7504,  7611,  7611,  7546,  7462,  7588,  7611,  7611,  7588,
    5034,  5034,  7420,  7378,  7333,  7333,  7333,  7333,  5022,  7333,
    4643,  -454,  7333,  7333,  7333,  7333,  7333,  7333,  7333,  7333,
    7333,  7333,  7333,  2685,  -454,  -454,  -454,  4381,   135,  2816,
    2947,  3078,  -454,  -454,  -454,  4381,   155,  3209,  3340,   156,
    -454,  -454,  -454,  5022,   374,  5022,   982,  3471,  -454,  4774,
     201,  -454,  -454,   375,  -454,  -454,  -454,  -454,    41,  6366,
     224,    78,  -454,  5317,   982,  5387,   379,   380,   743,    58,
     743,   237,  5457,   382,  -454,  5527,   384,   743,    65,   743,
     241,  -454,    41,    86,  7333,  -454,   310,  -454,  -454,  5597,
     356,  3602,  -454,  5022,  7333,  -454,  -454,  -454,  3733,  -454,
    -454,  -454,  -454,  3864,  -454,  -454,  -454,  -454,  6973,  4381,
    7198,  -454,  4381,  -454,  -454,   368,   113,  4381,  -454,  5022,
    -454,   226,  5022,    41,  6366,    41,    97,  -454,    41,   119,
    5667,  5737,   385,  5807,   386,  -454,    41,   136,  5877,    41,
     138,  5947,   387,  6017,   389,  -454,  -454,    41,  -454,    41,
     143,  5022,  -454,  7333,  -454,  -454,   376,  3995,  5022,  4126,
    5022,   383,    19,  4257,  7333,  5022,  7333,  -454,  -454,  -454,
      41,  -454,    41,    41,   159,    41,   169,  6087,    41,   175,
    6157,  -454,    41,    41,   176,  -454,    41,    41,   181,  6227,
      41,   194,  6297,  -454,  -454,    41,  7333,  -454,  -454,  7018,
    -454,  7243,  4381,  -454,  5022,   390,  -454,  7333,  -454,  -454,
    -454,    41,  -454,    41,    41,   198,  -454,    41,    41,   199,
    -454,  -454,    41,  -454,  -454,    41,    41,   202,  -454,    41,
      41,   204,  -454,   982,  4381,  4381,  7288,  4381,  -454,  -454,
    -454,    41,  -454,  -454,    41,  -454,  -454,  -454,    41,  -454,
    -454,    41,  -454,  4381,  4381,  4381,  -454,  -454,  -454,  -454,
    4381
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    21,     0,    14,    29,     0,    25,    27,    22,    26,
       0,     9,    20,    19,    15,    24,     6,     8,     7,    17,
      18,    28,    13,     0,    23,    16,     0,     2,     0,     0,
      12,     4,    87,    88,    89,    90,    92,     0,     0,    10,
       0,     1,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,   119,   119,    92,
       0,     0,     0,     0,     0,     0,     0,    92,     0,     0,
       0,     0,     0,     0,     0,    91,   119,   115,     0,   301,
       0,     0,     0,     0,   139,     0,     0,     0,     0,    37,
     252,    44,    51,     0,   251,    42,     0,    53,    63,     0,
      52,     0,     0,     0,     0,    47,    49,    20,    76,    34,
       0,    43,    45,     0,     0,    39,     0,     0,    62,     0,
      48,    50,     0,    23,    46,     0,     0,    61,    67,    66,
      71,    68,    75,    74,    65,    64,    69,    70,    73,    72,
       0,     0,    12,     0,    31,    30,    38,    40,    41,    32,
     240,   120,     0,   118,   121,   122,   131,   124,   123,   125,
     215,   126,   127,   128,   129,   130,   132,   133,   134,   135,
     136,   137,     0,   248,   242,   243,   244,   245,   247,   246,
     249,   250,     0,     0,     0,   119,   119,    92,     0,     0,
       0,     0,     0,   119,   119,    92,     0,     0,     0,     0,
       0,   112,     0,    36,   238,     0,   301,     0,     0,   270,
     271,   273,   272,   268,   269,     0,     0,   119,   119,   227,
       0,     0,     0,     0,   239,     0,    33,     0,   205,     0,
       0,     0,     0,     0,     0,   119,   119,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,   213,    60,     0,
       0,    35,   107,   117,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,   267,
       0,     0,     0,   307,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   119,     0,     0,     0,
       0,     0,   119,   119,   119,     0,     0,     0,     0,     0,
     119,   119,    97,   116,   113,   300,   241,   303,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,   302,     0,     0,     0,     0,     0,   169,   170,   172,
     171,   173,   188,   187,   178,   179,   184,   185,   182,   181,
     180,   183,   175,   174,   176,   177,   186,   167,   168,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,   213,     0,     0,     0,    54,    80,    79,    84,    81,
      86,    78,    77,    82,    83,    85,     0,     0,    58,     0,
     206,     0,   119,   220,     0,   277,   278,   280,   279,   281,
       0,   295,   286,   287,   292,   293,   290,   289,   288,   291,
     283,   282,   284,   285,   294,   297,   298,   296,     0,   308,
       0,   306,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   265,   264,     0,   108,   103,    98,   119,     0,     0,
       0,     0,   109,   104,    99,   119,     0,     0,     0,     0,
     232,   233,   226,     0,     0,     0,     0,     0,   253,     0,
       0,   275,   276,     0,   274,   234,   235,   236,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,   213,
       0,     0,     0,     0,   208,     0,     0,     0,   213,     0,
       0,   207,     0,     0,   214,    55,     0,    56,    59,     0,
     211,     0,   310,     0,   309,   304,   305,    93,     0,   110,
     105,   100,    94,     0,   111,   106,   101,   114,     0,   119,
       0,   231,   119,   218,   254,   311,     0,   119,   162,     0,
     140,     0,   163,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,   142,     0,    57,     0,
       0,     0,   219,   299,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   165,   164,   141,   158,   189,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,   143,   191,     0,   212,   229,   237,     0,
     217,     0,   119,   221,     0,     0,   160,   166,   190,   145,
     193,     0,   150,     0,     0,     0,   152,     0,     0,     0,
     147,   195,     0,   149,   154,     0,     0,     0,   156,     0,
       0,     0,   192,     0,   119,   225,     0,   119,   194,   151,
     197,     0,   153,   199,     0,   196,   155,   201,     0,   157,
     203,     0,   230,   224,   119,   223,   198,   200,   202,   204,
     222
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -454,  -454,  -454,     5,    25,     9,   264,  -454,  -454,  -454,
    -454,  -454,  -454,  -227,  -454,  -199,  -102,    54,   -55,  -454,
    -454,  -454,  -454,  -176,   -58,    18,  -454,  -328,   244,  -137,
    -247,  -454,  -454,  -454,  -454,  -233,  -454,  -454,  -454,  -454,
    -454,  -453,  -454,  -454,  -454,  -454,  -454,  -454,  -454,  -454,
    -454,  -454,   435,  -454,  -454,  -454,  -454,  -454,  -156,  -454,
      74,  -389,  -454,  -454
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   386,   387,   150,   388,   151,    55,    32,
      33,    34,    35,    78,   152,   153,   154,   471,   530,   472,
     359,   155,   156,   157,   158,   250,   159,   160,   255,   161,
     572,   220,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     420,   421,   180,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     182,   313,   389,   521,   183,    28,   206,   237,   297,    30,
     367,   361,   191,   372,   226,   -33,   305,   247,   199,   365,
     -33,   537,   248,   477,   248,    29,   613,   486,   203,   394,
     204,   506,    28,   205,    52,   479,    30,    30,    53,   373,
     248,    36,    71,   488,    39,   493,   326,   527,   248,   315,
     201,    72,    29,    47,    31,    88,    53,   374,   203,   317,
     528,   482,   543,   202,    89,    73,    91,   371,    92,   553,
     506,   375,   248,    95,    37,   614,   331,    97,    38,   374,
     374,    42,   615,   533,   216,   100,   217,   374,   529,    74,
      41,   557,   105,   238,   434,   442,   106,   362,   534,   109,
     460,   -33,   580,   249,    40,   366,   534,   202,   202,   478,
     111,   117,   112,   487,   219,   476,   115,   534,   234,   483,
     235,   480,   120,   121,   582,   438,   124,   298,   299,   489,
     256,   481,   300,   446,    54,   306,   307,   490,   262,   534,
     308,   592,   509,   596,    59,   536,   245,   539,   605,    30,
      53,   390,   391,    56,   547,   202,   534,   550,   534,   319,
     320,   495,   514,   534,   621,   242,   277,   278,   279,   570,
     253,   560,   496,   280,   623,   202,   571,   334,   335,   534,
     627,   632,   376,   377,   378,   379,   635,   380,   381,   534,
     662,   382,   383,   384,   385,   534,   534,   497,    57,   639,
     253,   534,   281,   651,   654,   502,   282,   658,   498,   661,
     525,    58,   584,   586,   534,   589,   496,   253,   534,   534,
     594,   496,   534,   598,   534,   601,    60,   532,    98,   575,
      61,   542,   248,   544,   248,   484,   391,    62,   433,    67,
     552,    68,   554,   108,   439,   440,   441,   200,   240,    69,
     517,    53,   447,   448,   491,   391,   545,   391,    70,   625,
     555,   391,   629,    75,    76,   118,    77,   184,   185,   187,
     215,   637,   393,   186,   641,   127,   128,   129,   130,   131,
     132,   133,   134,   188,   189,   135,   136,   137,   138,   139,
     190,   192,   418,   195,   193,   194,   196,   197,    89,   198,
      91,   221,    92,   222,    71,   223,   224,    95,   225,   229,
     230,    97,   231,    72,   240,   236,   253,   253,   233,   100,
     239,   232,   314,   251,   253,   253,   105,    73,   296,   301,
     106,   302,   254,   109,   501,   418,   303,   253,   253,   304,
     309,   310,   311,   336,   111,    30,   112,   205,   321,   327,
     115,    74,   253,   253,   203,   368,   120,   121,   453,   437,
     124,   469,   369,   445,    89,   449,    91,   473,    92,   475,
     485,   227,   374,    95,   499,   500,   -55,    97,   561,   508,
     519,   526,    30,   540,   541,   100,   548,   513,   551,   587,
     590,   599,   105,   602,   558,   607,   106,   578,   469,   109,
     459,   612,     0,     0,   243,     0,   246,     0,   647,   256,
     111,     0,   112,   259,   260,   261,   115,   262,     0,     0,
       0,     0,   120,   121,     0,     0,   124,     0,     0,   418,
     376,   377,   378,   379,     0,   380,   381,     0,     0,   382,
     383,   384,   385,     0,     0,   277,   278,   279,     0,     0,
       0,   253,   280,     0,     0,     0,     0,   253,   253,   253,
       0,   567,     0,     0,   569,   253,   253,     0,   418,   573,
       0,   227,     0,     0,   219,   523,     0,     0,    53,     0,
       0,   281,    30,     0,    30,   282,     0,     0,     0,     0,
       0,    30,   219,     0,    30,     0,     0,     0,   469,     0,
     469,     0,     0,     0,     0,     0,   364,   469,    30,   370,
     469,     0,     0,     0,     0,   208,   209,   210,   211,   253,
     212,   213,   214,     0,   469,     0,   253,     0,     0,     0,
       0,   253,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,   228,     0,     0,     0,    30,
      30,     0,    30,     0,   645,     0,     0,    30,     0,   469,
      30,     0,    30,     0,     0,   469,   469,     0,   469,     0,
       0,     0,     0,   469,     0,     0,   469,     0,   469,     0,
       0,     0,     0,     0,     0,   253,   663,   253,     0,   665,
       0,   253,     0,     0,     0,     0,    30,     0,     0,    30,
     470,   283,     0,     0,     0,     0,   670,     0,    30,     0,
       0,    30,   469,     0,     0,   469,     0,     0,     0,   284,
       0,     0,     0,     0,   469,     0,     0,   469,     0,   285,
     286,   287,   288,   289,   290,   291,   292,   470,     0,     0,
       0,     0,     0,     0,     0,   293,   294,     0,     0,     0,
       0,   318,     0,     0,     0,     0,   322,   323,   324,     0,
     325,   219,     0,   253,   328,   329,   330,     0,   332,   333,
       0,     0,     0,     0,   360,     0,     0,     0,     0,     0,
       0,   253,     0,   253,     0,     0,     0,     0,   253,     0,
       0,     0,   395,   396,   397,   398,   399,   400,   401,     0,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,     0,     0,   415,   416,   417,   419,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
       0,     0,     0,   531,     0,     0,   556,   470,     0,   470,
       0,     0,     0,     0,     0,     0,   470,     0,     0,   470,
       0,     0,     0,   337,   338,   339,   340,   341,     0,   342,
     343,   419,     0,   470,     0,     0,   344,   345,   346,   347,
       0,   348,   349,   350,   351,     0,     0,   577,     0,   579,
       0,     0,   581,   352,   353,   354,   355,   356,   357,   358,
     591,     0,     0,   595,     0,     0,     0,     0,   470,     0,
       0,   603,     0,   604,   470,   470,     0,   470,     0,   494,
       0,     0,   470,     0,     0,   470,     0,   470,     0,     0,
       0,     0,     0,     0,   618,     0,   619,   620,     0,   622,
       0,     0,   626,     0,     0,     0,   630,   631,     0,     0,
     633,   634,     0,     0,   638,     0,     0,     0,     0,   642,
       0,   470,     0,   504,   470,   419,     0,   240,     0,     0,
       0,     0,     0,   470,     0,   648,   470,   649,   650,     0,
       0,   652,   653,     0,     0,     0,   655,     0,     0,   656,
     657,     0,     0,   659,   660,     0,     0,     0,   518,     0,
     520,     0,     0,     0,   419,   666,     0,     0,   667,     0,
       0,     0,   668,     0,     1,   669,     0,    89,     0,    91,
       0,    92,     0,    43,     3,     0,    95,     0,     4,     0,
      97,     0,    44,     6,     7,     8,     0,     0,   100,     0,
       0,     0,     0,     9,     0,   105,    45,     0,   563,   106,
      12,     0,   109,     0,    13,    14,    15,     0,     0,     0,
      19,    20,     0,   111,    21,   112,     0,     0,    22,   115,
      46,     0,     0,     0,   574,   120,   121,   576,    24,   124,
      25,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    79,    80,     0,   218,     0,
       0,     0,    81,    82,     0,     0,   606,    83,     0,     0,
       0,    84,     0,   609,     0,   611,     0,     0,     0,    85,
     617,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     1,     0,    88,    89,    90,    91,     0,    92,
      93,     2,     3,    94,    95,     0,     4,    96,    97,   646,
       5,     6,     7,     8,    98,    99,   100,   101,   102,   103,
     104,     9,     0,   105,    10,    11,     0,   106,   107,   108,
     109,     0,    13,    14,    15,    16,    17,    18,    19,    20,
     110,   111,    21,   112,   113,   114,    22,   115,    23,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    25,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,     0,
       0,   135,   136,   137,   138,   139,    79,    80,     0,     0,
     252,     0,     0,    81,    82,     0,     0,     0,    83,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     1,     0,    88,    89,    90,    91,     0,
      92,    93,     2,     3,    94,    95,     0,     4,    96,    97,
       0,     5,     6,     7,     8,    98,    99,   100,   101,   102,
     103,   104,     9,     0,   105,    10,    11,     0,   106,   107,
     108,   109,     0,    13,    14,    15,    16,    17,    18,    19,
      20,   110,   111,    21,   112,   113,   114,    22,   115,    23,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    25,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,     0,   135,   136,   137,   138,   139,    79,    80,     0,
       0,   295,     0,     0,    81,    82,     0,     0,     0,    83,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     1,     0,    88,    89,    90,    91,
       0,    92,    93,     2,     3,    94,    95,     0,     4,    96,
      97,     0,     5,     6,     7,     8,    98,    99,   100,   101,
     102,   103,   104,     9,     0,   105,    10,    11,     0,   106,
     107,   108,   109,     0,    13,    14,    15,    16,    17,    18,
      19,    20,   110,   111,    21,   112,   113,   114,    22,   115,
      23,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      25,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,     0,   135,   136,   137,   138,   139,    79,    80,
       0,     0,   312,     0,     0,    81,    82,     0,     0,     0,
      83,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     1,     0,    88,    89,    90,
      91,     0,    92,    93,     2,     3,    94,    95,     0,     4,
      96,    97,     0,     5,     6,     7,     8,    98,    99,   100,
     101,   102,   103,   104,     9,     0,   105,    10,    11,     0,
     106,   107,   108,   109,     0,    13,    14,    15,    16,    17,
      18,    19,    20,   110,   111,    21,   112,   113,   114,    22,
     115,    23,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    25,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,     0,   135,   136,   137,   138,   139,    79,
      80,     0,   392,     0,     0,     0,    81,    82,     0,     0,
       0,    83,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     1,     0,    88,    89,
      90,    91,     0,    92,    93,     2,     3,    94,    95,     0,
       4,    96,    97,     0,     5,     6,     7,     8,    98,    99,
     100,   101,   102,   103,   104,     9,     0,   105,    10,    11,
       0,   106,   107,   108,   109,     0,    13,    14,    15,    16,
      17,    18,    19,    20,   110,   111,    21,   112,   113,   114,
      22,   115,    23,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    25,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
      79,    80,     0,     0,   435,     0,     0,    81,    82,     0,
       0,     0,    83,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,     1,     0,    88,
      89,    90,    91,     0,    92,    93,     2,     3,    94,    95,
       0,     4,    96,    97,     0,     5,     6,     7,     8,    98,
      99,   100,   101,   102,   103,   104,     9,     0,   105,    10,
      11,     0,   106,   107,   108,   109,     0,    13,    14,    15,
      16,    17,    18,    19,    20,   110,   111,    21,   112,   113,
     114,    22,   115,    23,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    25,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
     139,    79,    80,     0,     0,   436,     0,     0,    81,    82,
       0,     0,     0,    83,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     1,     0,
      88,    89,    90,    91,     0,    92,    93,     2,     3,    94,
      95,     0,     4,    96,    97,     0,     5,     6,     7,     8,
      98,    99,   100,   101,   102,   103,   104,     9,     0,   105,
      10,    11,     0,   106,   107,   108,   109,     0,    13,    14,
      15,    16,    17,    18,    19,    20,   110,   111,    21,   112,
     113,   114,    22,   115,    23,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    25,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,     0,     0,   135,   136,   137,
     138,   139,    79,    80,     0,     0,   443,     0,     0,    81,
      82,     0,     0,     0,    83,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     1,
       0,    88,    89,    90,    91,     0,    92,    93,     2,     3,
      94,    95,     0,     4,    96,    97,     0,     5,     6,     7,
       8,    98,    99,   100,   101,   102,   103,   104,     9,     0,
     105,    10,    11,     0,   106,   107,   108,   109,     0,    13,
      14,    15,    16,    17,    18,    19,    20,   110,   111,    21,
     112,   113,   114,    22,   115,    23,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    25,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,     0,     0,   135,   136,
     137,   138,   139,    79,    80,     0,     0,   444,     0,     0,
      81,    82,     0,     0,     0,    83,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,     0,     0,     0,
       1,     0,    88,    89,    90,    91,     0,    92,    93,     2,
       3,    94,    95,     0,     4,    96,    97,     0,     5,     6,
       7,     8,    98,    99,   100,   101,   102,   103,   104,     9,
       0,   105,    10,    11,     0,   106,   107,   108,   109,     0,
      13,    14,    15,    16,    17,    18,    19,    20,   110,   111,
      21,   112,   113,   114,    22,   115,    23,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    25,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,     0,     0,   135,
     136,   137,   138,   139,    79,    80,     0,     0,   451,     0,
       0,    81,    82,     0,     0,     0,    83,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     0,     0,
       0,     1,     0,    88,    89,    90,    91,     0,    92,    93,
       2,     3,    94,    95,     0,     4,    96,    97,     0,     5,
       6,     7,     8,    98,    99,   100,   101,   102,   103,   104,
       9,     0,   105,    10,    11,     0,   106,   107,   108,   109,
       0,    13,    14,    15,    16,    17,    18,    19,    20,   110,
     111,    21,   112,   113,   114,    22,   115,    23,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    25,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,     0,     0,
     135,   136,   137,   138,   139,    79,    80,     0,     0,   452,
       0,     0,    81,    82,     0,     0,     0,    83,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     1,     0,    88,    89,    90,    91,     0,    92,
      93,     2,     3,    94,    95,     0,     4,    96,    97,     0,
       5,     6,     7,     8,    98,    99,   100,   101,   102,   103,
     104,     9,     0,   105,    10,    11,     0,   106,   107,   108,
     109,     0,    13,    14,    15,    16,    17,    18,    19,    20,
     110,   111,    21,   112,   113,   114,    22,   115,    23,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    25,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,     0,
       0,   135,   136,   137,   138,   139,    79,    80,     0,     0,
     466,     0,     0,    81,    82,     0,     0,     0,    83,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     1,     0,    88,    89,    90,    91,     0,
      92,    93,     2,     3,    94,    95,     0,     4,    96,    97,
       0,     5,     6,     7,     8,    98,    99,   100,   101,   102,
     103,   104,     9,     0,   105,    10,    11,     0,   106,   107,
     108,   109,     0,    13,    14,    15,    16,    17,    18,    19,
      20,   110,   111,    21,   112,   113,   114,    22,   115,    23,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    25,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,     0,   135,   136,   137,   138,   139,    79,    80,     0,
       0,   467,     0,     0,    81,    82,     0,     0,     0,    83,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     1,     0,    88,    89,    90,    91,
       0,    92,    93,     2,     3,    94,    95,     0,     4,    96,
      97,     0,     5,     6,     7,     8,    98,    99,   100,   101,
     102,   103,   104,     9,     0,   105,    10,    11,     0,   106,
     107,   108,   109,     0,    13,    14,    15,    16,    17,    18,
      19,    20,   110,   111,    21,   112,   113,   114,    22,   115,
      23,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      25,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,     0,   135,   136,   137,   138,   139,    79,    80,
       0,     0,   507,     0,     0,    81,    82,     0,     0,     0,
      83,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     1,     0,    88,    89,    90,
      91,     0,    92,    93,     2,     3,    94,    95,     0,     4,
      96,    97,     0,     5,     6,     7,     8,    98,    99,   100,
     101,   102,   103,   104,     9,     0,   105,    10,    11,     0,
     106,   107,   108,   109,     0,    13,    14,    15,    16,    17,
      18,    19,    20,   110,   111,    21,   112,   113,   114,    22,
     115,    23,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    25,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,     0,   135,   136,   137,   138,   139,    79,
      80,     0,     0,   510,     0,     0,    81,    82,     0,     0,
       0,    83,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     1,     0,    88,    89,
      90,    91,     0,    92,    93,     2,     3,    94,    95,     0,
       4,    96,    97,     0,     5,     6,     7,     8,    98,    99,
     100,   101,   102,   103,   104,     9,     0,   105,    10,    11,
       0,   106,   107,   108,   109,     0,    13,    14,    15,    16,
      17,    18,    19,    20,   110,   111,    21,   112,   113,   114,
      22,   115,    23,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    25,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
      79,    80,     0,     0,   511,     0,     0,    81,    82,     0,
       0,     0,    83,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,     1,     0,    88,
      89,    90,    91,     0,    92,    93,     2,     3,    94,    95,
       0,     4,    96,    97,     0,     5,     6,     7,     8,    98,
      99,   100,   101,   102,   103,   104,     9,     0,   105,    10,
      11,     0,   106,   107,   108,   109,     0,    13,    14,    15,
      16,    17,    18,    19,    20,   110,   111,    21,   112,   113,
     114,    22,   115,    23,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    25,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
     139,    79,    80,     0,     0,   512,     0,     0,    81,    82,
       0,     0,     0,    83,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     1,     0,
      88,    89,    90,    91,     0,    92,    93,     2,     3,    94,
      95,     0,     4,    96,    97,     0,     5,     6,     7,     8,
      98,    99,   100,   101,   102,   103,   104,     9,     0,   105,
      10,    11,     0,   106,   107,   108,   109,     0,    13,    14,
      15,    16,    17,    18,    19,    20,   110,   111,    21,   112,
     113,   114,    22,   115,    23,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    25,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,     0,     0,   135,   136,   137,
     138,   139,    79,    80,     0,     0,   515,     0,     0,    81,
      82,     0,     0,     0,    83,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     1,
       0,    88,    89,    90,    91,     0,    92,    93,     2,     3,
      94,    95,     0,     4,    96,    97,     0,     5,     6,     7,
       8,    98,    99,   100,   101,   102,   103,   104,     9,     0,
     105,    10,    11,     0,   106,   107,   108,   109,     0,    13,
      14,    15,    16,    17,    18,    19,    20,   110,   111,    21,
     112,   113,   114,    22,   115,    23,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    25,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,     0,     0,   135,   136,
     137,   138,   139,    79,    80,     0,     0,   516,     0,     0,
      81,    82,     0,     0,     0,    83,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,     0,     0,     0,
       1,     0,    88,    89,    90,    91,     0,    92,    93,     2,
       3,    94,    95,     0,     4,    96,    97,     0,     5,     6,
       7,     8,    98,    99,   100,   101,   102,   103,   104,     9,
       0,   105,    10,    11,     0,   106,   107,   108,   109,     0,
      13,    14,    15,    16,    17,    18,    19,    20,   110,   111,
      21,   112,   113,   114,    22,   115,    23,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    25,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,     0,     0,   135,
     136,   137,   138,   139,    79,    80,     0,   522,     0,     0,
       0,    81,    82,     0,     0,     0,    83,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     0,     0,
       0,     1,     0,    88,    89,    90,    91,     0,    92,    93,
       2,     3,    94,    95,     0,     4,    96,    97,     0,     5,
       6,     7,     8,    98,    99,   100,   101,   102,   103,   104,
       9,     0,   105,    10,    11,     0,   106,   107,   108,   109,
       0,    13,    14,    15,    16,    17,    18,    19,    20,   110,
     111,    21,   112,   113,   114,    22,   115,    23,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    25,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,     0,     0,
     135,   136,   137,   138,   139,    79,    80,     0,     0,   562,
       0,     0,    81,    82,     0,     0,     0,    83,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     1,     0,    88,    89,    90,    91,     0,    92,
      93,     2,     3,    94,    95,     0,     4,    96,    97,     0,
       5,     6,     7,     8,    98,    99,   100,   101,   102,   103,
     104,     9,     0,   105,    10,    11,     0,   106,   107,   108,
     109,     0,    13,    14,    15,    16,    17,    18,    19,    20,
     110,   111,    21,   112,   113,   114,    22,   115,    23,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    25,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,     0,
       0,   135,   136,   137,   138,   139,    79,    80,     0,     0,
     564,     0,     0,    81,    82,     0,     0,     0,    83,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     1,     0,    88,    89,    90,    91,     0,
      92,    93,     2,     3,    94,    95,     0,     4,    96,    97,
       0,     5,     6,     7,     8,    98,    99,   100,   101,   102,
     103,   104,     9,     0,   105,    10,    11,     0,   106,   107,
     108,   109,     0,    13,    14,    15,    16,    17,    18,    19,
      20,   110,   111,    21,   112,   113,   114,    22,   115,    23,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    25,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,     0,   135,   136,   137,   138,   139,    79,    80,     0,
       0,   565,     0,     0,    81,    82,     0,     0,     0,    83,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     1,     0,    88,    89,    90,    91,
       0,    92,    93,     2,     3,    94,    95,     0,     4,    96,
      97,     0,     5,     6,     7,     8,    98,    99,   100,   101,
     102,   103,   104,     9,     0,   105,    10,    11,     0,   106,
     107,   108,   109,     0,    13,    14,    15,    16,    17,    18,
      19,    20,   110,   111,    21,   112,   113,   114,    22,   115,
      23,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      25,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,     0,   135,   136,   137,   138,   139,    79,    80,
       0,     0,   608,     0,     0,    81,    82,     0,     0,     0,
      83,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     1,     0,    88,    89,    90,
      91,     0,    92,    93,     2,     3,    94,    95,     0,     4,
      96,    97,     0,     5,     6,     7,     8,    98,    99,   100,
     101,   102,   103,   104,     9,     0,   105,    10,    11,     0,
     106,   107,   108,   109,     0,    13,    14,    15,    16,    17,
      18,    19,    20,   110,   111,    21,   112,   113,   114,    22,
     115,    23,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    25,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,     0,   135,   136,   137,   138,   139,    79,
      80,     0,     0,   610,     0,     0,    81,    82,     0,     0,
       0,    83,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     1,     0,    88,    89,
      90,    91,     0,    92,    93,     2,     3,    94,    95,     0,
       4,    96,    97,     0,     5,     6,     7,     8,    98,    99,
     100,   101,   102,   103,   104,     9,     0,   105,    10,    11,
       0,   106,   107,   108,   109,     0,    13,    14,    15,    16,
      17,    18,    19,    20,   110,   111,    21,   112,   113,   114,
      22,   115,    23,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    25,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
      79,    80,     0,     0,   616,     0,     0,    81,    82,     0,
       0,     0,    83,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,     0,     0,     0,     1,     0,    88,
      89,    90,    91,     0,    92,    93,     2,     3,    94,    95,
       0,     4,    96,    97,     0,     5,     6,     7,     8,    98,
      99,   100,   101,   102,   103,   104,     9,     0,   105,    10,
      11,     0,   106,   107,   108,   109,     0,    13,    14,    15,
      16,    17,    18,    19,    20,   110,   111,    21,   112,   113,
     114,    22,   115,    23,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    25,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    79,    80,   135,   136,   137,   138,
     139,    81,    82,     0,     0,     0,    83,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     0,     0,
       0,     1,     0,    88,    89,    90,    91,     0,    92,    93,
       2,     3,    94,    95,     0,     4,    96,    97,     0,     5,
       6,     7,     8,    98,    99,   100,   101,   102,   103,   104,
       9,     0,   105,    10,    11,     0,   106,   107,   108,   109,
       0,    13,    14,    15,    16,    17,    18,    19,    20,   110,
     111,    21,   112,   113,   114,    22,   115,    23,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    25,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,     0,     0,
     135,   136,   137,   138,   139,   206,    80,   458,     0,     0,
       0,     0,    81,    82,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     1,     0,    88,     0,    90,     0,     0,     0,
       0,     0,     3,    94,     0,     0,     4,     0,     0,     0,
       0,     6,     7,     8,    98,     0,     0,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,   107,   108,
       0,     0,    13,    14,    15,     0,     0,     0,    19,    20,
       0,     0,    21,     0,   113,   114,    22,     0,     0,     0,
     117,   118,   119,     0,     0,     0,    24,     0,    25,     0,
       0,   127,   128,   129,   130,   131,   132,   133,   134,     0,
       0,   135,   136,   137,   138,   139,   206,    80,   505,     0,
       0,     0,     0,    81,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,     0,     1,     0,    88,     0,    90,     0,     0,
       0,     0,     0,     3,    94,     0,     0,     4,     0,     0,
       0,     0,     6,     7,     8,    98,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,   107,
     108,     0,     0,    13,    14,    15,     0,     0,     0,    19,
      20,     0,     0,    21,     0,   113,   114,    22,     0,     0,
       0,   117,   118,   119,     0,     0,     0,    24,     0,    25,
       0,     0,   127,   128,   129,   130,   131,   132,   133,   134,
       0,     0,   135,   136,   137,   138,   139,   206,    80,   524,
       0,     0,     0,     0,    81,    82,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     1,     0,    88,     0,    90,     0,
       0,     0,     0,     0,     3,    94,     0,     0,     4,     0,
       0,     0,     0,     6,     7,     8,    98,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
     107,   108,     0,     0,    13,    14,    15,     0,     0,     0,
      19,    20,     0,     0,    21,     0,   113,   114,    22,     0,
       0,     0,   117,   118,   119,     0,     0,     0,    24,     0,
      25,     0,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   206,    80,   135,   136,   137,   138,   139,    81,    82,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     1,     0,
      88,     0,    90,     0,     0,     0,     0,     0,     3,    94,
       0,     0,     4,     0,     0,     0,     0,     6,     7,     8,
      98,     0,     0,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,   107,   108,     0,     0,    13,    14,
      15,     0,     0,     0,    19,    20,     0,     0,    21,     0,
     113,   114,    22,     0,     0,     0,   117,   118,   119,     0,
       0,     0,    24,     0,    25,     0,     0,   127,   128,   129,
     130,   131,   132,   133,   134,   206,    80,   135,   136,   137,
     138,   139,    81,    82,     0,     0,     0,    83,     0,     0,
       0,     0,   256,     0,   257,   258,   259,   260,   261,    85,
     262,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,     0,
       0,     0,     0,     0,    88,     0,    90,     0,   277,   278,
     279,     0,     0,    94,     0,   280,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,   108,
     240,     0,     0,     0,   281,     0,     0,     0,   282,     0,
       0,     0,     0,     0,   113,   114,     0,     0,     0,     0,
     117,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,   129,   130,   131,   132,   133,   134,     0,
       0,   135,   136,   137,   138,   139,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,    63,     3,     0,    95,
       0,     4,     0,    97,     0,    64,     6,     7,     8,     0,
     240,   100,   468,     0,     0,     0,     9,     0,   105,    65,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,    66,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,   363,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   492,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   535,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   538,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   546,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   549,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   559,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   583,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   585,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   588,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   593,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   597,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   600,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   624,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   628,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   636,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,     0,
     240,   100,   640,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     0,     1,     0,     0,
      89,     0,    91,     0,    92,     0,     0,     3,     0,    95,
       0,     4,     0,    97,     0,     0,     6,     7,     8,   240,
       0,   100,     0,     0,     0,     0,     9,     0,   105,     0,
       0,     0,   106,    12,     0,   109,     0,    13,    14,    15,
       0,     0,     0,    19,    20,     0,   111,    21,   112,     0,
       0,    22,   115,     0,     0,     0,     0,     0,   120,   121,
       0,    24,   124,    25,     0,     0,     1,     0,     0,    89,
       0,    91,     0,    92,     0,     0,     3,     0,    95,     0,
       4,     0,    97,     0,     0,     6,     7,     8,     0,     0,
     100,     0,     0,     0,     0,     9,     0,   105,     0,     0,
       0,   106,    12,     0,   109,     0,    13,    14,    15,     0,
       0,     0,    19,    20,     0,   111,    21,   112,     0,     0,
      22,   115,     0,     0,     0,     0,     0,   120,   121,     0,
      24,   124,    25,   316,     0,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,     0,     0,     0,     0,     0,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,   450,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   454,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,   456,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   457,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,   461,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   462,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,   463,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   464,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,   465,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   474,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,   566,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,   643,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,   264,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,   455,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,   503,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,   568,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,   644,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,   664,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,   280,
       0,   256,     0,   257,   258,   259,   260,   261,     0,   262,
     263,     0,     0,     0,     0,     0,   265,   266,   267,   268,
       0,   269,   270,   271,   272,     0,     0,     0,   281,     0,
       0,     0,   282,   273,   274,   275,   276,   277,   278,   279,
       0,     0,     0,     0,   280,     0,   256,     0,   257,   258,
     259,   260,   261,     0,   262,   263,     0,     0,     0,     0,
       0,   265,   266,   267,   268,     0,   269,   270,   271,   272,
       0,     0,     0,   281,     0,     0,     0,   282,   273,   274,
     275,     0,   277,   278,   279,     0,     0,     0,   256,   280,
     257,   258,   259,   260,   261,     0,   262,   263,     0,     0,
       0,     0,     0,   265,   266,   267,   268,     0,   269,   270,
     271,   272,     0,     0,     0,     0,     0,     0,   281,     0,
     273,   274,   282,     0,   277,   278,   279,     0,     0,     0,
     256,   280,   257,   258,   259,   260,   261,     0,   262,   263,
       0,     0,     0,     0,     0,   265,   266,   267,     0,     0,
     269,   270,   271,   272,     0,     0,     0,     0,     0,     0,
     281,     0,   273,   274,   282,     0,   277,   278,   279,     0,
       0,     0,   256,   280,   257,   258,   259,   260,   261,     0,
     262,     0,     0,     0,     0,     0,     0,   265,   266,   267,
       0,     0,   269,   270,   271,   272,     0,     0,     0,     0,
       0,     0,   281,     0,   273,   274,   282,     0,   277,   278,
     279,     0,     0,     0,   256,   280,   257,   258,   259,   260,
     261,     0,   262,     0,     0,     0,     0,     0,     0,   265,
     266,     0,     0,     0,   269,   270,   271,   272,     0,     0,
       0,     0,     0,     0,   281,     0,   273,   274,   282,     0,
     277,   278,   279,     0,     0,     0,   256,   280,   257,   258,
     259,   260,   261,     0,   262,     0,     0,     0,     0,     0,
       0,   265,   266,     0,     0,     0,     0,   270,   271,   256,
       0,   257,   258,   259,   260,   261,   281,   262,   273,   274,
     282,     0,   277,   278,   279,     0,     0,     0,     0,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   274,     0,     0,   277,   278,   279,     0,     0,
       1,     0,   280,     0,     0,     0,     0,     0,   281,    48,
       3,     0,   282,     0,     4,     0,     0,     0,    49,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     9,
       0,   281,    50,    11,     0,   282,    12,     0,     0,     1,
      13,    14,    15,    16,    17,    18,    19,    20,     2,     3,
      21,     0,     0,     4,    22,     0,    51,     5,     6,     7,
       8,     0,     0,     0,    24,     0,    25,   244,     9,     0,
       0,    10,    11,     0,     0,    12,     0,     0,     1,    13,
      14,    15,    16,    17,    18,    19,    20,    48,     3,    21,
       0,     0,     4,    22,     0,    23,    49,     6,     7,     8,
       0,     0,     0,    24,     0,    25,     0,     9,     0,     0,
      50,    11,     0,     0,    12,     0,     0,     1,    13,    14,
      15,    16,    17,    18,    19,    20,    43,     3,    21,     0,
       0,     4,    22,     0,    51,    44,     6,     7,     8,     0,
       0,     0,    24,     0,    25,     0,     9,     0,     0,    45,
       0,     0,     0,    12,     0,     0,     1,    13,    14,    15,
       0,     0,     0,    19,    20,    63,     3,    21,     0,     0,
       4,    22,     0,    46,    64,     6,     7,     8,     0,     0,
       0,    24,     0,    25,     0,     9,     0,     0,    65,     0,
       0,     0,    12,     0,     0,     0,    13,    14,    15,     0,
       0,     0,    19,    20,     0,     0,    21,     0,     0,     0,
      22,     0,    66,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    25
};

static const yytype_int16 yycheck[] =
{
      58,   200,   249,   456,    59,     0,     3,     3,   184,     0,
     243,     3,    67,   246,     3,     3,   192,     3,    76,     3,
       8,   474,     8,     3,     8,     0,     7,     3,    16,   256,
      18,   420,    27,    21,    29,     3,    27,    28,    29,     4,
       8,     3,    59,     3,    83,   373,     4,     6,     8,   205,
       7,    68,    27,    28,     0,    52,    47,    22,    16,   215,
      19,     4,     4,    20,    53,    82,    55,     3,    57,     4,
     459,     9,     8,    62,     3,    56,   232,    66,     3,    22,
      22,    27,    63,     5,     4,    74,     6,    22,    47,   106,
       0,     5,    81,    89,     7,     7,    85,    89,    20,    88,
     327,    89,     5,    89,     3,    89,    20,    20,    20,    89,
      99,   108,   101,    89,    96,   362,   105,    20,     4,   366,
       6,    89,   111,   112,     5,   301,   115,   185,   186,    89,
       8,   364,   187,   309,    18,   193,   194,   370,    16,    20,
     195,     5,     7,     5,     3,   473,   141,   475,     5,   140,
     141,    19,    20,     6,   482,    20,    20,   485,    20,   217,
     218,     9,     7,    20,     5,   140,    44,    45,    46,    56,
     152,   499,    20,    51,     5,    20,    63,   235,   236,    20,
       5,     5,   120,   121,   122,   123,     5,   125,   126,    20,
     643,   129,   130,   131,   132,    20,    20,     9,     6,     5,
     182,    20,    80,     5,     5,     9,    84,     5,    20,     5,
       9,     6,   540,   541,    20,   543,    20,   199,    20,    20,
     548,    20,    20,   551,    20,   553,     3,     3,    72,     3,
       3,   478,     8,   480,     8,    19,    20,     3,   296,     3,
     487,     3,   489,    87,   302,   303,   304,    22,     3,     3,
     449,   242,   310,   311,    19,    20,    19,    20,     3,   587,
      19,    20,   590,     3,     6,   109,     3,     6,     6,     3,
      21,   599,   254,     6,   602,   119,   120,   121,   122,   123,
     124,   125,   126,     3,     3,   129,   130,   131,   132,   133,
       3,     6,   283,     3,     6,     6,     3,     3,    53,     3,
      55,     4,    57,     4,    59,     4,     3,    62,     4,     4,
       4,    66,     4,    68,     3,     6,   298,   299,     4,    74,
       4,    21,     3,    16,   306,   307,    81,    82,     6,     6,
      85,     6,    67,    88,   392,   326,     6,   319,   320,     6,
       6,     6,     6,     4,    99,   336,   101,    21,   118,     8,
     105,   106,   334,   335,    16,     3,   111,   112,     4,     6,
     115,   336,   117,     6,    53,    22,    55,     4,    57,     4,
       4,   107,    22,    62,     4,     3,     8,    66,    22,   437,
       6,     6,   373,     4,     4,    74,     4,   445,     4,     4,
       4,     4,    81,     4,   496,    19,    85,   534,   373,    88,
     326,    18,    -1,    -1,   140,    -1,   142,    -1,    18,     8,
      99,    -1,   101,    12,    13,    14,   105,    16,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,   115,    -1,    -1,   420,
     120,   121,   122,   123,    -1,   125,   126,    -1,    -1,   129,
     130,   131,   132,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,   433,    51,    -1,    -1,    -1,    -1,   439,   440,   441,
      -1,   519,    -1,    -1,   522,   447,   448,    -1,   459,   527,
      -1,   207,    -1,    -1,   456,   457,    -1,    -1,   469,    -1,
      -1,    80,   473,    -1,   475,    84,    -1,    -1,    -1,    -1,
      -1,   482,   474,    -1,   485,    -1,    -1,    -1,   473,    -1,
     475,    -1,    -1,    -1,    -1,    -1,   242,   482,   499,   245,
     485,    -1,    -1,    -1,    -1,    80,    81,    82,    83,   501,
      85,    86,    87,    -1,   499,    -1,   508,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   534,    -1,   110,    -1,    -1,    -1,   540,
     541,    -1,   543,    -1,   612,    -1,    -1,   548,    -1,   534,
     551,    -1,   553,    -1,    -1,   540,   541,    -1,   543,    -1,
      -1,    -1,    -1,   548,    -1,    -1,   551,    -1,   553,    -1,
      -1,    -1,    -1,    -1,    -1,   567,   644,   569,    -1,   647,
      -1,   573,    -1,    -1,    -1,    -1,   587,    -1,    -1,   590,
     336,     4,    -1,    -1,    -1,    -1,   664,    -1,   599,    -1,
      -1,   602,   587,    -1,    -1,   590,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,   599,    -1,    -1,   602,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,   373,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,   221,   222,   223,    -1,
     225,   643,    -1,   645,   229,   230,   231,    -1,   233,   234,
      -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,    -1,    -1,
      -1,   663,    -1,   665,    -1,    -1,    -1,    -1,   670,    -1,
      -1,    -1,   257,   258,   259,   260,   261,   262,   263,    -1,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    -1,    -1,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      -1,    -1,    -1,   469,    -1,    -1,   492,   473,    -1,   475,
      -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,   485,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,   326,    -1,   499,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,   533,    -1,   535,
      -1,    -1,   538,    40,    41,    42,    43,    44,    45,    46,
     546,    -1,    -1,   549,    -1,    -1,    -1,    -1,   534,    -1,
      -1,   557,    -1,   559,   540,   541,    -1,   543,    -1,   374,
      -1,    -1,   548,    -1,    -1,   551,    -1,   553,    -1,    -1,
      -1,    -1,    -1,    -1,   580,    -1,   582,   583,    -1,   585,
      -1,    -1,   588,    -1,    -1,    -1,   592,   593,    -1,    -1,
     596,   597,    -1,    -1,   600,    -1,    -1,    -1,    -1,   605,
      -1,   587,    -1,   418,   590,   420,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   599,    -1,   621,   602,   623,   624,    -1,
      -1,   627,   628,    -1,    -1,    -1,   632,    -1,    -1,   635,
     636,    -1,    -1,   639,   640,    -1,    -1,    -1,   453,    -1,
     455,    -1,    -1,    -1,   459,   651,    -1,    -1,   654,    -1,
      -1,    -1,   658,    -1,    50,   661,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    64,    -1,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    -1,   503,    85,
      86,    -1,    88,    -1,    90,    91,    92,    -1,    -1,    -1,
      96,    97,    -1,    99,   100,   101,    -1,    -1,   104,   105,
     106,    -1,    -1,    -1,   529,   111,   112,   532,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,
      -1,    -1,    10,    11,    -1,    -1,   561,    15,    -1,    -1,
      -1,    19,    -1,   568,    -1,   570,    -1,    -1,    -1,    27,
     575,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    66,   614,
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
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
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
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
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
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
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
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
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
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
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
      62,    -1,    64,    65,    66,    -1,    68,    69,    70,    71,
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
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    70,
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
      60,    61,    62,    -1,    64,    65,    66,    -1,    68,    69,
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
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    68,
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
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    -1,
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
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
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
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
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
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
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
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
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
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
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
      62,    -1,    64,    65,    66,    -1,    68,    69,    70,    71,
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
      61,    62,    -1,    64,    65,    66,    -1,    68,    69,    70,
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
      60,    61,    62,    -1,    64,    65,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    82,    83,    -1,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,     3,     4,    -1,     6,    -1,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    68,
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
      58,    59,    60,    61,    62,    -1,    64,    65,    66,    -1,
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
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
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
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
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
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
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
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
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
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
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
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    68,
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
      -1,    -1,    60,    61,    -1,    -1,    64,    -1,    -1,    -1,
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
      -1,    -1,    -1,    60,    61,    -1,    -1,    64,    -1,    -1,
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
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,    -1,
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
      -1,    -1,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      92,    -1,    -1,    -1,    96,    97,    -1,    -1,   100,    -1,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,    -1,
      -1,    -1,   114,    -1,   116,    -1,    -1,   119,   120,   121,
     122,   123,   124,   125,   126,     3,     4,   129,   130,   131,
     132,   133,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,     8,    -1,    10,    11,    12,    13,    14,    27,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    44,    45,
      46,    -1,    -1,    61,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
       3,    -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,
     108,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,   122,   123,   124,   125,   126,    -1,
      -1,   129,   130,   131,   132,   133,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    68,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    82,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,   106,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,   117,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,
       3,    74,     5,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    64,    -1,    66,    -1,    -1,    69,    70,    71,     3,
      -1,    74,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    -1,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,    -1,    -1,    50,    -1,    -1,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      64,    -1,    66,    -1,    -1,    69,    70,    71,    -1,    -1,
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
      -1,    -1,    -1,    -1,    51,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    84,    40,    41,
      42,    -1,    44,    45,    46,    -1,    -1,    -1,     8,    51,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      40,    41,    84,    -1,    44,    45,    46,    -1,    -1,    -1,
       8,    51,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    40,    41,    84,    -1,    44,    45,    46,    -1,
      -1,    -1,     8,    51,    10,    11,    12,    13,    14,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    40,    41,    84,    -1,    44,    45,
      46,    -1,    -1,    -1,     8,    51,    10,    11,    12,    13,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    40,    41,    84,    -1,
      44,    45,    46,    -1,    -1,    -1,     8,    51,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    -1,    29,    30,     8,
      -1,    10,    11,    12,    13,    14,    80,    16,    40,    41,
      84,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    45,    46,    -1,    -1,
      50,    -1,    51,    -1,    -1,    -1,    -1,    -1,    80,    59,
      60,    -1,    84,    -1,    64,    -1,    -1,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    80,    82,    83,    -1,    84,    86,    -1,    -1,    50,
      90,    91,    92,    93,    94,    95,    96,    97,    59,    60,
     100,    -1,    -1,    64,   104,    -1,   106,    68,    69,    70,
      71,    -1,    -1,    -1,   114,    -1,   116,   117,    79,    -1,
      -1,    82,    83,    -1,    -1,    86,    -1,    -1,    50,    90,
      91,    92,    93,    94,    95,    96,    97,    59,    60,   100,
      -1,    -1,    64,   104,    -1,   106,    68,    69,    70,    71,
      -1,    -1,    -1,   114,    -1,   116,    -1,    79,    -1,    -1,
      82,    83,    -1,    -1,    86,    -1,    -1,    50,    90,    91,
      92,    93,    94,    95,    96,    97,    59,    60,   100,    -1,
      -1,    64,   104,    -1,   106,    68,    69,    70,    71,    -1,
      -1,    -1,   114,    -1,   116,    -1,    79,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    50,    90,    91,    92,
      -1,    -1,    -1,    96,    97,    59,    60,   100,    -1,    -1,
      64,   104,    -1,   106,    68,    69,    70,    71,    -1,    -1,
      -1,   114,    -1,   116,    -1,    79,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      -1,    -1,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,    -1,   116
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    59,    60,    64,    68,    69,    70,    71,    79,
      82,    83,    86,    90,    91,    92,    93,    94,    95,    96,
      97,   100,   104,   106,   114,   116,   140,   141,   142,   143,
     144,   156,   158,   159,   160,   161,     3,     3,     3,    83,
       3,     0,   156,    59,    68,    82,   106,   143,    59,    68,
      82,   106,   142,   144,    18,   157,     6,     6,     6,     3,
       3,     3,     3,    59,    68,    82,   106,     3,     3,     3,
       3,    59,    68,    82,   106,     3,     6,     3,   162,     3,
       4,    10,    11,    15,    19,    27,    45,    46,    52,    53,
      54,    55,    57,    58,    61,    62,    65,    66,    72,    73,
      74,    75,    76,    77,    78,    81,    85,    86,    87,    88,
      98,    99,   101,   102,   103,   105,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   129,   130,   131,   132,   133,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     154,   156,   163,   164,   165,   170,   171,   172,   173,   175,
     176,   178,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     201,   202,   163,   157,     6,     6,     6,     3,     3,     3,
       3,   157,     6,     6,     6,     3,     3,     3,     3,   163,
      22,     7,    20,    16,    18,    21,     3,    86,   191,   191,
     191,   191,   191,   191,   191,    21,     4,     6,     6,   164,
     180,     4,     4,     4,     3,     4,     3,   145,   191,     4,
       4,     4,    21,     4,     4,     6,     6,     3,    89,     4,
       3,   117,   143,   145,   117,   142,   145,     3,     8,    89,
     174,    16,     7,   164,    67,   177,     8,    10,    11,    12,
      13,    14,    16,    17,    19,    23,    24,    25,    26,    28,
      29,    30,    31,    40,    41,    42,    43,    44,    45,    46,
      51,    80,    84,     4,    22,    32,    33,    34,    35,    36,
      37,    38,    39,    48,    49,     7,     6,   162,   163,   163,
     157,     6,     6,     6,     6,   162,   163,   163,   157,     6,
       6,     6,     7,   154,     3,   197,     5,   197,   191,   163,
     163,   118,   191,   191,   191,   191,     4,     8,   191,   191,
     191,   197,   191,   191,   163,   163,     4,    10,    11,    12,
      13,    14,    16,    17,    23,    24,    25,    26,    28,    29,
      30,    31,    40,    41,    42,    43,    44,    45,    46,   169,
     191,     3,    89,   117,   145,     3,    89,   174,     3,   117,
     145,     3,   174,     4,    22,     9,   120,   121,   122,   123,
     125,   126,   129,   130,   131,   132,   152,   153,   155,   169,
      19,    20,     6,   164,   152,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   144,   191,
     199,   200,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   163,     7,     7,     7,     6,   162,   163,
     163,   163,     7,     7,     7,     6,   162,   163,   163,    22,
       5,     7,     7,     4,     5,    19,     5,     5,     5,   199,
     152,     5,     5,     5,     5,     5,     7,     7,     5,   143,
     145,   166,   168,     4,     5,     4,   169,     3,    89,     3,
      89,   174,     4,   169,    19,     4,     3,    89,     3,    89,
     174,    19,     5,   166,   191,     9,    20,     9,    20,     4,
       3,   163,     9,    18,   191,     5,   200,     7,   163,     7,
       7,     7,     7,   163,     7,     7,     7,   154,   191,     6,
     191,   180,     6,   164,     5,     9,     6,     6,    19,    47,
     167,   145,     3,     5,    20,     5,   166,   180,     5,   166,
       4,     4,   169,     4,   169,    19,     5,   166,     4,     5,
     166,     4,   169,     4,   169,    19,   167,     5,   155,     5,
     166,    22,     7,   191,     7,     7,     5,   163,    19,   163,
      56,    63,   179,   163,   191,     3,   191,   167,   168,   167,
       5,   167,     5,     5,   166,     5,   166,     4,     5,   166,
       4,   167,     5,     5,   166,   167,     5,     5,   166,     4,
       5,   166,     4,   167,   167,     5,   191,    19,     7,   191,
       7,   191,    18,     7,    56,    63,     7,   191,   167,   167,
     167,     5,   167,     5,     5,   166,   167,     5,     5,   166,
     167,   167,     5,   167,   167,     5,     5,   166,   167,     5,
       5,   166,   167,     5,    18,   163,   191,    18,   167,   167,
     167,     5,   167,   167,     5,   167,   167,   167,     5,   167,
     167,     5,   180,   163,    18,   163,   167,   167,   167,   167,
     163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   141,   141,   141,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   147,
     148,   148,   148,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   150,   150,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   157,   157,   158,   158,   158,   158,   158,   159,   159,
     159,   159,   159,   160,   160,   160,   160,   160,   161,   161,
     161,   161,   161,   162,   162,   162,   162,   163,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   168,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,   169,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   171,   172,   172,   173,   173,
     173,   174,   174,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   179,   179,   179,   179,   180,   180,   181,   182,
     183,   184,   185,   185,   186,   186,   187,   188,   189,   190,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   196,
     197,   197,   197,   197,   198,   199,   199,   199,   200,   200,
     201,   202
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     4,     3,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     7,     7,     8,     8,     6,     6,     6,
       7,     7,     5,     6,     6,     7,     7,     5,     6,     6,
       7,     7,     5,     3,     5,     1,     3,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       5,     6,     5,     6,     6,     7,     6,     7,     6,     7,
       7,     8,     7,     8,     7,     8,     7,     8,     3,     1,
       3,     2,     1,     2,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       7,     6,     7,     7,     8,     7,     8,     8,     9,     8,
       9,     8,     9,     8,     9,     2,     3,     4,     4,     5,
       5,     3,     5,     1,     3,     1,     2,     7,     5,     4,
       2,     7,     5,     4,     4,     3,     3,     1,     5,     7,
       9,     5,     4,     4,     4,     4,     4,     7,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     1,     3,     3,     4,     2,     1,     0,     1,     2,
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
        
#line 3511 "src/Parser/parser.c" /* yacc.c:1646  */
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
#line 417 "src/Parser/c-sharp.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
