#include <stdio.h>

/*
incremento (++)
pré-incremento ++a
pós-incremento a++
decremento (--)
pré-decremento --a
pós-decremento a--
*/

int main(){

int numero1 = 1, resultado;

resultado = numero1++;

printf("antes do incremento: %d\n", numero1);
numero1++;
printf("apos incremento: %d\n", numero1);

numero1--;
printf("apos decremento: %d\n", numero1);

//pós-incremento:
//resultado = numero1;
//numero++;

printf("Apos pós-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("Apos pré-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = numero1--;
printf("Apos pós-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("Apos pré-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);
}