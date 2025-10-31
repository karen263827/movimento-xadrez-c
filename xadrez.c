#include <stdio.h>

// Constantes para definir os movimentos
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;

int main() {
    // Simulação da movimentação do Bispo
    // O Bispo se move na diagonal superior direita (Cima + Direita)
    printf("Movimentacao do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Simulação da movimentação da Torre
    // A Torre se move para a direita
    printf("\nMovimentacao da Torre:\n");
    int j = 0;
    while (j < MOV_TORRE) {
        printf("Direita\n");
        j++;
    }

    // Simulação da movimentação da Rainha
    // A Rainha se move para a esquerda
    printf("\nMovimentacao da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);

    return 0;
}