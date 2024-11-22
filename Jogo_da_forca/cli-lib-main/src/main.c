#include <stdio.h>
#include <stdlib.h>
#include "jogo.h"

//código-fonte (.c) → arquivo-objeto (.o) → executável
int main() {
    cli_init();  // Inicializa a CLI-lib

    exibir_boas_vindas();  // Função para exibir a mensagem inicial

    jogar_forca();  // Inicia o loop do jogo

    cli_shutdown();  // Finaliza a CLI-lib
    return 0;
}
