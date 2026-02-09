/*
  xadrez.c
  Desafio nível novato: Movimentando as Peças do xadrez

  Objetivo:
  - Simular movimento de 3 peças (Torre, Bispo, Rainha) usando estruturas de repetição em C.
  - Cada peça deve usar UMA estrutura diferente: for, while e do-while.
  - O programa imprime no console a direção do movimento a cada casa percorrida.

  Regras deste desafio (simplificado):
  - Sem entrada do usuário.
  - Quantidade de casas movidas definida por variáveis inteiras no código.
  - Apenas impressão das direções, não precisa tabuleiro nem validação.
*/

#include <stdio.h>

int main(void) {
    /* =========================
       TORRE (FOR)
       - Simular 5 casas para a direita.
       - Saída por casa: "Direita"
       ========================= */
    int casasTorre = 5;
    int i;

    printf("=== Movimento da TORRE (for): %d casas para a direita ===\n", casasTorre);
    for (i = 1; i <= casasTorre; i++) {
        // A cada repetição, representa a Torre avançando 1 casa para a direita
        printf("Direita\n");
    }

    printf("\n");

    /* =========================
       BISPO (WHILE)
       - Simular 5 casas na diagonal para cima e à direita.
       - Para diagonal, imprimir combinação de direções por casa:
         Ex: "Cima, Direita"
       ========================= */
    int casasBispo = 5;
    int passoBispo = 1;

    printf("=== Movimento do BISPO (while): %d casas na diagonal (Cima, Direita) ===\n", casasBispo);
    while (passoBispo <= casasBispo) {
        // A cada repetição, representa o Bispo avançando 1 casa na diagonal
        printf("Cima, Direita\n");
        passoBispo++;
    }

    printf("\n");

    /* =========================
       RAINHA (DO-WHILE)
       - Simular 8 casas para a esquerda.
       - Saída por casa: "Esquerda"
       - do-while garante que executa pelo menos 1 vez
       ========================= */
    int casasRainha = 8;
    int passoRainha = 1;

    printf("=== Movimento da RAINHA (do-while): %d casas para a esquerda ===\n", casasRainha);
    do {
        // A cada repetição, representa a Rainha avançando 1 casa para a esquerda
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= casasRainha);

    return 0;
}
