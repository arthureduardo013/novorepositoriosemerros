#include <stdio.h>

int main(){
    double numeroPreciso = 3.141592653589793238463;
    double numeroMuitoPreciso = 3.141592653589793238463;//EU RETIREI O long mas estav escrito long double

    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);
    return 0;
}