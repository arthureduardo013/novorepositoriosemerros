#include <stdio.h>

int main(){

    int idade = 18;

    switch (idade >= 18)
    {
    case 1:
        printf("você é maior de idade");
        break;
    
    default:
        printf("Você é menor de idade");
        break;
    }
    return 0;
}