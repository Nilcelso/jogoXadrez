#include <stdio.h>

// =====================================
// FUNÇÃO RECURSIVA - TORRE
// Move a torre para a direita
// =====================================
void moverTorre(int casas) {

    // Caso base da recursão
    if (casas == 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva diminuindo uma casa
    moverTorre(casas - 1);
}


// =====================================
// FUNÇÃO RECURSIVA - RAINHA
// Move a rainha para a esquerda
// =====================================
void moverRainha(int casas) {

    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}


// =====================================
// FUNÇÃO RECURSIVA - BISPO
// Também usa loops aninhados
// =====================================
void moverBispo(int casas) {

    if (casas == 0) {
        return;
    }

    // Loop externo (movimento vertical)
    for (int i = 0; i < 1; i++) {

        // Loop interno (movimento horizontal)
        for (int j = 0; j < 1; j++) {

            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}


// =====================================
// FUNÇÃO PRINCIPAL
// =====================================
int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== MOVIMENTO DA TORRE ===\n");

    // Chamada da função recursiva
    moverTorre(casasTorre);

    printf("\n");


    printf("=== MOVIMENTO DO BISPO ===\n");

    moverBispo(casasBispo);

    printf("\n");


    printf("=== MOVIMENTO DA RAINHA ===\n");

    moverRainha(casasRainha);

    printf("\n");


    // =====================================
    // MOVIMENTO DO CAVALO
    // LOOPS COMPLEXOS
    // =====================================
    printf("=== MOVIMENTO DO CAVALO ===\n");

    int cima = 2;
    int direita = 1;

    // Loop para mover duas casas para cima
    for (int i = 1; i <= cima; i++) {

        // Exemplo de uso do continue
        if (i == 0) {
            continue;
        }

        printf("Cima\n");
    }

    // Loop para mover uma casa para direita
    for (int j = 1; j <= direita; j++) {

        printf("Direita\n");

        // Exemplo de uso do break
        if (j == 1) {
            break;
        }
    }

    printf("\n");

    printf("=== FIM DOS MOVIMENTOS ===\n");

    return 0;
}
