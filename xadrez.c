#include <stdio.h>

#define MOVIMENTACAO_BISPO 5
#define MOVIMENTACAO_TORRE 5
#define MOVIMENTACAO_RAINHA 8

void moverBispo() {
    for (int i = 0; i < MOVIMENTACAO_BISPO; i++) {
        printf("Diagonal superior direita\n");
    }
}

void moverTorre() {
    for (int i = 0; i < MOVIMENTACAO_TORRE; i++) {
        printf("Direita\n");
    }
}

void moverRainha() {
    for (int i = 0; i < MOVIMENTACAO_RAINHA; i++) {
        printf("Esquerda\n");
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo();
    
    printf("\nMovimentação da Torre:\n");
    moverTorre();
    
    printf("\nMovimentação da Rainha:\n");
    moverRainha();

    return 0;
}
