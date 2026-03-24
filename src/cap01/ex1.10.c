#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int BaseMaior;
    int BaseMenor;
    int Altura;
    printf("Valor da Base Maior: ");
    scanf("%d", &BaseMaior);
    printf("Valor da Base Menor: ");
    scanf("%d", &BaseMenor);
    printf("Valor da Altura: ");
    scanf("%d", &Altura);
    int Area;
    Area = (BaseMenor + BaseMaior)* Altura / 2;
    printf("Area = %d",Area);
    return 0;
}