#include <stdio.h>

int main(){

    int idade = 20;
    float altura = 1.75;

    //idade >= 18 => verdadeira
    //idade <= 30 => verdadeira
    //verdadeira && verdadeira
    //verdadeiro && altura > 1.70
    //verdadeiro && verdadeiro => verdadeiro

    if (idade >= 18 && idade <= 30 && altura > 1.70)
    {
        printf("Voce esta na faixa etaria e tem altura adequada\n");
    } else {
        printf("voce nao atende aos criterios\n");
    }
    
}