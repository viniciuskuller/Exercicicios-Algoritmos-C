#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float BMaior;
    float BMenor;
    float Altura;
    printf("Valor da Base Maior: ");
    scanf("%f", &BMaior);
    printf("Valor da Base Menor: ");
    scanf("%f", &BMenor);
    printf(" Valor da Altura: ");
    scanf("%f", &Altura);
    float Area;
    Area = (BMaior + BMenor) * Altura / 2;
    printf("Area = %.2f", Area);
    return 0;

}