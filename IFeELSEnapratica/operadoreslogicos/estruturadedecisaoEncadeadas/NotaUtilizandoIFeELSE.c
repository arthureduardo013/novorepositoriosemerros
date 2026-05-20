#include <stdio.h>

int main(){

    int nota;

    printf("digite a sua nota:");
    scanf("%d", &nota);

    //A >= 90
    //B >= 80
    //C >= 70
    //D >= 60
    //F 
    if (nota >= 90){
        printf("Conceito A!");
    } else if (nota >= 80){
        printf("conceito B!");
    } else if (nota >= 70){
        printf("conceito C!");
    } else if (nota >= 60){
        printf("conceito D!");
    } else if (nota >= 50 ){
        printf("conceito E!");
    } else {
        printf("conceito é F");
    }
    
    
}