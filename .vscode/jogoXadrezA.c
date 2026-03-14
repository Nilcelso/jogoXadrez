#include <stdio.h>

int main() {

    // ==============================
    // MOVIMENTO DA TORRE (FOR)
    // ==============================
    // A torre vai se mover 5 casas para a direita

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    // Estrutura FOR para repetir o movimento 5 vezes
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // ==============================
    // MOVIMENTO DO BISPO (WHILE)
    // ==============================
    // O bispo vai se mover 5 casas na diagonal
    // (Cima + Direita)

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    // Estrutura WHILE
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");


    // ==============================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // ==============================
    // A rainha vai se mover 8 casas para a esquerda

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    // Estrutura DO-WHILE
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");


    // ==============================
    // MOVIMENTO DO CAVALO
    // LOOPS ANINHADOS (FOR + WHILE)
    // ==============================
    // O cavalo se move em "L":
    // 2 casas para baixo e 1 para a esquerda

    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop FOR (parte vertical do movimento)
    for (int i = 1; i <= 1; i++) {

        int contador = 1;

        // Loop WHILE (movimento para baixo)
        while (contador <= casasBaixo) {
            printf("Baixo\n");
            contador++;
        }

        // Movimento final para esquerda
        for (int j = 1; j <= casasEsquerda; j++) {
            printf("Esquerda\n");
        }
    }

    return 0;
}