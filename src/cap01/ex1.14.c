#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float Lado;
    printf("Informe o valor do lado: ");
    scanf("%f", &Lado);
    float Perimetro;
    float Area;
    Perimetro = Lado * 4;
    Area = Lado * Lado;
    printf("Perimetro = %.2f\n", Perimetro);
    printf("Area = %.2f", Area);
    return 0;



}