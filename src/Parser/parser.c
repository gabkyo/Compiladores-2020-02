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

int yylex(void);
void yyerror(char const *s);

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

/* Copy the second part of user declarations.  */

#line 266 "src/Parser/parser.c" /* yacc.c:358  */

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4888

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  137
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   391

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
      43,    45,    46,    47,    48,    49,    51,    52,    53,    54,
      55,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    79,    80,    80,    81,    81,
      81,    81,    84,    84,    84,    88,    89,    91,    92,    93,
      94,    96,    97,    98,    99,   102,   102,   104,   105,   107,
     108,   111,   113,   114,   115,   116,   119,   119,   120,   121,
     122,   123,   126,   126,   126,   126,   126,   126,   126,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     144,   145,   146,   147,   148,   149,   150,   151,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   179,
     183,   184,   185,   189,   192,   193,   194,   197
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
     385,   386,   387,   388,   389,   390,   391
};
# endif

#define YYPACT_NINF -290

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-290)))

#define YYTABLE_NINF -154

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    4180,    27,  -290,  -290,  -290,  -290,  -290,   -52,  -290,  -290,
    -290,  -290,    29,  -290,   124,   -45,    52,  4163,  -290,  -290,
    -290,    58,  -290,    64,    69,    73,   -50,    77,    80,   -48,
    -290,  -290,  -290,  3256,  3256,    90,    94,    91,   100,   123,
     135,   118,   140,  4289,     2,     2,     2,     2,  -290,     2,
       2,     2,  -290,  -290,  -290,  -290,   477,  -290,  -290,  -290,
     154,   157,   186,  -290,  -290,    74,  -290,  -290,  -290,   187,
    -290,  -290,  -290,  -290,   189,   190,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  3356,   415,
    4135,   101,  -290,   177,  -290,  -290,  -290,  -290,  -290,  -290,
     611,  -290,  -290,  -290,  -290,  -290,  -290,   128,  -290,  -290,
    -290,  -290,  -290,  4620,  -290,  -290,  -290,  -290,  -290,  -290,
     745,  3256,  3256,   195,   198,  3256,  3256,   199,   205,   308,
    -290,   209,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   744,  4331,  4842,  4842,  4842,  4842,  4842,
    4842,  3256,  -290,    92,     2,     2,     2,   613,   200,  4842,
       2,   210,     2,   202,   217,  3423,   -50,   104,  3469,  -290,
     115,    11,    31,    95,  -290,  -290,  -290,   879,  -290,     2,
       2,     2,     2,     2,     2,     2,  -290,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    -290,  -290,  -290,  1013,  1147,  3256,  3256,  1281,  1415,  3256,
    3256,  -290,  3272,  -290,    23,  -290,  -290,  4842,  4842,  4842,
    4842,  4842,  4842,  4842,  4842,  4842,  4842,  4842,  -290,  1549,
     220,  4657,  4373,  4415,  -290,  -290,  4457,  3541,  4499,   221,
     223,   139,    12,   113,   225,   165,   213,   150,  3607,     2,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,   227,  -290,   229,  3256,  -290,  4842,  4842,  4842,  4842,
    4842,  4694,  4842,  4842,  4842,  4842,  4842,  4842,  4842,  4842,
    4842,  4842,  4842,  4842,  4842,  4842,  -290,  -290,  1683,  1817,
    -290,  -290,  1951,  2085,  -290,  -290,  -290,     2,     2,   477,
    2219,   234,    14,  4069,  -290,   174,    48,  -290,   477,  3673,
     237,    24,   160,  3739,  -290,   242,    33,   169,  -290,    14,
      49,  4842,  -290,   226,  2353,     2,  -290,  -290,  -290,  -290,
    4541,  4731,  -290,  3256,  -290,   -21,  3256,     2,  -290,   178,
       2,    14,  4069,  -290,    14,    53,  3805,  3871,  -290,    14,
      55,  3937,  4003,  -290,  -290,    14,     2,  -290,  4842,   228,
       2,  2487,     2,   231,     0,  2621,  4842,     2,  4842,  -290,
    -290,  -290,    14,    14,    61,    14,    66,  -290,    14,    14,
      85,    14,    88,  -290,  4842,  -290,  4583,  -290,  4768,  3256,
    -290,     2,   232,  -290,  4842,  -290,  -290,    14,  -290,    14,
    -290,  -290,    14,  -290,    14,   477,  3256,  2748,  4805,  3256,
    -290,  -290,  -290,  -290,  -290,  2875,   233,  3256,  3002,   235,
    -290,  3129,   236,  -290,   238,  -290,  -290
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      68,     0,    10,     5,    15,    11,     2,     4,     3,    13,
      14,     9,     0,    12,     0,     0,     0,     0,    67,    69,
      70,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       1,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,     0,     0,     0,    95,     0,
       0,     0,    22,    29,    36,    27,     0,    38,    41,    37,
       0,     0,     0,    32,    34,     0,    28,    30,    24,     0,
      40,    33,    35,    31,     0,     0,    39,    45,    44,    49,
      46,    52,    43,    42,    47,    48,    51,    50,     0,     0,
       8,     0,    17,    16,    23,    25,    26,   152,    18,    83,
       0,    82,    84,    93,    86,    85,    87,   135,    88,    89,
      90,    91,    92,     0,   155,   156,   157,   158,    97,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,     0,   174,   175,   177,   176,   172,
     173,     0,   147,     0,     0,     0,     0,   153,   152,   122,
       0,     0,     0,    19,     0,     0,     8,     0,     0,     7,
       0,   133,     0,     0,    20,    75,    81,     0,   136,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     170,   171,    80,     0,     0,     0,     0,     0,     0,     0,
       0,   207,     0,   205,   202,   200,   201,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   169,   168,   154,     0,
       0,     0,     0,     0,   124,   123,     0,     0,     0,     0,
       0,     0,   133,     0,     0,     0,   133,     0,     0,     0,
      53,    58,    57,    62,    59,    64,    56,    55,    60,    61,
      63,     0,   125,     0,     0,   140,   178,   179,   181,   180,
     182,     0,   198,   187,   188,   193,   194,   191,   190,   189,
     192,   184,   183,   185,   186,   197,    71,    76,     0,     0,
      74,    79,     0,     0,   203,   204,   146,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,   115,     0,     0,
       0,   133,     0,     0,   128,     0,   133,     0,   126,     0,
       0,   134,    54,   131,     0,     0,    72,    77,    73,    78,
       0,     0,   151,     0,   138,     0,     0,     0,    98,     0,
     118,     0,     0,   148,     0,     0,     0,     0,   130,     0,
       0,     0,     0,   129,   100,     0,     0,   139,   199,     0,
       0,     0,     0,     0,     0,     0,   117,   120,   119,    99,
     114,   102,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,   101,   132,   149,     0,   137,     0,     0,
     141,     0,     0,   116,   121,   103,   106,     0,   108,     0,
     105,   110,     0,   112,     0,     0,     0,     0,     0,     0,
     107,   109,   111,   113,   150,     0,     0,     0,     0,     0,
     145,     0,     0,   144,     0,   143,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,     8,   -70,    22,   -86,  -290,  -290,  -290,  -290,  -290,
     -62,  -290,  -290,  -290,  -290,    26,  -290,  -290,   -34,   -55,
    -290,  -207,   -51,   -91,  -290,  -290,  -290,  -146,  -290,  -290,
    -290,  -290,  -290,  -289,  -290,  -290,  -290,  -290,   267,  -290,
    -290,  -290,  -290,   127,   131,  -290,    51
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   261,    16,    17,    99,    19,    20,   100,   101,
     102,   306,   338,   307,   103,   104,   105,   173,   106,   107,
     178,   108,   364,   153,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   212,   213
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     120,   152,   167,   158,   170,   143,    44,   390,    14,    37,
     332,    41,    45,    46,    27,   248,   313,    47,   165,   343,
     336,   243,    15,    29,   247,    14,    18,   129,   347,    49,
      21,    22,    23,   249,   249,   362,    26,   352,     3,    15,
     250,   320,   363,    32,   131,   176,   249,    50,    51,     6,
       7,     8,    30,   341,   355,   249,   391,    38,   372,    42,
     378,   337,    28,   392,    33,   176,   397,   211,   342,   342,
      34,   399,    35,   342,    58,   342,    36,   157,    44,   241,
      39,   342,   245,    40,    45,    46,   342,   203,   204,    47,
     402,   207,   208,   404,   123,   312,   121,   168,    29,   317,
     122,    49,   345,   124,   171,   342,   350,   242,   342,   172,
     166,   169,   172,    70,   262,   263,   414,   229,   246,    50,
      51,   127,   265,   172,    76,    77,    78,    79,    80,   125,
      81,    82,   314,   263,    83,    84,    85,    86,    87,   374,
     376,   126,   311,   128,   380,   382,    58,   172,   176,   176,
     211,   305,   176,   176,   251,   252,   253,   254,   154,   255,
     256,   155,   305,   257,   258,   259,   260,   303,   316,   318,
     263,   288,   289,   172,   176,   292,   293,   340,   303,   348,
     263,   367,   172,    24,     2,    70,   172,   169,   353,   263,
     156,   160,   161,   174,   162,   177,    76,    77,    78,    79,
      80,   205,    81,    82,   206,   209,    83,    84,    85,    86,
      87,   210,   214,   230,   237,     4,     5,   339,   130,   235,
     239,     9,    10,   305,   297,   309,   310,   305,   315,    11,
     324,    25,   323,   176,   176,   249,   322,   176,   176,   303,
     335,   346,    13,   303,   152,   334,   351,   385,   356,   389,
     409,   370,   420,   152,   423,   425,   305,   426,   215,   304,
     305,   305,   216,   295,     0,   305,   305,     0,   354,   176,
     304,     0,   303,     0,     0,     0,   303,   303,     0,     0,
       0,   303,   303,     0,     0,     0,     0,     0,     0,     0,
     369,     0,     0,   371,     0,     0,     0,     0,   377,   361,
       0,     0,   365,     0,   383,     0,   176,     0,     0,     0,
     176,   144,   145,   146,   147,     0,   148,   149,   150,     0,
       0,   395,   396,     0,   398,   169,     0,   400,   401,     0,
     403,   304,   159,     0,     0,   304,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   410,     0,   411,     0,
     152,   412,   176,   413,     0,   407,     0,     0,     0,     0,
     176,     0,     0,   176,   304,     0,   176,     0,   304,   304,
       0,     0,   415,   304,   304,   418,     0,     0,     0,     0,
      58,     0,     0,   421,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,   231,   232,   233,     0,     0,     0,   236,     0,   238,
      76,    77,    78,    79,    80,     0,    81,    82,     0,     0,
      83,    84,    85,    86,    87,     0,   266,   267,   268,   269,
     270,   271,   272,     0,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
      43,    44,     0,   151,     0,     0,     0,    45,    46,     0,
       0,     0,    47,     0,     0,     0,    48,     0,     3,     0,
       0,     0,     0,     0,    49,     0,     4,     5,     0,     6,
       7,     8,     9,    10,     0,     0,   321,     0,     0,     0,
      11,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,     0,    53,    13,    54,     0,     1,     2,     0,    55,
       0,     0,    56,    57,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,     0,    62,     0,     0,    63,     0,
       3,     0,     0,    64,   330,   331,     0,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    65,    66,     0,    67,
       0,     0,    11,    68,    12,    69,     0,     0,    70,     0,
      71,    72,   358,     0,    73,    13,    74,     0,    75,    76,
      77,    78,    79,    80,   366,    81,    82,   368,     0,    83,
      84,    85,    86,    87,    43,    44,     0,     0,   175,     0,
       0,    45,    46,   384,     0,     0,    47,   386,     0,   388,
      48,     0,   234,     0,   394,   132,     0,     0,    49,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,     0,     0,     0,    50,    51,   408,     0,
       0,   141,   142,     0,    52,     0,    53,     0,    54,     0,
       1,     2,     0,    55,     0,     0,    56,    57,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,     0,    62,
       0,     0,    63,     0,     3,     0,     0,    64,     0,     0,
       0,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      65,    66,     0,    67,     0,     0,    11,    68,    12,    69,
       0,     0,    70,     0,    71,    72,     0,     0,    73,    13,
      74,     0,    75,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,    83,    84,    85,    86,    87,    43,    44,
       0,     0,   202,     0,     0,    45,    46,     0,     0,     0,
      47,     0,     0,     0,    48,     0,   132,     0,     0,     0,
       0,     0,    49,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,     0,     0,     0,     0,     0,     0,
      50,    51,   141,   142,     0,     0,     0,     0,    52,     0,
      53,     0,    54,     0,     1,     2,     0,    55,     0,     0,
      56,    57,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,     0,    62,     0,     0,    63,     0,     3,     0,
       0,    64,     0,     0,     0,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    65,    66,     0,    67,     0,     0,
      11,    68,    12,    69,     0,     0,    70,     0,    71,    72,
       0,     0,    73,    13,    74,     0,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    43,    44,     0,   264,     0,     0,     0,    45,
      46,     0,     0,     0,    47,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,    53,     0,    54,     0,     1,     2,
       0,    55,     0,     0,    56,    57,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,     0,    62,     0,     0,
      63,     0,     3,     0,     0,    64,     0,     0,     0,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    65,    66,
       0,    67,     0,     0,    11,    68,    12,    69,     0,     0,
      70,     0,    71,    72,     0,     0,    73,    13,    74,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,    83,    84,    85,    86,    87,    43,    44,     0,     0,
     286,     0,     0,    45,    46,     0,     0,     0,    47,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
      54,     0,     1,     2,     0,    55,     0,     0,    56,    57,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
       0,    62,     0,     0,    63,     0,     3,     0,     0,    64,
       0,     0,     0,     0,     4,     5,     0,     6,     7,     8,
       9,    10,    65,    66,     0,    67,     0,     0,    11,    68,
      12,    69,     0,     0,    70,     0,    71,    72,     0,     0,
      73,    13,    74,     0,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,    83,    84,    85,    86,    87,
      43,    44,     0,     0,   287,     0,     0,    45,    46,     0,
       0,     0,    47,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,     0,    53,     0,    54,     0,     1,     2,     0,    55,
       0,     0,    56,    57,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,     0,    62,     0,     0,    63,     0,
       3,     0,     0,    64,     0,     0,     0,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    65,    66,     0,    67,
       0,     0,    11,    68,    12,    69,     0,     0,    70,     0,
      71,    72,     0,     0,    73,    13,    74,     0,    75,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,    83,
      84,    85,    86,    87,    43,    44,     0,     0,   290,     0,
       0,    45,    46,     0,     0,     0,    47,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,    52,     0,    53,     0,    54,     0,
       1,     2,     0,    55,     0,     0,    56,    57,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,     0,    62,
       0,     0,    63,     0,     3,     0,     0,    64,     0,     0,
       0,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      65,    66,     0,    67,     0,     0,    11,    68,    12,    69,
       0,     0,    70,     0,    71,    72,     0,     0,    73,    13,
      74,     0,    75,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,    83,    84,    85,    86,    87,    43,    44,
       0,     0,   291,     0,     0,    45,    46,     0,     0,     0,
      47,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
      53,     0,    54,     0,     1,     2,     0,    55,     0,     0,
      56,    57,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,     0,    62,     0,     0,    63,     0,     3,     0,
       0,    64,     0,     0,     0,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    65,    66,     0,    67,     0,     0,
      11,    68,    12,    69,     0,     0,    70,     0,    71,    72,
       0,     0,    73,    13,    74,     0,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    43,    44,     0,     0,   296,     0,     0,    45,
      46,     0,     0,     0,    47,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,    53,     0,    54,     0,     1,     2,
       0,    55,     0,     0,    56,    57,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,     0,    62,     0,     0,
      63,     0,     3,     0,     0,    64,     0,     0,     0,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    65,    66,
       0,    67,     0,     0,    11,    68,    12,    69,     0,     0,
      70,     0,    71,    72,     0,     0,    73,    13,    74,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,    83,    84,    85,    86,    87,    43,    44,     0,     0,
     326,     0,     0,    45,    46,     0,     0,     0,    47,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
      54,     0,     1,     2,     0,    55,     0,     0,    56,    57,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
       0,    62,     0,     0,    63,     0,     3,     0,     0,    64,
       0,     0,     0,     0,     4,     5,     0,     6,     7,     8,
       9,    10,    65,    66,     0,    67,     0,     0,    11,    68,
      12,    69,     0,     0,    70,     0,    71,    72,     0,     0,
      73,    13,    74,     0,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,    83,    84,    85,    86,    87,
      43,    44,     0,     0,   327,     0,     0,    45,    46,     0,
       0,     0,    47,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,     0,    53,     0,    54,     0,     1,     2,     0,    55,
       0,     0,    56,    57,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,     0,    62,     0,     0,    63,     0,
       3,     0,     0,    64,     0,     0,     0,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    65,    66,     0,    67,
       0,     0,    11,    68,    12,    69,     0,     0,    70,     0,
      71,    72,     0,     0,    73,    13,    74,     0,    75,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,    83,
      84,    85,    86,    87,    43,    44,     0,     0,   328,     0,
       0,    45,    46,     0,     0,     0,    47,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,    52,     0,    53,     0,    54,     0,
       1,     2,     0,    55,     0,     0,    56,    57,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,     0,    62,
       0,     0,    63,     0,     3,     0,     0,    64,     0,     0,
       0,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      65,    66,     0,    67,     0,     0,    11,    68,    12,    69,
       0,     0,    70,     0,    71,    72,     0,     0,    73,    13,
      74,     0,    75,    76,    77,    78,    79,    80,     0,    81,
      82,     0,     0,    83,    84,    85,    86,    87,    43,    44,
       0,     0,   329,     0,     0,    45,    46,     0,     0,     0,
      47,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,     0,
      53,     0,    54,     0,     1,     2,     0,    55,     0,     0,
      56,    57,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,     0,    62,     0,     0,    63,     0,     3,     0,
       0,    64,     0,     0,     0,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    65,    66,     0,    67,     0,     0,
      11,    68,    12,    69,     0,     0,    70,     0,    71,    72,
       0,     0,    73,    13,    74,     0,    75,    76,    77,    78,
      79,    80,     0,    81,    82,     0,     0,    83,    84,    85,
      86,    87,    43,    44,     0,   333,     0,     0,     0,    45,
      46,     0,     0,     0,    47,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,     0,    53,     0,    54,     0,     1,     2,
       0,    55,     0,     0,    56,    57,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,     0,    62,     0,     0,
      63,     0,     3,     0,     0,    64,     0,     0,     0,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    65,    66,
       0,    67,     0,     0,    11,    68,    12,    69,     0,     0,
      70,     0,    71,    72,     0,     0,    73,    13,    74,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,     0,
       0,    83,    84,    85,    86,    87,    43,    44,     0,     0,
     357,     0,     0,    45,    46,     0,     0,     0,    47,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
      54,     0,     1,     2,     0,    55,     0,     0,    56,    57,
       0,     0,     0,     0,     0,    58,     0,    59,    60,    61,
       0,    62,     0,     0,    63,     0,     3,     0,     0,    64,
       0,     0,     0,     0,     4,     5,     0,     6,     7,     8,
       9,    10,    65,    66,     0,    67,     0,     0,    11,    68,
      12,    69,     0,     0,    70,     0,    71,    72,     0,     0,
      73,    13,    74,     0,    75,    76,    77,    78,    79,    80,
       0,    81,    82,     0,     0,    83,    84,    85,    86,    87,
      43,    44,     0,     0,   387,     0,     0,    45,    46,     0,
       0,     0,    47,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,     0,     0,     0,     0,     0,     0,
      52,     0,    53,     0,    54,     0,     1,     2,     0,    55,
       0,     0,    56,    57,     0,     0,     0,     0,     0,    58,
       0,    59,    60,    61,     0,    62,     0,     0,    63,     0,
       3,     0,     0,    64,     0,     0,     0,     0,     4,     5,
       0,     6,     7,     8,     9,    10,    65,    66,     0,    67,
       0,     0,    11,    68,    12,    69,     0,     0,    70,     0,
      71,    72,     0,     0,    73,    13,    74,     0,    75,    76,
      77,    78,    79,    80,     0,    81,    82,     0,     0,    83,
      84,    85,    86,    87,    43,    44,     0,     0,   393,     0,
       0,    45,    46,     0,     0,     0,    47,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,     0,     0,
       0,     0,     0,     0,    52,     0,    53,     0,    54,     0,
       1,     2,     0,    55,     0,     0,    56,    57,     0,     0,
       0,     0,     0,    58,     0,    59,    60,    61,     0,    62,
       0,     0,    63,     0,     3,     0,     0,    64,     0,     0,
       0,     0,     4,     5,     0,     6,     7,     8,     9,    10,
      65,    66,     0,    67,     0,     0,    11,    68,    12,    69,
       0,     0,    70,     0,    71,    72,     0,     0,    73,    13,
      74,     0,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    43,    44,    83,    84,    85,    86,    87,    45,    46,
       0,     0,     0,    47,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    52,   416,    53,     0,    54,     0,     1,     2,     0,
      55,     0,     0,    56,    57,     0,     0,     0,     0,     0,
      58,     0,    59,    60,    61,     0,    62,     0,     0,    63,
       0,     3,     0,     0,    64,     0,     0,     0,     0,     4,
       5,     0,     6,     7,     8,     9,    10,    65,    66,     0,
      67,     0,     0,    11,    68,    12,    69,     0,     0,    70,
       0,    71,    72,     0,     0,    73,    13,    74,     0,    75,
      76,    77,    78,    79,    80,     0,    81,    82,    43,    44,
      83,    84,    85,    86,    87,    45,    46,     0,     0,     0,
      47,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,     0,     0,     0,     0,     0,    52,   419,
      53,     0,    54,     0,     1,     2,     0,    55,     0,     0,
      56,    57,     0,     0,     0,     0,     0,    58,     0,    59,
      60,    61,     0,    62,     0,     0,    63,     0,     3,     0,
       0,    64,     0,     0,     0,     0,     4,     5,     0,     6,
       7,     8,     9,    10,    65,    66,     0,    67,     0,     0,
      11,    68,    12,    69,     0,     0,    70,     0,    71,    72,
       0,     0,    73,    13,    74,     0,    75,    76,    77,    78,
      79,    80,     0,    81,    82,    43,    44,    83,    84,    85,
      86,    87,    45,    46,     0,     0,     0,    47,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,     0,
       0,     0,     0,     0,     0,    52,   422,    53,     0,    54,
       0,     1,     2,     0,    55,     0,     0,    56,    57,     0,
       0,     0,     0,     0,    58,     0,    59,    60,    61,     0,
      62,     0,     0,    63,     0,     3,     0,     0,    64,     0,
       0,     0,     0,     4,     5,     0,     6,     7,     8,     9,
      10,    65,    66,     0,    67,     0,     0,    11,    68,    12,
      69,     0,     0,    70,     0,    71,    72,     0,     0,    73,
      13,    74,     0,    75,    76,    77,    78,    79,    80,     0,
      81,    82,    43,    44,    83,    84,    85,    86,    87,    45,
      46,     0,     0,     0,    47,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,     0,    52,   424,    53,     0,    54,     0,     1,     2,
       0,    55,     0,     0,    56,    57,     0,     0,     0,     0,
       0,    58,     0,    59,    60,    61,     0,    62,     0,     0,
      63,     0,     3,     0,     0,    64,     0,     0,     0,     0,
       4,     5,     0,     6,     7,     8,     9,    10,    65,    66,
       0,    67,     0,     0,    11,    68,    12,    69,     0,     0,
      70,     0,    71,    72,     0,     0,    73,    13,    74,     0,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    43,
      44,    83,    84,    85,    86,    87,    45,    46,     0,     0,
       0,    47,     0,     0,     0,    48,     0,   294,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,    52,
       0,    53,     0,    54,     0,     1,     2,     0,    55,     0,
       0,    56,    57,     0,     0,     0,     0,     0,    58,     0,
      59,    60,    61,     0,    62,     0,     0,    63,     0,     3,
       0,     0,    64,     0,    58,     0,     0,     4,     5,     0,
       6,     7,     8,     9,    10,    65,    66,     0,    67,   163,
       0,    11,    68,    12,    69,     0,     0,    70,     0,    71,
      72,     0,     0,    73,    13,    74,     0,    75,    76,    77,
      78,    79,    80,    70,    81,    82,     0,     0,    83,    84,
      85,    86,    87,     0,    76,    77,    78,    79,    80,     0,
      81,    82,     0,     0,    83,    84,    85,    86,    87,    52,
       0,    53,     0,    54,     0,    24,     2,     0,    55,     0,
       0,     0,    57,     0,     0,     0,   163,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,    63,     0,     0,
       0,     0,    64,     0,     0,     0,     0,     4,     5,     0,
       0,     0,     0,     9,    10,     0,    66,     0,    67,     0,
       0,    11,    68,    25,     0,     0,     0,     0,     0,    71,
      72,     0,   163,    73,    13,   164,    52,     0,    53,     0,
      54,     0,     0,     2,     0,    55,     0,     0,     0,    57,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       9,    10,    52,    66,    53,    67,    54,     0,    11,    68,
       0,    55,     0,     0,     0,    57,    71,    72,     0,     0,
      73,    13,   240,    59,   163,     0,   302,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
       0,    67,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,    73,     0,   244,     0,
       0,     0,     0,     0,    52,     0,    53,     0,    54,     0,
       0,     2,     0,    55,     0,     0,     0,    57,     0,     0,
     163,     0,   319,     0,     0,    59,     0,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     4,     5,     0,     0,     0,     0,     9,    10,
       0,    66,     0,    67,     0,     0,    11,    68,     0,     0,
       0,     0,     0,     0,    71,    72,     0,     0,    73,    13,
      52,     0,    53,     0,    54,     0,     0,     2,     0,    55,
       0,     0,     0,    57,     0,     0,   163,     0,   344,     0,
       0,    59,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     9,    10,     0,    66,     0,    67,
       0,     0,    11,    68,     0,     0,     0,     0,     0,     0,
      71,    72,     0,     0,    73,    13,    52,     0,    53,     0,
      54,     0,     0,     2,     0,    55,     0,     0,     0,    57,
       0,     0,   163,     0,   349,     0,     0,    59,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       9,    10,     0,    66,     0,    67,     0,     0,    11,    68,
       0,     0,     0,     0,     0,     0,    71,    72,     0,     0,
      73,    13,    52,     0,    53,     0,    54,     0,     0,     2,
       0,    55,     0,     0,     0,    57,     0,     0,   163,     0,
     373,     0,     0,    59,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     9,    10,     0,    66,
       0,    67,     0,     0,    11,    68,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,    73,    13,    52,     0,
      53,     0,    54,     0,     0,     2,     0,    55,     0,     0,
       0,    57,     0,     0,   163,     0,   375,     0,     0,    59,
       0,     0,     0,     0,     0,     0,    63,     0,     0,     0,
       0,    64,     0,     0,     0,     0,     4,     5,     0,     0,
       0,     0,     9,    10,     0,    66,     0,    67,     0,     0,
      11,    68,     0,     0,     0,     0,     0,     0,    71,    72,
       0,     0,    73,    13,    52,     0,    53,     0,    54,     0,
       0,     2,     0,    55,     0,     0,     0,    57,     0,     0,
     163,     0,   379,     0,     0,    59,     0,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     4,     5,     0,     0,     0,     0,     9,    10,
       0,    66,     0,    67,     0,     0,    11,    68,     0,     0,
       0,     0,     0,     0,    71,    72,     0,     0,    73,    13,
      52,     0,    53,     0,    54,     0,     0,     2,     0,    55,
       0,     0,     0,    57,     0,     0,   163,     0,   381,     0,
       0,    59,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,    64,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     9,    10,     0,    66,     0,    67,
       0,     0,    11,    68,     0,     0,     0,     0,     0,     0,
      71,    72,     0,     0,    73,    13,    52,     0,    53,     0,
      54,     0,     0,     2,     0,    55,     0,     0,     0,    57,
       0,     0,   163,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,    64,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       9,    10,     0,    66,     0,    67,     0,     0,    11,    68,
       0,     0,     0,     0,     0,     0,    71,    72,     0,     0,
      73,    13,    52,     0,    53,     0,    54,     0,     0,     2,
       0,    55,     0,     0,     0,    57,     0,     0,   163,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     9,    10,     0,    66,
       0,    67,     0,     0,    11,    68,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,    73,    13,    52,     0,
      53,     0,    54,     0,    27,     0,     0,    55,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,    63,     0,     3,     0,
       0,    64,     1,     2,     0,     0,     0,     0,     0,     6,
       7,     8,     0,     0,     0,    66,     0,    67,     0,     1,
       2,    68,    28,     0,     0,     0,     3,     0,    71,    72,
       0,     0,    73,     0,     4,     5,     0,     6,     7,     8,
       9,    10,     0,     3,     0,     0,     0,     0,    11,     0,
      12,     4,     5,     0,     6,     7,     8,     9,    10,     0,
       0,    13,     0,     0,     0,    11,     0,    12,     0,     0,
       0,     0,   -19,   129,    31,     0,     0,   -19,    13,  -153,
    -153,  -153,  -153,  -153,     0,   130,  -153,     0,  -153,     0,
     131,   132,  -153,  -153,  -153,  -153,     0,  -153,  -153,  -153,
    -153,   133,   134,   135,   136,   137,   138,   139,   140,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,   228,   141,   142,     0,
       0,   179,   180,   181,   182,   183,     0,   184,   185,     0,
       0,     0,     0,     0,   187,   188,   189,   190,     0,   191,
     192,   193,   194,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   196,   197,   198,   199,   200,   201,   299,     0,
       0,     0,     0,   179,   180,   181,   182,   183,     0,   184,
     185,     0,     0,     0,     0,     0,   187,   188,   189,   190,
       0,   191,   192,   193,   194,     0,     0,     0,     0,     0,
       0,     0,     0,   195,   196,   197,   198,   199,   200,   201,
     300,     0,     0,     0,     0,   179,   180,   181,   182,   183,
       0,   184,   185,     0,     0,     0,     0,     0,   187,   188,
     189,   190,     0,   191,   192,   193,   194,     0,     0,     0,
       0,     0,     0,     0,     0,   195,   196,   197,   198,   199,
     200,   201,   301,     0,     0,     0,     0,   179,   180,   181,
     182,   183,     0,   184,   185,     0,     0,     0,     0,     0,
     187,   188,   189,   190,     0,   191,   192,   193,   194,     0,
       0,     0,     0,     0,     0,     0,     0,   195,   196,   197,
     198,   199,   200,   201,   308,     0,     0,     0,     0,   179,
     180,   181,   182,   183,     0,   184,   185,     0,     0,     0,
       0,     0,   187,   188,   189,   190,     0,   191,   192,   193,
     194,     0,     0,     0,     0,     0,     0,     0,     0,   195,
     196,   197,   198,   199,   200,   201,   359,     0,     0,     0,
       0,   179,   180,   181,   182,   183,     0,   184,   185,     0,
       0,     0,     0,     0,   187,   188,   189,   190,     0,   191,
     192,   193,   194,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   196,   197,   198,   199,   200,   201,   405,     0,
       0,     0,     0,   179,   180,   181,   182,   183,     0,   184,
     185,     0,     0,     0,     0,     0,   187,   188,   189,   190,
       0,   191,   192,   193,   194,     0,     0,     0,     0,     0,
       0,     0,     0,   195,   196,   197,   198,   199,   200,   201,
     179,   180,   181,   182,   183,     0,   184,   185,     0,   186,
       0,     0,     0,   187,   188,   189,   190,     0,   191,   192,
     193,   194,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   196,   197,   198,   199,   200,   201,   179,   180,   181,
     182,   183,     0,   184,   185,     0,   298,     0,     0,     0,
     187,   188,   189,   190,     0,   191,   192,   193,   194,     0,
       0,     0,     0,     0,     0,     0,     0,   195,   196,   197,
     198,   199,   200,   201,   179,   180,   181,   182,   183,     0,
     184,   185,   325,     0,     0,     0,     0,   187,   188,   189,
     190,     0,   191,   192,   193,   194,     0,     0,     0,     0,
       0,     0,     0,     0,   195,   196,   197,   198,   199,   200,
     201,   179,   180,   181,   182,   183,     0,   184,   185,     0,
     360,     0,     0,     0,   187,   188,   189,   190,     0,   191,
     192,   193,   194,     0,     0,     0,     0,     0,     0,     0,
       0,   195,   196,   197,   198,   199,   200,   201,   179,   180,
     181,   182,   183,     0,   184,   185,   406,     0,     0,     0,
       0,   187,   188,   189,   190,     0,   191,   192,   193,   194,
       0,     0,     0,     0,     0,     0,     0,     0,   195,   196,
     197,   198,   199,   200,   201,   179,   180,   181,   182,   183,
       0,   184,   185,   417,     0,     0,     0,     0,   187,   188,
     189,   190,     0,   191,   192,   193,   194,     0,     0,     0,
       0,     0,     0,     0,     0,   195,   196,   197,   198,   199,
     200,   201,   179,   180,   181,   182,   183,     0,   184,   185,
       0,     0,     0,     0,     0,   187,   188,   189,   190,     0,
     191,   192,   193,   194,     0,     0,     0,     0,     0,     0,
       0,     0,   195,   196,   197,   198,   199,   200,   201
};

static const yytype_int16 yycheck[] =
{
      34,    56,    88,    65,    90,     3,     4,     7,     0,    59,
     299,    59,    10,    11,    59,     4,     4,    15,    88,   308,
       6,   167,     0,    15,   170,    17,     0,     4,     4,    27,
       3,    83,     3,    22,    22,    56,    14,     4,    83,    17,
       9,   248,    63,    17,    21,   100,    22,    45,    46,    94,
      95,    96,     0,     5,     5,    22,    56,   107,     5,   107,
       5,    47,   107,    63,     6,   120,     5,   129,    20,    20,
       6,     5,     3,    20,    72,    20,     3,     3,     4,   165,
       3,    20,   168,     3,    10,    11,    20,   121,   122,    15,
       5,   125,   126,     5,     3,   241,     6,    89,    90,   245,
       6,    27,   309,     3,     3,    20,   313,     3,    20,     8,
      88,    89,     8,   111,    19,    20,   405,   151,     3,    45,
      46,     3,   177,     8,   122,   123,   124,   125,   126,     6,
     128,   129,    19,    20,   132,   133,   134,   135,   136,   346,
     347,     6,     3,     3,   351,   352,    72,     8,   203,   204,
     212,   237,   207,   208,   123,   124,   125,   126,     4,   128,
     129,     4,   248,   132,   133,   134,   135,   237,     3,    19,
      20,   205,   206,     8,   229,   209,   210,     3,   248,    19,
      20,     3,     8,    59,    60,   111,     8,   165,    19,    20,
       4,     4,     3,    16,     4,    67,   122,   123,   124,   125,
     126,     6,   128,   129,     6,     6,   132,   133,   134,   135,
     136,     6,     3,   121,     4,    91,    92,   303,    16,    19,
       3,    97,    98,   309,     4,     4,     3,   313,     3,   105,
     264,   107,     3,   288,   289,    22,     9,   292,   293,   309,
       6,     4,   118,   313,   299,   300,     4,    19,    22,    18,
      18,   342,    19,   308,    19,    19,   342,    19,   131,   237,
     346,   347,   131,   212,    -1,   351,   352,    -1,   319,   324,
     248,    -1,   342,    -1,    -1,    -1,   346,   347,    -1,    -1,
      -1,   351,   352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,    -1,   344,    -1,    -1,    -1,    -1,   349,   333,
      -1,    -1,   336,    -1,   355,    -1,   361,    -1,    -1,    -1,
     365,    44,    45,    46,    47,    -1,    49,    50,    51,    -1,
      -1,   372,   373,    -1,   375,   303,    -1,   378,   379,    -1,
     381,   309,    65,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,   399,    -1,
     405,   402,   407,   404,    -1,   389,    -1,    -1,    -1,    -1,
     415,    -1,    -1,   418,   342,    -1,   421,    -1,   346,   347,
      -1,    -1,   406,   351,   352,   409,    -1,    -1,    -1,    -1,
      72,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   154,   155,   156,    -1,    -1,    -1,   160,    -1,   162,
     122,   123,   124,   125,   126,    -1,   128,   129,    -1,    -1,
     132,   133,   134,   135,   136,    -1,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,    -1,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    91,    92,    -1,    94,
      95,    96,    97,    98,    -1,    -1,   249,    -1,    -1,    -1,
     105,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,   118,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,
      83,    -1,    -1,    86,   297,   298,    -1,    -1,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,
     113,   114,   325,    -1,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,   337,   128,   129,   340,    -1,   132,
     133,   134,   135,   136,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,   356,    -1,    -1,    15,   360,    -1,   362,
      19,    -1,    19,    -1,   367,    22,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    45,    46,   391,    -1,
      -1,    48,    49,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    48,    49,    -1,    -1,    -1,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,   111,    -1,   113,   114,
      -1,    -1,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,     3,     4,    -1,     6,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,
     113,   114,    -1,    -1,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,   111,    -1,   113,   114,
      -1,    -1,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,     3,     4,    -1,    -1,     7,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,
     113,   114,    -1,    -1,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    -1,    78,
      -1,    -1,    81,    -1,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    -1,   105,   106,   107,   108,
      -1,    -1,   111,    -1,   113,   114,    -1,    -1,   117,   118,
     119,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,     3,     4,
      -1,    -1,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
     105,   106,   107,   108,    -1,    -1,   111,    -1,   113,   114,
      -1,    -1,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,     3,     4,    -1,     6,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,     3,     4,    -1,    -1,
       7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    55,    -1,
      57,    -1,    59,    60,    -1,    62,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      -1,    78,    -1,    -1,    81,    -1,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,    -1,   102,    -1,    -1,   105,   106,
     107,   108,    -1,    -1,   111,    -1,   113,   114,    -1,    -1,
     117,   118,   119,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
       3,     4,    -1,    -1,     7,    -1,    -1,    10,    11,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,    -1,   102,
      -1,    -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,
     113,   114,    -1,    -1,   117,   118,   119,    -1,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,     3,     4,    -1,    -1,     7,    -1,
      -1,    10,    11,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    -1,    57,    -1,    59,    60,
      -1,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    -1,    78,    -1,    -1,
      81,    -1,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
      -1,   102,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
     111,    -1,   113,   114,    -1,    -1,   117,   118,   119,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,     3,
       4,   132,   133,   134,   135,   136,    10,    11,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    19,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    -1,    78,    -1,    -1,    81,    -1,    83,
      -1,    -1,    86,    -1,    72,    -1,    -1,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,     3,
      -1,   105,   106,   107,   108,    -1,    -1,   111,    -1,   113,
     114,    -1,    -1,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   111,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,    -1,   122,   123,   124,   125,   126,    -1,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,    53,
      -1,    55,    -1,    57,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    97,    98,    -1,   100,    -1,   102,    -1,
      -1,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,   113,
     114,    -1,     3,   117,   118,   119,    53,    -1,    55,    -1,
      57,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      97,    98,    53,   100,    55,   102,    57,    -1,   105,   106,
      -1,    62,    -1,    -1,    -1,    66,   113,   114,    -1,    -1,
     117,   118,   119,    74,     3,    -1,     5,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   102,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   117,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
       3,    -1,     5,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    97,    98,
      -1,   100,    -1,   102,    -1,    -1,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,   118,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,     3,    -1,     5,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,   102,
      -1,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   117,   118,    53,    -1,    55,    -1,
      57,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,     3,    -1,     5,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      97,    98,    -1,   100,    -1,   102,    -1,    -1,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     117,   118,    53,    -1,    55,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,     3,    -1,
       5,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    97,    98,    -1,   100,
      -1,   102,    -1,    -1,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   117,   118,    53,    -1,
      55,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,    -1,
      -1,    66,    -1,    -1,     3,    -1,     5,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    97,    98,    -1,   100,    -1,   102,    -1,    -1,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
      -1,    -1,   117,   118,    53,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,
       3,    -1,     5,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    97,    98,
      -1,   100,    -1,   102,    -1,    -1,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,    -1,    -1,   117,   118,
      53,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,     3,    -1,     5,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,   102,
      -1,    -1,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,    -1,    -1,   117,   118,    53,    -1,    55,    -1,
      57,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      97,    98,    -1,   100,    -1,   102,    -1,    -1,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,    -1,    -1,
     117,   118,    53,    -1,    55,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    97,    98,    -1,   100,
      -1,   102,    -1,    -1,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   117,   118,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    -1,    62,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    -1,
      -1,    86,    59,    60,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    -1,    -1,    -1,   100,    -1,   102,    -1,    59,
      60,   106,   107,    -1,    -1,    -1,    83,    -1,   113,   114,
      -1,    -1,   117,    -1,    91,    92,    -1,    94,    95,    96,
      97,    98,    -1,    83,    -1,    -1,    -1,    -1,   105,    -1,
     107,    91,    92,    -1,    94,    95,    96,    97,    98,    -1,
      -1,   118,    -1,    -1,    -1,   105,    -1,   107,    -1,    -1,
      -1,    -1,     3,     4,   131,    -1,    -1,     8,   118,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    19,    -1,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,     5,    48,    49,    -1,
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
      -1,    40,    41,    42,    43,    44,    45,    46,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,    83,    91,    92,    94,    95,    96,    97,
      98,   105,   107,   118,   138,   140,   150,   151,   152,   153,
     154,     3,    83,     3,    59,   107,   140,    59,   107,   138,
       0,   131,   152,     6,     6,     3,     3,    59,   107,     3,
       3,    59,   107,     3,     4,    10,    11,    15,    19,    27,
      45,    46,    53,    55,    57,    62,    65,    66,    72,    74,
      75,    76,    78,    81,    86,    99,   100,   102,   106,   108,
     111,   113,   114,   117,   119,   121,   122,   123,   124,   125,
     126,   128,   129,   132,   133,   134,   135,   136,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   152,
     155,   156,   157,   161,   162,   163,   165,   166,   168,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     155,     6,     6,     3,     3,     6,     6,     3,     3,     4,
      16,    21,    22,    32,    33,    34,    35,    36,    37,    38,
      39,    48,    49,     3,   175,   175,   175,   175,   175,   175,
     175,     6,   156,   170,     4,     4,     4,     3,   147,   175,
       4,     3,     4,     3,   119,   139,   140,   141,   138,   140,
     141,     3,     8,   164,    16,     7,   156,    67,   167,    10,
      11,    12,    13,    14,    16,    17,    19,    23,    24,    25,
      26,    28,    29,    30,    31,    40,    41,    42,    43,    44,
      45,    46,     7,   155,   155,     6,     6,   155,   155,     6,
       6,   147,   182,   183,     3,   180,   181,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,     5,   155,
     121,   175,   175,   175,    19,    19,   175,     4,   175,     3,
     119,   141,     3,   164,   119,   141,     3,   164,     4,    22,
       9,   123,   124,   125,   126,   128,   129,   132,   133,   134,
     135,   149,    19,    20,     6,   156,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,     7,     7,   155,   155,
       7,     7,   155,   155,     5,   183,     7,     4,    19,     5,
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
     152,   153,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   159,   159,   160,   160,
     160,   160,   161,   161,   161,   162,   162,   163,   163,   163,
     163,   164,   164,   164,   164,   165,   165,   166,   166,   167,
     167,   168,   169,   169,   169,   169,   170,   170,   171,   172,
     173,   174,   175,   175,   175,   175,   175,   175,   175,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   179,
     180,   180,   180,   181,   182,   182,   182,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     1,
       1,     6,     7,     7,     6,     5,     6,     7,     7,     6,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     5,     6,
       5,     6,     6,     7,     6,     7,     7,     8,     7,     8,
       7,     8,     7,     8,     3,     1,     3,     2,     2,     3,
       3,     4,     2,     3,     3,     3,     4,     1,     4,     5,
       5,     3,     5,     1,     3,     1,     2,     7,     5,     4,
       2,     7,     7,     6,     6,     5,     3,     1,     5,     7,
       9,     5,     1,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     1,     4,     2,     1,     0,     1
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
        
#line 2792 "src/Parser/parser.c" /* yacc.c:1646  */
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
#line 199 "src/Parser/c-sharp.y" /* yacc.c:1906  */


int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
