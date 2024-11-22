**Grupo**:  
- [Lucas Ferreira](https://github.com/lukitas20-beep)

**Disciplina**: Programação Imperativa e Funcional  
**Instituição**: CESAR School  

# Jogo da forca
______________________________________________________________________________________________________________________________________________________________________

## Descrição do Jogo
______________________________________________________________________________________________________________________________________________________________________

O Jogo da Forca é um jogo de palavras no qual o objetivo principal é adivinhar uma palavra secreta antes que o número máximo de tentativas seja atingido. O jogo funciona da seguinte maneira:

-Palavra Secreta: Uma palavra é escolhida aleatoriamente, e o jogador deve adivinhar quais letras a compõem.

-Tentativas: O jogador possui um número limitado de tentativas (geralmente 6 ou 7, dependendo da decisão final do time) para adivinhar a palavra. A cada erro, uma parte de um boneco de forca é desenhada, representando a iminente "morte" do personagem.

-Letras: A cada tentativa, o jogador pode escolher uma letra. Se a letra estiver na palavra secreta, ela será revelada; se não estiver, uma parte do boneco será desenhada.

-Vitoria ou Derrota: O jogo termina quando o jogador adivinha a palavra completa ou quando o boneco é totalmente desenhado (indicado pelas tentativas erradas). Se o jogador adivinhar todas as letras antes da derrota, ele vence.

-O jogo será implementado com a linguagem C e a biblioteca CLI-lib, que permite uma interação simples no terminal e exibe os componentes do jogo de forma textual.

## Implementação:
______________________________________________________________________________________________________________________________________________________________________
O código foi implementado com as seguintes características:

-Uso de Structs: A estrutura Jogo armazena as informações do jogo, como a palavra secreta, o número de tentativas restantes e as letras já adivinhadas.

-Ponteiros e Alocação Dinâmica: Utilizamos ponteiros para manipular strings e a alocação dinâmica de memória para armazenar as palavras.

-Funções: Diversas funções foram criadas para organizar a lógica do jogo, como para iniciar o jogo, verificar letras, desenhar o boneco e mostrar o estado atual do jogo.

-CLI-lib: A biblioteca foi utilizada para facilitar a criação de uma interface interativa no terminal, incluindo mensagens e menus.

## Descrição da pontuação:
______________________________________________________________________________________________________________________________________________________________________
A pontuação do jogo da forca é um elemento essencial para tornar o jogo mais interativo e desafiador. Nesse projeto, a pontuação será atribuída com base nas ações do jogador durante o jogo, levando em consideração as tentativas de adivinhar a palavra e o desempenho do jogador. A mecânica de pontuação segue os critérios abaixo:

Pontuação por Adivinhação Correta:
-Para cada letra correta adivinhada, o jogador recebe 1 ponto.
-Se a palavra completa for adivinhada corretamente antes de o número máximo de tentativas ser atingido, o jogador ganhará pontos bônus, que são definidos no código.

Perda de Pontos por Tentativas Erradas:
-Para cada letra incorreta, o jogador perde 1 ponto.
-Quando o número de tentativas erradas atinge o limite (geralmente 6 ou 7 tentativas, dependendo da decisão final do time), o jogador perde o jogo e não recebe mais pontos.

Critério de Vitória:
-Se o jogador adivinhar todas as letras da palavra corretamente antes de esgotar as tentativas, ele vence o jogo e pode receber um prêmio de pontos adicionais como bônus de vitória.

Critério de Derrota:
-Se o número de tentativas erradas atingir o limite permitido, o jogo termina e o jogador perde a partida. Neste caso, a pontuação do jogador será zerada para aquela rodada.

## Implementação da pontuação:
______________________________________________________________________________________________________________________________________________________________________
Implementação da Pontuação:
-A pontuação será gerenciada utilizando uma variável para armazenar a pontuação atual do jogador. Essa variável será atualizada a cada interação do jogador (tentativas corretas ou incorretas). Além disso, quando o jogo termina, a pontuação final será exibida na tela, mostrando se o jogador ganhou ou perdeu e quantos pontos ele obteve durante a partida.

## Funcionalidades Implementadas:
-Contagem de Pontos: A cada tentativa correta, o jogador ganha pontos. A cada tentativa errada, ele perde pontos.
-Exibição da Pontuação: A pontuação atual do jogador é exibida na tela durante o jogo, permitindo ao jogador acompanhar seu desempenho.
-Finalização do Jogo: Quando o jogo termina (seja pela vitória ou derrota), o jogador recebe uma mensagem informando a pontuação final.

## Fluxo da Implementação:
-Inicialização da Pontuação: Ao iniciar o jogo, a pontuação do jogador é definida como 0.
-Ações do Jogador: Cada vez que o jogador faz uma tentativa:
-Se a tentativa for correta, ele ganha um ponto.
-Se for incorreta, ele perde um ponto.
-Exibição de Pontuação: A pontuação atual do jogador é atualizada e exibida após cada tentativa.

## Final do Jogo:
-Se o jogador adivinhar a palavra corretamente, a pontuação final é mostrada com a mensagem de vitória.
-Se o jogador perder todas as tentativas sem adivinhar a palavra, a pontuação final será mostrada com a mensagem de derrota.
