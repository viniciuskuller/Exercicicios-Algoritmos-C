#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float Largura;
    float Altura;
    printf("Informe a largura: ");
    scanf("%f", &Largura);
    printf("Informe a altura: ");
    scanf("%f", &Altura);
    float Perimetro;
    Perimetro = Altura * 2 + Largura * 2;
    float Area;
    Area = Largura * Altura;
    printf("Perimetro = %.2f\n", Perimetro);
    printf("Area = %.2f", Area);
    return 0;


}