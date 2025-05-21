#include <stdio.h>

#define BISPO_MOVES 5
#define TORRE_MOVES 5
#define RAINHA_MOVES 8

// Funções recursivas
void moverBispo(int n) {
    if (n == 0) return;
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    moverBispo(n - 1);
}

void moverTorre(int n) {
    if (n == 0) return;
    printf("Direita\n");
    moverTorre(n - 1);
}

void moverRainha(int n) {
    if (n == 0) return;
    printf("Esquerda\n");
    moverRainha(n - 1);
}

// Cavalo: 2 cima, 1 direita (↗ em L)
void moverCavaloL() {
    int cima = 0, direita = 0;

    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            cima++;
        } else {
            int j = 0;
            while (j < 2) {
                j++;
                if (j == 1) {
                    printf("Direita\n");
                    break;  // usando break
                } else {
                    continue;
                }
            }
            direita++;
        }
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOVES);

    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOVES);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOVES);

    printf("\nMovimentação do Cavalo:\n");
    moverCavaloL();

    return 0;
}
