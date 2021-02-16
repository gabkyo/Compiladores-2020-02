# Compiladores-2020-02
## Projeto da disciplina de Compiladores

Entrada em C#, feito em C++ com flex e yacc

Partes:  
1. Analisador Léxico
2. Analisador Sintático  
3. Analisador Semântico  
4. Código Intermediário  
5. Geração de Código

## Estrutura de arquivos

include (Arquivos de cabeçalho)
    Scanner
    Parser
    Analyzer
    Generator
src (Arquivos de código fonte .c, .cpp e .l)
    Scanner
    Parser
    Analyzer
    Generator
    main.c
bin (Programas executáveis e arquivos objeto)
Makefile
