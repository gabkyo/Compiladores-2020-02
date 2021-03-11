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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  658

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
      75,    75,    75,    75,    75,    77,   142,   142,   142,   142,
     144,   145,   147,   148,   149,   150,   151,   153,   154,   155,
     156,   157,   159,   160,   161,   162,   163,   165,   166,   167,
     168,   169,   171,   172,   173,   174,   194,   194,   194,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   217,   218,   218,   218,
     219,   219,   219,   219,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   242,   246,   247,   259,   260,   261,   263,   264,
     265,   266,   287,   288,   291,   292,   294,   295,   298,   300,
     301,   302,   303,   306,   306,   307,   308,   309,   310,   314,
     315,   318,   319,   322,   323,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   330,   331,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   388,   392,   393,   394,   395,   399,
     402,   403,   404,   406,   406,   409,   411
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
  "value", "numeric_val", "identifier", "obj_decl", "class_father",
  "class_decl", "struct_decl", "interface_decl", "enum_decl", "enum_list",
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

#define YYPACT_NINF -442

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-442)))

#define YYTABLE_NINF -54

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7251,  -442,    21,  -442,    21,  -442,  -442,  -442,  -442,    21,
    -442,  -442,  -442,  -442,  -442,  -442,   -30,  -442,  -442,  -442,
    -442,  -442,    21,  -442,    57,  6665,  7345,  7298,  -442,  -442,
    -442,  -442,  -442,  -442,  -442,    58,    59,    78,  -442,   117,
    -442,  -442,  -442,    21,    21,    21,    21,  7386,    21,    21,
      21,    21,   -22,  -442,    21,   120,    21,  4316,  4316,    58,
     152,   158,   178,    21,    21,    21,    21,    58,   216,   220,
     226,    21,    21,    21,    21,  -442,  4316,   130,    70,  4942,
    4942,  4942,  4942,  -442,  4942,  4942,  4942,   247,  -442,  -442,
    -442,  -442,   136,  -442,  -442,  1251,  -442,  -442,  -442,   236,
     240,    21,   279,  -442,  -442,   395,  -442,  -442,  4942,  -442,
    -442,   285,   288,  -442,   293,   249,  -442,   300,  -442,  -442,
     237,  -442,    15,   301,  -442,  -442,  -442,  -442,  -442,  -442,
    -442,  -442,  -442,  -442,  -442,  -442,  -442,  5025,  7202,   395,
      13,  -442,   296,  -442,  -442,  -442,  -442,  -442,    11,  -442,
    1379,  -442,  -442,  -442,  -442,  -442,  -442,  -442,   243,  -442,
    -442,  -442,  -442,  -442,  -442,  -442,  -442,  -442,  6763,  -442,
    -442,  -442,  -442,  -442,   179,  -442,  -442,  -442,  1507,   307,
      21,  4316,  4316,    58,   310,   312,   314,   316,    21,  4316,
    4316,    58,   319,   321,   322,  1635,  4484,  -442,    21,   395,
     309,  6182,   424,   424,   424,   424,   424,   424,     7,  4942,
    4316,  4316,  -442,   218,  4942,  4942,  -442,  4942,   324,   118,
    7027,  4942,  4942,  4942,     7,  4942,  4942,  4316,  7481,   330,
    4942,    19,  5093,    23,   323,    21,   264,   266,   134,  7481,
      56,   183,  -442,  -442,  -442,     7,  -442,  -442,  1763,  -442,
     273,  4942,  4942,  4942,  4942,  4942,  4942,  4942,  -442,  4942,
    4942,  4942,  4942,  4942,  4942,  4942,  4942,  4942,  4942,  4942,
    4942,  4942,  -442,  -442,  4942,  4942,  4942,  4821,  4942,  4942,
    4942,  4942,  4942,  4942,  4942,  4942,  4942,  4942,  4942,  -442,
    4316,   161,  1891,  2019,   329,    21,  4316,  4316,  4316,   235,
    2147,  2275,   331,    21,  4316,  4316,  -442,  -442,   318,  -442,
    -442,  6226,  2403,  2531,   334,  6807,  6270,  6314,   134,  4444,
    6358,  6402,  6446,  -442,  6490,  6534,  2659,  -442,  -442,  -442,
    -442,  -442,  -442,  -442,  -442,  -442,  -442,  -442,  -442,  -442,
    -442,  -442,  -442,  -442,  -442,  -442,  -442,  -442,  -442,   337,
     888,  6578,  7481,   338,    22,    30,  7481,    69,   186,   341,
      32,    31,   327,   259,  -442,  -442,  -442,  -442,  -442,  -442,
    -442,  -442,  -442,  -442,  -442,   141,   255,  -442,   342,  4921,
    4942,  -442,    21,  -442,  4316,  -442,   256,   580,   580,   424,
     424,   424,  6851,  1007,   731,   731,  1070,  7159,  7203,   731,
     731,  7203,   398,   398,  7115,  7071,  7027,  7027,  7027,  7027,
    4942,  7027,  4572,  -442,  7027,  7027,  7027,  7027,  7027,  7027,
    7027,  7027,  7027,  7027,  7027,  2787,  -442,  -442,  -442,  4316,
     251,  2915,  3043,  3171,  -442,  -442,  -442,  4316,   252,  3299,
    3427,  4484,  -442,  -442,  -442,  4942,  4942,  1251,  3555,   257,
    -442,  4700,  -442,  -442,   345,  -442,  -442,  -442,  5161,    47,
    6076,   266,    91,  -442,  1251,   350,  5222,  7481,   351,  7481,
      83,   262,   352,  5283,  -442,  5344,  7481,   353,  7481,    85,
     267,  -442,  -442,   273,  -442,  -442,  5405,    47,    96,  7027,
     340,  3683,  -442,  4942,  7027,  -442,  -442,  -442,  3811,  -442,
    -442,  -442,  -442,  3939,  -442,  -442,  -442,  -442,  6622,  6895,
    -442,  4316,  -442,   356,  -442,   217,    47,   107,  4316,  -442,
    4942,  -442,   266,  4942,    47,  6076,  -442,  5466,    47,   109,
     361,  5527,   362,  5588,  -442,  5649,    47,   110,    47,   126,
     365,  5710,   366,  5771,  -442,  -442,    47,   139,  -442,    47,
    4942,  -442,  7027,  -442,  -442,   364,  4942,  4067,  4942,   354,
      29,  -442,    47,  4195,  7027,  4942,  7027,  -442,  -442,    47,
     140,  -442,    47,  5832,    47,   146,  5893,    47,   149,    47,
     151,  -442,    47,  -442,    47,  5954,    47,   157,  6015,    47,
     162,  -442,    47,  -442,  7027,  -442,  6666,  -442,  6939,  4316,
    -442,  4942,   357,  -442,  -442,  7027,  -442,    47,  -442,    47,
     165,  -442,    47,    47,   170,  -442,    47,  -442,    47,  -442,
    -442,    47,   199,  -442,    47,    47,   219,  -442,    47,  -442,
    1251,  4316,  4316,  6983,  4316,  -442,  -442,    47,  -442,  -442,
      47,  -442,  -442,  -442,    47,  -442,  -442,    47,  -442,  -442,
    4316,  4316,  4316,  -442,  -442,  -442,  -442,  4316
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,    21,     0,    14,     0,    24,    26,    22,    25,     0,
       9,    20,    19,    15,    23,     6,     8,     7,    17,    18,
      27,    13,     0,    16,     0,     0,     0,     0,    12,     4,
      86,    87,    88,    89,    85,    91,     0,     0,    10,     0,
       1,     2,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,   118,   118,    91,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,    90,   118,   114,     0,     0,
       0,     0,     0,   136,     0,     0,     0,     0,    35,   247,
      42,    49,     0,   246,    40,     0,    51,    61,    50,     0,
       0,     0,     0,    45,    47,    20,    74,    32,     0,    41,
      43,     0,     0,    37,     0,     0,    60,     0,    46,    48,
       0,    44,     0,     0,    59,    65,    64,    69,    66,    73,
      72,    63,    62,    67,    68,    71,    70,     0,     0,    12,
       0,    29,    28,    36,    38,    39,    30,   235,   296,   119,
       0,   117,   120,   121,   130,   123,   122,   124,   212,   125,
     126,   127,   128,   129,   131,   132,   133,   134,     0,   243,
     237,   238,   239,   240,   242,   241,   244,   245,     0,     0,
       0,   118,   118,    91,     0,     0,     0,     0,     0,   118,
     118,    91,     0,     0,     0,     0,     0,   111,     0,     0,
     296,     0,   265,   266,   268,   267,   263,   264,     0,     0,
     118,   118,   224,     0,     0,     0,   234,     0,     0,    31,
     202,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,    31,     0,     0,     0,    58,     0,
     210,     0,    33,    34,   233,     0,   106,   116,     0,   213,
       0,     0,     0,     0,     0,     0,     0,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   261,   262,     0,     0,     0,   302,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     118,     0,     0,     0,     0,     0,   118,   118,   118,     0,
       0,     0,     0,     0,   118,   118,    96,   115,   112,   236,
     298,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,   297,     0,     0,     0,   166,   167,   169,
     168,   170,   185,   184,   175,   176,   181,   182,   179,   178,
     177,   180,   172,   171,   173,   174,   183,   164,   165,     0,
       0,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,   210,     0,    52,    78,    77,    82,    79,    84,
      76,    75,    80,    81,    83,     0,     0,    56,     0,     0,
       0,   203,     0,   295,   118,   217,     0,   272,   273,   275,
     274,   276,     0,   290,   281,   282,   287,   288,   285,   284,
     283,   286,   278,   277,   279,   280,   289,   292,   293,   291,
       0,   303,     0,   301,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   260,   259,     0,   107,   102,    97,   118,
       0,     0,     0,     0,   108,   103,    98,   118,     0,     0,
       0,     0,   229,   230,   223,     0,     0,     0,     0,     0,
     248,     0,   270,   271,     0,   269,   231,   232,     0,     0,
       0,     0,     0,   156,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,   205,     0,     0,     0,     0,   210,
       0,   204,    53,     0,    54,    57,     0,     0,     0,   211,
     208,     0,   305,     0,   304,   299,   300,    92,     0,   109,
     104,    99,    93,     0,   110,   105,   100,   113,     0,     0,
     228,   118,   215,   306,   249,     0,     0,     0,   118,   159,
       0,   137,     0,   160,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,    55,     0,     0,   139,     0,
       0,   216,   294,    94,    95,     0,     0,     0,     0,     0,
       0,   186,     0,     0,   158,   162,   161,   138,   155,     0,
       0,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143,     0,   145,     0,     0,     0,     0,     0,     0,
       0,   188,     0,   140,   209,   226,     0,   214,     0,   118,
     218,     0,     0,   187,   157,   163,   190,     0,   142,     0,
       0,   147,     0,     0,     0,   149,     0,   192,     0,   144,
     146,     0,     0,   151,     0,     0,     0,   153,     0,   189,
       0,   118,   222,     0,   118,   191,   194,     0,   148,   196,
       0,   150,   193,   198,     0,   152,   200,     0,   154,   227,
     221,   118,   220,   195,   197,   199,   201,   219
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -442,  -442,  -442,     3,   223,   147,   601,  -442,  -442,  -442,
    -442,  -442,  -442,  -237,  -442,  -191,  -112,    -2,    50,   -55,
    -442,  -442,  -442,  -442,  -171,    10,   392,  -442,  -378,   635,
    -144,  -231,  -442,  -442,  -442,  -442,  -222,  -442,  -442,  -442,
    -442,  -442,  -441,  -442,  -442,  -442,  -442,  -442,  -442,  -442,
    -442,   645,  -442,  -442,  -442,  -442,  -442,  -141,  -442,    65,
    -372,  -442,  -442
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   375,   376,   147,   377,   200,   149,    55,
      30,    31,    32,    33,    78,   150,   151,   152,   462,   521,
     463,   349,   153,   154,   155,   156,   241,   157,   158,   249,
     159,   560,   213,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   412,
     413,   176,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,   488,    36,    26,   179,   307,   510,    37,   378,   291,
      34,   358,   187,   386,   -31,   363,    34,   299,    34,   -31,
      39,   238,    34,   526,    34,    34,    34,   243,    26,   244,
      52,   238,   245,    34,    34,    34,   600,    71,   238,   238,
     496,    59,    60,    61,    62,    72,    67,    68,    69,    70,
      29,    38,    75,   518,    77,   148,   148,    40,    73,    87,
     379,   183,   184,   185,   186,    56,   519,   310,   178,   191,
     192,   193,   194,   473,   148,    42,    54,   197,   380,   496,
     517,   449,    74,   323,    57,   601,   195,   533,   529,   543,
     198,   380,   602,   148,   520,   537,   524,   539,   -31,   216,
     239,   549,   228,   219,   383,   380,   352,   380,   547,   467,
     356,   525,   562,   115,   572,   582,   525,   469,   478,   476,
     229,   465,   319,    58,   430,   472,    76,   525,   294,   525,
     525,   584,   438,   471,   243,   234,   302,   234,   240,   480,
     209,   236,   210,   364,   592,   607,   525,    28,   148,   570,
     482,   612,   196,   575,   616,   578,   618,   580,   180,   525,
     525,   483,   624,   587,   181,   590,   525,   628,   426,   525,
     637,   525,    28,    28,    53,   640,   148,   525,    77,   148,
     148,   198,   525,   277,   182,   525,    77,   148,   148,   649,
     525,   292,   293,   148,    53,   610,   308,   219,   614,   300,
     301,   278,   381,   382,   644,   474,   382,   622,   148,   148,
     626,   279,   280,   281,   282,   283,   284,   285,   286,   525,
     312,   313,   188,    27,   647,   148,   189,   287,   288,   353,
     234,   357,   190,   359,   234,   362,   530,   326,   532,   525,
     214,   226,   434,   227,   215,   540,   148,   542,    27,    47,
     507,   365,   366,   367,   368,   198,   369,   370,   499,   504,
     371,   372,   373,   374,   484,   492,   513,    34,   208,    34,
     224,   198,   198,   558,   238,   485,   483,   483,   481,   382,
     559,   534,   382,   217,    28,    53,   544,   382,   148,   221,
     148,   148,   222,    77,   148,   148,   148,   223,   148,   148,
     425,    77,   148,   148,   225,   230,   431,   432,   433,   248,
     148,   148,   242,   290,   439,   440,   295,    88,   296,    90,
     297,    91,   298,    71,   148,   303,    94,   304,   305,    96,
     245,    72,   318,   314,   350,   429,    98,   437,   445,   243,
     441,   458,   466,   103,    73,   475,   486,   104,   234,   380,
     107,   515,   468,   470,   527,   531,   535,   541,   477,   479,
     232,   109,   550,   110,   -53,   573,   576,   113,    74,   585,
     588,   545,   599,   118,   119,   634,   121,   234,   360,    53,
     490,   568,   148,   595,   451,     0,     0,     0,     0,     0,
     365,   366,   367,   368,   491,   369,   370,     0,    34,   371,
     372,   373,   374,     0,     0,     0,   250,     0,   251,   252,
     253,   254,   255,     0,   256,     0,     0,     0,     0,     0,
       0,     0,     0,   148,   410,     0,     0,   148,     0,   148,
     148,   148,   250,     0,     0,   148,     0,   148,   148,   498,
     256,     0,   271,   272,   273,   148,   148,   503,    88,   274,
      90,     0,    91,     0,     0,     0,   234,    94,   234,   523,
      96,     0,   148,     0,   234,     0,   410,    98,   271,   272,
     273,   234,     0,   234,   103,   274,   275,     0,   104,     0,
     276,   107,     0,     0,   234,     0,     0,   212,     0,   148,
       0,     0,   109,     0,   110,     0,   148,    28,   113,     0,
       0,   148,   275,     0,   118,   119,   276,   121,     0,   148,
       0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
     565,   557,     0,   234,     0,   234,    28,     0,   563,   234,
       0,   234,     0,   234,     0,     0,     0,     0,     0,   234,
       0,   234,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,     0,   410,
       0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
     247,   234,     0,   460,   234,     0,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,   234,   247,   250,     0,
       0,     0,   253,   254,   255,     0,   256,   148,   410,     0,
       0,     0,   460,     0,     0,    28,     0,    53,     0,   632,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
      28,     0,    28,     0,   271,   272,   273,     0,   148,   148,
     148,   274,   148,    28,     0,     0,     0,     0,     0,     0,
     385,   650,     0,     0,   652,     0,     0,     0,   148,   148,
     148,     0,     0,     0,     0,   148,     0,     0,   275,     0,
       0,   657,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,    28,     0,     0,     0,    28,     0,
      28,   460,    28,     0,   247,   247,     0,     0,    28,   460,
      28,     0,   247,   247,     0,     0,   460,     0,   460,     0,
       0,     0,     0,     0,   247,   247,   218,     0,     0,   460,
       0,     0,     0,     0,     0,     0,     0,     0,   247,     0,
      28,     0,     0,    28,   201,   202,   203,   204,     0,   205,
     206,   207,    28,     0,     0,    28,     0,     0,   233,   250,
     237,   251,   252,   253,   254,   255,     0,   256,   460,     0,
     460,     0,     0,   220,   460,     0,   460,     0,   460,     0,
       0,     0,     0,     0,   460,     0,   460,     0,     0,     0,
       0,   267,   268,     0,     0,   271,   272,   273,     0,     0,
       0,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   460,     0,     0,   460,
     218,     0,     0,     0,     0,     0,     0,     0,   460,   275,
       0,   460,     0,   276,     0,     0,     0,   247,     0,     0,
       0,     0,     0,   247,   247,   247,     0,     0,     0,     0,
       0,   247,   247,   355,     0,     0,     0,   361,     0,   212,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   311,     0,   212,     0,     0,   315,
     316,     0,   317,     0,     0,     0,   320,   321,   322,     0,
     324,   325,     0,     0,     0,   351,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,     0,     0,     0,
     247,    34,     0,   459,     0,   247,   387,   388,   389,   390,
     391,   392,   393,     0,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,     0,     0,   407,
     408,   409,   411,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,     0,     0,     1,     0,
       0,    88,     0,    90,     0,    91,     0,     0,     3,   247,
      94,   461,     0,    96,     0,   247,     5,     6,     7,     0,
      98,     0,     0,     0,   411,     8,     0,   103,     0,     0,
       0,   104,    11,     0,   107,     0,    12,    13,    14,     0,
     461,     0,    18,    19,     0,   109,    20,   110,     0,     0,
      21,   113,     0,     0,     0,     0,     0,   118,   119,     0,
     121,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,     0,   251,   252,   253,
     254,   255,   212,   256,   247,   489,     0,     0,     0,     0,
     259,   260,   261,     0,     0,   263,   264,   265,   266,     0,
       0,     0,   247,     0,   247,     0,     0,   267,   268,   247,
       0,   271,   272,   273,     0,   494,     0,   411,   274,   461,
       0,   522,     0,     0,     0,     0,     0,   461,     0,     0,
       0,     0,     0,     0,   461,     0,   461,     0,   250,     0,
     251,   252,   253,   254,   255,   275,   256,   461,     0,   276,
     508,   509,     0,   259,   260,     0,   411,     0,   263,   264,
     265,   266,     0,     0,     0,     0,     0,     0,     0,     0,
     267,   268,     0,     0,   271,   272,   273,     0,     0,     0,
       0,   274,   548,     0,     0,     0,   461,     0,   461,     0,
       0,     0,   461,     0,   461,     0,   461,     0,   552,     0,
       0,     0,   461,     0,   461,     0,     0,     0,   275,     0,
       0,   561,   276,     0,     0,     0,     0,     0,     0,   567,
       0,     0,     0,   571,     0,   564,     0,     0,   566,     0,
       0,   581,     0,   583,   461,     0,     0,   461,     0,     0,
       0,   591,     0,     0,   593,     0,   461,     0,     0,   461,
       0,     0,     0,     0,     0,   594,     0,   603,     0,     0,
       0,   596,     0,   598,   606,     0,     0,   608,     0,   611,
     605,     0,   615,     0,   617,     0,     0,   619,     0,   620,
       0,   623,     0,     0,   627,     0,     0,   629,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   635,     0,   636,     0,   633,   638,   639,     0,
       0,   641,     0,   642,    34,    79,   643,   211,     0,   645,
     646,    80,    81,   648,     0,     0,    82,     0,     0,     0,
      83,     0,   653,     0,     0,   654,     0,     0,    84,   655,
       0,     0,   656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,     8,     0,
     103,     9,    10,     0,   104,   105,   106,   107,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   108,   109,    20,
     110,   111,   112,    21,   113,    22,   114,   115,   116,   117,
     118,   119,   120,   121,    23,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,   132,   133,   134,
     135,   136,    34,    79,     0,     0,   246,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,     8,     0,   103,     9,
      10,     0,   104,   105,   106,   107,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   108,   109,    20,   110,   111,
     112,    21,   113,    22,   114,   115,   116,   117,   118,   119,
     120,   121,    23,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     0,   132,   133,   134,   135,   136,
      34,    79,     0,     0,   289,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,     8,     0,   103,     9,    10,     0,
     104,   105,   106,   107,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   108,   109,    20,   110,   111,   112,    21,
     113,    22,   114,   115,   116,   117,   118,   119,   120,   121,
      23,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,    34,    79,
       0,     0,   306,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,     8,     0,   103,     9,    10,     0,   104,   105,
     106,   107,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   108,   109,    20,   110,   111,   112,    21,   113,    22,
     114,   115,   116,   117,   118,   119,   120,   121,    23,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,   132,   133,   134,   135,   136,    34,    79,     0,   384,
       0,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,     0,
      91,    92,     2,     3,    93,    94,     0,    95,    96,     0,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
       8,     0,   103,     9,    10,     0,   104,   105,   106,   107,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   108,
     109,    20,   110,   111,   112,    21,   113,    22,   114,   115,
     116,   117,   118,   119,   120,   121,    23,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,   132,
     133,   134,   135,   136,    34,    79,     0,     0,   427,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,     8,     0,
     103,     9,    10,     0,   104,   105,   106,   107,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   108,   109,    20,
     110,   111,   112,    21,   113,    22,   114,   115,   116,   117,
     118,   119,   120,   121,    23,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,   132,   133,   134,
     135,   136,    34,    79,     0,     0,   428,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,     8,     0,   103,     9,
      10,     0,   104,   105,   106,   107,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   108,   109,    20,   110,   111,
     112,    21,   113,    22,   114,   115,   116,   117,   118,   119,
     120,   121,    23,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     0,   132,   133,   134,   135,   136,
      34,    79,     0,     0,   435,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,     8,     0,   103,     9,    10,     0,
     104,   105,   106,   107,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   108,   109,    20,   110,   111,   112,    21,
     113,    22,   114,   115,   116,   117,   118,   119,   120,   121,
      23,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,    34,    79,
       0,     0,   436,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,     8,     0,   103,     9,    10,     0,   104,   105,
     106,   107,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   108,   109,    20,   110,   111,   112,    21,   113,    22,
     114,   115,   116,   117,   118,   119,   120,   121,    23,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,   132,   133,   134,   135,   136,    34,    79,     0,     0,
     443,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,     0,
      91,    92,     2,     3,    93,    94,     0,    95,    96,     0,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
       8,     0,   103,     9,    10,     0,   104,   105,   106,   107,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   108,
     109,    20,   110,   111,   112,    21,   113,    22,   114,   115,
     116,   117,   118,   119,   120,   121,    23,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,   132,
     133,   134,   135,   136,    34,    79,     0,     0,   444,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,     8,     0,
     103,     9,    10,     0,   104,   105,   106,   107,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   108,   109,    20,
     110,   111,   112,    21,   113,    22,   114,   115,   116,   117,
     118,   119,   120,   121,    23,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,   132,   133,   134,
     135,   136,    34,    79,     0,     0,   457,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,     8,     0,   103,     9,
      10,     0,   104,   105,   106,   107,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   108,   109,    20,   110,   111,
     112,    21,   113,    22,   114,   115,   116,   117,   118,   119,
     120,   121,    23,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     0,   132,   133,   134,   135,   136,
      34,    79,     0,     0,   497,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,     8,     0,   103,     9,    10,     0,
     104,   105,   106,   107,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   108,   109,    20,   110,   111,   112,    21,
     113,    22,   114,   115,   116,   117,   118,   119,   120,   121,
      23,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,    34,    79,
       0,     0,   500,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,     8,     0,   103,     9,    10,     0,   104,   105,
     106,   107,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   108,   109,    20,   110,   111,   112,    21,   113,    22,
     114,   115,   116,   117,   118,   119,   120,   121,    23,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,   132,   133,   134,   135,   136,    34,    79,     0,     0,
     501,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,     0,
      91,    92,     2,     3,    93,    94,     0,    95,    96,     0,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
       8,     0,   103,     9,    10,     0,   104,   105,   106,   107,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   108,
     109,    20,   110,   111,   112,    21,   113,    22,   114,   115,
     116,   117,   118,   119,   120,   121,    23,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,   132,
     133,   134,   135,   136,    34,    79,     0,     0,   502,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,     8,     0,
     103,     9,    10,     0,   104,   105,   106,   107,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   108,   109,    20,
     110,   111,   112,    21,   113,    22,   114,   115,   116,   117,
     118,   119,   120,   121,    23,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,   132,   133,   134,
     135,   136,    34,    79,     0,     0,   505,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,     8,     0,   103,     9,
      10,     0,   104,   105,   106,   107,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   108,   109,    20,   110,   111,
     112,    21,   113,    22,   114,   115,   116,   117,   118,   119,
     120,   121,    23,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     0,   132,   133,   134,   135,   136,
      34,    79,     0,     0,   506,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,     8,     0,   103,     9,    10,     0,
     104,   105,   106,   107,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   108,   109,    20,   110,   111,   112,    21,
     113,    22,   114,   115,   116,   117,   118,   119,   120,   121,
      23,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,    34,    79,
       0,   511,     0,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,     8,     0,   103,     9,    10,     0,   104,   105,
     106,   107,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   108,   109,    20,   110,   111,   112,    21,   113,    22,
     114,   115,   116,   117,   118,   119,   120,   121,    23,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,     0,
       0,   132,   133,   134,   135,   136,    34,    79,     0,     0,
     551,     0,     0,    80,    81,     0,     0,     0,    82,     0,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     1,     0,    87,    88,    89,    90,     0,
      91,    92,     2,     3,    93,    94,     0,    95,    96,     0,
       4,     5,     6,     7,    97,    98,    99,   100,   101,   102,
       8,     0,   103,     9,    10,     0,   104,   105,   106,   107,
       0,    12,    13,    14,    15,    16,    17,    18,    19,   108,
     109,    20,   110,   111,   112,    21,   113,    22,   114,   115,
     116,   117,   118,   119,   120,   121,    23,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,   132,
     133,   134,   135,   136,    34,    79,     0,     0,   553,     0,
       0,    80,    81,     0,     0,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,    88,    89,    90,     0,    91,    92,
       2,     3,    93,    94,     0,    95,    96,     0,     4,     5,
       6,     7,    97,    98,    99,   100,   101,   102,     8,     0,
     103,     9,    10,     0,   104,   105,   106,   107,     0,    12,
      13,    14,    15,    16,    17,    18,    19,   108,   109,    20,
     110,   111,   112,    21,   113,    22,   114,   115,   116,   117,
     118,   119,   120,   121,    23,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,   132,   133,   134,
     135,   136,    34,    79,     0,     0,   554,     0,     0,    80,
      81,     0,     0,     0,    82,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    86,     0,     0,     0,     1,
       0,    87,    88,    89,    90,     0,    91,    92,     2,     3,
      93,    94,     0,    95,    96,     0,     4,     5,     6,     7,
      97,    98,    99,   100,   101,   102,     8,     0,   103,     9,
      10,     0,   104,   105,   106,   107,     0,    12,    13,    14,
      15,    16,    17,    18,    19,   108,   109,    20,   110,   111,
     112,    21,   113,    22,   114,   115,   116,   117,   118,   119,
     120,   121,    23,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,     0,     0,   132,   133,   134,   135,   136,
      34,    79,     0,     0,   597,     0,     0,    80,    81,     0,
       0,     0,    82,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    86,     0,     0,     0,     1,     0,    87,
      88,    89,    90,     0,    91,    92,     2,     3,    93,    94,
       0,    95,    96,     0,     4,     5,     6,     7,    97,    98,
      99,   100,   101,   102,     8,     0,   103,     9,    10,     0,
     104,   105,   106,   107,     0,    12,    13,    14,    15,    16,
      17,    18,    19,   108,   109,    20,   110,   111,   112,    21,
     113,    22,   114,   115,   116,   117,   118,   119,   120,   121,
      23,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,   132,   133,   134,   135,   136,    34,    79,
       0,     0,   604,     0,     0,    80,    81,     0,     0,     0,
      82,     0,     0,     0,    83,     0,     0,     0,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     1,     0,    87,    88,    89,
      90,     0,    91,    92,     2,     3,    93,    94,     0,    95,
      96,     0,     4,     5,     6,     7,    97,    98,    99,   100,
     101,   102,     8,     0,   103,     9,    10,     0,   104,   105,
     106,   107,     0,    12,    13,    14,    15,    16,    17,    18,
      19,   108,   109,    20,   110,   111,   112,    21,   113,    22,
     114,   115,   116,   117,   118,   119,   120,   121,    23,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    34,
      79,   132,   133,   134,   135,   136,    80,    81,     0,     0,
       0,    82,     0,     0,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    86,     0,     0,     0,     1,     0,    87,    88,
      89,    90,     0,    91,    92,     2,     3,    93,    94,     0,
      95,    96,     0,     4,     5,     6,     7,    97,    98,    99,
     100,   101,   102,     8,     0,   103,     9,    10,     0,   104,
     105,   106,   107,     0,    12,    13,    14,    15,    16,    17,
      18,    19,   108,   109,    20,   110,   111,   112,    21,   113,
      22,   114,   115,   116,   117,   118,   119,   120,   121,    23,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,     0,   132,   133,   134,   135,   136,    34,    79,   450,
       0,     0,     0,     0,    80,    81,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      86,     0,     0,     0,     1,     0,    87,     0,    89,     0,
       0,     0,     0,     0,     3,    93,     0,     0,     0,     0,
       0,     0,     5,     6,     7,    97,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,     0,   105,   106,
       0,     0,    12,    13,    14,     0,     0,     0,    18,    19,
       0,     0,    20,     0,   111,   112,    21,     0,     0,     0,
     115,   116,   117,     0,     0,    97,     0,    23,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,     0,   106,
     132,   133,   134,   135,   136,    34,    79,   495,     0,     0,
       0,     0,    80,    81,     0,     0,     0,    82,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,    84,
     124,   125,   126,   127,   128,   129,   130,   131,     0,     0,
     132,   133,   134,   135,   136,     0,     0,    85,    86,     0,
       0,     0,     1,     0,    87,     0,    89,     0,     0,     0,
       0,     0,     3,    93,     0,     0,     0,     0,     0,     0,
       5,     6,     7,    97,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,     0,   105,   106,     0,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,     0,
      20,     0,   111,   112,    21,     0,     0,     0,   115,   116,
     117,     0,     0,     0,     0,    23,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,     0,     0,   132,   133,
     134,   135,   136,    34,    79,   514,     0,     0,     0,     0,
      80,    81,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,     0,     0,
       1,     0,    87,     0,    89,     0,     0,     0,     0,     0,
       3,    93,     0,     0,     0,     0,     0,     0,     5,     6,
       7,    97,     0,     0,     0,     0,     0,     8,     0,     0,
       0,     0,     0,     0,   105,   106,     0,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,     0,    20,     0,
     111,   112,    21,     0,     0,     0,   115,   116,   117,     0,
       0,     0,     0,    23,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,    34,    79,   132,   133,   134,   135,
     136,    80,    81,     0,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     1,     0,    87,     0,    89,     0,     0,     0,     0,
       0,     3,    93,     0,     0,     0,     0,     0,     0,     5,
       6,     7,    97,     0,     0,     0,     0,     0,     8,     0,
       0,     0,     0,     0,     0,   105,   106,     0,     0,    12,
      13,    14,     0,     0,     0,    18,    19,     0,     0,    20,
       0,   111,   112,    21,    34,     0,   487,   115,   116,   117,
       0,     0,     0,     0,    23,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,    34,    79,   132,   133,   134,
     135,   136,    80,    81,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,     0,    96,    85,    86,     5,
       6,     7,     0,    98,    87,     0,    89,     0,     8,     0,
     103,     0,     0,    93,   104,    11,     0,   107,     0,    12,
      13,    14,     0,    97,     0,    18,    19,     0,   109,    20,
     110,     0,     0,    21,   113,     0,   199,   106,    34,     0,
     118,   119,     0,   121,    23,     0,     0,     0,     0,     0,
       0,     0,   111,   112,     0,     0,     0,     0,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,     0,     0,   132,   133,
     134,   135,   136,     0,     0,     1,     0,     0,    88,     0,
      90,     0,    91,     0,    43,     3,     0,    94,     0,     0,
      96,     0,    44,     5,     6,     7,    34,    98,     0,     0,
       0,     0,     8,     0,   103,    45,     0,     0,   104,    11,
       0,   107,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,   109,    20,   110,     0,     0,    21,   113,    46,
       0,     0,     0,     0,   118,   119,     0,   121,    23,   231,
       0,     0,     0,     1,     0,     0,    88,     0,    90,     0,
      91,     0,    63,     3,     0,    94,     0,     0,    96,     0,
      64,     5,     6,     7,    34,    98,   516,     0,     0,     0,
       8,     0,   103,    65,     0,     0,   104,    11,     0,   107,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     109,    20,   110,     0,     0,    21,   113,    66,     0,     0,
       0,     0,   118,   119,     0,   121,    23,   354,     0,     0,
       0,     1,     0,     0,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,    34,    96,   528,     0,     5,
       6,     7,     0,    98,     0,     0,     0,     0,     8,     0,
     103,     0,     0,     0,   104,    11,     0,   107,     0,    12,
      13,    14,     0,     0,     0,    18,    19,     0,   109,    20,
     110,     0,     0,    21,   113,     0,     0,     0,     0,     0,
     118,   119,     1,   121,    23,    88,     0,    90,     0,    91,
       0,     0,     3,     0,    94,     0,    34,    96,   536,     0,
       5,     6,     7,     0,    98,     0,     0,     0,     0,     8,
       0,   103,     0,     0,     0,   104,    11,     0,   107,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,   109,
      20,   110,     0,     0,    21,   113,     0,     0,     0,     0,
       0,   118,   119,     1,   121,    23,    88,     0,    90,     0,
      91,     0,     0,     3,     0,    94,     0,    34,    96,   538,
       0,     5,     6,     7,     0,    98,     0,     0,     0,     0,
       8,     0,   103,     0,     0,     0,   104,    11,     0,   107,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     109,    20,   110,     0,     0,    21,   113,     0,     0,     0,
       0,     0,   118,   119,     1,   121,    23,    88,     0,    90,
       0,    91,     0,     0,     3,     0,    94,     0,    34,    96,
     546,     0,     5,     6,     7,     0,    98,     0,     0,     0,
       0,     8,     0,   103,     0,     0,     0,   104,    11,     0,
     107,     0,    12,    13,    14,     0,     0,     0,    18,    19,
       0,   109,    20,   110,     0,     0,    21,   113,     0,     0,
       0,     0,     0,   118,   119,     1,   121,    23,    88,     0,
      90,     0,    91,     0,     0,     3,     0,    94,     0,    34,
      96,   569,     0,     5,     6,     7,     0,    98,     0,     0,
       0,     0,     8,     0,   103,     0,     0,     0,   104,    11,
       0,   107,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,   109,    20,   110,     0,     0,    21,   113,     0,
       0,     0,     0,     0,   118,   119,     1,   121,    23,    88,
       0,    90,     0,    91,     0,     0,     3,     0,    94,     0,
      34,    96,   574,     0,     5,     6,     7,     0,    98,     0,
       0,     0,     0,     8,     0,   103,     0,     0,     0,   104,
      11,     0,   107,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,   109,    20,   110,     0,     0,    21,   113,
       0,     0,     0,     0,     0,   118,   119,     1,   121,    23,
      88,     0,    90,     0,    91,     0,     0,     3,     0,    94,
       0,    34,    96,   577,     0,     5,     6,     7,     0,    98,
       0,     0,     0,     0,     8,     0,   103,     0,     0,     0,
     104,    11,     0,   107,     0,    12,    13,    14,     0,     0,
       0,    18,    19,     0,   109,    20,   110,     0,     0,    21,
     113,     0,     0,     0,     0,     0,   118,   119,     1,   121,
      23,    88,     0,    90,     0,    91,     0,     0,     3,     0,
      94,     0,    34,    96,   579,     0,     5,     6,     7,     0,
      98,     0,     0,     0,     0,     8,     0,   103,     0,     0,
       0,   104,    11,     0,   107,     0,    12,    13,    14,     0,
       0,     0,    18,    19,     0,   109,    20,   110,     0,     0,
      21,   113,     0,     0,     0,     0,     0,   118,   119,     1,
     121,    23,    88,     0,    90,     0,    91,     0,     0,     3,
       0,    94,     0,    34,    96,   586,     0,     5,     6,     7,
       0,    98,     0,     0,     0,     0,     8,     0,   103,     0,
       0,     0,   104,    11,     0,   107,     0,    12,    13,    14,
       0,     0,     0,    18,    19,     0,   109,    20,   110,     0,
       0,    21,   113,     0,     0,     0,     0,     0,   118,   119,
       1,   121,    23,    88,     0,    90,     0,    91,     0,     0,
       3,     0,    94,     0,    34,    96,   589,     0,     5,     6,
       7,     0,    98,     0,     0,     0,     0,     8,     0,   103,
       0,     0,     0,   104,    11,     0,   107,     0,    12,    13,
      14,     0,     0,     0,    18,    19,     0,   109,    20,   110,
       0,     0,    21,   113,     0,     0,     0,     0,     0,   118,
     119,     1,   121,    23,    88,     0,    90,     0,    91,     0,
       0,     3,     0,    94,     0,    34,    96,   609,     0,     5,
       6,     7,     0,    98,     0,     0,     0,     0,     8,     0,
     103,     0,     0,     0,   104,    11,     0,   107,     0,    12,
      13,    14,     0,     0,     0,    18,    19,     0,   109,    20,
     110,     0,     0,    21,   113,     0,     0,     0,     0,     0,
     118,   119,     1,   121,    23,    88,     0,    90,     0,    91,
       0,     0,     3,     0,    94,     0,    34,    96,   613,     0,
       5,     6,     7,     0,    98,     0,     0,     0,     0,     8,
       0,   103,     0,     0,     0,   104,    11,     0,   107,     0,
      12,    13,    14,     0,     0,     0,    18,    19,     0,   109,
      20,   110,     0,     0,    21,   113,     0,     0,     0,     0,
       0,   118,   119,     1,   121,    23,    88,     0,    90,     0,
      91,     0,     0,     3,     0,    94,     0,    34,    96,   621,
       0,     5,     6,     7,     0,    98,     0,     0,     0,     0,
       8,     0,   103,     0,     0,     0,   104,    11,     0,   107,
       0,    12,    13,    14,     0,     0,     0,    18,    19,     0,
     109,    20,   110,     0,     0,    21,   113,     0,     0,     0,
       0,     0,   118,   119,     1,   121,    23,    88,     0,    90,
       0,    91,     0,     0,     3,     0,    94,     0,    34,    96,
     625,     0,     5,     6,     7,     0,    98,     0,     0,     0,
       0,     8,     0,   103,     0,     0,     0,   104,    11,     0,
     107,     0,    12,    13,    14,     0,     0,     0,    18,    19,
       0,   109,    20,   110,     0,     0,    21,   113,     0,     0,
       0,     0,     0,   118,   119,     1,   121,    23,    88,     0,
      90,     0,    91,     0,     0,     3,     0,    94,     0,    34,
      96,     0,     0,     5,     6,     7,     0,    98,     0,     0,
       0,     0,     8,     0,   103,     0,     0,     0,   104,    11,
       0,   107,     0,    12,    13,    14,     0,     0,     0,    18,
      19,     0,   109,    20,   110,     0,     0,    21,   113,     0,
       0,     0,     0,     0,   118,   119,     1,   121,    23,    88,
       0,    90,     0,    91,     0,     0,     3,     0,    94,     0,
       0,    96,     0,     0,     5,     6,     7,     0,    98,     0,
       0,     0,     0,     8,     0,   103,     0,     0,     0,   104,
      11,     0,   107,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,   109,    20,   110,     0,     0,    21,   113,
       0,     0,     0,     0,     0,   118,   119,   309,   121,    23,
     250,     0,   251,   252,   253,   254,   255,     0,   256,   257,
       0,     0,     0,     0,     0,   259,   260,   261,   262,     0,
     263,   264,   265,   266,     0,     0,     0,     0,     0,     0,
       0,     0,   267,   268,   269,   270,   271,   272,   273,     0,
       0,   442,     0,   274,   250,     0,   251,   252,   253,   254,
     255,     0,   256,   257,     0,     0,     0,     0,     0,   259,
     260,   261,   262,     0,   263,   264,   265,   266,     0,     0,
     275,     0,     0,     0,   276,     0,   267,   268,   269,   270,
     271,   272,   273,     0,     0,   447,     0,   274,   250,     0,
     251,   252,   253,   254,   255,     0,   256,   257,     0,     0,
       0,     0,     0,   259,   260,   261,   262,     0,   263,   264,
     265,   266,     0,     0,   275,     0,     0,     0,   276,     0,
     267,   268,   269,   270,   271,   272,   273,     0,     0,   448,
       0,   274,   250,     0,   251,   252,   253,   254,   255,     0,
     256,   257,     0,     0,     0,     0,     0,   259,   260,   261,
     262,     0,   263,   264,   265,   266,     0,     0,   275,     0,
       0,     0,   276,     0,   267,   268,   269,   270,   271,   272,
     273,     0,     0,   452,     0,   274,   250,     0,   251,   252,
     253,   254,   255,     0,   256,   257,     0,     0,     0,     0,
       0,   259,   260,   261,   262,     0,   263,   264,   265,   266,
       0,     0,   275,     0,     0,     0,   276,     0,   267,   268,
     269,   270,   271,   272,   273,     0,     0,   453,     0,   274,
     250,     0,   251,   252,   253,   254,   255,     0,   256,   257,
       0,     0,     0,     0,     0,   259,   260,   261,   262,     0,
     263,   264,   265,   266,     0,     0,   275,     0,     0,     0,
     276,     0,   267,   268,   269,   270,   271,   272,   273,     0,
       0,   454,     0,   274,   250,     0,   251,   252,   253,   254,
     255,     0,   256,   257,     0,     0,     0,     0,     0,   259,
     260,   261,   262,     0,   263,   264,   265,   266,     0,     0,
     275,     0,     0,     0,   276,     0,   267,   268,   269,   270,
     271,   272,   273,     0,     0,   455,     0,   274,   250,     0,
     251,   252,   253,   254,   255,     0,   256,   257,     0,     0,
       0,     0,     0,   259,   260,   261,   262,     0,   263,   264,
     265,   266,     0,     0,   275,     0,     0,     0,   276,     0,
     267,   268,   269,   270,   271,   272,   273,     0,     0,   456,
       0,   274,   250,     0,   251,   252,   253,   254,   255,     0,
     256,   257,     0,     0,     0,     0,     0,   259,   260,   261,
     262,     0,   263,   264,   265,   266,     0,     0,   275,     0,
       0,     0,   276,     0,   267,   268,   269,   270,   271,   272,
     273,     0,     0,   464,     0,   274,   250,     0,   251,   252,
     253,   254,   255,     0,   256,   257,     0,     0,     0,     0,
       0,   259,   260,   261,   262,     0,   263,   264,   265,   266,
       0,     0,   275,     0,     0,     0,   276,     0,   267,   268,
     269,   270,   271,   272,   273,     0,     0,   555,     0,   274,
     250,     0,   251,   252,   253,   254,   255,     0,   256,   257,
       0,     0,     0,     0,     0,   259,   260,   261,   262,     0,
     263,   264,   265,   266,     0,     0,   275,     0,     0,     0,
     276,     0,   267,   268,   269,   270,   271,   272,   273,     0,
       0,   630,     0,   274,   250,     0,   251,   252,   253,   254,
     255,     0,   256,   257,     0,     0,     0,     0,     0,   259,
     260,   261,   262,     0,   263,   264,   265,   266,     0,     0,
     275,     0,     0,     0,   276,     0,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     1,     0,   274,     0,     0,
       0,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     8,     0,   275,     9,    10,     0,   276,    11,
       0,     0,     0,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,    20,     0,     0,     0,    21,     0,    22,
       0,   250,     0,   251,   252,   253,   254,   255,    23,   256,
     257,     0,   258,     0,     0,     0,   259,   260,   261,   262,
      41,   263,   264,   265,   266,     0,     0,     0,     0,     0,
       0,     0,     0,   267,   268,   269,   270,   271,   272,   273,
       0,     0,     0,     0,   274,   250,     0,   251,   252,   253,
     254,   255,     0,   256,   257,     0,   446,     0,     0,     0,
     259,   260,   261,   262,     0,   263,   264,   265,   266,     0,
       0,   275,     0,     0,     0,   276,     0,   267,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,   274,   250,
       0,   251,   252,   253,   254,   255,     0,   256,   257,   493,
       0,     0,     0,     0,   259,   260,   261,   262,     0,   263,
     264,   265,   266,     0,     0,   275,     0,     0,     0,   276,
       0,   267,   268,   269,   270,   271,   272,   273,     0,     0,
       0,     0,   274,   250,     0,   251,   252,   253,   254,   255,
       0,   256,   257,     0,   556,     0,     0,     0,   259,   260,
     261,   262,     0,   263,   264,   265,   266,     0,     0,   275,
       0,     0,     0,   276,     0,   267,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,   274,   250,     0,   251,
     252,   253,   254,   255,     0,   256,   257,   631,     0,     0,
       0,     0,   259,   260,   261,   262,     0,   263,   264,   265,
     266,     0,     0,   275,     0,     0,     0,   276,     0,   267,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
     274,   250,     0,   251,   252,   253,   254,   255,     0,   256,
     257,   651,     0,     0,     0,     0,   259,   260,   261,   262,
       0,   263,   264,   265,   266,     0,     0,   275,     0,     0,
       0,   276,     0,   267,   268,   269,   270,   271,   272,   273,
       0,     0,     0,     0,   274,   250,     0,   251,   252,   253,
     254,   255,     0,   256,   257,     0,     0,     0,     0,     0,
     259,   260,   261,   262,     0,   263,   264,   265,   266,     0,
       0,   275,     0,     0,     0,   276,     0,   267,   268,   269,
     270,   271,   272,   273,     0,     0,     0,     0,   274,   250,
       0,   251,   252,   253,   254,   255,     0,   256,   257,     0,
       0,     0,     0,     0,   259,   260,   261,   262,     0,   263,
     264,   265,   266,     0,     0,   275,     0,     0,     0,   276,
       0,   267,   268,   269,     0,   271,   272,   273,     0,     0,
       0,     0,   274,   250,     0,   251,   252,   253,   254,   255,
       0,   256,   257,     0,     0,     0,     0,     0,   259,   260,
     261,   262,     0,   263,   264,   265,   266,     0,     0,   275,
       0,     0,     0,   276,     0,   267,   268,     0,     0,   271,
     272,   273,     0,     0,     0,     0,   274,   250,     0,   251,
     252,   253,   254,   255,     0,   256,   257,     0,     0,     0,
       0,     0,   259,   260,   261,     0,     0,   263,   264,   265,
     266,     0,     0,   275,     0,     0,     0,   276,     0,   267,
     268,     0,     0,   271,   272,   273,     0,     0,     0,     0,
     274,   250,     0,   251,   252,   253,   254,   255,     0,   256,
       0,     0,     0,     0,     0,     0,   259,   260,     0,     0,
       0,     0,   264,   265,     0,     0,     0,   275,     0,     0,
       0,   276,     0,   267,   268,     0,     0,   271,   272,   273,
       0,     0,     1,     0,   274,     0,     0,     0,     0,     0,
       0,    48,     3,     0,     0,     0,     0,     0,     0,    49,
       5,     6,     7,     0,     0,     0,     0,     0,     0,     8,
       0,   275,    50,    10,     0,   276,    11,     0,     0,     0,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
      20,     1,     0,     0,    21,     0,    51,     0,     0,     0,
       2,     3,     0,     0,     0,    23,   235,     0,     4,     5,
       6,     7,     0,     0,     0,     0,     0,     0,     8,     0,
       0,     9,    10,     0,     0,    11,     0,     0,     0,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     1,    20,
       0,     0,     0,    21,     0,    22,     0,    48,     3,     0,
       0,     0,     0,     0,    23,    49,     5,     6,     7,     0,
       0,     0,     0,     0,     0,     8,     0,     0,    50,    10,
       0,     0,    11,     0,     0,     0,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     1,    20,     0,     0,     0,
      21,     0,    51,     0,    43,     3,     0,     0,     0,     0,
       0,    23,    44,     5,     6,     7,     0,     0,     0,     0,
       0,     0,     8,     0,     0,    45,     0,     0,     0,    11,
       0,     0,     0,    12,    13,    14,     1,     0,     0,    18,
      19,     0,     0,    20,     0,    63,     3,    21,     0,    46,
       0,     0,     0,    64,     5,     6,     7,     0,    23,     0,
       0,     0,     0,     8,     0,     0,    65,     0,     0,     0,
      11,     0,     0,     0,    12,    13,    14,     0,     0,     0,
      18,    19,     0,     0,    20,     0,     0,     0,    21,     0,
      66,   327,   328,   329,   330,   331,     0,   332,   333,    23,
       0,     0,     0,     0,   334,   335,   336,   337,     0,   338,
     339,   340,   341,     0,     0,     0,     0,     0,     0,     0,
       0,   342,   343,   344,   345,   346,   347,   348
};

static const yytype_int16 yycheck[] =
{
       2,   379,     4,     0,    59,   196,   447,     9,   239,   180,
       3,   233,    67,   250,     3,   237,     3,   188,     3,     8,
      22,     8,     3,   464,     3,     3,     3,    16,    25,    18,
      27,     8,    21,     3,     3,     3,     7,    59,     8,     8,
     412,    43,    44,    45,    46,    67,    48,    49,    50,    51,
       0,    81,    54,     6,    56,    57,    58,     0,    80,    52,
       4,    63,    64,    65,    66,     6,    19,   208,    58,    71,
      72,    73,    74,     4,    76,    25,    18,     7,    22,   451,
     458,   318,   104,   224,     6,    56,    76,     4,   466,     4,
      20,    22,    63,    95,    47,   473,     5,   475,    87,   101,
      87,     5,    87,   105,   245,    22,    87,    22,   486,    87,
      87,    20,     5,   106,     5,     5,    20,    87,    87,    87,
     122,   352,     4,     6,   295,   356,     6,    20,   183,    20,
      20,     5,   303,   355,    16,   137,   191,   139,   140,   361,
       4,   138,     6,     9,     5,     5,    20,     0,   150,   527,
       9,     5,    22,   531,     5,   533,     5,   535,     6,    20,
      20,    20,     5,   541,     6,   543,    20,     5,     7,    20,
       5,    20,    25,    26,    27,     5,   178,    20,   180,   181,
     182,    20,    20,     4,     6,    20,   188,   189,   190,   630,
      20,   181,   182,   195,    47,   573,   198,   199,   576,   189,
     190,    22,    19,    20,     5,    19,    20,   585,   210,   211,
     588,    32,    33,    34,    35,    36,    37,    38,    39,    20,
     210,   211,     6,     0,     5,   227,     6,    48,    49,   231,
     232,   233,     6,   235,   236,   237,   467,   227,   469,    20,
       4,     4,     7,     6,     4,   476,   248,   478,    25,    26,
     441,   117,   118,   119,   120,    20,   122,   123,     7,     7,
     126,   127,   128,   129,     9,     9,     9,     3,    21,     3,
      21,    20,    20,    56,     8,    20,    20,    20,    19,    20,
      63,    19,    20,     4,   137,   138,    19,    20,   290,     4,
     292,   293,     4,   295,   296,   297,   298,     4,   300,   301,
     290,   303,   304,   305,     4,     4,   296,   297,   298,    66,
     312,   313,    16,     6,   304,   305,     6,    53,     6,    55,
       6,    57,     6,    59,   326,     6,    62,     6,     6,    65,
      21,    67,     8,   115,     4,     6,    72,     6,     4,    16,
      22,     4,     4,    79,    80,     4,     4,    83,   350,    22,
      86,     6,   354,   355,     4,     4,     4,     4,   360,   361,
     137,    97,    22,    99,     8,     4,     4,   103,   104,     4,
       4,   483,    18,   109,   110,    18,   112,   379,   114,   232,
     382,   525,   384,    19,   319,    -1,    -1,    -1,    -1,    -1,
     117,   118,   119,   120,   384,   122,   123,    -1,     3,   126,
     127,   128,   129,    -1,    -1,    -1,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   425,   277,    -1,    -1,   429,    -1,   431,
     432,   433,     8,    -1,    -1,   437,    -1,   439,   440,   429,
      16,    -1,    44,    45,    46,   447,   448,   437,    53,    51,
      55,    -1,    57,    -1,    -1,    -1,   458,    62,   460,   461,
      65,    -1,   464,    -1,   466,    -1,   319,    72,    44,    45,
      46,   473,    -1,   475,    79,    51,    78,    -1,    83,    -1,
      82,    86,    -1,    -1,   486,    -1,    -1,    95,    -1,   491,
      -1,    -1,    97,    -1,    99,    -1,   498,   350,   103,    -1,
      -1,   503,    78,    -1,   109,   110,    82,   112,    -1,   511,
      -1,    -1,    -1,    -1,    -1,    -1,   518,    -1,    -1,    -1,
     522,   511,    -1,   525,    -1,   527,   379,    -1,   518,   531,
      -1,   533,    -1,   535,    -1,    -1,    -1,    -1,    -1,   541,
      -1,   543,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   557,    -1,    -1,    -1,   412,
      -1,   563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,   573,    -1,   350,   576,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   585,    -1,    -1,   588,   195,     8,    -1,
      -1,    -1,    12,    13,    14,    -1,    16,   599,   451,    -1,
      -1,    -1,   379,    -1,    -1,   458,    -1,   460,    -1,   599,
      -1,    -1,    -1,   466,    -1,    -1,    -1,    -1,    -1,    -1,
     473,    -1,   475,    -1,    44,    45,    46,    -1,   630,   631,
     632,    51,   634,   486,    -1,    -1,    -1,    -1,    -1,    -1,
     248,   631,    -1,    -1,   634,    -1,    -1,    -1,   650,   651,
     652,    -1,    -1,    -1,    -1,   657,    -1,    -1,    78,    -1,
      -1,   651,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   525,    -1,   527,    -1,    -1,    -1,   531,    -1,
     533,   458,   535,    -1,   292,   293,    -1,    -1,   541,   466,
     543,    -1,   300,   301,    -1,    -1,   473,    -1,   475,    -1,
      -1,    -1,    -1,    -1,   312,   313,   105,    -1,    -1,   486,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,
     573,    -1,    -1,   576,    79,    80,    81,    82,    -1,    84,
      85,    86,   585,    -1,    -1,   588,    -1,    -1,   137,     8,
     139,    10,    11,    12,    13,    14,    -1,    16,   525,    -1,
     527,    -1,    -1,   108,   531,    -1,   533,    -1,   535,    -1,
      -1,    -1,    -1,    -1,   541,    -1,   543,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   573,    -1,    -1,   576,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   585,    78,
      -1,   588,    -1,    82,    -1,    -1,    -1,   425,    -1,    -1,
      -1,    -1,    -1,   431,   432,   433,    -1,    -1,    -1,    -1,
      -1,   439,   440,   232,    -1,    -1,    -1,   236,    -1,   447,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,   464,    -1,    -1,   214,
     215,    -1,   217,    -1,    -1,    -1,   221,   222,   223,    -1,
     225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,
     498,     3,    -1,     5,    -1,   503,   251,   252,   253,   254,
     255,   256,   257,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    -1,    -1,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    55,    -1,    57,    -1,    -1,    60,   557,
      62,   350,    -1,    65,    -1,   563,    68,    69,    70,    -1,
      72,    -1,    -1,    -1,   319,    77,    -1,    79,    -1,    -1,
      -1,    83,    84,    -1,    86,    -1,    88,    89,    90,    -1,
     379,    -1,    94,    95,    -1,    97,    98,    99,    -1,    -1,
     102,   103,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    10,    11,    12,
      13,    14,   630,    16,   632,   380,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,   650,    -1,   652,    -1,    -1,    40,    41,   657,
      -1,    44,    45,    46,    -1,   410,    -1,   412,    51,   458,
      -1,   460,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,
      -1,    -1,    -1,    -1,   473,    -1,   475,    -1,     8,    -1,
      10,    11,    12,    13,    14,    78,    16,   486,    -1,    82,
     445,   446,    -1,    23,    24,    -1,   451,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    51,   487,    -1,    -1,    -1,   525,    -1,   527,    -1,
      -1,    -1,   531,    -1,   533,    -1,   535,    -1,   493,    -1,
      -1,    -1,   541,    -1,   543,    -1,    -1,    -1,    78,    -1,
      -1,   516,    82,    -1,    -1,    -1,    -1,    -1,    -1,   524,
      -1,    -1,    -1,   528,    -1,   520,    -1,    -1,   523,    -1,
      -1,   536,    -1,   538,   573,    -1,    -1,   576,    -1,    -1,
      -1,   546,    -1,    -1,   549,    -1,   585,    -1,    -1,   588,
      -1,    -1,    -1,    -1,    -1,   550,    -1,   562,    -1,    -1,
      -1,   556,    -1,   558,   569,    -1,    -1,   572,    -1,   574,
     565,    -1,   577,    -1,   579,    -1,    -1,   582,    -1,   584,
      -1,   586,    -1,    -1,   589,    -1,    -1,   592,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   607,    -1,   609,    -1,   601,   612,   613,    -1,
      -1,   616,    -1,   618,     3,     4,   621,     6,    -1,   624,
     625,    10,    11,   628,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,   637,    -1,    -1,   640,    -1,    -1,    27,   644,
      -1,    -1,   647,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      79,    80,    81,    -1,    83,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,    -1,    -1,   126,   127,   128,
     129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      81,    -1,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,   130,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,   130,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,   130,     3,     4,    -1,     6,
      -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,   130,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
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
     129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      81,    -1,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,   130,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,   130,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,   130,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,   130,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
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
     129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      81,    -1,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,   130,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,   130,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,   130,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,   130,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
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
     129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      81,    -1,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,   130,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,   130,     3,     4,
      -1,     6,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,   130,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    50,    -1,    52,    53,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    79,    80,    81,    -1,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,   130,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
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
     129,   130,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      -1,    52,    53,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    79,    80,
      81,    -1,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,   130,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    50,    -1,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    79,    80,    81,    -1,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,   130,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    50,    -1,    52,    53,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     3,
       4,   126,   127,   128,   129,   130,    10,    11,    -1,    -1,
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
      -1,    -1,   126,   127,   128,   129,   130,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    50,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,
      -1,    -1,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      -1,    -1,    98,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,   108,    -1,    -1,    71,    -1,   113,    -1,    -1,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    85,
     126,   127,   128,   129,   130,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
     116,   117,   118,   119,   120,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,   130,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,    -1,
      98,    -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,   113,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      50,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    -1,    -1,    98,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,   108,    -1,
      -1,    -1,    -1,   113,    -1,    -1,   116,   117,   118,   119,
     120,   121,   122,   123,     3,     4,   126,   127,   128,   129,
     130,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    -1,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    -1,    -1,    98,
      -1,   100,   101,   102,     3,    -1,     5,   106,   107,   108,
      -1,    -1,    -1,    -1,   113,    -1,    -1,   116,   117,   118,
     119,   120,   121,   122,   123,     3,     4,   126,   127,   128,
     129,   130,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    65,    45,    46,    68,
      69,    70,    -1,    72,    52,    -1,    54,    -1,    77,    -1,
      79,    -1,    -1,    61,    83,    84,    -1,    86,    -1,    88,
      89,    90,    -1,    71,    -1,    94,    95,    -1,    97,    98,
      99,    -1,    -1,   102,   103,    -1,    84,    85,     3,    -1,
     109,   110,    -1,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   117,
     118,   119,   120,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,   130,    -1,    -1,    50,    -1,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,
      65,    -1,    67,    68,    69,    70,     3,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    80,    -1,    -1,    83,    84,
      -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    98,    99,    -1,    -1,   102,   103,   104,
      -1,    -1,    -1,    -1,   109,   110,    -1,   112,   113,   114,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    69,    70,     3,    72,     5,    -1,    -1,    -1,
      77,    -1,    79,    80,    -1,    -1,    83,    84,    -1,    86,
      -1,    88,    89,    90,    -1,    -1,    -1,    94,    95,    -1,
      97,    98,    99,    -1,    -1,   102,   103,   104,    -1,    -1,
      -1,    -1,   109,   110,    -1,   112,   113,   114,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
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
      65,    -1,    -1,    68,    69,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83,    84,
      -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    -1,    97,    98,    99,    -1,    -1,   102,   103,    -1,
      -1,    -1,    -1,    -1,   109,   110,    50,   112,   113,    53,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83,
      84,    -1,    86,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    97,    98,    99,    -1,    -1,   102,   103,
      -1,    -1,    -1,    -1,    -1,   109,   110,     5,   112,   113,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
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
      44,    45,    46,    -1,    -1,    50,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    78,    80,    81,    -1,    82,    84,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,   104,
      -1,     8,    -1,    10,    11,    12,    13,    14,   113,    16,
      17,    -1,    19,    -1,    -1,    -1,    23,    24,    25,    26,
     125,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    78,    -1,    -1,    -1,    82,    -1,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,     8,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,
      -1,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    51,     8,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    19,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    -1,    78,
      -1,    -1,    -1,    82,    -1,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    51,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    78,    -1,    -1,
      -1,    82,    -1,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    51,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    78,    -1,    -1,    -1,    82,    -1,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    51,     8,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    78,    -1,    -1,    -1,    82,
      -1,    40,    41,    42,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    51,     8,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    -1,    78,
      -1,    -1,    -1,    82,    -1,    40,    41,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    51,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    28,    29,    30,
      31,    -1,    -1,    78,    -1,    -1,    -1,    82,    -1,    40,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,
      51,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    82,    -1,    40,    41,    -1,    -1,    44,    45,    46,
      -1,    -1,    50,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    78,    80,    81,    -1,    82,    84,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      98,    50,    -1,    -1,   102,    -1,   104,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,   113,   114,    -1,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    80,    81,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    50,    98,
      -1,    -1,    -1,   102,    -1,   104,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,   113,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    50,    98,    -1,    -1,    -1,
     102,    -1,   104,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,   113,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    90,    50,    -1,    -1,    94,
      95,    -1,    -1,    98,    -1,    59,    60,   102,    -1,   104,
      -1,    -1,    -1,    67,    68,    69,    70,    -1,   113,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    80,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    -1,    -1,    98,    -1,    -1,    -1,   102,    -1,
     104,    10,    11,    12,    13,    14,    -1,    16,    17,   113,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    59,    60,    67,    68,    69,    70,    77,    80,
      81,    84,    88,    89,    90,    91,    92,    93,    94,    95,
      98,   102,   104,   113,   137,   138,   139,   140,   141,   154,
     156,   157,   158,   159,     3,   153,   153,   153,    81,   153,
       0,   125,   154,    59,    67,    80,   104,   140,    59,    67,
      80,   104,   139,   141,    18,   155,     6,     6,     6,   153,
     153,   153,   153,    59,    67,    80,   104,   153,   153,   153,
     153,    59,    67,    80,   104,   153,     6,   153,   160,     4,
      10,    11,    15,    19,    27,    45,    46,    52,    53,    54,
      55,    57,    58,    61,    62,    64,    65,    71,    72,    73,
      74,    75,    76,    79,    83,    84,    85,    86,    96,    97,
      99,   100,   101,   103,   105,   106,   107,   108,   109,   110,
     111,   112,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   126,   127,   128,   129,   130,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   151,   153,   154,
     161,   162,   163,   168,   169,   170,   171,   173,   174,   176,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   197,   198,   161,   155,
       6,     6,     6,   153,   153,   153,   153,   155,     6,     6,
       6,   153,   153,   153,   153,   161,    22,     7,    20,    84,
     153,   187,   187,   187,   187,   187,   187,   187,    21,     4,
       6,     6,   162,   178,     4,     4,   153,     4,   142,   153,
     187,     4,     4,     4,    21,     4,     4,     6,    87,   153,
       4,   114,   140,   142,   153,   114,   139,   142,     8,    87,
     153,   172,    16,    16,    18,    21,     7,   162,    66,   175,
       8,    10,    11,    12,    13,    14,    16,    17,    19,    23,
      24,    25,    26,    28,    29,    30,    31,    40,    41,    42,
      43,    44,    45,    46,    51,    78,    82,     4,    22,    32,
      33,    34,    35,    36,    37,    38,    39,    48,    49,     7,
       6,   160,   161,   161,   155,     6,     6,     6,     6,   160,
     161,   161,   155,     6,     6,     6,     7,   151,   153,     5,
     193,   187,   161,   161,   115,   187,   187,   187,     8,     4,
     187,   187,   187,   193,   187,   187,   161,    10,    11,    12,
      13,    14,    16,    17,    23,    24,    25,    26,    28,    29,
      30,    31,    40,    41,    42,    43,    44,    45,    46,   167,
       4,   187,    87,   153,   114,   142,    87,   153,   172,   153,
     114,   142,   153,   172,     9,   117,   118,   119,   120,   122,
     123,   126,   127,   128,   129,   149,   150,   152,   167,     4,
      22,    19,    20,   193,     6,   162,   149,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     141,   187,   195,   196,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   161,     7,     7,     7,     6,
     160,   161,   161,   161,     7,     7,     7,     6,   160,   161,
     161,    22,     5,     7,     7,     4,    19,     5,     5,   149,
       5,   195,     5,     5,     5,     5,     5,     7,     4,     5,
     140,   142,   164,   166,     5,   167,     4,    87,   153,    87,
     153,   172,   167,     4,    19,     4,    87,   153,    87,   153,
     172,    19,     9,    20,     9,    20,     4,     5,   164,   187,
     153,   161,     9,    18,   187,     5,   196,     7,   161,     7,
       7,     7,     7,   161,     7,     7,     7,   151,   187,   187,
     178,     6,   162,     9,     5,     6,     5,   164,     6,    19,
      47,   165,   142,   153,     5,    20,   178,     4,     5,   164,
     167,     4,   167,     4,    19,     4,     5,   164,     5,   164,
     167,     4,   167,     4,    19,   152,     5,   164,   165,     5,
      22,     7,   187,     7,     7,     5,    19,   161,    56,    63,
     177,   165,     5,   161,   187,   153,   187,   165,   166,     5,
     164,   165,     5,     4,     5,   164,     4,     5,   164,     5,
     164,   165,     5,   165,     5,     4,     5,   164,     4,     5,
     164,   165,     5,   165,   187,    19,   187,     7,   187,    18,
       7,    56,    63,   165,     7,   187,   165,     5,   165,     5,
     164,   165,     5,     5,   164,   165,     5,   165,     5,   165,
     165,     5,   164,   165,     5,     5,   164,   165,     5,   165,
       5,    18,   161,   187,    18,   165,   165,     5,   165,   165,
       5,   165,   165,   165,     5,   165,   165,     5,   165,   178,
     161,    18,   161,   165,   165,   165,   165,   161
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
     152,   152,   152,   152,   152,   153,   154,   154,   154,   154,
     155,   155,   156,   156,   156,   156,   156,   157,   157,   157,
     157,   157,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   164,   164,   165,   165,   165,
     166,   166,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   169,   170,   170,   171,   171,   171,   172,   172,
     172,   172,   173,   173,   174,   174,   175,   175,   176,   177,
     177,   177,   177,   178,   178,   179,   180,   181,   182,   183,
     183,   184,   184,   185,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   193,   193,   193,   193,   194,
     195,   195,   195,   196,   196,   197,   198
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     3,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     7,     7,     8,     8,     6,     6,     6,     7,
       7,     5,     6,     6,     7,     7,     5,     6,     6,     7,
       7,     5,     3,     5,     1,     3,     2,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     5,     6,     5,
       6,     6,     7,     6,     7,     6,     7,     7,     8,     7,
       8,     7,     8,     7,     8,     3,     1,     3,     2,     1,
       2,     3,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     7,     6,     7,
       7,     8,     7,     8,     8,     9,     8,     9,     8,     9,
       8,     9,     2,     3,     4,     4,     5,     5,     3,     5,
       1,     3,     1,     2,     7,     5,     4,     2,     7,     5,
       4,     4,     3,     3,     1,     5,     7,     9,     5,     4,
       4,     4,     4,     2,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     3,     1,     3,     3,     4,
       2,     1,     0,     1,     2,     4,     5
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
        
#line 3426 "src/Parser/parser.c" /* yacc.c:1646  */
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
#line 413 "src/Parser/c-sharp.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
