/* Scanner for a C# 6.0 compiler generated with Flex */

/* Defining comments */
comment {single_line_comment}|{delimited_comment}

single_line_comment "//".*

delimited_comment "/*"{delimited_comment_section}*'*'+"/"

delimited_comment_section '/''*'*{not_slash_or_asterisk}

not_slash_or_asterisk (^'/'^'*')*

/* Defining tokens */
tokens {identifier}|{keyword}|{integer_literal}|{real_literal}|{character_literal}|{string_literal}|{interpolated_string_literal}|{operator_or_punctuator}

identifier ([a..z]|[A..Z]|'_')([a..z]|[A..Z]|[0..9]|'_')*

keyword 'abstract'|'as'|'base'|'bool'|'break'|'byte'|'case'|'catch'|'char'|'checked'|'class'|'const'|'continue'|'decimal'|'default'|'delegate'|'do'|'double'|'else'|'enum'|'event'|'explicit'|'extern'|'false'|'finally'|'fixed'|'float'|'for'|'foreach'|'goto'|'if'|'implicit'|'in'|'int'|'interface'|'internal'|'is'|'lock'|'long'|'namespace'|'new'|'null'|'object'|'operator'|'out'|'override'|'params'|'private'|'protected'|'public'|'readonly'|'ref'|'return'|'sbyte'|'sealed'|'short'|'sizeof'|'stackalloc'|'static'|'string'|'struct'|'switch'|'this'|'throw'|'true'|'try'|'typeof'|'uint'|'ulong'|'unchecked'|'unsafe'|'ushort'|'using'|'virtual'|'void'|'volatile'|'while'

literal {integer_literal}|{real_literal}|{character_literal}|{string_literal}|{boolean_literal}|{null_literal}

boolean_literal 'true'|'false'

/* Integer literals */
integer_literal {decimal_integer_literal}|{hexadecimal_integer_literal}

decimal_integer_literal [0..9]+{integer_type_suffix}

hexadecimal_integer_literal (0x|0X)([0..9]|[a..f]|[A..F])+{integer_type_suffix}

integer_type_suffix 'U'|'u'|'L'|'l'|'UL'|'Ul'|'uL'|'ul'|'LU'|'Lu'|'lU'|'lu'

/* Real literals */
real_literal ([0..9]+'.'[0..9]+{exponent_part}?{real_type_suffix}?)|('.'[0..9]+{exponent_part}?{real_type_suffix}?)|([0..9]+{exponent_part}{real_type_suffix}?)|([0..9]+{real_type_suffix})

exponent_part ('e'|'E'){sign}?[0..9]+

sign ('+'|'-')

real_type_suffix 'F'|'f'|'D'|'d'|'M'|'m'

/* Character literals */
character_literal '\''{character}'\''

character .|{simple_escape_sequence}|{hexadecimal_escape_sequence}

simple_escape_sequence '\\\''|'\\"'|'\\\\'|'\\0'|'\\a'|'\\b'|'\\f'|'\\n'|'\\r'|'\\t'|'\\v'

hexadecimal_escape_sequence "\\x"([0..9]|[a..f]|[A..F])([0..9]|[a..f]|[A..F])?([0..9]|[a..f]|[A..F])?([0..9]|[a..f]|[A..F])?

%%
%%
