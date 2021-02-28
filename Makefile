
SRC_FILES := $(wildcard src/*.c) $(wildcard src/Scanner/*.c) $(wildcard src/Parser/*.c)

INCLUDES := -Iinclude/ -Iinclude/Scanner/ -Iinclude/Parser/

main: parser scanner
	gcc $(INCLUDES) -o bin/csharp 

scanner:
	flex -o src/Scanner/scanner.c src/Scanner/c-sharp.l

parser:
	bison -o src/Parser/parser.c src/Parser/c-sharp.y --defines=include/Parser/parser.h

precomp_header:
	gcc include/pch.h
