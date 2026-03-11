
#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // note que a divisao entre inteiros resulta em um numero inteiro

    printf("soma: %d\n", soma);
    printf("diferença: %d\n", diferenca);
    printf("produto: %d\n", produto);
    printf("quociente: %d\n", quociente);
}