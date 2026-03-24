#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float Base;
    float Altura;
    printf("Valor da Base: ");
    scanf("%f", &Base);
    printf("Valor da altura: ");
    scanf("%f", &Altura);
    float Area;
    Area = Base * Altura / 2;
    printf("Area = %.2f", Area);
    return 0;

}