#include <stdio.h>

int main(){

    int dia;

    printf("entre o valor do dia\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terça-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sábado");
        break;
    
    default:
        printf("Nenhuma opção possível");
        break;
    }
    // // if (dia == 1){
    //     printf("Domingo\n");
    // } else if (dia == 2){
    //     printf("Segunda\n");
    // } else if (dia == 3){
    //     printf("terça");
    // } else if (dia == 4){
    //     printf("quarta");
    // } else if (dia == 5){
    //     printf("quinta");
    // } else if (dia == 6){
    //     printf("sexta");
    // } else {
    //     printf("sábado");
    // }//
    
    
    
    
    
    
}