#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:

            srand(time(0));

            numeroSecreto = rand() % 10;

            printf("Digite um numero de 0 a 9: ");
            scanf("%d", &palpite);

            if (numeroSecreto == palpite) {

                printf("Voce acertou!\n");
                printf("Numero secreto: %d\n", numeroSecreto);

            } else {

                printf("Voce errou!\n");
                printf("Numero secreto: %d\n", numeroSecreto);
            }

            break;

        case 2:

            printf("Explicacao das regras!\n");
            printf("1. Regra 1\n");
            printf("2. Regra 2\n");
            printf("Escolha uma regra: ");

            scanf("%d", &regras);

            switch (regras) {

                case 1:
                    printf("Regra 1\n");
                    break;

                case 2:
                    printf("Regra 2\n");
                    break;

                default:
                    printf("Opcao de regra invalida!\n");
                    break;
            }

            break;

        case 3:

            printf("Saindo do jogo...\n");
            break;

        default:

            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}