DEBUG_FLAGS :=

ifeq ($(debug_scanner),ok)
	DEBUG_FLAGS += -DDEBUG_SCANNER
endif

SCANNER_SRC := $(wildcard src/Scanner/*.c)
PARSER_SRC := $(wildcard src/Parser/*.c)
SRC_FILES := $(wildcard src/*.c) $(SCANNER_SRC) $(PARSER_SRC)

INCLUDES := -Iinclude/ -Iinclude/Scanner/ -Iinclude/Parser/

main: parser scanner
	gcc $(INCLUDES) $(SRC_FILES) -o bin/csharp 

scanner_test: scanner
	gcc $(INCLUDES) $(SCANNER_SRC) -o bin/cs_scanner_test

scanner:
	flex -o src/Scanner/scanner.c src/Scanner/c-sharp.l

parser:
	bison -o src/Parser/parser.c src/Parser/c-sharp.y --defines=include/Parser/parser.h

precomp_header:
	gcc include/pch.h
