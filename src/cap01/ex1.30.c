#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int PrimeiroNumero;
    int SegundoNumero;
    printf("Primeiro Numero: ");
    scanf("%d", &PrimeiroNumero);
    printf("Segundo Numero:");
    scanf("%d", &SegundoNumero);
    printf("Valores antes da troca:\n");
    printf("Primeiro numero: %d\n", PrimeiroNumero);
    printf("Segundo numero: %d\n\n", SegundoNumero);
    PrimeiroNumero = PrimeiroNumero + SegundoNumero;
    SegundoNumero =PrimeiroNumero - SegundoNumero;
    PrimeiroNumero = PrimeiroNumero - SegundoNumero;
    printf("Valores depois da troca:\n");
    printf("Primeiro numero: %d\n", PrimeiroNumero);
    printf("Segundo numero: %d", SegundoNumero);
    return 0;

}