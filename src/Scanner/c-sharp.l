/* Scanner for a C# 6.0 compiler generated with Flex */

%{

#include "pch.h"

#define SBYTE_MAX_VALUE   127
#define BYTE_MAX_VALUE  256
#define SHORT_MAX_VALUE  32767
#define USHORT_MAX_VALUE 65535
#define INT_MAX_VALUE    2147483647
#define UINT_MAX_VALUE   4294967295
#define LONG_MAX_VALUE   9223372036854775807

int CheckIntType(long long value, char *suffix);
long long TreatIntString(char *text);
long long TreatHexString(char *text);
int CheckRealType(char *text);

%}

identifier ([a..z]|[A..Z]|'_')([a..z]|[A..Z]|[0..9]|'_')*

identifier_with_at "@"{identifier}

hex_integer (0x|0X)([0..9]|[a..f]|[A..F])

real_literal ([0..9]+'.'[0..9]+{exponent_part}?{real_type_suffix}?)|('.'[0..9]+{exponent_part}?{real_type_suffix}?)|([0..9]+{exponent_part}{real_type_suffix}?)|([0..9]+{real_type_suffix})

exponent_part ('e'|'E'){sign}?[0..9]+

sign ('+'|'-')

real_type_suffix 'F'|'f'|'D'|'d'|'M'|'m'

/* character_literal '\''{character}'\''

character .|{simple_escape_sequence}|{hexadecimal_escape_sequence}

simple_escape_sequence '\\\''|'\\"'|'\\\\'|'\\0'|'\\a'|'\\b'|'\\f'|'\\n'|'\\r'|'\\t'|'\\v'

hexadecimal_escape_sequence "\\x"([0..9]|[a..f]|[A..F])([0..9]|[a..f]|[A..F])?([0..9]|[a..f]|[A..F])?([0..9]|[a..f]|[A..F])? */

%%

"//".* { /* singleline comments are ignored*/ }
"/*""*"*(^"/"^"*")*"*"*"*/" { /* multiline comments are ignored */ }

{identifier_with_at} { printf("IDENTIFIER\n");return IDENTIFIER; }

"(" { printf("START_PAR\n");return START_PAR; }
")" { printf("END_PAR\n");return END_PAR; }
"{" { printf("START_CURLY\n");return START_CURLY; }
"}" { printf("END_CURLY\n");return END_CURLY; }
"[" { printf("START_BRCKT\n");return START_BRCKT; }
"]" { printf("END_BRCKT\n");return END_BRCKT; }
"+" { printf("ADD\n");return ADD; }
"-" { printf("SUB\n");return SUB; }
"/" { printf("DIV\n");return DIV; }
"*" { printf("MUL\n");return MUL; }
"%" { printf("MOD\n");return MOD; }
"!" { printf("NOT\n");return NOT; }
"?" { printf("QMARK\n");return QMARK; }
"^" { printf("CIRCUMFLEX\n");return CIRCUMFLEX; }
":" { printf("COLON\n");return COLON; }
";" { printf("SEMI\n");return SEMI; }
"," { printf("COMMA\n");return COMMA; }
"." { printf("DOT\n");return DOT; }
"=" { printf("ASSIGN\n");return ASSIGN; }
"<" { printf("LESS_THEN\n");return LESS_THEN; }
">" { printf("GREATER_THEN\n");return GREATER_THEN; }
"&" { printf("BIT_AND\n");return BIT_AND; }
"|" { printf("BIT_OR\n");return BIT_OR; }
"~" { printf("BIT_NOT\n");return BIT_NOT; }
"==" { printf("EQ\n");return EQ; }
">=" { printf("GEQ\n");return GEQ; }
"<=" { printf("LEQ\n");return LEQ; }
"!=" { printf("NOT_EQ\n");return NOT_EQ; }
"+=" { printf("ADD_ASSIGN\n");return ADD_ASSIGN; }
"-=" { printf("SUB_ASSIGN\n");return SUB_ASSIGN; }
"*=" { printf("MUL_ASSIGN\n");return MUL_ASSIGN; }
"/=" { printf("DIV_ASSIGN\n");return DIV_ASSIGN; }
"%=" { printf("MOD_ASSIGN\n");return MOD_ASSIGN; }
"&=" { printf("BIT_AND_ASSIGN\n");return BIT_AND_ASSIGN; }
"|=" { printf("BIT_OR_ASSIGN\n");return BIT_OR_ASSIGN; }
"^=" { printf("CIRCUMFLEX_ASSIGN\n");return CIRCUMFLEX_ASSIGN; }
"<<" { printf("LEFT_SHIFT\n");return LEFT_SHIFT; }
">>" { printf("RIGHT_SHIFT\n");return RIGHT_SHIFT; }
"&&" { printf("AND\n");return AND; }
"||" { printf("OR\n");return OR; }
"??" { printf("DOUBLE_QMARK\n");return DOUBLE_QMARK; }
"++" { printf("INCREMENT\n");return INCREMENT; }
"--" { printf("DECREMENT\n");return DECREMENT; }
"=>" { printf("LAMBDA\n");return LAMBDA; }
"<<=" { printf("LEFT_SHIFT_ASSIGN\n");return LEFT_SHIFT_ASSIGN; }
">>=" { printf("RIGHT_SHIFT_ASSIGN\n");return RIGHT_SHIFT_ASSIGN; }
"abstract" { printf("ABSTRACT\n");return ABSTRACT; }
"as" { printf("AS\n");return AS; }
"base" { printf("BASE\n");return BASE; }
"bool" { printf("BOOL_TYPE\n");return BOOL_TYPE; }
"break" { printf("BREAK\n");return BREAK; }
"byte" { printf("BYTE_TYPE\n");return BYTE_TYPE; }
"case" { printf("CASE\n");return CASE; }
"char" { printf("CHAR_TYPE\n");return CHAR_TYPE; }
"checked" { printf("CHECKED\n");return CHECKED; }
"class" { printf("CLASS\n");return CLASS; }
"const" { printf("CONST\n");return CONST; }
"continue" { printf("CONTINUE\n");return CONTINUE; }
"decimal" { printf("DECIMAL_TYPE\n");return DECIMAL_TYPE; }
"default" { printf("DEFAULT\n");return DEFAULT; }
"delegate" { printf("DELEGATE\n");return DELEGATE; }
"do" { printf("DO\n");return DO; }
"double" { printf("DOUBLE_TYPE\n");return DOUBLE_TYPE; }
"else" { printf("ELSE\n");return ELSE; }
"enum" { printf("ENUM\n");return ENUM; }
"event" { printf("EVENT\n");return EVENT; }
"explicit" { printf("EXPLICIT\n");return EXPLICIT; }
"extern" { printf("EXTERN\n");return EXTERN; }
"false" { printf("FALSE_VAL\n");return FALSE_VAL; }
"fixed" { printf("FIXED\n");return FIXED; }
"float" { printf("FLOAT_TYPE\n");return FLOAT_TYPE; }
"for" { printf("FOR\n");return FOR; }
"foreach" { printf("FOREACH\n");return FOREACH; }
"goto" { printf("GOTO\n");return GOTO; }
"if" { printf("IF\n");return IF; }
"implicit" { printf("IMPLICIT\n");return IMPLICIT; }
"in" { printf("IN\n");return IN; }
"int" { printf("INT_TYPE\n");return INT_TYPE; }
"interface" { printf("INTERFACE\n");return INTERFACE; }
"internal" { printf("INTERNAL\n");return INTERNAL; }
"is" { printf("IS\n");return IS; }
"lock" { printf("LOCK\n");return LOCK; }
"long" { printf("LONG_TYPE\n");return LONG_TYPE; }
"new" { printf("NEW\n");return NEW; }
"null" { printf("NULL_VALUE\n");return NULL_VALUE; }
"object" { printf("OBJECT\n");return OBJECT; }
"operator" { printf("OPERATOR\n");return OPERATOR; }
"out" { printf("OUT\n");return OUT; }
"override" { printf("OVERRIDE\n");return OVERRIDE; }
"params" { printf("PARAMS\n");return PARAMS; }
"private" { printf("PRIVATE\n");return PRIVATE; }
"protected" { printf("PROTECTED\n");return PROTECTED; }
"public" { printf("PUBLIC\n");return PUBLIC; }
"readonly" { printf("READONLY\n");return READONLY; }
"ref" { printf("REF\n");return REF; }
"return" { printf("RETURN\n");return RETURN; }
"sbyte" { printf("SBYTE_TYPE\n");return SBYTE_TYPE; }
"sealed" { printf("SEALED\n");return SEALED; }
"short" { printf("SHORT_TYPE\n");return SHORT_TYPE; }
"sizeof" { printf("SIZEOF\n");return SIZEOF; }
"stackalloc" { printf("STACKALLOC\n");return STACKALLOC; }
"static" { printf("STATIC\n");return STATIC; }
"string" { printf("STRING_TYPE\n");return STRING_TYPE; }
"struct" { printf("STRUCT\n");return STRUCT; }
"switch" { printf("SWITCH\n");return SWITCH; }
"this" { printf("THIS\n");return THIS; }
"throw" { printf("THROW\n");return THROW; }
"true" { printf("TRUE_VAL\n");return TRUE_VAL; }
"typeof" { printf("TYPEOF\n");return TYPEOF; }
"uint" { printf("UINT_TYPE\n");return UINT_TYPE; }
"ulong" { printf("ULONG_TYPE\n");return ULONG_TYPE; }
"unchecked" { printf("UNCHECKED\n");return UNCHECKED; }
"unsafe" { printf("UNSAFE\n");return UNSAFE; }
"ushort" { printf("USHORT_TYPE\n");return USHORT_TYPE; }
"virtual" { printf("VIRTUAL\n");return VIRTUAL; }
"void" { printf("VOID\n");return VOID; }
"volatile" { printf("VOLATILE\n");return VOLATILE; }
"while" { printf("WHILE\n");return WHILE; }

{identifier} { printf("IDENTIFIER\n");return IDENTIFIER; }

{sign}?[0-9]+ { long long value = atoll(yytext); return CheckIntType(value, NULL); }
{sign}?([0-9]+"U"|[0-9]+"u") { long long value = atoll(TreatIntString(yytext)); return CheckIntType(value, "U"); }
{sign}?([0-9]+"L"|[0-9]+"l") { long long value = atoll(TreatIntString(yytext)); return CheckIntType(value, "L"); }
{sign}?([0-9]+"UL"|[0-9]+"uL"|[0-9]+"Ul"|[0-9]+"ul"|[0-9]+"LU"|[0-9]+"lU"|[0-9]+"Lu"|[0-9]+"lu") { long long value = atoll(TreatIntString(yytext)); return CheckIntType(value, "UL"); }

{sign}?{hex_integer} { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, NULL); }
{sign}?({hex_integer}"U"|{hex_integer}"u") { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, "U"); }
{sign}?({hex_integer}"L"|{hex_integer}"l") { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, "L"); }
{sign}?({hex_integer}"UL"|{hex_integer}"uL"|{hex_integer}"Ul"|{hex_integer}"ul"|{hex_integer}"LU"|{hex_integer}"lU"|{hex_integer}"Lu"|{hex_integer}"lu") { long long value = atoll(TreatHexString(yytext)); return CheckIntType(value, "UL"); }

{sign}?{real_literal} { return CheckRealType(yytext); }

("'"."'"|"'\\n'"|"'\\t'"|"'\\a'"|"'\\0'"|"'\\r'"|"'\\b'"|"'\\v'") { return CHAR_VAL; }

(\".\"|\"(^\n)\") { return STRING_VAL; }

"\n" { return ENTER; }
"\0" { return END_OF_FILE; }

%%

%{

#ifdef DEBUG_SCANNER

int main(int argc, char *argv[])
{
    yylex();
    return EXIT_SUCCESS;
}

#endif

int CheckIntType(long long value, char *suffix)
{
    value = llabs(value);

    // If there's no suffix telling which type it is:
    if (suffix == NULL)
    {
        // Comparing the value with the maximum size of each type to define the type that must be returned:
        if (value <= SBYTE_MAX_VALUE)
        {
            printf("SBYTE_VAL\n");
            return SBYTE_VAL;
        }
        else if (value <= BYTE_MAX_VALUE)
        {
            printf("BYTE_VAL\n");
            return BYTE_VAL;
        }
        else if (value <= SHORT_MAX_VALUE)
        {
            printf("SHORT_VAL\n");
            return SHORT_VAL;
        }
        else if (value <= USHORT_MAX_VALUE)
        {
            printf("USHORT_VAL\n");
            return USHORT_VAL;
        }
        else if (value <= INT_MAX_VALUE)
        {
            printf("INT_VAL\n");
            return INT_VAL;
        }
        else if (value <= UINT_MAX_VALUE)
        {
            printf("UINT_VAL\n");
            return UINT_VAL;
        }
        else if (value <= LONG_MAX_VALUE)
        {
            printf("LONG_VAL\n");
            return LONG_VAL;
        }
        else if (value <= ULONG_MAX_VALUE)
        {
            printf("ULONG_VALUE\n");
            return ULONG_VALUE;
        }
    }
    else if (strcmp(suffix, "U") == 0)
        goto start_from_unsigned;
    else if (strcmp(suffix, "L") == 0)
        goto start_from_long;
    else if (strcmp(suffix, "Ul") == 0)
        goto start_from_unsigned;

    start_from_unsigned:
    if (value <= UINT_MAX_VALUE)
    {
        printf("UINT_VAL\n");
        return UINT_VAL;
    }
    
    start_from_long:
    if (value > UINT_MAX_VALUE)
    {
        printf("LONG_VAL\n");
        return LONG_VAL;
    }
    
    start_from_ulong:
    if (value > LONG_MAX_VALUE)
    {
        printf("ULONG_VALUE\n");
        return ULONG_VALUE;
    }

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
        else if (IS_DIGIT(*letter) || *letter == '.' || IS_EXP_SYMBOL(*letter))
        {
            ++chars;
            ++letter;
        }
        else if (IS_FLOAT_SUFFIX(*letter) || IS_DOUBLE_SUFFIX(*letter) || IS_DECIMAL_SUFFIX(*letter)) break;
    }
    char *number = malloc(chars * sizeof(char));
    number = strcpy(number, text + offset, chars * sizeof(char));
    value = strtold(number);
    if (value <= FLT_MAX)
    {
        printf("FLOAT_VAL\n");
        return FLOAT_VAL;
    }
    else if (value > FLT_MAX && value <= DBL_VAL)
    {
        printf("DOUBLE_VAL\n");
        return DOUBLE_VAL;
    }
    else
    {
        printf("DECIMAL_VAL\n");
        return DECIMAL_VAL;
    }
}

%}
