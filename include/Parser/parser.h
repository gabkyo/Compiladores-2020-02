/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
