#include <stdio.h>

#define BISPO_MOVES 5
#define TORRE_MOVES 5
#define RAINHA_MOVES 8

int main() {
    // Bispo: diagonal superior direita (↗)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOVES; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre: direita (→)
    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < TORRE_MOVES) {
        printf("Direita\n");
        j++;
    }

    // Rainha: esquerda (←)
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOVES);

    return 0;
}
