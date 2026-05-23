#include <stdio.h>

int main() {

    int matriz[3][3]; // declaração da matriz 3x3

    // inicializando a matriz
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            matriz[i][j] = i + j;
        }
    }

    // exibindo a matriz
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {

            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}