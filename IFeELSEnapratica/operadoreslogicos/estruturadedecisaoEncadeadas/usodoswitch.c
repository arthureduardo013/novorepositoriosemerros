#include <stdio.h>

int main() {

    int variavel;

    printf("Digite um valor: ");
    scanf("%d", &variavel);

    switch (variavel) {

        case 1:
            // codigo executado se variavel == 1
            printf("Codigo executado se variavel == 1\n");
            break;

        case 2:
            // codigo executado se variavel == 2
            printf("Codigo executado se variavel == 2\n");
            break;

        default:
            // executa se nao for 1 nem 2
            printf("Codigo executado se variavel nao for 1 ou 2\n");
    }

    return 0;
}