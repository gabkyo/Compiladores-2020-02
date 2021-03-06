%define parse.error verbose
%define parse.lac full

%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
extern void yyerror(char const *s);

extern int yylineno;

%}

%token IDENTIFIER START_PAR END_PAR START_CURLY END_CURLY START_BRCKT END_BRCKT ADD SUB DIV MUL MOD NOT QMARK BIT_XOR COLON SEMI COMMA DOT ASSIGN LESS_THEN GREATER_THEN BIT_AND BIT_OR BIT_NOT EQ GEQ LEQ NOT_EQ ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN BIT_AND_ASSIGN BIT_OR_ASSIGN BIT_XOR_ASSIGN LEFT_SHIFT RIGHT_SHIFT AND OR DOUBLE_QMARK INCREMENT DECREMENT LAMBDA LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN ABSTRACT AS BASE BOOL_TYPE BREAK BYTE_TYPE CASE CHAR_TYPE CHECKED CLASS CONST CONTINUE DECIMAL_TYPE DEFAULT DO DOUBLE_TYPE ELSE ENUM EVENT EXPLICIT EXTERN FALSE_VAL FLOAT_TYPE FOR FOREACH GOTO IF IMPLICIT IN INT_TYPE INTERFACE INTERNAL IS LONG_TYPE NEW NULL_VALUE OBJECT OPERATOR OUT OVERRIDE PARAMS PRIVATE PROTECTED PUBLIC READONLY REF RETURN SBYTE_TYPE SEALED SHORT_TYPE SIZEOF STACKALLOC STATIC STRING_TYPE STRUCT SWITCH THIS TRUE_VAL TYPEOF UINT_TYPE ULONG_TYPE UNCHECKED USHORT_TYPE VIRTUAL VOID WHILE INT_VAL UINT_VAL LONG_VAL ULONG_VAL FLOAT_VAL DOUBLE_VAL DECIMAL_VAL CHAR_VAL ENTER END_OF_FILE BYTE_VAL SBYTE_VAL SHORT_VAL USHORT_VAL STRING_VAL

// EZ: Criando pelo menos dois níveis de precedência para indicar nas regras
// com conflito de Shift/Reduce.
// Proridade baixa.
%precedence LOW
%precedence TERNARY_IF
// Prioridade alta. Podemos colocar todos os tokens em conflito aqui.
%precedence INNER_PAR ELSE ABSTRACT CLASS CONST ENUM EVENT EXPLICIT EXTERN IMPLICIT INTERFACE INTERNAL NEW OUT OVERRIDE PARAMS PRIVATE PROTECTED PUBLIC READONLY REF SEALED STATIC STRUCT VIRTUAL COMMA

%right ASSIGN ADD_ASSIGN DIV_ASSIGN MOD_ASSIGN MUL_ASSIGN SUB_ASSIGN BIT_OR_ASSIGN BIT_AND_ASSIGN BIT_XOR_ASSIGN RIGHT_SHIFT_ASSIGN LEFT_SHIFT_ASSIGN
%left OR
%left AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQ NOT_EQ
%left LESS_THEN GREATER_THEN LEQ GEQ
%left LEFT_SHIFT RIGHT_SHIFT
%left ADD SUB
%left MUL DIV MOD
%right BIT_NOT NOT

%precedence HIGH
%precedence HIGHER

%start program

%%

/* Program rule: */
program: obj_decl_list END_OF_FILE;

/* Object declaration rules: */
obj_decl_list: 
    obj_decl_list obj_decl %prec HIGH |
    obj_decl %prec HIGH |
    %empty %prec LOW;

/* Useful rules: */
scope: PRIVATE | PUBLIC | PROTECTED | INTERNAL | PROTECTED INTERNAL;
modifier_list: modifier_list modifier | modifier;
modifier: STATIC | CONST | OVERRIDE | VIRTUAL | READONLY | REF | OUT | NEW | ABSTRACT | EXTERN | PARAMS | EVENT | IMPLICIT | EXPLICIT | SEALED;

/* Type definition rules: */
type: simple_type | nullable_type | matrix_type %prec LOW | IDENTIFIER %prec LOW | OBJECT;
nullable_type: simple_type QMARK | IDENTIFIER QMARK %prec LOW;
simple_type: BOOL_TYPE | numeric_type | STRING_TYPE;
numeric_type: integer_type | floating_type | DECIMAL_TYPE;
integer_type: SBYTE_TYPE | BYTE_TYPE | SHORT_TYPE | USHORT_TYPE | INT_TYPE | UINT_TYPE | LONG_TYPE | ULONG_TYPE | CHAR_TYPE;
floating_type: FLOAT_TYPE | DOUBLE_TYPE;
matrix_type:
    type START_BRCKT END_BRCKT |
    type START_BRCKT dimensions_def END_BRCKT |
    type START_BRCKT dimensions_undef END_BRCKT;
dimensions_def: dimensions_def COMMA numeric_val | numeric_val;
dimensions_undef: dimensions_undef COMMA | %empty %prec LOW;

value: INT_VAL %prec LOW | TRUE_VAL %prec LOW | FALSE_VAL %prec LOW | BYTE_VAL %prec LOW | CHAR_VAL %prec LOW | LONG_VAL %prec LOW | UINT_VAL %prec LOW | FLOAT_VAL %prec LOW | SBYTE_VAL %prec LOW | SHORT_VAL %prec LOW | ULONG_VAL %prec LOW | STRING_VAL %prec LOW | USHORT_VAL %prec LOW | DECIMAL_VAL %prec LOW | DOUBLE_VAL %prec LOW | NULL_VALUE %prec LOW;
numeric_val: BYTE_VAL %prec LOW | CHAR_VAL %prec LOW | LONG_VAL %prec LOW | UINT_VAL %prec LOW | FLOAT_VAL %prec LOW | SBYTE_VAL %prec LOW | SHORT_VAL %prec LOW | ULONG_VAL %prec LOW | USHORT_VAL %prec LOW | DECIMAL_VAL %prec LOW;

// Conflito S/R
// State 0
//
//     0 $accept: • program $end
//
//     ABSTRACT   shift, and go to state 1
//     CLASS      shift, and go to state 2
//     CONST      shift, and go to state 3
//     ENUM       shift, and go to state 4
//     EVENT      shift, and go to state 5
//     EXPLICIT   shift, and go to state 6
//     EXTERN     shift, and go to state 7
//     IMPLICIT   shift, and go to state 8
//     INTERFACE  shift, and go to state 9
//     INTERNAL   shift, and go to state 10
//     NEW        shift, and go to state 11
//     OUT        shift, and go to state 12
//     OVERRIDE   shift, and go to state 13
//     PARAMS     shift, and go to state 14
//     PRIVATE    shift, and go to state 15
//     PROTECTED  shift, and go to state 16
//     PUBLIC     shift, and go to state 17
//     READONLY   shift, and go to state 18
//     REF        shift, and go to state 19
//     SEALED     shift, and go to state 20
//     STATIC     shift, and go to state 21
//     STRUCT     shift, and go to state 22
//     UNSAFE     shift, and go to state 23
//     VIRTUAL    shift, and go to state 24
//
//     ABSTRACT   [reduce using rule 84 (obj_decl_list)]
//     CLASS      [reduce using rule 84 (obj_decl_list)]
//     CONST      [reduce using rule 84 (obj_decl_list)]
//     ENUM       [reduce using rule 84 (obj_decl_list)]
//     EVENT      [reduce using rule 84 (obj_decl_list)]
//     EXPLICIT   [reduce using rule 84 (obj_decl_list)]
//     EXTERN     [reduce using rule 84 (obj_decl_list)]
//     IMPLICIT   [reduce using rule 84 (obj_decl_list)]
//     INTERFACE  [reduce using rule 84 (obj_decl_list)]
//     INTERNAL   [reduce using rule 84 (obj_decl_list)]
//     NEW        [reduce using rule 84 (obj_decl_list)]
//     OUT        [reduce using rule 84 (obj_decl_list)]
//     OVERRIDE   [reduce using rule 84 (obj_decl_list)]
//     PARAMS     [reduce using rule 84 (obj_decl_list)]
//     PRIVATE    [reduce using rule 84 (obj_decl_list)]
//     PROTECTED  [reduce using rule 84 (obj_decl_list)]
//     PUBLIC     [reduce using rule 84 (obj_decl_list)]
//     READONLY   [reduce using rule 84 (obj_decl_list)]
//     REF        [reduce using rule 84 (obj_decl_list)]
//     SEALED     [reduce using rule 84 (obj_decl_list)]
//     STATIC     [reduce using rule 84 (obj_decl_list)]
//     STRUCT     [reduce using rule 84 (obj_decl_list)]
//     UNSAFE     [reduce using rule 84 (obj_decl_list)]
//     VIRTUAL    [reduce using rule 84 (obj_decl_list)]
//     $default   reduce using rule 84 (obj_decl_list)
//
// EZ: Podemos ver que todos os conflitos envolvem a regra obj_decl_list, que
// possui um %empty. Isso é bem comum de acontecer. Nesse caso, a gente quer
// priorizar o shift porque senão o obj_decl_list fica vazio e não vai dar
// para reconhecer o programa. Assim, basta colocar a prioridade LOW na regra
// vazia de obj_decl_list e incluir todos os tokens conflitantes na prioridade
// alta. Isso elimina 23 conflitos de S/R.

obj_decl: class_decl | struct_decl | interface_decl | enum_decl;
class_father:
    COLON IDENTIFIER |
    %empty %prec LOW
class_decl:
    scope CLASS IDENTIFIER class_father START_CURLY statement_list END_CURLY %prec LOW |
    modifier_list CLASS IDENTIFIER class_father START_CURLY statement_list END_CURLY |
    scope modifier_list CLASS IDENTIFIER class_father START_CURLY statement_list END_CURLY |
    modifier_list scope CLASS IDENTIFIER class_father START_CURLY statement_list END_CURLY |
    CLASS IDENTIFIER class_father START_CURLY statement_list END_CURLY;
struct_decl:
    scope STRUCT IDENTIFIER START_CURLY statement_list END_CURLY %prec LOW |
    modifier_list STRUCT IDENTIFIER START_CURLY statement_list END_CURLY |
    scope modifier_list STRUCT IDENTIFIER START_CURLY statement_list END_CURLY |
    modifier_list scope STRUCT IDENTIFIER START_CURLY statement_list END_CURLY |
    STRUCT IDENTIFIER START_CURLY statement_list END_CURLY;
interface_decl:
    scope INTERFACE IDENTIFIER START_CURLY statement_list END_CURLY %prec LOW |
    modifier_list INTERFACE IDENTIFIER START_CURLY statement_list END_CURLY |
    scope modifier_list INTERFACE IDENTIFIER START_CURLY statement_list END_CURLY |
    modifier_list scope INTERFACE IDENTIFIER START_CURLY statement_list END_CURLY |
    INTERFACE IDENTIFIER START_CURLY statement_list END_CURLY;
enum_decl:
    scope ENUM IDENTIFIER START_CURLY enum_list END_CURLY %prec LOW |
    modifier_list ENUM IDENTIFIER START_CURLY enum_list END_CURLY |
    scope modifier_list ENUM IDENTIFIER START_CURLY enum_list END_CURLY |
    modifier_list scope ENUM IDENTIFIER START_CURLY enum_list END_CURLY |
    ENUM IDENTIFIER START_CURLY enum_list END_CURLY;
enum_list:
    enum_list COMMA IDENTIFIER |
    enum_list COMMA IDENTIFIER ASSIGN value %prec HIGH |
    IDENTIFIER |
    IDENTIFIER ASSIGN value;


/* Statement rules: */

// Conflito R/R
// State 151
//
//   119 statement: var_decl_statement •
//   205 attr_decl_statement: var_decl_statement •
//
//     IDENTIFIER    reduce using rule 119 (statement)
//     IDENTIFIER    [reduce using rule 205 (attr_decl_statement)]
//     ...
// EZ: Esse estado está com vários conflitos de reduce/reduce. Isso acontece
// quando a gramática é ambígua. De fato, o bison está confuso sobre o que
// fazer com as duas regras acima, já que ambas têm o mesmo corpo. Vamos ver
// attr_decl_statement ali embaixo.

/* Statement rules: */
statement_list: statement_list statement | statement %prec HIGHER | %empty %prec LOW;
statement: obj_decl | method_decl_statement | operator_overloading | attr_decl_statement | var_decl_statement | if_else_statement | switch_statement | while_statement | do_while_statement | for_statement | foreach_statement | return_statement | checked_scope | unchecked_scope | label | go_to_statement | expression SEMI | SEMI;

/* Method declaration statement rules: */
method_decl_statement:
    VOID IDENTIFIER START_PAR END_PAR method_body |
    VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    type IDENTIFIER START_PAR END_PAR method_body |
    type IDENTIFIER START_PAR parameter_list END_PAR method_body |
    scope VOID IDENTIFIER START_PAR END_PAR method_body |
    scope VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    scope type IDENTIFIER START_PAR END_PAR method_body |
    scope type IDENTIFIER START_PAR parameter_list END_PAR method_body |
    modifier_list VOID IDENTIFIER START_PAR END_PAR method_body |
    modifier_list VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    scope modifier_list VOID IDENTIFIER START_PAR END_PAR method_body |
    scope modifier_list VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    scope modifier_list type IDENTIFIER START_PAR END_PAR method_body |
    scope modifier_list type IDENTIFIER START_PAR parameter_list END_PAR method_body |
    modifier_list scope VOID IDENTIFIER START_PAR END_PAR method_body |
    modifier_list scope VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    modifier_list scope type IDENTIFIER START_PAR END_PAR method_body |
    modifier_list scope type IDENTIFIER START_PAR parameter_list END_PAR method_body;
parameter_list: parameter_list COMMA parameter | parameter;
method_body: START_CURLY statement_list END_CURLY | LAMBDA expression | SEMI;
parameter: type IDENTIFIER %prec LOW  | type IDENTIFIER expression | modifier_list type IDENTIFIER %prec LOW | modifier_list type IDENTIFIER expression;

/* Operator overloading: */
operator: INCREMENT | DECREMENT | ADD | SUB | MUL | DIV | MOD | RIGHT_SHIFT | LEFT_SHIFT | AND | OR | LESS_THEN | GREATER_THEN | LEQ | GEQ | EQ | NOT_EQ | BIT_AND | BIT_OR | DOUBLE_QMARK | BIT_XOR | QMARK;
operator_overloading:
    VOID OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    VOID OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    type OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    type OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    scope VOID OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    scope VOID OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    scope type OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    scope type OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    scope modifier_list VOID OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    scope modifier_list VOID OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    scope modifier_list type OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    scope modifier_list type OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    modifier_list scope VOID OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    modifier_list scope VOID OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW |
    modifier_list scope type OPERATOR operator START_PAR END_PAR method_body %prec LOW |
    modifier_list scope type OPERATOR operator START_PAR parameter_list END_PAR method_body %prec LOW;

/* return statement: */
return_statement: RETURN expression;

/* Attribute and variable declaration statement rules: */
var_decl_statement:
    type id_list SEMI |
    modifier type id_list SEMI;

// EZ: Aqui dá para ver o conflito: attr_decl_statement gera var_decl_statement.
// Assim temos duas derivações possíveis:
// statement => var_decl_statement => IDENTIFIER
// ou
// statement => attr_decl_statement => var_decl_statement => IDENTIFIER
// Em situações de conflitos de R/R vocês vão ter de analisar caso a caso e
// modificar as regras de forma sensata. Olhando esse caso, me parece que não
// é necessário que a primeira derivação sempre faz mais sentido. Neste caso,
// basta retirar a regra abaixo. Isso elimina 85 conflitos de R/R de uma vez... :)
attr_decl_statement:
    scope type id_list SEMI |
    modifier_list scope type id_list SEMI |
    scope modifier_list type id_list SEMI;
id_list:
    id_list COMMA IDENTIFIER |
    id_list COMMA IDENTIFIER ASSIGN expression |
    IDENTIFIER |
    IDENTIFIER ASSIGN expression;

/* if-else statement rules: */

// Conflito S/R
// State 154
//
//   213 if_else_statement: if_statement •
//   214                  | if_statement • else_statement
//
//     ELSE  shift, and go to state 260
//
//     $default  reduce using rule 213 (if_else_statement)
//
// EZ: Caso clássico do problema do else pendente. Neste caso, queremos que
// a segunda regra tenha sempre prioridade quando o próximo token é ELSE porque
// isso associa o ELSE ao IF mais próximo, como esperado.
// Assim, a primeira regra fica com prioridade baixa, e na segunda regra
// colocamos o token envolvido no conflito com a prioridade maior. Isso vai
// priorizar o shift no lugar do reduce, que é o que queremos aqui.
if_else_statement:
    if_statement %prec LOW |
    if_statement else_statement %prec ELSE;

if_statement:
    IF START_PAR expression END_PAR START_CURLY statement_list END_CURLY |
    IF START_PAR expression END_PAR statement;
else_statement:
    ELSE START_CURLY statement_list END_CURLY |
    ELSE statement;

/* switch statement rules: */
switch_statement: SWITCH START_PAR expression END_PAR START_CURLY cases_list END_CURLY;
cases_list:
    cases_list CASE expression COLON statement_list |
    cases_list DEFAULT COLON statement_list |
    CASE expression COLON statement_list |
    DEFAULT COLON statement_list;

/* loop statement rules: */
loop_body: START_CURLY statement_list END_CURLY | statement;
while_statement: WHILE START_PAR expression END_PAR loop_body;
do_while_statement: DO loop_body WHILE START_PAR expression END_PAR SEMI;
for_statement: FOR START_PAR expression SEMI expression SEMI expression END_PAR loop_body;
foreach_statement: FOREACH START_PAR expression END_PAR loop_body;

/* checked and unchecked statements: */
checked_scope:
    CHECKED START_PAR expression END_PAR |
    CHECKED START_CURLY statement_list END_CURLY;

unchecked_scope:
    UNCHECKED START_PAR expression END_PAR |
    UNCHECKED START_CURLY statement_list END_CURLY;

/* goto and label statements: */
label: IDENTIFIER COLON %prec LOW;
go_to_statement: GOTO IDENTIFIER;

/* Expression rules: */
expression: value | START_PAR expression END_PAR %prec INNER_PAR | assignment_expressions | unary_operations | binary_operations | ternary_operations %prec TERNARY_IF | method_invoking | attr_access | obj_instancing | matrix_indexing | matrix_instancing %prec HIGHER | CONTINUE | BREAK %prec HIGH;

/* Object instancing expression rules: */
obj_instancing:
    NEW IDENTIFIER START_PAR END_PAR |
    NEW IDENTIFIER START_PAR argument_list END_PAR;

/* Assignment expression rules: */
assignment_expressions:
    attr_access ASSIGN expression |
    attr_access ADD_ASSIGN expression |
    attr_access SUB_ASSIGN expression |
    attr_access MUL_ASSIGN expression |
    attr_access DIV_ASSIGN expression |
    attr_access MOD_ASSIGN expression |
    attr_access BIT_AND_ASSIGN expression |
    attr_access BIT_OR_ASSIGN expression |
    attr_access BIT_XOR_ASSIGN expression |
    attr_access RIGHT_SHIFT_ASSIGN expression |
    attr_access LEFT_SHIFT_ASSIGN expression;

/* Unary operations expression rules: */
unary_operations:
    expression INCREMENT %prec HIGHER |
    expression DECREMENT %prec HIGHER |
    INCREMENT expression %prec HIGH |
    DECREMENT expression %prec HIGH |
    ADD expression %prec HIGH |
    SUB expression %prec HIGH |
    BIT_NOT expression %prec HIGH |
    NOT expression %prec HIGH |
    TYPEOF START_PAR expression END_PAR %prec HIGH |
    SIZEOF START_PAR expression END_PAR %prec HIGH |
    STACKALLOC START_PAR expression END_PAR %prec HIGH;

/* Binary operations expression rules: */
binary_operations:
    expression ADD expression |
    expression SUB expression |
    expression MUL expression |
    expression DIV expression |
    expression MOD expression |
    expression RIGHT_SHIFT expression |
    expression LEFT_SHIFT expression |
    expression AND expression |
    expression OR expression |
    expression LESS_THEN expression |
    expression GREATER_THEN expression |
    expression LEQ expression |
    expression GEQ expression |
    expression EQ expression |
    expression NOT_EQ expression |
    expression BIT_AND expression |
    expression BIT_OR expression |
    expression DOUBLE_QMARK expression |
    expression BIT_XOR expression |
    expression IS expression |
    expression AS expression |
    expression IN expression;

/* Ternary operations expression rules: */
ternary_operations:
    expression QMARK expression COLON expression;

/* variable and data accessing expression rules: */
attr_access:
    IDENTIFIER DOT attr_access %prec HIGHER |
    IDENTIFIER %prec HIGHER |
    THIS DOT attr_access %prec HIGHER |
    BASE DOT attr_access %prec HIGHER;

/* Method invoking operations expression rules: */
method_invoking:
    attr_access START_PAR argument_list END_PAR;

argument_list:
    argument_list argument |
    argument |
    %empty %prec LOW;

argument: expression | modifier expression;

/* Vector and matrix expressions: */
matrix_indexing: expression START_BRCKT dimensions_def END_BRCKT %prec HIGH;

matrix_instancing: NEW type START_BRCKT dimensions_def END_BRCKT;

%%

int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
