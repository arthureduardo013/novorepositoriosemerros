#include <stdio.h>

int main(){

    int idade = 18;
    int resultado;

    resultado = idade >= 18 ? 1 : 0;

    if (resultado == 1)
    {
         printf("voce e maior de idade\n");
    } else {
        printf("voce e menor de idade\n");
    }
    
    return 0;
    
}