#ifndef CLI_H //Verifica se a macro CLI_H não foi definida anteriormente
#define CLI_H //Define a macro CLI_H

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define CLI_COLOR_CYAN   "\033[0;36m" // Sequências de escape ANSI para Cor ciano
#define CLI_COLOR_YELLOW "\033[0;33m" // Sequências de escape ANSI para Cor amarela
#define CLI_COLOR_GREEN  "\033[0;32m" // Sequências de escape ANSI para Cor verde
#define CLI_COLOR_RED    "\033[0;31m" // Sequências de escape ANSI para Cor vermelha
#define CLI_COLOR_RESET  "\033[0m"    // Sequências de escape ANSI para Resetar cor

// Inicializa a CLI (pode conter configurações específicas para o terminal)
void cli_init();

// Limpa a tela do terminal
void cli_clear();

// Lê uma tecla pressionada pelo jogador
char cli_getchar();

// Pausa o programa por um determinado número de milissegundos
void cli_delay(int ms);

#endif//Finaliza o bloco condicional iniciado por #ifndef CLI_H
