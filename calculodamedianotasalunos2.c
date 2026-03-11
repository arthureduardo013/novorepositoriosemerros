#include <stdio.h>

int main(){
    int nota1, nota2, nota3;
    int media;


    printf("entre com sua primeira nota: \n");
    scanf("%d", &nota1);

    printf("entre com sua segunda nota: \n");
    scanf("%d", &nota2);

    printf("entre com sua terceira nota: \n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("a media é: %d", media);

    return 0;
}