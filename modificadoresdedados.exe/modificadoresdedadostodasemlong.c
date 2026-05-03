#include <stdio.h>

int main(){
    printf("tamanho de int: %u bytes\n", sizeof(int));
    printf("tamanho de long int: %u bytes\n", sizeof(long int));
    printf("tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("tamanho de double: %u bytes\n", sizeof(double));
    printf("tmanho de long double: %u bytes\n", sizeof(long double));
    return 0;
}