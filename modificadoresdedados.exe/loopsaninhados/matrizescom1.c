#include <stdio.h>

int main() {

    int matriz[3][3];
    int i, j;

    // inicializando a matriz
    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {

            matriz[i][j] = i + j;
        }
    }

    // exibindo a matriz
    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {

            printf("matriz[%d][%d] = %d\n",
                   i, j, matriz[i][j]);
        }
    }

    return 0;
}