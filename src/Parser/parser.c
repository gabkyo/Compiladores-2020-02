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
    DO = 319,
    DOUBLE_TYPE = 320,
    ELSE = 321,
    ENUM = 322,
    EVENT = 323,
    EXPLICIT = 324,
    EXTERN = 325,
    FALSE_VAL = 326,
    FLOAT_TYPE = 327,
    FOR = 328,
    FOREACH = 329,
    GOTO = 330,
    IF = 331,
    IMPLICIT = 332,
    IN = 333,
    INT_TYPE = 334,
    INTERFACE = 335,
    INTERNAL = 336,
    IS = 337,
    LONG_TYPE = 338,
    NEW = 339,
    NULL_VALUE = 340,
    OBJECT = 341,
    OPERATOR = 342,
    OUT = 343,
    OVERRIDE = 344,
    PARAMS = 345,
    PRIVATE = 346,
    PROTECTED = 347,
    PUBLIC = 348,
    READONLY = 349,
    REF = 350,
    RETURN = 351,
    SBYTE_TYPE = 352,
    SEALED = 353,
    SHORT_TYPE = 354,
    SIZEOF = 355,
    STACKALLOC = 356,
    STATIC = 357,
    STRING_TYPE = 358,
    STRUCT = 359,
    SWITCH = 360,
    THIS = 361,
    TRUE_VAL = 362,
    TYPEOF = 363,
    UINT_TYPE = 364,
    ULONG_TYPE = 365,
    UNCHECKED = 366,
    USHORT_TYPE = 367,
    VIRTUAL = 368,
    VOID = 369,
    WHILE = 370,
    INT_VAL = 371,
    UINT_VAL = 372,
    LONG_VAL = 373,
    ULONG_VAL = 374,
    FLOAT_VAL = 375,
    DOUBLE_VAL = 376,
    DECIMAL_VAL = 377,
    CHAR_VAL = 378,
    ENTER = 379,
    END_OF_FILE = 380,
    BYTE_VAL = 381,
    SBYTE_VAL = 382,
    SHORT_VAL = 383,
    USHORT_VAL = 384,
    STRING_VAL = 385,
    LOW = 386,
    TERNARY_IF = 387,
    INNER_PAR = 388,
    HIGH = 389,
    HIGHER = 390
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

#line 265 "src/Parser/parser.c" /* yacc.c:358  */

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  305
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  656

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

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
     135
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    52,    53,    56,    56,    56,    56,
      56,    57,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    68,    69,    70,    71,    71,    72,    72,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,   140,   140,   140,   140,   142,
     143,   145,   146,   147,   148,   149,   151,   152,   153,   154,
     155,   157,   158,   159,   160,   161,   163,   164,   165,   166,
     167,   169,   170,   171,   172,   192,   192,   192,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   215,   216,   216,   216,   217,
     217,   217,   217,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   240,   244,   245,   257,   258,   259,   261,   262,   263,
     264,   285,   286,   289,   290,   292,   293,   296,   298,   299,
     300,   301,   304,   304,   305,   306,   307,   308,   312,   313,
     316,   317,   320,   321,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   328,   329,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   386,   390,   391,   392,   393,   397,   400,
     401,   402,   404,   404,   407,   409
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
  "CLASS", "CONST", "CONTINUE", "DECIMAL_TYPE", "DEFAULT", "DO",
  "DOUBLE_TYPE", "ELSE", "ENUM", "EVENT", "EXPLICIT", "EXTERN",
  "FALSE_VAL", "FLOAT_TYPE", "FOR", "FOREACH", "GOTO", "IF", "IMPLICIT",
  "IN", "INT_TYPE", "INTERFACE", "INTERNAL", "IS", "LONG_TYPE", "NEW",
  "NULL_VALUE", "OBJECT", "OPERATOR", "OUT", "OVERRIDE", "PARAMS",
  "PRIVATE", "PROTECTED", "PUBLIC", "READONLY", "REF", "RETURN",
  "SBYTE_TYPE", "SEALED", "SHORT_TYPE", "SIZEOF", "STACKALLOC", "STATIC",
  "STRING_TYPE", "STRUCT", "SWITCH", "THIS", "TRUE_VAL", "TYPEOF",
  "UINT_TYPE", "ULONG_TYPE", "UNCHECKED", "USHORT_TYPE", "VIRTUAL", "VOID",
  "WHILE", "INT_VAL", "UINT_VAL", "LONG_VAL", "ULONG_VAL", "FLOAT_VAL",
  "DOUBLE_VAL", "DECIMAL_VAL", "CHAR_VAL", "ENTER", "END_OF_FILE",
  "BYTE_VAL", "SBYTE_VAL", "SHORT_VAL", "USHORT_VAL", "STRING_VAL", "LOW",
  "TERNARY_IF", "INNER_PAR", "HIGH", "HIGHER", "$accept", "program",
  "obj_decl_list", "scope", "modifier_list", "modifier", "type",
  "nullable_type", "simple_type", "numeric_type", "integer_type",
  "floating_type", "matrix_type", "dimensions_def", "dimensions_undef",
  "value", "numeric_val", "obj_decl", "class_father", "class_decl",
  "struct_decl", "interface_decl", "enum_decl", "enum_list",
  "statement_list", "statement", "method_decl_statement", "parameter_list",
  "method_body", "parameter", "operator", "operator_overloading",
  "return_statement", "var_decl_statement", "attr_decl_statement",
  "id_list", "if_else_statement", "if_statement", "else_statement",
  "switch_statement", "cases_list", "loop_body", "while_statement",
  "do_while_statement", "for_statement", "foreach_statement",
  "checked_scope", "unchecked_scope", "label", "go_to_statement",
  "expression", "obj_instancing", "assignment_expressions",
  "unary_operations", "binary_operations", "ternary_operations",
  "attr_access", "method_invoking", "argument_list", "argument",
  "matrix_indexing", "matrix_instancing", YY_NULLPTR
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
     385,   386,   387,   388,   389,   390
};
# endif

#define YYPACT_NINF -441

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-441)))

#define YYTABLE_NINF -54

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    6973,  -441,    33,  -441,    50,  -441,  -441,  -441,  -441,    77,
    -441,  -441,  -441,  -441,  -441,  -441,     5,  -441,  -441,  -441,
    -441,  -441,    99,  -441,   105,  6973,  7067,  7020,  -441,  -441,
    -441,  -441,  -441,  -441,   107,   138,   168,  -441,   218,  -441,
    -441,   150,   250,   254,   257,  7108,   264,   288,   289,   290,
       3,  -441,   291,   292,   293,  4001,  4001,   107,   294,   295,
     297,   301,   302,   303,   304,   107,   306,   308,   310,   305,
     307,   315,   318,  -441,  4001,   273,   156,    22,   764,   764,
     764,   764,  -441,   764,   764,   764,   311,  -441,  -441,  -441,
    -441,   221,  -441,  -441,   936,  -441,  -441,  -441,   320,   323,
     319,   325,  -441,  -441,  5823,  -441,  -441,   764,  -441,  -441,
     327,   329,  -441,   330,   314,  -441,   332,  -441,  -441,   227,
    -441,    10,   335,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  4589,   839,  5859,    11,
    -441,   324,  -441,  -441,  -441,  -441,  -441,  -441,  1064,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,   243,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  6490,  -441,  -441,  -441,
    -441,  -441,   532,  -441,  -441,  -441,  1192,   336,   293,  4001,
    4001,   107,   337,   339,   341,   342,   293,  4001,  4001,   107,
     347,   350,   352,  1320,    93,  -441,   356,  -441,  -441,     7,
     348,  5823,  5962,   152,   152,   152,   152,   152,   152,     7,
     764,  4001,  4001,  -441,   259,   764,   764,  -441,   764,   191,
     355,  6754,   764,   764,   764,     7,   764,   764,  4001,   371,
    7203,   764,   361,    14,  4657,    12,   375,   258,   103,    28,
      63,  7203,   151,  -441,  -441,  -441,  1448,  -441,   487,   764,
     764,   764,   764,   764,   764,   764,  -441,   764,   764,   764,
     764,   764,   764,   764,   764,   764,   764,   764,   764,   764,
    -441,  -441,   764,   764,   764,  4506,   764,   764,   764,   764,
     764,   764,   764,   764,   764,   764,   764,  -441,  4001,   244,
    1576,  1704,   374,   293,  4001,  4001,  4001,   248,  1832,  1960,
     379,   293,  4001,  4001,  -441,  -441,   359,  -441,  -441,  -441,
    6006,  2088,  2216,   383,  6534,  6050,  6094,  4129,    63,  6138,
    6182,  6226,  -441,  6270,  6314,  2344,  4725,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,   384,
    6358,   387,  7203,    21,    13,    41,  7203,   185,   388,    32,
      34,   372,   260,  4786,   764,  -441,  -441,  -441,  -441,  -441,
    -441,  -441,  -441,  -441,  -441,  -441,   125,   256,  -441,   389,
    -441,   393,  4001,  -441,   265,   338,   338,   152,   152,   152,
    6578,  6930,   703,   703,  6974,  6886,    44,   703,   703,    44,
     501,   501,  6842,  6798,  6754,  6754,  6754,  6754,   764,  6754,
    4257,  -441,  6754,  6754,  6754,  6754,  6754,  6754,  6754,  6754,
    6754,  6754,  6754,  2472,  -441,  -441,  -441,  4001,   249,  2600,
    2728,  2856,  -441,  -441,  -441,  4001,   252,  2984,  3112,    93,
    -441,  -441,  -441,   764,   764,   936,  3240,  -441,  4385,   266,
    -441,  -441,   391,  -441,  -441,  -441,    45,  5762,   242,    73,
    -441,  4847,   936,  4908,   394,   395,  7203,    65,  7203,   262,
    4969,   396,  -441,  5030,   400,  7203,    72,  7203,   269,  -441,
      45,    76,  6754,  -441,   487,  -441,  -441,  5091,   385,  3368,
    -441,   764,  6754,  -441,  -441,  -441,  3496,  -441,  -441,  -441,
    -441,  3624,  -441,  -441,  -441,  -441,  6402,  6622,  -441,  4001,
    -441,  -441,   397,   143,  4001,  -441,   764,  -441,   270,   764,
      45,  5762,    45,    98,  -441,    45,   109,  5152,  5213,   402,
    5274,   404,  -441,    45,   110,  5335,    45,   130,  5396,   407,
    5457,   409,  -441,  -441,    45,  -441,    45,   137,   764,  -441,
    6754,  -441,  -441,   403,   764,  3752,   764,   401,    54,  3880,
    6754,   764,  6754,  -441,  -441,  -441,    45,  -441,    45,    45,
     141,    45,   142,  5518,    45,   146,  5579,  -441,    45,    45,
     147,  -441,    45,    45,   149,  5640,    45,   153,  5701,  -441,
    -441,    45,  6754,  -441,  6446,  -441,  6666,  4001,  -441,   764,
     405,  -441,  6754,  -441,  -441,  -441,    45,  -441,    45,    45,
     174,  -441,    45,    45,   188,  -441,  -441,    45,  -441,  -441,
      45,    45,   197,  -441,    45,    45,   238,  -441,   936,  4001,
    4001,  6710,  4001,  -441,  -441,  -441,    45,  -441,  -441,    45,
    -441,  -441,  -441,    45,  -441,  -441,    45,  -441,  4001,  4001,
    4001,  -441,  -441,  -441,  -441,  4001
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    21,     0,    14,     0,    24,    26,    22,    25,     0,
       9,    20,    19,    15,    23,     6,     8,     7,    17,    18,
      27,    13,     0,    16,     0,     2,     0,     0,    12,     4,
      85,    86,    87,    88,    90,     0,     0,    10,     0,     1,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,   117,   117,    90,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,    89,   117,   113,     0,   295,     0,     0,
       0,     0,   135,     0,     0,     0,     0,    35,   246,    42,
      49,     0,   245,    40,     0,    51,    61,    50,     0,     0,
       0,     0,    45,    47,    20,    74,    32,     0,    41,    43,
       0,     0,    37,     0,     0,    60,     0,    46,    48,     0,
      44,     0,     0,    59,    65,    64,    69,    66,    73,    72,
      63,    62,    67,    68,    71,    70,     0,     0,    12,     0,
      29,    28,    36,    38,    39,    30,   234,   118,     0,   116,
     119,   120,   129,   122,   121,   123,   211,   124,   125,   126,
     127,   128,   130,   131,   132,   133,     0,   242,   236,   237,
     238,   239,   241,   240,   243,   244,     0,     0,     0,   117,
     117,    90,     0,     0,     0,     0,     0,   117,   117,    90,
       0,     0,     0,     0,     0,   110,     0,    34,   232,     0,
     295,     0,     0,   264,   265,   267,   266,   262,   263,     0,
       0,   117,   117,   223,     0,     0,     0,   233,     0,    31,
       0,   201,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,   209,
      58,     0,     0,    33,   105,   115,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,   261,     0,     0,     0,   301,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   117,     0,
       0,     0,     0,     0,   117,   117,   117,     0,     0,     0,
       0,     0,   117,   117,    95,   114,   111,   294,   235,   297,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,   296,     0,     0,     0,     0,   165,   166,   168,
     167,   169,   184,   183,   174,   175,   180,   181,   178,   177,
     176,   179,   171,   170,   172,   173,   182,   163,   164,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,   209,     0,     0,     0,    52,    78,    77,    82,    79,
      84,    76,    75,    80,    81,    83,     0,     0,    56,     0,
     202,     0,   117,   216,     0,   271,   272,   274,   273,   275,
       0,   289,   280,   281,   286,   287,   284,   283,   282,   285,
     277,   276,   278,   279,   288,   291,   292,   290,     0,   302,
       0,   300,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   259,   258,     0,   106,   101,    96,   117,     0,     0,
       0,     0,   107,   102,    97,   117,     0,     0,     0,     0,
     228,   229,   222,     0,     0,     0,     0,   247,     0,     0,
     269,   270,     0,   268,   230,   231,     0,     0,     0,     0,
     155,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,   204,     0,     0,     0,   209,     0,     0,   203,
       0,     0,   210,    53,     0,    54,    57,     0,   207,     0,
     304,     0,   303,   298,   299,    91,     0,   108,   103,    98,
      92,     0,   109,   104,    99,   112,     0,     0,   227,   117,
     214,   248,   305,     0,   117,   158,     0,   136,     0,   159,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   138,     0,    55,     0,     0,     0,   215,
     293,    93,    94,     0,     0,     0,     0,     0,     0,     0,
     157,   161,   160,   137,   154,   185,     0,   140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,   139,
     187,     0,   208,   225,     0,   213,     0,   117,   217,     0,
       0,   156,   162,   186,   141,   189,     0,   146,     0,     0,
       0,   148,     0,     0,     0,   143,   191,     0,   145,   150,
       0,     0,     0,   152,     0,     0,     0,   188,     0,   117,
     221,     0,   117,   190,   147,   193,     0,   149,   195,     0,
     192,   151,   197,     0,   153,   199,     0,   226,   220,   117,
     219,   194,   196,   198,   200,   218
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -441,  -441,  -441,     6,    23,     2,   -97,  -441,  -441,  -441,
    -441,  -441,  -441,  -239,  -441,  -191,   -70,    46,   -53,  -441,
    -441,  -441,  -441,  -152,   -56,   -28,  -441,  -286,   187,  -106,
    -240,  -441,  -441,  -441,  -441,  -227,  -441,  -441,  -441,  -441,
    -441,  -440,  -441,  -441,  -441,  -441,  -441,  -441,  -441,  -441,
     419,  -441,  -441,  -441,  -441,  -441,  -134,  -441,   104,  -366,
    -441,  -441
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   376,   377,   146,   378,   147,    53,    30,
      31,    32,    33,    76,   148,   149,   150,   459,   517,   460,
     349,   151,   152,   153,   154,   242,   155,   156,   247,   157,
     558,   214,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   410,   411,
     174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     176,   379,    28,   305,   177,   508,    26,   220,   357,   384,
     200,   362,   185,   229,   239,   355,   467,   351,   193,   240,
     240,   240,   524,    27,   465,   -31,   289,    28,    28,    51,
     -31,    26,   363,    50,   297,   474,    34,   476,   197,   235,
     198,   238,   240,   199,   494,   470,    29,    51,    27,    45,
     364,   514,   248,    35,   249,   250,   251,   252,   253,    86,
     254,   598,    69,   364,   515,   307,   213,   257,   258,   530,
      70,    40,   365,   262,   263,   309,   540,   481,   520,   449,
      36,   544,   494,    71,   265,   266,    37,   364,   269,   270,
     271,   322,   516,   521,   364,   272,   521,   230,   241,   356,
     468,   352,    38,   566,   220,    39,   361,    72,   466,   -31,
     599,   240,   464,   114,   568,   578,   471,   600,   521,   475,
     245,   477,   273,   290,   291,    52,   274,   469,   292,   521,
     521,   298,   299,   478,   483,   582,   300,   354,    28,    51,
     360,   428,   591,   237,    54,   484,   606,   608,   245,   436,
     521,   612,   617,    57,   620,   311,   312,   521,   624,   234,
     248,   521,   521,   195,    96,   245,   521,   521,   254,   521,
     380,   381,   325,   521,    55,   523,   196,   526,   105,   636,
     366,   367,   368,   369,   534,   370,   371,   537,   647,   372,
     373,   374,   375,   639,   521,   317,   269,   270,   271,   556,
     115,   547,   643,   272,   472,   381,   557,   197,   521,   123,
     124,   125,   126,   127,   128,   129,   130,   521,   383,   131,
     132,   133,   134,   135,    56,   210,   529,   211,   531,   458,
     273,   227,   423,   228,   274,   539,    51,   541,   429,   430,
     431,   570,   572,   646,   575,   519,   437,   438,   505,   580,
     240,   424,   584,    58,   587,   432,   497,    59,   521,   502,
      60,   232,   245,   245,   196,   485,   458,    65,   196,   196,
     245,   245,   196,   561,   490,   512,   486,   408,   240,   479,
     381,   532,   381,   245,   245,   484,   484,   610,   542,   381,
     614,    66,    67,    68,    73,   194,    75,   245,    74,   622,
     178,   179,   626,   180,   181,   182,   183,   184,   189,   246,
     190,    87,   186,    89,   187,    90,   188,    69,   191,   408,
      93,   192,   217,    95,   215,    70,   489,   216,    28,   218,
      97,   222,   209,   223,   224,   225,   226,   102,    71,   231,
     243,   103,   288,   293,   106,   294,   248,   295,   296,   457,
     251,   252,   253,   301,   254,   108,   302,   109,   303,   306,
     518,   112,    72,   318,   458,    28,   458,   117,   118,   199,
     120,   496,   359,   458,   313,   326,   458,   197,   358,   501,
     427,   439,   269,   270,   271,   435,   457,   443,   461,   272,
     458,   463,   473,   487,   364,   245,   488,   513,   527,   528,
     535,   245,   245,   245,   538,   -53,   573,   548,   576,   245,
     245,   585,   408,   588,   545,   564,   273,   213,   510,   597,
     274,   448,   593,   632,   458,     0,     0,     0,     0,     0,
     458,   458,     0,   458,   213,     0,     0,     0,   458,     0,
       0,   458,     0,   458,     0,     0,     0,     0,     0,     0,
     408,     0,     0,   555,     0,     0,     0,     0,   559,    51,
       0,   245,     0,    28,     0,    28,     0,     0,   245,     0,
       0,     0,    28,   245,     0,    28,   458,     0,     0,   458,
       0,     0,     0,     0,   457,     0,   457,     0,   458,    28,
       0,   458,     0,   457,     0,     0,   457,   202,   203,   204,
     205,     0,   206,   207,   208,     0,     0,     0,     0,   248,
     457,   249,   250,   251,   252,   253,     0,   254,     0,     0,
       0,     0,     0,    28,     0,     0,   221,   245,     0,    28,
      28,   245,    28,     0,     0,     0,   275,    28,     0,     0,
      28,   630,    28,     0,   457,   269,   270,   271,     0,     0,
     457,   457,   272,   457,   276,     0,     0,     0,   457,     0,
       0,   457,     0,   457,   277,   278,   279,   280,   281,   282,
     283,   284,     0,   648,     0,    28,   650,     0,    28,   273,
     285,   286,     0,   274,     0,     0,     0,    28,     0,     0,
      28,     0,     0,   655,     0,     0,   457,     0,     0,   457,
     213,     0,   245,     0,   366,   367,   368,   369,   457,   370,
     371,   457,     0,   372,   373,   374,   375,     0,     0,     0,
     245,     0,   245,     0,     0,     0,     0,   245,     0,   310,
       0,     0,     0,     0,   314,   315,     0,   316,     0,     0,
       0,   319,   320,   321,     0,   323,   324,     0,     0,     0,
     350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   543,   385,   386,
     387,   388,   389,   390,   391,     0,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,     0,
       0,   405,   406,   407,   409,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,     0,   563,     0,   565,
       0,   248,   567,   249,   250,   251,   252,   253,     0,   254,
     577,     0,     0,   581,     0,     0,     0,     0,     0,     0,
       0,   589,     0,   590,     0,     0,   409,     0,     0,     0,
       0,     0,     0,   265,   266,     0,     0,   269,   270,   271,
       0,     0,     0,   603,   272,   604,   605,     0,   607,     0,
       0,   611,     0,     0,     0,   615,   616,   200,    78,   618,
     619,     0,     0,   623,    79,    80,     0,     0,   627,    81,
       0,   273,     0,   482,     0,   274,     0,     0,     0,     0,
       0,    83,     0,   633,     0,   634,   635,     0,     0,   637,
     638,     0,     0,     0,   640,     0,     0,   641,   642,    84,
      85,   644,   645,     0,     0,     0,    86,     0,    88,     0,
       0,     0,     0,   651,     0,    92,   652,   492,     0,   409,
     653,     0,     0,   654,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,   507,   110,   111,     0,   409,     0,     0,
     114,   115,   116,     0,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     1,
     131,   132,   133,   134,   135,     0,     0,     0,    46,     3,
       0,     0,     0,     0,     0,     0,    47,     5,     6,     7,
     550,     0,     0,     0,     0,     0,     8,     0,     0,    48,
      10,     0,     0,    11,     0,     0,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   560,     0,    20,   562,    77,
      78,    21,   212,    49,     0,     0,    79,    80,     0,     0,
       0,    81,    23,   236,     0,    82,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,   592,     0,     0,
       0,     0,     0,   594,     0,   596,     0,     0,     0,     0,
     602,    84,    85,     0,     0,     0,     1,     0,    86,    87,
      88,    89,     0,    90,    91,     2,     3,    92,    93,     0,
      94,    95,     0,     4,     5,     6,     7,    96,    97,    98,
      99,   100,   101,     8,     0,   102,     9,    10,   631,   103,
     104,   105,   106,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   107,   108,    20,   109,   110,   111,    21,   112,
      22,   113,   114,   115,   116,   117,   118,   119,   120,    23,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   131,   132,   133,   134,   135,    77,    78,     0,
       0,   244,     0,     0,    79,    80,     0,     0,     0,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,     0,     0,     0,     1,     0,    86,    87,    88,    89,
       0,    90,    91,     2,     3,    92,    93,     0,    94,    95,
       0,     4,     5,     6,     7,    96,    97,    98,    99,   100,
     101,     8,     0,   102,     9,    10,     0,   103,   104,   105,
     106,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     107,   108,    20,   109,   110,   111,    21,   112,    22,   113,
     114,   115,   116,   117,   118,   119,   120,    23,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,    77,    78,     0,     0,   287,
       0,     0,    79,    80,     0,     0,     0,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,     0,
       0,     0,     1,     0,    86,    87,    88,    89,     0,    90,
      91,     2,     3,    92,    93,     0,    94,    95,     0,     4,
       5,     6,     7,    96,    97,    98,    99,   100,   101,     8,
       0,   102,     9,    10,     0,   103,   104,   105,   106,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   107,   108,
      20,   109,   110,   111,    21,   112,    22,   113,   114,   115,
     116,   117,   118,   119,   120,    23,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,   131,   132,
     133,   134,   135,    77,    78,     0,     0,   304,     0,     0,
      79,    80,     0,     0,     0,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,     0,     0,     0,
       1,     0,    86,    87,    88,    89,     0,    90,    91,     2,
       3,    92,    93,     0,    94,    95,     0,     4,     5,     6,
       7,    96,    97,    98,    99,   100,   101,     8,     0,   102,
       9,    10,     0,   103,   104,   105,   106,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   107,   108,    20,   109,
     110,   111,    21,   112,    22,   113,   114,   115,   116,   117,
     118,   119,   120,    23,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,     0,     0,   131,   132,   133,   134,
     135,    77,    78,     0,   382,     0,     0,     0,    79,    80,
       0,     0,     0,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,     0,     0,     0,     1,     0,
      86,    87,    88,    89,     0,    90,    91,     2,     3,    92,
      93,     0,    94,    95,     0,     4,     5,     6,     7,    96,
      97,    98,    99,   100,   101,     8,     0,   102,     9,    10,
       0,   103,   104,   105,   106,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   107,   108,    20,   109,   110,   111,
      21,   112,    22,   113,   114,   115,   116,   117,   118,   119,
     120,    23,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,     0,     0,   131,   132,   133,   134,   135,    77,
      78,     0,     0,   425,     0,     0,    79,    80,     0,     0,
       0,    81,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,     0,     0,     0,     1,     0,    86,    87,
      88,    89,     0,    90,    91,     2,     3,    92,    93,     0,
      94,    95,     0,     4,     5,     6,     7,    96,    97,    98,
      99,   100,   101,     8,     0,   102,     9,    10,     0,   103,
     104,   105,   106,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   107,   108,    20,   109,   110,   111,    21,   112,
      22,   113,   114,   115,   116,   117,   118,   119,   120,    23,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   131,   132,   133,   134,   135,    77,    78,     0,
       0,   426,     0,     0,    79,    80,     0,     0,     0,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,     0,     0,     0,     1,     0,    86,    87,    88,    89,
       0,    90,    91,     2,     3,    92,    93,     0,    94,    95,
       0,     4,     5,     6,     7,    96,    97,    98,    99,   100,
     101,     8,     0,   102,     9,    10,     0,   103,   104,   105,
     106,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     107,   108,    20,   109,   110,   111,    21,   112,    22,   113,
     114,   115,   116,   117,   118,   119,   120,    23,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,    77,    78,     0,     0,   433,
       0,     0,    79,    80,     0,     0,     0,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,     0,
       0,     0,     1,     0,    86,    87,    88,    89,     0,    90,
      91,     2,     3,    92,    93,     0,    94,    95,     0,     4,
       5,     6,     7,    96,    97,    98,    99,   100,   101,     8,
       0,   102,     9,    10,     0,   103,   104,   105,   106,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   107,   108,
      20,   109,   110,   111,    21,   112,    22,   113,   114,   115,
     116,   117,   118,   119,   120,    23,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,   131,   132,
     133,   134,   135,    77,    78,     0,     0,   434,     0,     0,
      79,    80,     0,     0,     0,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,     0,     0,     0,
       1,     0,    86,    87,    88,    89,     0,    90,    91,     2,
       3,    92,    93,     0,    94,    95,     0,     4,     5,     6,
       7,    96,    97,    98,    99,   100,   101,     8,     0,   102,
       9,    10,     0,   103,   104,   105,   106,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   107,   108,    20,   109,
     110,   111,    21,   112,    22,   113,   114,   115,   116,   117,
     118,   119,   120,    23,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,     0,     0,   131,   132,   133,   134,
     135,    77,    78,     0,     0,   441,     0,     0,    79,    80,
       0,     0,     0,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,     0,     0,     0,     1,     0,
      86,    87,    88,    89,     0,    90,    91,     2,     3,    92,
      93,     0,    94,    95,     0,     4,     5,     6,     7,    96,
      97,    98,    99,   100,   101,     8,     0,   102,     9,    10,
       0,   103,   104,   105,   106,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   107,   108,    20,   109,   110,   111,
      21,   112,    22,   113,   114,   115,   116,   117,   118,   119,
     120,    23,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,     0,     0,   131,   132,   133,   134,   135,    77,
      78,     0,     0,   442,     0,     0,    79,    80,     0,     0,
       0,    81,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,     0,     0,     0,     1,     0,    86,    87,
      88,    89,     0,    90,    91,     2,     3,    92,    93,     0,
      94,    95,     0,     4,     5,     6,     7,    96,    97,    98,
      99,   100,   101,     8,     0,   102,     9,    10,     0,   103,
     104,   105,   106,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   107,   108,    20,   109,   110,   111,    21,   112,
      22,   113,   114,   115,   116,   117,   118,   119,   120,    23,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   131,   132,   133,   134,   135,    77,    78,     0,
       0,   455,     0,     0,    79,    80,     0,     0,     0,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,     0,     0,     0,     1,     0,    86,    87,    88,    89,
       0,    90,    91,     2,     3,    92,    93,     0,    94,    95,
       0,     4,     5,     6,     7,    96,    97,    98,    99,   100,
     101,     8,     0,   102,     9,    10,     0,   103,   104,   105,
     106,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     107,   108,    20,   109,   110,   111,    21,   112,    22,   113,
     114,   115,   116,   117,   118,   119,   120,    23,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,    77,    78,     0,     0,   495,
       0,     0,    79,    80,     0,     0,     0,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,     0,
       0,     0,     1,     0,    86,    87,    88,    89,     0,    90,
      91,     2,     3,    92,    93,     0,    94,    95,     0,     4,
       5,     6,     7,    96,    97,    98,    99,   100,   101,     8,
       0,   102,     9,    10,     0,   103,   104,   105,   106,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   107,   108,
      20,   109,   110,   111,    21,   112,    22,   113,   114,   115,
     116,   117,   118,   119,   120,    23,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,   131,   132,
     133,   134,   135,    77,    78,     0,     0,   498,     0,     0,
      79,    80,     0,     0,     0,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,     0,     0,     0,
       1,     0,    86,    87,    88,    89,     0,    90,    91,     2,
       3,    92,    93,     0,    94,    95,     0,     4,     5,     6,
       7,    96,    97,    98,    99,   100,   101,     8,     0,   102,
       9,    10,     0,   103,   104,   105,   106,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   107,   108,    20,   109,
     110,   111,    21,   112,    22,   113,   114,   115,   116,   117,
     118,   119,   120,    23,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,     0,     0,   131,   132,   133,   134,
     135,    77,    78,     0,     0,   499,     0,     0,    79,    80,
       0,     0,     0,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,     0,     0,     0,     1,     0,
      86,    87,    88,    89,     0,    90,    91,     2,     3,    92,
      93,     0,    94,    95,     0,     4,     5,     6,     7,    96,
      97,    98,    99,   100,   101,     8,     0,   102,     9,    10,
       0,   103,   104,   105,   106,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   107,   108,    20,   109,   110,   111,
      21,   112,    22,   113,   114,   115,   116,   117,   118,   119,
     120,    23,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,     0,     0,   131,   132,   133,   134,   135,    77,
      78,     0,     0,   500,     0,     0,    79,    80,     0,     0,
       0,    81,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,     0,     0,     0,     1,     0,    86,    87,
      88,    89,     0,    90,    91,     2,     3,    92,    93,     0,
      94,    95,     0,     4,     5,     6,     7,    96,    97,    98,
      99,   100,   101,     8,     0,   102,     9,    10,     0,   103,
     104,   105,   106,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   107,   108,    20,   109,   110,   111,    21,   112,
      22,   113,   114,   115,   116,   117,   118,   119,   120,    23,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   131,   132,   133,   134,   135,    77,    78,     0,
       0,   503,     0,     0,    79,    80,     0,     0,     0,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,     0,     0,     0,     1,     0,    86,    87,    88,    89,
       0,    90,    91,     2,     3,    92,    93,     0,    94,    95,
       0,     4,     5,     6,     7,    96,    97,    98,    99,   100,
     101,     8,     0,   102,     9,    10,     0,   103,   104,   105,
     106,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     107,   108,    20,   109,   110,   111,    21,   112,    22,   113,
     114,   115,   116,   117,   118,   119,   120,    23,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,    77,    78,     0,     0,   504,
       0,     0,    79,    80,     0,     0,     0,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,     0,
       0,     0,     1,     0,    86,    87,    88,    89,     0,    90,
      91,     2,     3,    92,    93,     0,    94,    95,     0,     4,
       5,     6,     7,    96,    97,    98,    99,   100,   101,     8,
       0,   102,     9,    10,     0,   103,   104,   105,   106,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   107,   108,
      20,   109,   110,   111,    21,   112,    22,   113,   114,   115,
     116,   117,   118,   119,   120,    23,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,   131,   132,
     133,   134,   135,    77,    78,     0,   509,     0,     0,     0,
      79,    80,     0,     0,     0,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,     0,     0,     0,
       1,     0,    86,    87,    88,    89,     0,    90,    91,     2,
       3,    92,    93,     0,    94,    95,     0,     4,     5,     6,
       7,    96,    97,    98,    99,   100,   101,     8,     0,   102,
       9,    10,     0,   103,   104,   105,   106,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   107,   108,    20,   109,
     110,   111,    21,   112,    22,   113,   114,   115,   116,   117,
     118,   119,   120,    23,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,     0,     0,   131,   132,   133,   134,
     135,    77,    78,     0,     0,   549,     0,     0,    79,    80,
       0,     0,     0,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,     0,     0,     0,     1,     0,
      86,    87,    88,    89,     0,    90,    91,     2,     3,    92,
      93,     0,    94,    95,     0,     4,     5,     6,     7,    96,
      97,    98,    99,   100,   101,     8,     0,   102,     9,    10,
       0,   103,   104,   105,   106,     0,    12,    13,    14,    15,
      16,    17,    18,    19,   107,   108,    20,   109,   110,   111,
      21,   112,    22,   113,   114,   115,   116,   117,   118,   119,
     120,    23,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,     0,     0,   131,   132,   133,   134,   135,    77,
      78,     0,     0,   551,     0,     0,    79,    80,     0,     0,
       0,    81,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,     0,     0,     0,     1,     0,    86,    87,
      88,    89,     0,    90,    91,     2,     3,    92,    93,     0,
      94,    95,     0,     4,     5,     6,     7,    96,    97,    98,
      99,   100,   101,     8,     0,   102,     9,    10,     0,   103,
     104,   105,   106,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   107,   108,    20,   109,   110,   111,    21,   112,
      22,   113,   114,   115,   116,   117,   118,   119,   120,    23,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   131,   132,   133,   134,   135,    77,    78,     0,
       0,   552,     0,     0,    79,    80,     0,     0,     0,    81,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      85,     0,     0,     0,     1,     0,    86,    87,    88,    89,
       0,    90,    91,     2,     3,    92,    93,     0,    94,    95,
       0,     4,     5,     6,     7,    96,    97,    98,    99,   100,
     101,     8,     0,   102,     9,    10,     0,   103,   104,   105,
     106,     0,    12,    13,    14,    15,    16,    17,    18,    19,
     107,   108,    20,   109,   110,   111,    21,   112,    22,   113,
     114,   115,   116,   117,   118,   119,   120,    23,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,     0,     0,
     131,   132,   133,   134,   135,    77,    78,     0,     0,   595,
       0,     0,    79,    80,     0,     0,     0,    81,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,     0,
       0,     0,     1,     0,    86,    87,    88,    89,     0,    90,
      91,     2,     3,    92,    93,     0,    94,    95,     0,     4,
       5,     6,     7,    96,    97,    98,    99,   100,   101,     8,
       0,   102,     9,    10,     0,   103,   104,   105,   106,     0,
      12,    13,    14,    15,    16,    17,    18,    19,   107,   108,
      20,   109,   110,   111,    21,   112,    22,   113,   114,   115,
     116,   117,   118,   119,   120,    23,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,   131,   132,
     133,   134,   135,    77,    78,     0,     0,   601,     0,     0,
      79,    80,     0,     0,     0,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,     0,     0,     0,
       1,     0,    86,    87,    88,    89,     0,    90,    91,     2,
       3,    92,    93,     0,    94,    95,     0,     4,     5,     6,
       7,    96,    97,    98,    99,   100,   101,     8,     0,   102,
       9,    10,     0,   103,   104,   105,   106,     0,    12,    13,
      14,    15,    16,    17,    18,    19,   107,   108,    20,   109,
     110,   111,    21,   112,    22,   113,   114,   115,   116,   117,
     118,   119,   120,    23,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    77,    78,   131,   132,   133,   134,
     135,    79,    80,     0,     0,     0,    81,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,     0,     0,
       0,     1,     0,    86,    87,    88,    89,     0,    90,    91,
       2,     3,    92,    93,     0,    94,    95,     0,     4,     5,
       6,     7,    96,    97,    98,    99,   100,   101,     8,     0,
     102,     9,    10,     0,   103,   104,   105,   106,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   107,   108,    20,
     109,   110,   111,    21,   112,    22,   113,   114,   115,   116,
     117,   118,   119,   120,    23,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,     0,     0,   131,   132,   133,
     134,   135,   200,    78,   447,     0,     0,     0,     0,    79,
      80,     0,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,     0,     0,     0,     1,
       0,    86,     0,    88,     0,     0,     0,     0,     0,     3,
      92,     0,     0,     0,     0,     0,     0,     5,     6,     7,
      96,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,   104,   105,     0,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,     0,    20,     0,   110,
     111,    21,     0,     0,     0,   114,   115,   116,     0,     0,
       0,     0,    23,     0,     0,   123,   124,   125,   126,   127,
     128,   129,   130,     0,     0,   131,   132,   133,   134,   135,
     200,    78,   493,     0,     0,     0,     0,    79,    80,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,     0,     0,     0,     1,     0,    86,
       0,    88,     0,     0,     0,     0,     0,     3,    92,     0,
       0,     0,     0,     0,     0,     5,     6,     7,    96,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
       0,   104,   105,     0,     0,    12,    13,    14,     0,     0,
       0,    18,    19,     0,     0,    20,     0,   110,   111,    21,
       0,     0,     0,   114,   115,   116,     0,     0,     0,     0,
      23,     0,     0,   123,   124,   125,   126,   127,   128,   129,
     130,     0,     0,   131,   132,   133,   134,   135,   200,    78,
     511,     0,     0,     0,     0,    79,    80,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,     0,     0,     0,     1,     0,    86,     0,    88,
       0,     0,     0,     0,     0,     3,    92,     0,     0,     0,
       0,     0,     0,     5,     6,     7,    96,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,   104,
     105,     0,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,     0,    20,     0,   110,   111,    21,     0,     0,
       0,   114,   115,   116,     0,     0,     0,     0,    23,     0,
       0,   123,   124,   125,   126,   127,   128,   129,   130,   200,
      78,   131,   132,   133,   134,   135,    79,    80,     0,     0,
       0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,     0,     0,     0,     1,     0,    86,     0,
      88,     0,     0,     0,     0,     0,     3,    92,     0,     0,
       0,     0,     0,     0,     5,     6,     7,    96,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
     104,   105,   232,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,     0,    20,     0,   110,   111,    21,     0,
       0,     0,   114,   115,   116,     0,     0,     0,     0,    23,
       0,     0,   123,   124,   125,   126,   127,   128,   129,   130,
       0,     0,   131,   132,   133,   134,   135,     0,     0,     1,
       0,     0,    87,     0,    89,     0,    90,     0,    41,     3,
       0,    93,     0,     0,    95,     0,    42,     5,     6,     7,
     232,    97,     0,     0,     0,     0,     8,     0,   102,    43,
       0,     0,   103,    11,     0,   106,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   108,    20,   109,     0,
       0,    21,   112,    44,     0,     0,     0,     0,   117,   118,
       0,   120,    23,   233,     0,     0,     0,     1,     0,     0,
      87,     0,    89,     0,    90,     0,    61,     3,     0,    93,
       0,     0,    95,     0,    62,     5,     6,     7,   232,    97,
     456,     0,     0,     0,     8,     0,   102,    63,     0,     0,
     103,    11,     0,   106,     0,    12,    13,    14,     0,     0,
       0,    18,    19,     0,   108,    20,   109,     0,     0,    21,
     112,    64,     0,     0,     0,     0,   117,   118,     0,   120,
      23,   353,     0,     0,     0,     1,     0,     0,    87,     0,
      89,     0,    90,     0,     0,     3,     0,    93,     0,   232,
      95,   480,     0,     5,     6,     7,     0,    97,     0,     0,
       0,     0,     8,     0,   102,     0,     0,     0,   103,    11,
       0,   106,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,   108,    20,   109,     0,     0,    21,   112,     0,
       0,     0,     0,     0,   117,   118,     1,   120,    23,    87,
       0,    89,     0,    90,     0,     0,     3,     0,    93,     0,
     232,    95,   522,     0,     5,     6,     7,     0,    97,     0,
       0,     0,     0,     8,     0,   102,     0,     0,     0,   103,
      11,     0,   106,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,   108,    20,   109,     0,     0,    21,   112,
       0,     0,     0,     0,     0,   117,   118,     1,   120,    23,
      87,     0,    89,     0,    90,     0,     0,     3,     0,    93,
       0,   232,    95,   525,     0,     5,     6,     7,     0,    97,
       0,     0,     0,     0,     8,     0,   102,     0,     0,     0,
     103,    11,     0,   106,     0,    12,    13,    14,     0,     0,
       0,    18,    19,     0,   108,    20,   109,     0,     0,    21,
     112,     0,     0,     0,     0,     0,   117,   118,     1,   120,
      23,    87,     0,    89,     0,    90,     0,     0,     3,     0,
      93,     0,   232,    95,   533,     0,     5,     6,     7,     0,
      97,     0,     0,     0,     0,     8,     0,   102,     0,     0,
       0,   103,    11,     0,   106,     0,    12,    13,    14,     0,
       0,     0,    18,    19,     0,   108,    20,   109,     0,     0,
      21,   112,     0,     0,     0,     0,     0,   117,   118,     1,
     120,    23,    87,     0,    89,     0,    90,     0,     0,     3,
       0,    93,     0,   232,    95,   536,     0,     5,     6,     7,
       0,    97,     0,     0,     0,     0,     8,     0,   102,     0,
       0,     0,   103,    11,     0,   106,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   108,    20,   109,     0,
       0,    21,   112,     0,     0,     0,     0,     0,   117,   118,
       1,   120,    23,    87,     0,    89,     0,    90,     0,     0,
       3,     0,    93,     0,   232,    95,   546,     0,     5,     6,
       7,     0,    97,     0,     0,     0,     0,     8,     0,   102,
       0,     0,     0,   103,    11,     0,   106,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   108,    20,   109,
       0,     0,    21,   112,     0,     0,     0,     0,     0,   117,
     118,     1,   120,    23,    87,     0,    89,     0,    90,     0,
       0,     3,     0,    93,     0,   232,    95,   569,     0,     5,
       6,     7,     0,    97,     0,     0,     0,     0,     8,     0,
     102,     0,     0,     0,   103,    11,     0,   106,     0,    12,
      13,    14,     0,     0,     0,    18,    19,     0,   108,    20,
     109,     0,     0,    21,   112,     0,     0,     0,     0,     0,
     117,   118,     1,   120,    23,    87,     0,    89,     0,    90,
       0,     0,     3,     0,    93,     0,   232,    95,   571,     0,
       5,     6,     7,     0,    97,     0,     0,     0,     0,     8,
       0,   102,     0,     0,     0,   103,    11,     0,   106,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,   108,
      20,   109,     0,     0,    21,   112,     0,     0,     0,     0,
       0,   117,   118,     1,   120,    23,    87,     0,    89,     0,
      90,     0,     0,     3,     0,    93,     0,   232,    95,   574,
       0,     5,     6,     7,     0,    97,     0,     0,     0,     0,
       8,     0,   102,     0,     0,     0,   103,    11,     0,   106,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     108,    20,   109,     0,     0,    21,   112,     0,     0,     0,
       0,     0,   117,   118,     1,   120,    23,    87,     0,    89,
       0,    90,     0,     0,     3,     0,    93,     0,   232,    95,
     579,     0,     5,     6,     7,     0,    97,     0,     0,     0,
       0,     8,     0,   102,     0,     0,     0,   103,    11,     0,
     106,     0,    12,    13,    14,     0,     0,     0,    18,    19,
       0,   108,    20,   109,     0,     0,    21,   112,     0,     0,
       0,     0,     0,   117,   118,     1,   120,    23,    87,     0,
      89,     0,    90,     0,     0,     3,     0,    93,     0,   232,
      95,   583,     0,     5,     6,     7,     0,    97,     0,     0,
       0,     0,     8,     0,   102,     0,     0,     0,   103,    11,
       0,   106,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,   108,    20,   109,     0,     0,    21,   112,     0,
       0,     0,     0,     0,   117,   118,     1,   120,    23,    87,
       0,    89,     0,    90,     0,     0,     3,     0,    93,     0,
     232,    95,   586,     0,     5,     6,     7,     0,    97,     0,
       0,     0,     0,     8,     0,   102,     0,     0,     0,   103,
      11,     0,   106,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,   108,    20,   109,     0,     0,    21,   112,
       0,     0,     0,     0,     0,   117,   118,     1,   120,    23,
      87,     0,    89,     0,    90,     0,     0,     3,     0,    93,
       0,   232,    95,   609,     0,     5,     6,     7,     0,    97,
       0,     0,     0,     0,     8,     0,   102,     0,     0,     0,
     103,    11,     0,   106,     0,    12,    13,    14,     0,     0,
       0,    18,    19,     0,   108,    20,   109,     0,     0,    21,
     112,     0,     0,     0,     0,     0,   117,   118,     1,   120,
      23,    87,     0,    89,     0,    90,     0,     0,     3,     0,
      93,     0,   232,    95,   613,     0,     5,     6,     7,     0,
      97,     0,     0,     0,     0,     8,     0,   102,     0,     0,
       0,   103,    11,     0,   106,     0,    12,    13,    14,     0,
       0,     0,    18,    19,     0,   108,    20,   109,     0,     0,
      21,   112,     0,     0,     0,     0,     0,   117,   118,     1,
     120,    23,    87,     0,    89,     0,    90,     0,     0,     3,
       0,    93,     0,   232,    95,   621,     0,     5,     6,     7,
       0,    97,     0,     0,     0,     0,     8,     0,   102,     0,
       0,     0,   103,    11,     0,   106,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   108,    20,   109,     0,
       0,    21,   112,     0,     0,     0,     0,     0,   117,   118,
       1,   120,    23,    87,     0,    89,     0,    90,     0,     0,
       3,     0,    93,     0,   232,    95,   625,     0,     5,     6,
       7,     0,    97,     0,     0,     0,     0,     8,     0,   102,
       0,     0,     0,   103,    11,     0,   106,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   108,    20,   109,
       0,     0,    21,   112,     0,     0,     0,     0,     0,   117,
     118,     1,   120,    23,    87,     0,    89,     0,    90,     0,
       0,     3,     0,    93,     0,   232,    95,     0,     0,     5,
       6,     7,     0,    97,     0,     0,     0,     0,     8,     0,
     102,     0,     0,     0,   103,    11,     0,   106,     0,    12,
      13,    14,     0,     0,     0,    18,    19,     0,   108,    20,
     109,     0,     0,    21,   112,     0,     0,     0,     0,     0,
     117,   118,     1,   120,    23,    87,     0,    89,     0,    90,
       0,     0,     3,     0,    93,     0,   219,    95,     0,     0,
       5,     6,     7,     0,    97,     0,     0,     0,     0,     8,
       0,   102,     0,     0,     0,   103,    11,     0,   106,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,   108,
      20,   109,   232,     0,    21,   112,     0,     0,     0,     0,
       0,   117,   118,     0,   120,    23,    87,     0,    89,     0,
      90,     0,     0,     0,     0,    93,     0,     0,    95,     0,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,   103,     0,     0,   106,
       0,     0,    87,     0,    89,     0,    90,     0,     0,     0,
     108,    93,   109,     0,    95,     0,   112,     0,     0,     0,
       0,    97,   117,   118,     0,   120,     0,     0,   102,     0,
       0,     0,   103,     0,     0,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   109,     0,
       0,     0,   112,     0,     0,     0,     0,   308,   117,   118,
     248,   120,   249,   250,   251,   252,   253,     0,   254,   255,
       0,     0,     0,     0,     0,   257,   258,   259,   260,     0,
     261,   262,   263,   264,     0,     0,     0,     0,     0,     0,
       0,     0,   265,   266,   267,   268,   269,   270,   271,     0,
       0,   440,     0,   272,   248,     0,   249,   250,   251,   252,
     253,     0,   254,   255,     0,     0,     0,     0,     0,   257,
     258,   259,   260,     0,   261,   262,   263,   264,     0,     0,
     273,     0,     0,     0,   274,     0,   265,   266,   267,   268,
     269,   270,   271,     0,     0,   445,     0,   272,   248,     0,
     249,   250,   251,   252,   253,     0,   254,   255,     0,     0,
       0,     0,     0,   257,   258,   259,   260,     0,   261,   262,
     263,   264,     0,     0,   273,     0,     0,     0,   274,     0,
     265,   266,   267,   268,   269,   270,   271,     0,     0,   446,
       0,   272,   248,     0,   249,   250,   251,   252,   253,     0,
     254,   255,     0,     0,     0,     0,     0,   257,   258,   259,
     260,     0,   261,   262,   263,   264,     0,     0,   273,     0,
       0,     0,   274,     0,   265,   266,   267,   268,   269,   270,
     271,     0,     0,   450,     0,   272,   248,     0,   249,   250,
     251,   252,   253,     0,   254,   255,     0,     0,     0,     0,
       0,   257,   258,   259,   260,     0,   261,   262,   263,   264,
       0,     0,   273,     0,     0,     0,   274,     0,   265,   266,
     267,   268,   269,   270,   271,     0,     0,   451,     0,   272,
     248,     0,   249,   250,   251,   252,   253,     0,   254,   255,
       0,     0,     0,     0,     0,   257,   258,   259,   260,     0,
     261,   262,   263,   264,     0,     0,   273,     0,     0,     0,
     274,     0,   265,   266,   267,   268,   269,   270,   271,     0,
       0,   452,     0,   272,   248,     0,   249,   250,   251,   252,
     253,     0,   254,   255,     0,     0,     0,     0,     0,   257,
     258,   259,   260,     0,   261,   262,   263,   264,     0,     0,
     273,     0,     0,     0,   274,     0,   265,   266,   267,   268,
     269,   270,   271,     0,     0,   453,     0,   272,   248,     0,
     249,   250,   251,   252,   253,     0,   254,   255,     0,     0,
       0,     0,     0,   257,   258,   259,   260,     0,   261,   262,
     263,   264,     0,     0,   273,     0,     0,     0,   274,     0,
     265,   266,   267,   268,   269,   270,   271,     0,     0,   454,
       0,   272,   248,     0,   249,   250,   251,   252,   253,     0,
     254,   255,     0,     0,     0,     0,     0,   257,   258,   259,
     260,     0,   261,   262,   263,   264,     0,     0,   273,     0,
       0,     0,   274,     0,   265,   266,   267,   268,   269,   270,
     271,     0,     0,   462,     0,   272,   248,     0,   249,   250,
     251,   252,   253,     0,   254,   255,     0,     0,     0,     0,
       0,   257,   258,   259,   260,     0,   261,   262,   263,   264,
       0,     0,   273,     0,     0,     0,   274,     0,   265,   266,
     267,   268,   269,   270,   271,     0,     0,   553,     0,   272,
     248,     0,   249,   250,   251,   252,   253,     0,   254,   255,
       0,     0,     0,     0,     0,   257,   258,   259,   260,     0,
     261,   262,   263,   264,     0,     0,   273,     0,     0,     0,
     274,     0,   265,   266,   267,   268,   269,   270,   271,     0,
       0,   628,     0,   272,   248,     0,   249,   250,   251,   252,
     253,     0,   254,   255,     0,     0,     0,     0,     0,   257,
     258,   259,   260,     0,   261,   262,   263,   264,     0,     0,
     273,     0,     0,     0,   274,     0,   265,   266,   267,   268,
     269,   270,   271,     0,     0,     0,     0,   272,   248,     0,
     249,   250,   251,   252,   253,     0,   254,   255,     0,   256,
       0,     0,     0,   257,   258,   259,   260,     0,   261,   262,
     263,   264,     0,     0,   273,     0,     0,     0,   274,     0,
     265,   266,   267,   268,   269,   270,   271,     0,     0,     0,
       0,   272,   248,     0,   249,   250,   251,   252,   253,     0,
     254,   255,     0,   444,     0,     0,     0,   257,   258,   259,
     260,     0,   261,   262,   263,   264,     0,     0,   273,     0,
       0,     0,   274,     0,   265,   266,   267,   268,   269,   270,
     271,     0,     0,     0,     0,   272,   248,     0,   249,   250,
     251,   252,   253,     0,   254,   255,   491,     0,     0,     0,
       0,   257,   258,   259,   260,     0,   261,   262,   263,   264,
       0,     0,   273,     0,     0,     0,   274,     0,   265,   266,
     267,   268,   269,   270,   271,     0,     0,     0,     0,   272,
     248,     0,   249,   250,   251,   252,   253,     0,   254,   255,
       0,   554,     0,     0,     0,   257,   258,   259,   260,     0,
     261,   262,   263,   264,     0,     0,   273,     0,     0,     0,
     274,     0,   265,   266,   267,   268,   269,   270,   271,     0,
       0,     0,     0,   272,   248,     0,   249,   250,   251,   252,
     253,     0,   254,   255,   629,     0,     0,     0,     0,   257,
     258,   259,   260,     0,   261,   262,   263,   264,     0,     0,
     273,     0,     0,     0,   274,     0,   265,   266,   267,   268,
     269,   270,   271,     0,     0,     0,     0,   272,   248,     0,
     249,   250,   251,   252,   253,     0,   254,   255,   649,     0,
       0,     0,     0,   257,   258,   259,   260,     0,   261,   262,
     263,   264,     0,     0,   273,     0,     0,     0,   274,     0,
     265,   266,   267,   268,   269,   270,   271,     0,     0,     0,
       0,   272,   248,     0,   249,   250,   251,   252,   253,     0,
     254,   255,     0,     0,     0,     0,     0,   257,   258,   259,
     260,     0,   261,   262,   263,   264,     0,     0,   273,     0,
       0,     0,   274,     0,   265,   266,   267,   268,   269,   270,
     271,     0,     0,     0,     0,   272,   248,     0,   249,   250,
     251,   252,   253,     0,   254,   255,     0,     0,     0,     0,
       0,   257,   258,   259,   260,     0,   261,   262,   263,   264,
       0,     0,   273,     0,     0,     0,   274,     0,   265,   266,
     267,     0,   269,   270,   271,     0,     0,     0,     0,   272,
     248,     0,   249,   250,   251,   252,   253,     0,   254,   255,
       0,     0,     0,     0,     0,   257,   258,   259,   260,     0,
     261,   262,   263,   264,     0,     0,   273,     0,     0,     0,
     274,     0,   265,   266,     0,     0,   269,   270,   271,     0,
       0,     0,     0,   272,   248,     0,   249,   250,   251,   252,
     253,     0,   254,   255,     0,     0,     0,     0,     0,   257,
     258,   259,     0,     0,   261,   262,   263,   264,     0,     0,
     273,     0,     0,     0,   274,     0,   265,   266,     0,     0,
     269,   270,   271,     0,     0,     0,     0,   272,   248,     0,
     249,   250,   251,   252,   253,     0,   254,     0,     0,     0,
       0,     0,     0,   257,   258,   259,     0,     0,   261,   262,
     263,   264,     0,     0,   273,     0,     0,     0,   274,     0,
     265,   266,     0,     0,   269,   270,   271,     0,     0,     0,
       0,   272,   248,     0,   249,   250,   251,   252,   253,     0,
     254,     0,     0,     0,     0,     0,     0,   257,   258,     0,
       0,     0,   261,   262,   263,   264,     0,     0,   273,     0,
       0,     0,   274,     0,   265,   266,     0,     0,   269,   270,
     271,     0,     0,     1,     0,   272,     0,     0,     0,     0,
       0,     0,     2,     3,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     0,     0,     0,     0,     0,     0,
       8,     0,   273,     9,    10,     0,   274,    11,     0,     0,
       0,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       1,    20,     0,     0,     0,    21,     0,    22,     0,    46,
       3,     0,     0,     0,     0,     0,    23,    47,     5,     6,
       7,     0,     0,     0,     0,     0,     0,     8,     0,     0,
      48,    10,     0,     0,    11,     0,     0,     0,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     1,    20,     0,
       0,     0,    21,     0,    49,     0,    41,     3,     0,     0,
       0,     0,     0,    23,    42,     5,     6,     7,     0,     0,
       0,     0,     0,     0,     8,     0,     0,    43,     0,     0,
       0,    11,     0,     0,     0,    12,    13,    14,     1,     0,
       0,    18,    19,     0,     0,    20,     0,    61,     3,    21,
       0,    44,     0,     0,     0,    62,     5,     6,     7,     0,
      23,     0,     0,     0,     0,     8,     0,     0,    63,     0,
       0,     0,    11,     0,     0,     0,    12,    13,    14,     0,
       0,     0,    18,    19,     0,     0,    20,     0,     0,     0,
      21,     0,    64,   327,   328,   329,   330,   331,     0,   332,
     333,    23,     0,     0,     0,     0,   334,   335,   336,   337,
       0,   338,   339,   340,   341,     0,     0,     0,     0,     0,
       0,     0,     0,   342,   343,   344,   345,   346,   347,   348
};

static const yytype_int16 yycheck[] =
{
      56,   241,     0,   194,    57,   445,     0,   104,   235,   248,
       3,   238,    65,     3,     3,     3,     3,     3,    74,     8,
       8,     8,   462,     0,     3,     3,   178,    25,    26,    27,
       8,    25,     4,    27,   186,     3,     3,     3,    16,   136,
      18,   138,     8,    21,   410,     4,     0,    45,    25,    26,
      22,     6,     8,     3,    10,    11,    12,    13,    14,    52,
      16,     7,    59,    22,    19,   199,    94,    23,    24,     4,
      67,    25,     9,    29,    30,   209,     4,   363,     5,   318,
       3,     5,   448,    80,    40,    41,    81,    22,    44,    45,
      46,   225,    47,    20,    22,    51,    20,    87,    87,    87,
      87,    87,     3,     5,   201,     0,     3,   104,    87,    87,
      56,     8,   352,   106,     5,     5,   356,    63,    20,    87,
     148,    87,    78,   179,   180,    18,    82,   354,   181,    20,
      20,   187,   188,   360,     9,     5,   189,   234,   136,   137,
     237,   293,     5,   137,     6,    20,     5,     5,   176,   301,
      20,     5,     5,     3,     5,   211,   212,    20,     5,   136,
       8,    20,    20,     7,    71,   193,    20,    20,    16,    20,
      19,    20,   228,    20,     6,   461,    20,   463,    85,     5,
     117,   118,   119,   120,   470,   122,   123,   473,   628,   126,
     127,   128,   129,     5,    20,     4,    44,    45,    46,    56,
     107,   487,     5,    51,    19,    20,    63,    16,    20,   116,
     117,   118,   119,   120,   121,   122,   123,    20,   246,   126,
     127,   128,   129,   130,     6,     4,   466,     6,   468,   326,
      78,     4,   288,     6,    82,   475,   234,   477,   294,   295,
     296,   527,   528,     5,   530,     3,   302,   303,   439,   535,
       8,     7,   538,     3,   540,     7,     7,     3,    20,     7,
       3,     3,   290,   291,    20,     9,   363,     3,    20,    20,
     298,   299,    20,     3,     9,     9,    20,   275,     8,    19,
      20,    19,    20,   311,   312,    20,    20,   573,    19,    20,
     576,     3,     3,     3,     3,    22,     3,   325,     6,   585,
       6,     6,   588,     6,     3,     3,     3,     3,     3,    66,
       3,    53,     6,    55,     6,    57,     6,    59,     3,   317,
      62,     3,     3,    65,     4,    67,   382,     4,   326,     4,
      72,     4,    21,     4,     4,    21,     4,    79,    80,     4,
      16,    83,     6,     6,    86,     6,     8,     6,     6,   326,
      12,    13,    14,     6,    16,    97,     6,    99,     6,     3,
     457,   103,   104,     8,   461,   363,   463,   109,   110,    21,
     112,   427,   114,   470,   115,     4,   473,    16,     3,   435,
       6,    22,    44,    45,    46,     6,   363,     4,     4,    51,
     487,     4,     4,     4,    22,   423,     3,     6,     4,     4,
       4,   429,   430,   431,     4,     8,     4,    22,     4,   437,
     438,     4,   410,     4,   484,   521,    78,   445,   446,    18,
      82,   317,    19,    18,   521,    -1,    -1,    -1,    -1,    -1,
     527,   528,    -1,   530,   462,    -1,    -1,    -1,   535,    -1,
      -1,   538,    -1,   540,    -1,    -1,    -1,    -1,    -1,    -1,
     448,    -1,    -1,   509,    -1,    -1,    -1,    -1,   514,   457,
      -1,   489,    -1,   461,    -1,   463,    -1,    -1,   496,    -1,
      -1,    -1,   470,   501,    -1,   473,   573,    -1,    -1,   576,
      -1,    -1,    -1,    -1,   461,    -1,   463,    -1,   585,   487,
      -1,   588,    -1,   470,    -1,    -1,   473,    78,    79,    80,
      81,    -1,    83,    84,    85,    -1,    -1,    -1,    -1,     8,
     487,    10,    11,    12,    13,    14,    -1,    16,    -1,    -1,
      -1,    -1,    -1,   521,    -1,    -1,   107,   555,    -1,   527,
     528,   559,   530,    -1,    -1,    -1,     4,   535,    -1,    -1,
     538,   597,   540,    -1,   521,    44,    45,    46,    -1,    -1,
     527,   528,    51,   530,    22,    -1,    -1,    -1,   535,    -1,
      -1,   538,    -1,   540,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,   629,    -1,   573,   632,    -1,   576,    78,
      48,    49,    -1,    82,    -1,    -1,    -1,   585,    -1,    -1,
     588,    -1,    -1,   649,    -1,    -1,   573,    -1,    -1,   576,
     628,    -1,   630,    -1,   117,   118,   119,   120,   585,   122,
     123,   588,    -1,   126,   127,   128,   129,    -1,    -1,    -1,
     648,    -1,   650,    -1,    -1,    -1,    -1,   655,    -1,   210,
      -1,    -1,    -1,    -1,   215,   216,    -1,   218,    -1,    -1,
      -1,   222,   223,   224,    -1,   226,   227,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   480,   249,   250,
     251,   252,   253,   254,   255,    -1,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,    -1,
      -1,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,    -1,   520,    -1,   522,
      -1,     8,   525,    10,    11,    12,    13,    14,    -1,    16,
     533,    -1,    -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   544,    -1,   546,    -1,    -1,   317,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,   566,    51,   568,   569,    -1,   571,    -1,
      -1,   574,    -1,    -1,    -1,   578,   579,     3,     4,   582,
     583,    -1,    -1,   586,    10,    11,    -1,    -1,   591,    15,
      -1,    78,    -1,   364,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    27,    -1,   606,    -1,   608,   609,    -1,    -1,   612,
     613,    -1,    -1,    -1,   617,    -1,    -1,   620,   621,    45,
      46,   624,   625,    -1,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,   636,    -1,    61,   639,   408,    -1,   410,
     643,    -1,    -1,   646,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   443,   444,   100,   101,    -1,   448,    -1,    -1,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    50,
     126,   127,   128,   129,   130,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
     491,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,   516,    -1,    98,   519,     3,
       4,   102,     6,   104,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,   113,   114,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,   548,    -1,    -1,
      -1,    -1,    -1,   554,    -1,   556,    -1,    -1,    -1,    -1,
     561,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,   599,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,   130,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    -1,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,   130,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    -1,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,   126,   127,   128,   129,
     130,     3,     4,    -1,     6,    -1,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      -1,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,    -1,   126,   127,   128,   129,   130,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,   130,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    -1,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,   130,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    -1,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,   126,   127,   128,   129,
     130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      -1,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,    -1,   126,   127,   128,   129,   130,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,   130,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    -1,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,   130,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    -1,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,   126,   127,   128,   129,
     130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      -1,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,    -1,   126,   127,   128,   129,   130,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,   130,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    -1,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,   130,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    -1,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,     3,     4,    -1,     6,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    -1,    -1,   126,   127,   128,   129,
     130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,
      52,    53,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    79,    80,    81,
      -1,    83,    84,    85,    86,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,    -1,   126,   127,   128,   129,   130,     3,
       4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    79,    80,    81,    -1,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,   130,     3,     4,    -1,
      -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    79,    80,    81,    -1,    83,    84,    85,
      86,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,   130,     3,     4,    -1,    -1,     7,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    79,    80,    81,    -1,    83,    84,    85,    86,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    53,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    79,
      80,    81,    -1,    83,    84,    85,    86,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,     3,     4,   126,   127,   128,   129,
     130,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      79,    80,    81,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,   126,   127,   128,
     129,   130,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    -1,    98,    -1,   100,
     101,   102,    -1,    -1,    -1,   106,   107,   108,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,   130,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    -1,    -1,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    -1,    98,    -1,   100,   101,   102,
      -1,    -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,
     113,    -1,    -1,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,   130,     3,     4,
       5,    -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,
      -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,    -1,
      -1,   116,   117,   118,   119,   120,   121,   122,   123,     3,
       4,   126,   127,   128,   129,   130,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,     3,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    -1,    98,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,   108,    -1,    -1,    -1,    -1,   113,
      -1,    -1,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,   130,    -1,    -1,    50,
      -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    69,    70,
       3,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,    80,
      -1,    -1,    83,    84,    -1,    86,    -1,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    97,    98,    99,    -1,
      -1,   102,   103,   104,    -1,    -1,    -1,    -1,   109,   110,
      -1,   112,   113,   114,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    69,    70,     3,    72,
       5,    -1,    -1,    -1,    77,    -1,    79,    80,    -1,    -1,
      83,    84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,   102,
     103,   104,    -1,    -1,    -1,    -1,   109,   110,    -1,   112,
     113,   114,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,     3,
      65,     5,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83,    84,
      -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    98,    99,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,   109,   110,    50,   112,   113,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
       3,    65,     5,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83,
      84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    98,    99,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,    50,   112,   113,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,     3,    65,     5,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,
      83,    84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,   109,   110,    50,   112,
     113,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,     3,    65,     5,    -1,    68,    69,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    83,    84,    -1,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    50,
     112,   113,    53,    -1,    55,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,     3,    65,     5,    -1,    68,    69,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    83,    84,    -1,    86,    -1,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    97,    98,    99,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,
      50,   112,   113,    53,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    62,    -1,     3,    65,     5,    -1,    68,    69,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    -1,    -1,    83,    84,    -1,    86,    -1,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    97,    98,    99,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,
     110,    50,   112,   113,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,     3,    65,     5,    -1,    68,
      69,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,    98,
      99,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
     109,   110,    50,   112,   113,    53,    -1,    55,    -1,    57,
      -1,    -1,    60,    -1,    62,    -1,     3,    65,     5,    -1,
      68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,
      98,    99,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,   109,   110,    50,   112,   113,    53,    -1,    55,    -1,
      57,    -1,    -1,    60,    -1,    62,    -1,     3,    65,     5,
      -1,    68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    83,    84,    -1,    86,
      -1,    88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    98,    99,    -1,    -1,   102,   103,    -1,    -1,    -1,
      -1,    -1,   109,   110,    50,   112,   113,    53,    -1,    55,
      -1,    57,    -1,    -1,    60,    -1,    62,    -1,     3,    65,
       5,    -1,    68,    69,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    -1,    -1,    83,    84,    -1,
      86,    -1,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      -1,    97,    98,    99,    -1,    -1,   102,   103,    -1,    -1,
      -1,    -1,    -1,   109,   110,    50,   112,   113,    53,    -1,
      55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,     3,
      65,     5,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83,    84,
      -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    98,    99,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,   109,   110,    50,   112,   113,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
       3,    65,     5,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83,
      84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    98,    99,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,    50,   112,   113,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,     3,    65,     5,    -1,    68,    69,    70,    -1,    72,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,
      83,    84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,   102,
     103,    -1,    -1,    -1,    -1,    -1,   109,   110,    50,   112,
     113,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      62,    -1,     3,    65,     5,    -1,    68,    69,    70,    -1,
      72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    83,    84,    -1,    86,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    50,
     112,   113,    53,    -1,    55,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,     3,    65,     5,    -1,    68,    69,    70,
      -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    83,    84,    -1,    86,    -1,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    -1,    97,    98,    99,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,
      50,   112,   113,    53,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    62,    -1,     3,    65,     5,    -1,    68,    69,
      70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    79,
      -1,    -1,    -1,    83,    84,    -1,    86,    -1,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    97,    98,    99,
      -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,   109,
     110,    50,   112,   113,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,     3,    65,    -1,    -1,    68,
      69,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,    98,
      99,    -1,    -1,   102,   103,    -1,    -1,    -1,    -1,    -1,
     109,   110,    50,   112,   113,    53,    -1,    55,    -1,    57,
      -1,    -1,    60,    -1,    62,    -1,     3,    65,    -1,    -1,
      68,    69,    70,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    83,    84,    -1,    86,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,    97,
      98,    99,     3,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,   109,   110,    -1,   112,   113,    53,    -1,    55,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    83,    -1,    -1,    86,
      -1,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,    -1,
      97,    62,    99,    -1,    65,    -1,   103,    -1,    -1,    -1,
      -1,    72,   109,   110,    -1,   112,    -1,    -1,    79,    -1,
      -1,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,    99,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,     5,   109,   110,
       8,   112,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,     5,    -1,    51,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,     5,    -1,    51,     8,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,     5,
      -1,    51,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    78,    -1,
      -1,    -1,    82,    -1,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,     5,    -1,    51,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,     5,    -1,    51,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,     5,    -1,    51,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,     5,    -1,    51,     8,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,     5,
      -1,    51,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    78,    -1,
      -1,    -1,    82,    -1,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,     5,    -1,    51,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,     5,    -1,    51,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,     5,    -1,    51,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    51,     8,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    51,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    78,    -1,
      -1,    -1,    82,    -1,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    51,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    51,     8,    -1,
      10,    11,    12,    13,    14,    -1,    16,    17,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    51,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    78,    -1,
      -1,    -1,    82,    -1,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    40,    41,
      42,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    51,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    40,    41,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    51,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    40,    41,    -1,    -1,
      44,    45,    46,    -1,    -1,    -1,    -1,    51,     8,    -1,
      10,    11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    -1,    -1,    28,    29,
      30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,
      40,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    51,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    78,    -1,
      -1,    -1,    82,    -1,    40,    41,    -1,    -1,    44,    45,
      46,    -1,    -1,    50,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    78,    80,    81,    -1,    82,    84,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      50,    98,    -1,    -1,    -1,   102,    -1,   104,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,   113,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    50,    98,    -1,
      -1,    -1,   102,    -1,   104,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,   113,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    90,    50,    -1,
      -1,    94,    95,    -1,    -1,    98,    -1,    59,    60,   102,
      -1,   104,    -1,    -1,    -1,    67,    68,    69,    70,    -1,
     113,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    -1,    -1,    98,    -1,    -1,    -1,
     102,    -1,   104,    10,    11,    12,    13,    14,    -1,    16,
      17,   113,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    59,    60,    67,    68,    69,    70,    77,    80,
      81,    84,    88,    89,    90,    91,    92,    93,    94,    95,
      98,   102,   104,   113,   137,   138,   139,   140,   141,   153,
     155,   156,   157,   158,     3,     3,     3,    81,     3,     0,
     153,    59,    67,    80,   104,   140,    59,    67,    80,   104,
     139,   141,    18,   154,     6,     6,     6,     3,     3,     3,
       3,    59,    67,    80,   104,     3,     3,     3,     3,    59,
      67,    80,   104,     3,     6,     3,   159,     3,     4,    10,
      11,    15,    19,    27,    45,    46,    52,    53,    54,    55,
      57,    58,    61,    62,    64,    65,    71,    72,    73,    74,
      75,    76,    79,    83,    84,    85,    86,    96,    97,    99,
     100,   101,   103,   105,   106,   107,   108,   109,   110,   111,
     112,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   126,   127,   128,   129,   130,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   151,   153,   160,   161,
     162,   167,   168,   169,   170,   172,   173,   175,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   196,   197,   160,   154,     6,     6,
       6,     3,     3,     3,     3,   154,     6,     6,     6,     3,
       3,     3,     3,   160,    22,     7,    20,    16,    18,    21,
       3,    84,   186,   186,   186,   186,   186,   186,   186,    21,
       4,     6,     6,   161,   177,     4,     4,     3,     4,     3,
     142,   186,     4,     4,     4,    21,     4,     4,     6,     3,
      87,     4,     3,   114,   140,   142,   114,   139,   142,     3,
       8,    87,   171,    16,     7,   161,    66,   174,     8,    10,
      11,    12,    13,    14,    16,    17,    19,    23,    24,    25,
      26,    28,    29,    30,    31,    40,    41,    42,    43,    44,
      45,    46,    51,    78,    82,     4,    22,    32,    33,    34,
      35,    36,    37,    38,    39,    48,    49,     7,     6,   159,
     160,   160,   154,     6,     6,     6,     6,   159,   160,   160,
     154,     6,     6,     6,     7,   151,     3,   192,     5,   192,
     186,   160,   160,   115,   186,   186,   186,     4,     8,   186,
     186,   186,   192,   186,   186,   160,     4,    10,    11,    12,
      13,    14,    16,    17,    23,    24,    25,    26,    28,    29,
      30,    31,    40,    41,    42,    43,    44,    45,    46,   166,
     186,     3,    87,   114,   142,     3,    87,   171,     3,   114,
     142,     3,   171,     4,    22,     9,   117,   118,   119,   120,
     122,   123,   126,   127,   128,   129,   149,   150,   152,   166,
      19,    20,     6,   161,   149,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   141,   186,
     194,   195,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   160,     7,     7,     7,     6,   159,   160,
     160,   160,     7,     7,     7,     6,   159,   160,   160,    22,
       5,     7,     7,     4,    19,     5,     5,     5,   194,   149,
       5,     5,     5,     5,     5,     7,     5,   140,   142,   163,
     165,     4,     5,     4,   166,     3,    87,     3,    87,   171,
       4,   166,    19,     4,     3,    87,     3,    87,   171,    19,
       5,   163,   186,     9,    20,     9,    20,     4,     3,   160,
       9,    18,   186,     5,   195,     7,   160,     7,     7,     7,
       7,   160,     7,     7,     7,   151,   186,   186,   177,     6,
     161,     5,     9,     6,     6,    19,    47,   164,   142,     3,
       5,    20,     5,   163,   177,     5,   163,     4,     4,   166,
       4,   166,    19,     5,   163,     4,     5,   163,     4,   166,
       4,   166,    19,   164,     5,   152,     5,   163,    22,     7,
     186,     7,     7,     5,    19,   160,    56,    63,   176,   160,
     186,     3,   186,   164,   165,   164,     5,   164,     5,     5,
     163,     5,   163,     4,     5,   163,     4,   164,     5,     5,
     163,   164,     5,     5,   163,     4,     5,   163,     4,   164,
     164,     5,   186,    19,   186,     7,   186,    18,     7,    56,
      63,     7,   186,   164,   164,   164,     5,   164,     5,     5,
     163,   164,     5,     5,   163,   164,   164,     5,   164,   164,
       5,     5,   163,   164,     5,     5,   163,   164,     5,    18,
     160,   186,    18,   164,   164,   164,     5,   164,   164,     5,
     164,   164,   164,     5,   164,   164,     5,   177,   160,    18,
     160,   164,   164,   164,   164,   160
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   136,   137,   138,   138,   138,   139,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   148,   149,   149,   150,   150,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   154,
     154,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     156,   157,   157,   157,   157,   157,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   164,   164,   164,   165,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   169,   169,   170,   170,   170,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   176,   176,
     176,   176,   177,   177,   178,   179,   180,   181,   182,   182,
     183,   183,   184,   185,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   191,   192,   192,   192,   192,   193,   194,
     194,   194,   195,   195,   196,   197
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     3,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     7,     7,     8,     8,     6,     6,     6,     7,     7,
       5,     6,     6,     7,     7,     5,     6,     6,     7,     7,
       5,     3,     5,     1,     3,     2,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     5,     6,     5,     6,
       6,     7,     6,     7,     6,     7,     7,     8,     7,     8,
       7,     8,     7,     8,     3,     1,     3,     2,     1,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     7,     6,     7,     7,
       8,     7,     8,     8,     9,     8,     9,     8,     9,     8,
       9,     2,     3,     4,     4,     5,     5,     3,     5,     1,
       3,     1,     2,     7,     5,     4,     2,     7,     5,     4,
       4,     3,     3,     1,     5,     7,     9,     5,     4,     4,
       4,     4,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     3,     1,     3,     3,     4,     2,
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
        
#line 3370 "src/Parser/parser.c" /* yacc.c:1646  */
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
#line 411 "src/Parser/c-sharp.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
