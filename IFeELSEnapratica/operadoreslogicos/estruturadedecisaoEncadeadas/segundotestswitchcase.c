#include <stdio.h>

int main(){

    int opcao;
    float saldo = 1000.00;

    printf("escolha uma opção:\n");
    printf("1. verificar saldo\n");
    printf("2. fazer depósito\n");
    printf("3. fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %f\n", saldo);
        break;
    case 2:
        printf("digite o banco que você deseja depositar\n");
        printf("digite a agência que você deseja depositar\n");
        printf("digite a conta que voce deseja depositar\n");
        break;
        case 3:
        printf("digite o valor a sacar\n");
    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;

}
