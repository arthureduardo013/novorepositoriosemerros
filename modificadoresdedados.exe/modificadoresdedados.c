#include <stdio.h>

int main() {
    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    int numeronormal = 2147483647;
    long int NumeroGrande = 2147483647;

    printf("Numero regular(int): %d\n",numeronormal);
    printf("Numero Grande (long int): %d\n",NumeroGrande);


    return 0;
}