#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo.h"
#include "cli.h"

#define MAX_TENTATIVAS 6 //define o número máximo de tentativas erradas permitidas antes de perder o jogo
#define BONUS_VITORIA 5 //Bônus máximo (5)

void exibir_boas_vindas() {
    cli_textcolor(CLI_COLOR_CYAN); //Usa a função da biblioteca CLI-lib para mudar a cor do texto para ciano.
    printf("Bem-vindo ao jogo da forca!\n"); //Exibe a mensagem de boas-vindas.
    cli_textcolor(CLI_COLOR_RESET); //Restaura a cor original do texto.
}

void jogar_forca() {
    char palavra[] = "forca"; // Define a palavra a ser adivinhada no jogo.
    char palavraDescoberta[] = "_____"; //Inicializa a palavra oculta como "_____", com o mesmo número de letras.
    int tentativasErradas = 0; //Controla o número de tentativas erradas.
    int pontos = 0; //A pontuação do jogador, que aumenta com acertos e diminui com erros.
    char letra; //Armazena a letra digitada pelo jogador.

    //O jogo continua enquanto o número de tentativas erradas for menor que MAX_TENTATIVAS
    // e a palavra não tiver sido totalmente descoberta. II
    //                                                   VV
    while (tentativasErradas < MAX_TENTATIVAS && strcmp(palavra, palavraDescoberta) != 0) { 
        cli_textcolor(CLI_COLOR_YELLOW); //Muda a cor do texto para amarelo.
        printf("\nPalavra: %s\n", palavraDescoberta);
        cli_textcolor(CLI_COLOR_RESET); 

        printf("Digite uma letra: ");
        scanf(" %c", &letra); //Solicita ao jogador que digite uma letra.

        int letraCorreta = 0;
        for (int i = 0; i < strlen(palavra); i++) { //Itera sobre cada letra da palavra e verifica se a letra digitada 
        //corresponde a uma posição da palavra oculta. Se encontrar,  AA
        //a letra é inserida na posição correta de palavraDescoberta. II
            if (palavra[i] == letra && palavraDescoberta[i] == '_') {
                palavraDescoberta[i] = letra;
                letraCorreta = 1; //Flag que indica se o jogador acertou ao menos uma letra. Se sim, a pontuação aumenta.
            }
        }

        if (letraCorreta) {
            pontos++;
            printf("Acertou! Pontos: %d\n", pontos);
        } else { //Se o jogador errou, a contagem de tentativas erradas aumenta e a pontuação diminui.
            tentativasErradas++;
            pontos--;
            printf("Errou! Tentativas restantes: %d\n", MAX_TENTATIVAS - tentativasErradas);
        }
    }

    //Verifica se a palavra foi completamente descoberta comparando-a 
    //com palavraDescoberta. Se for igual, o jogador venceu.
    if (strcmp(palavra, palavraDescoberta) == 0) {
        pontos += BONUS_VITORIA;
        cli_textcolor(CLI_COLOR_GREEN); //Muda a cor para verde se o jogador vencer.
        printf("\nParabéns! Você venceu com %d pontos!\n", pontos); 
        cli_textcolor(CLI_COLOR_RESET);
    } else {
        cli_textcolor(CLI_COLOR_RED); //Se o jogador perde, a palavra correta é exibida e a cor do texto é alterada para vermelho.
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
        cli_textcolor(CLI_COLOR_RESET);
    }
}