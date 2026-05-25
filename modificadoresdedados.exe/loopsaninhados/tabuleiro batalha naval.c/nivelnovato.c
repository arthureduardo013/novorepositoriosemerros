#include <stdio.h>

int main() {

    // tabuleiro 10x10
    int tabuleiro[10][10];

    // variáveis de controle
    int i, j;

    // tamanho dos navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // inicializando o tabuleiro com água (0)
    for (i = 0; i < 10; i++) {

        for (j = 0; j < 10; j++) {

            tabuleiro[i][j] = 0;
        }
    }

    // coordenadas iniciais do navio horizontal
    int linhaH = 2;
    int colunaH = 4;

    // posicionando navio horizontal
    for (i = 0; i < 3; i++) {

        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // coordenadas iniciais do navio vertical
    int linhaV = 5;
    int colunaV = 7;

    // posicionando navio vertical
    for (i = 0; i < 3; i++) {

        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // exibindo o tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n\n");

    for (i = 0; i < 10; i++) {

        for (j = 0; j < 10; j++) {

            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}