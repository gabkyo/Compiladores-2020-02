/* Scanner for a C# 6.0 compiler generated with Flex */

%{

#include <stdlib.h>

#define INT_MAX_VALUE   2147483647
#define UINT_MAX_VALUE  4294967295
#define LONG_MAX_VALUE  9223372036854775807

int CheckIntType(long long value, char *suffix);
long long TreatIntString(char *text);
long long TreatHexString(char *text);
int CheckRealType(char *text);

%}

identifier ([a..z]|[A..Z]|'_')([a..z]|[A..Z]|[0..9]|'_')*

identifier_with_at "@"{identifier}

hex_integer {(0x|0X)([0..9]|[a..f]|[A..F])}

comment {single_line_comment}|{delimited_comment}

single_line_comment "//".*

delimited_comment "/"\*{delimited_comment_section}*\*+"/"

delimited_comment_section '/''*'*{not_slash_or_asterisk}

not_slash_or_asterisk (^'/'^'*')*

real_literal ([0..9]+'.'[0..9]+{exponent_part}?{real_type_suffix}?)|('.'[0..9]+{exponent_part}?{real_type_suffix}?)|([0..9]+{exponent_part}{real_type_suffix}?)|([0..9]+{real_type_suffix})

exponent_part ('e'|'E'){sign}?[0..9]+

sign ('+'|'-')

real_type_suffix 'F'|'f'|'D'|'d'|'M'|'m'

character_literal '\''{character}'\''

character .|{simple_escape_sequence}|{hexadecimal_escape_sequence}

simple_escape_sequence '\\\''|'\\"'|'\\\\'|'\\0'|'\\a'|'\\b'|'\\f'|'\\n'|'\\r'|'\\t'|'\\v'

hexadecimal_escape_sequence "\\x"([0..9]|[a..f]|[A..F])([0..9]|[a..f]|[A..F])?([0..9]|[a..f]|[A..F])?([0..9]|[a..f]|[A..F])?

%%

{comment} { /* ignoring comments */ }

{identifier_with_at} { return IDENTIFIER; }

"(" { return START_PAR; }
")" { return END_PAR; }
"{" { return START_CURLY; }
"}" { return END_CURLY; }
"[" { return START_BRCKT; }
"]" { return END_BRCKT; }
"+" { return ADD; }
"-" { return SUB; }
"/" { return DIV; }
"*" { return MUL; }
"%" { return MOD; }
"!" { return NOT; }
"?" { return QMARK; }
"^" { return CIRCUMFLEX; }
":" { return COLON; }
";" { return SEMI; }
"," { return COMMA; }
"." { return DOT; }
"=" { return ASSIGN; }
"<" { return LESS_THEN; }
">" { return GREATER_THEN; }
"&" { return BIT_AND; }
"|" { return BIT_OR; }
"~" { return BIT_NOT; }
"==" { return EQ; }
">=" { return GEQ; }
"<=" { return LEQ; }
"!=" { return NOT_EQ; }
"+=" { return ADD_ASSIGN; }
"-=" { return SUB_ASSIGN; }
"*=" { return MUL_ASSIGN; }
"/=" { return DIV_ASSIGN; }
"%=" { return MOD_ASSIGN; }
"&=" { return BIT_AND_ASSIGN; }
"|=" { return BIT_OR_ASSIGN; }
"^=" { return CIRCUMFLEX_ASSIGN; }
"<<" { return LEFT_SHIFT; }
">>" { return RIGHT_SHIFT; }
"&&" { return AND; }
"||" { return OR; }
"??" { return DOUBLE_QMARK; }
"++" { return INCREMENT; }
"--" { return DECREMENT; }
"=>" { return LAMBDA; }
"<<=" { return LEFT_SHIFT_ASSIGN; }
">>=" { return RIGHT_SHIFT_ASSIGN; }
"abstract" { return ABSTRACT; }
"as" { return AS; }
"base" { return BASE; }
"bool" { return BOOL_TYPE; }
"break" { return BREAK; }
"byte" { return BYTE_TYPE; }
"case" { return CASE; }
"char" { return CHAR_TYPE; }
"checked" { return CHECKED; }
"class" { return CLASS; }
"const" { return CONST; }
"continue" { return CONTINUE; }
"decimal" { return DECIMAL_TYPE; }
"default" { return DEFAULT; }
"delegate" { return DELEGATE; }
"do" { return DO; }
"double" { return DOUBLE; }
"else" { return ELSE; }
"enum" { return ENUM; }
"event" { return EVENT; }
"explicit" { return EXPLICIT; }
"extern" { return EXTERN; }
"false" { return FALSE_VAL; }
"fixed" { return FIXED; }
"float" { return FLOAT_TYPE; }
"for" { return FOR; }
"foreach" { return FOREACH; }
"goto" { return GOTO; }
"if" { return IF; }
"implicit" { return IMPLICIT; }
"in" { return IN; }
"int" { return INT_TYPE; }
"interface" { return INTERFACE; }
"internal" { return INTERNAL; }
"is" { return IS; }
"lock" { return LOCK; }
"long" { return LONG_TYPE; }
"new" { return NEW; }
"null" { return NULL_VALUE; }
"object" { return OBJECT; }
"operator" { return OPERATOR; }
"out" { return OUT; }
"override" { return OVERRIDE; }
"params" { return PARAMS; }
"private" { return PRIVATE; }
"protected" { return PROTECTED; }
"public" { return PUBLIC; }
"readonly" { return READONLY; }
"ref" { return REF; }
"return" { return RETURN; }
"sbyte" { return SBYTE_TYPE; }
"sealed" { return SEALED; }
"short" { return SHORT_TYPE; }
"sizeof" { return SIZEOF; }
"stackalloc" { return STACKALLOC; }
"static" { return STATIC; }
"string" { return STRING_TYPE; }
"struct" { return STRUCT; }
"switch" { return SWITCH; }
"this" { return THIS; }
"throw" { return THROW; }
"true" { return TRUE_VAL; }
"typeof" { return TYPEOF; }
"uint" { return UINT_TYPE; }
"ulong" { return ULONG_TYPE; }
"unchecked" { return UNCHECKED; }
"unsafe" { return UNSAFE; }
"ushort" { return USHORT_TYPE; }
"virtual" { return VIRTUAL; }
"void" { return VOID; }
"volatile" { return VOLATILE; }
"while" { return WHILE; }

{identifier} { return IDENTIFIER; }

{sign}?[0-9]+ { long long value = atoll(yytext); return CheckIntType(value, NULL); }
{sign}?([0-9]+"U"|[0-9]+"u") { long long value = atoll(TreatIntString(yytext)); return CheckIntType(value, "U"); }
{sign}?([0-9]+"L"|[0-9]+"l") { long long value = atoll(TreatIntString(yytext)); return CheckIntType(value, "L"); }
{sign}?([0-9]+"UL"|[0-9]+"uL"|[0-9]+"Ul"|[0-9]+"ul"|[0-9]+"LU"|[0-9]+"lU"|[0-9]+"Lu"|[0-9]+"lu") { long long value = atoll(TreatIntString(yytext)); return CheckIntType(value, "UL"); }

{sign}?{hex_integer} { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, NULL); }
{sign}?({hex_integer}"U"|{hex_integer}"u") { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, "U"); }
{sign}?({hex_integer}"L"|{hex_integer}"l") { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, "L"); }
{sign}?({hex_integer}"UL"|{hex_integer}"uL"|{hex_integer}"Ul"|{hex_integer}"ul"|{hex_integer}"LU"|{hex_integer}"lU"|{hex_integer}"Lu"|{hex_integer}"lu") { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, "UL"); }

{sign}?{real_literal} { return CheckRealType(yytext); }

%%

%{

int CheckIntType(long long value, char *suffix)
{
    value = llabs(value);

    // If there's no suffix telling which type it is:
    if (suffix == NULL)
    {
        // Comparing the value with the maximum size of each type to define the type that must be returned:
        if (value <= INT_MAX_VALUE) return INT_VALUE;
        else if (value <= UINT_MAX_VALUE) return UINT_VALUE;
        else if (value <= LONG_MAX_VALUE) return LONG_VALUE;
        else if (value <= ULONG_MAX_VALUE) return ULONG_VALUE;
    }
    else if (strcmp(suffix, "U") == 0)
        goto start_from_unsigned;
    else if (strcmp(suffix, "L") == 0)
        goto start_from_long;
    else if (strcmp(suffix, "Ul") == 0)
        goto start_from_unsigned;

    start_from_unsigned:
    if (value <= UINT_MAX_VALUE) return UINT_VALUE;
    
    start_from_long:
    if (value > UINT_MAX_VALUE) return LONG_VALUE;
    
    start_from_ulong:
    if (value > LONG_MAX_VALUE) return ULONG_VALUE;

    return -1;
}

#define IS_SIGN(c) (c == '+' || c == '-')
#define IS_DIGIT(c) ('0' <= c && c <= '9')
#define IS_HIGHCASE_HEX(c) ('A' <= c && c <= 'F')
#define IS_LOWCASE_HEX(c) ('a' <= c && c <= 'f')
#define CONVERT_HIGHCASE_HEX(c) (c - 55)
#define CONVERT_LOWCASE_HEX(c) (c - 87)

long long TreatIntString(char *text)
{
    char *letterPtr = text;
    int digits = 0;
    while (IS_DIGIT(*letterPtr) || IS_SIGN(*letterPtr))
    {
        ++digits;
        ++letterPtr;
    }
    char *number = malloc(digits * sizeof(char));
    number = strcpy(number, text, digits * sizeof(char));
    long long result = atoll(number);
    free(number);
    return result;
}

long long TreatHexString(char *text)
{
    char *letter = text;
    int digits = 0;
    long long result = 0;
    while (IS_DIGIT(*letter) || IS_HIGHCASE_HEX(*letter) || IS_LOWCASE_HEX(*letter) || *letter == 'x' || *letter == 'X' || IS_SIGN(*letter))
    {
        ++digits;
        ++letter;
    }
    char *number = malloc(digits * sizeof(char));
    number = strcpy(number, text, digits * sizeof(char));
    result = (long long)strtol(number, 0);
    return result;
}

#define IS_EXP_SYMBOL(c) (c == 'e' || c == 'E')
#define IS_FLOAT_SUFFIX(c) (c == 'f' || c == 'E')
#define IS_DOUBLE_SUFFIX(c) (c == 'd' || c == 'D')
#define IS_DECIMAL_SUFFIX(c) (c == 'm' || c == 'M')
#define IS_REAL_CHAR(c) IS_DIGIT(c) || (c == '.') || IS_SIGN(c) || IS_EXP_SYMBOL(c) || IS_FLOAT_SUFFIX(c) || IS_DOUBLE_SUFFIX(c) || IS_DECIMAL_SUFFIX(c)

int CheckRealType(char *text)
{
    /**
        Divide text in the following parts:
            -> Number sign (optional);
            -> Integer part of the number;
            -> Fractional part of the number;
            -> Exponent symbol (optional);
            -> Exponent sign (optional);
            -> Exponent number (optional);
            -> Type suffix (optional);

        Return possibilities:
            FLOAT_VAL
            DOUBLE_VAL
            DECIMAL_VAL
    */
    char *letter = text;
    long double sign = 1;
    long double value = 0;
    int chars = 0;
    int offset = 0;
    while (IS_REAL_CHAR(*letter))
    {
        if (IS_SIGN(*letter)) ++offset;
        else if (IS_DIGIT(*letter) || *letter == '.')
        {
            ++chars;
            ++letter;
        }
        else if (IS_FLOAT_SUFFIX(*letter) || IS_DOUBLE_SUFFIX(*letter) || IS_DECIMAL_SUFFIX(*letter)) break;
    }
    char *number = malloc(chars * sizeof(char));
    number = strcpy(number, text + offset, chars * sizeof(char));
    value = strtold(number);
    if (value <= FLT_MAX) return FLOAT_VAL;
    else if (value > FLT_MAX && value <= DBL_VAL) return DOUBLE_VAL;
    else return DECIMAL_VAL;
}

%}
