#include <stdio.h>

int main() {

    char variavel;

    printf("Digite um valor: ");
    scanf(" %c", &variavel);

    switch (variavel) {

        case 'a':
            // codigo executado se variavel == 1
            printf("Codigo executado se variavel == a\n");
        break;

        case 'b':
            // codigo executado se variavel == 2
            printf("Codigo executado se variavel == b\n");
        break;

        default:
            // executa se nao for 1 nem 2
            printf("Codigo executado se variavel nao for a ou b\n");
    }

    return 0;
}