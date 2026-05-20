#include <stdio.h>

int main(){

    int idade;
    float renda;

    printf("Digite a sua idade: ");
    scanf("&%d", &idade);
    printf("Digite a sua renda mensal: \n");
    scanf("%f", &renda);

    if (idade <=18 || idade >= 60)
    {
        if (renda < 2000)
        {
            printf("voce tem direito ao beneficio!");
        } else {
            printf("voce nao tem direito ao beneficio!");
        }
        



    } else {
        printf("voce nao tem direito devido a idade!");
    }
    
    
}