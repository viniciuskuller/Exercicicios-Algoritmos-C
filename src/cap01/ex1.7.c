#include <stdio.h>
#include <STdlib.h>

int main(void) {
    int Lado;
    int Area;
    int Perimetro;
    printf("Informe o lado: ");
    scanf("%d", &Lado);
    // Operações
    Area = Lado * Lado;
    Perimetro = Lado * 4;
    printf("\nPerimetro = %d", Perimetro);
    printf("\nArea = %d", Area);
    return 0;
}