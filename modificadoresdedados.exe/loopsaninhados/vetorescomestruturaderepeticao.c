#include <stdio.h>

int main(){

    int vetor[5]; //declaracao de um vetor de 5 inteiros

    //inicializacao do vetor usando uma estrutura de repeticao FOR
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; // atribuindo valores ao vetor
    }

    //exibindo os elementos do vetor usando uma estrutura de repeticao FOR
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}