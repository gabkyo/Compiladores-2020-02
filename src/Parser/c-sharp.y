%define parse.error verbose
%define parse.lac full

%{

#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(char const *s);

extern int yylineno;

%}

%token IDENTIFIER START_PAR END_PAR START_CURLY END_CURLY START_BRCKT END_BRCKT ADD SUB DIV MUL MOD NOT QMARK CIRCUMFLEX COLON SEMI COMMA DOT ASSIGN LESS_THEN GREATER_THEN BIT_AND BIT_OR BIT_NOT EQ GEQ LEQ NOT_EQ ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN BIT_AND_ASSIGN BIT_OR_ASSIGN CIRCUMFLEX_ASSIGN LEFT_SHIFT RIGHT_SHIFT AND OR DOUBLE_QMARK INCREMENT DECREMENT LAMBDA LEFT_SHIFT_ASSIGN RIGHT_SHIFT_ASSIGN ABSTRACT AS BASE BOOL_TYPE BREAK BYTE_TYPE CASE CHAR_TYPE CHECKED CLASS CONST CONTINUE DECIMAL_TYPE DEFAULT DELEGATE DO DOUBLE_TYPE ELSE ENUM EVENT EXPLICIT EXTERN FALSE_VAL FIXED FLOAT_TYPE FOR FOREACH GOTO IF IMPLICIT IN INT_TYPE INTERFACE INTERNAL IS LOCK LONG_TYPE NEW NULL_VALUE OBJECT OPERATOR OUT OVERRIDE PARAMS PRIVATE PROTECTED PUBLIC READONLY REF RETURN SBYTE_TYPE SEALED SHORT_TYPE SIZEOF STACKALLOC STATIC STRING_TYPE STRUCT SWITCH THIS THROW TRUE_VAL TYPEOF UINT_TYPE ULONG_TYPE UNCHECKED UNSAFE USHORT_TYPE VIRTUAL VOID VOLATILE WHILE INT_VAL UINT_VAL LONG_VAL ULONG_VAL FLOAT_VAL DOUBLE_VAL DECIMAL_VAL CHAR_VAL ENTER END_OF_FILE BYTE_VAL SBYTE_VAL SHORT_VAL USHORT_VAL STRING_VAL

%start program

%%

/* Useful rules: */
scope: PRIVATE | PUBLIC | PROTECTED | INTERNAL | PROTECTED INTERNAL;
modifier_list: modifier_list modifier | modifier;
modifier: STATIC | CONST | OVERRIDE | VIRTUAL | READONLY | REF | OUT;

/* Type definition rules: */
type: simple_type | nullable_type | vector_type | IDENTIFIER;
nullable_type: simple_type QMARK | IDENTIFIER QMARK;
simple_type: BOOL_TYPE | numeric_type | STRING_TYPE;
numeric_type: integer_type | floating_type | DECIMAL_TYPE;
integer_type: SBYTE_TYPE | BYTE_TYPE | SHORT_TYPE | USHORT_TYPE | INT_TYPE | UINT_TYPE | LONG_TYPE | ULONG_TYPE | CHAR_TYPE;
floating_type: FLOAT_TYPE | DOUBLE_TYPE;
value: INT_VAL | TRUE_VAL | FALSE_VAL | BYTE_VAL | CHAR_VAL | LONG_VAL | UINT_VAL | FLOAT_VAL | SBYTE_VAL | SHORT_VAL | ULONG_VAL | STRING_VAL | USHORT_VAL | DECIMAL_VAL;
vector_type: type START_BRCKT END_BRCKT | type START_BRCKT numeric_val END_BRCKT
numeric_val: BYTE_VAL | CHAR_VAL | LONG_VAL | UINT_VAL | FLOAT_VAL | SBYTE_VAL | SHORT_VAL | ULONG_VAL | USHORT_VAL | DECIMAL_VAL;

/* Program rule: */
program: obj_decl_list END_OF_FILE;

/* Object declaration rules: */
obj_decl_list: obj_decl_list obj_decl | obj_decl | %empty;
obj_decl: class_decl | struct_decl;
class_decl:
    scope CLASS IDENTIFIER START_CURLY statement_list END_CURLY |
    scope modifier CLASS IDENTIFIER START_CURLY statement_list END_CURLY |
    modifier scope CLASS IDENTIFIER START_CURLY statement_list END_CURLY |
    CLASS IDENTIFIER START_CURLY statement_list END_CURLY;
struct_decl:
    scope STRUCT IDENTIFIER START_CURLY statement_list END_CURLY |
    scope modifier STRUCT IDENTIFIER START_CURLY statement_list END_CURLY |
    modifier scope STRUCT IDENTIFIER START_CURLY statement_list END_CURLY |
    STRUCT IDENTIFIER START_CURLY statement_list END_CURLY;

/* Statement rules: */
statement_list: statement_list statement | statement;
statement: obj_decl | method_decl_statement | attr_decl_statement | var_decl_statement | if_else_statement | switch_statement | while_statement | do_while_statement | for_statement | foreach_statement | return_statement | expression SEMI | SEMI | method_invoking | var_accessing;

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
    scope modifier_list VOID IDENTIFIER START_PAR END_PAR method_body |
    scope modifier_list VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    scope modifier_list type IDENTIFIER START_PAR END_PAR method_body |
    scope modifier_list type IDENTIFIER START_PAR parameter_list END_PAR method_body |
    modifier_list scope VOID IDENTIFIER START_PAR END_PAR method_body |
    modifier_list scope VOID IDENTIFIER START_PAR parameter_list END_PAR method_body |
    modifier_list scope type IDENTIFIER START_PAR END_PAR method_body |
    modifier_list scope type IDENTIFIER START_PAR parameter_list END_PAR method_body;
parameter_list: parameter_list COMMA parameter | parameter;
method_body: START_CURLY statement_list END_CURLY | LAMBDA expression;
parameter: type IDENTIFIER | type IDENTIFIER expression | modifier_list type IDENTIFIER | modifier_list type IDENTIFIER expression;

/* return statement: */
return_statement: RETURN expression | RETURN value SEMI | RETURN IDENTIFIER SEMI;

/* Attribute and variable declaration statement rules: */
var_decl_statement:
    type id_list SEMI |
    modifier type id_list SEMI;
attr_decl_statement:
    var_decl_statement |
    scope type id_list SEMI |
    modifier_list scope type id_list SEMI |
    scope modifier_list type id_list SEMI;
id_list:
    id_list COMMA IDENTIFIER |
    id_list COMMA IDENTIFIER ASSIGN expression |
    IDENTIFIER |
    IDENTIFIER ASSIGN expression;

/* if-else statement rules: */
if_else_statement: if_statement | if_statement else_statement;
if_statement:
    IF START_PAR expression END_PAR START_CURLY statement_list END_CURLY |
    IF START_PAR expression END_PAR statement;
else_statement:
    ELSE START_CURLY statement_list END_CURLY |
    ELSE statement;

/* switch statement rules: */
switch_statement: SWITCH START_PAR expression END_PAR START_CURLY cases_list END_CURLY;
cases_list:
    cases_list CASE expression COLON statement_list BREAK SEMI |
    cases_list DEFAULT COLON statement_list BREAK SEMI |
    CASE expression COLON statement_list BREAK SEMI |
    DEFAULT COLON statement_list BREAK SEMI;

/* loop statement rules: */
loop_body: START_CURLY statement_list END_CURLY | statement;
while_statement: WHILE START_PAR expression END_PAR loop_body;
do_while_statement: DO loop_body WHILE START_PAR expression END_PAR SEMI;
for_statement: FOR START_PAR expression SEMI expression SEMI expression END_PAR loop_body;
foreach_statement: FOREACH START_PAR expression END_PAR loop_body;

/* Expression rules: */
expression: value | IDENTIFIER | START_PAR expression END_PAR | assignment_expressions | unary_operations | binary_operations | ternary_operations;

/* Assignment expression rules: */
assignment_expressions:
    IDENTIFIER ASSIGN expression |
    IDENTIFIER ADD_ASSIGN expression |
    IDENTIFIER SUB_ASSIGN expression |
    IDENTIFIER MUL_ASSIGN expression |
    IDENTIFIER DIV_ASSIGN expression |
    IDENTIFIER MOD_ASSIGN expression |
    IDENTIFIER BIT_AND_ASSIGN expression |
    IDENTIFIER BIT_OR_ASSIGN expression |
    IDENTIFIER CIRCUMFLEX_ASSIGN expression |
    IDENTIFIER RIGHT_SHIFT_ASSIGN expression |
    IDENTIFIER LEFT_SHIFT_ASSIGN expression;

/* Unary operations expression rules: */
unary_operations:
    expression INCREMENT |
    expression DECREMENT |
    INCREMENT expression |
    DECREMENT expression |
    ADD expression |
    SUB expression |
    BIT_NOT expression |
    NOT expression;

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
    expression CIRCUMFLEX expression;

/* Ternary operations expression rules: */
ternary_operations:
    expression QMARK expression COLON expression;

/* variable and data accessing expression rules: */
var_accessing:
    IDENTIFIER DOT var_accessing |
    IDENTIFIER DOT method_invoking |
    IDENTIFIER;

/* Method invoking operations expression rules: */
method_invoking:
    IDENTIFIER START_PAR argument_list END_PAR;

argument_list:
    argument_list argument |
    argument |
    %empty;

argument:
    value

%%

int main(int argc, char *argv[])
{
    if (yyparse() == 0) printf("PARSE SUCCESSFUL\n");
    else printf("PARSE FAILED\n");
    return EXIT_SUCCESS;
}
