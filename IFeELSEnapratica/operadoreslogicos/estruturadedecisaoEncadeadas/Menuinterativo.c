#include <stdio.h>

int main(){

    int opçao;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2 ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opçao);

    switch (opçao)
    {
    case 1:
        printf("Execução do jogo\n");
        break;
    case 2:
        printf("As regras do jogo são ....\n");
        break;
    case 3:
        printf("Saindo do jogo\n");
        break;
    default:
        printf("Opção invalida");
        break;
    }
}