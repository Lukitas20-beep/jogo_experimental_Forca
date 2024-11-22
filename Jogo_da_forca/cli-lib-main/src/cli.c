#include "cli.h"
#ifdef _WIN32 // WIN32 é definido quando o código é compilado no Windows.
    #include <windows.h> //No Windows, ele inclui <windows.h> para acesso à função Sleep.
#else
    #include <unistd.h> //Em sistemas Unix-like (Linux/Mac), inclui <unistd.h> para usar a função usleep.
#endif

void cli_init() { //Esta função é usada para inicializar o ambiente do console.
    system("cls"); //No Windows, a chamada system("cls") limpa o console.
}

void cli_clear() { //Limpa a tela do terminal:
    system("cls || clear"); //No Windows, executa o comando cls. Em sistemas Unix-like, executa o comando clear.
}

char cli_getchar() { //Captura um caractere de entrada sem esperar que o usuário pressione Enter (em sistemas Unix-like):
    char c;
    system("stty raw"); // Configura o terminal para o "modo bruto", capturando entrada imediatamente.
    c = getchar(); //Captura um único caractere do usuário.
    system("stty cooked"); // Restaura o terminal para o modo normal.
    return c; //Obs Este método funciona apenas em sistemas Unix-like. Para Windows, 
    //seria necessário usar uma alternativa como _getch() de <conio.h>.
}

void cli_delay(int ms) { //Introduz um atraso no programa.
#ifdef _WIN32
    Sleep(ms); //Usa Sleep(ms) do <windows.h> para esperar em milissegundos.
#else
    usleep(ms * 1000); //Usa, alternativamente, usleep(ms * 1000) para converter milissegundos em microsegundos
    //, pois usleep trabalha com microsegundos.
#endif
}
