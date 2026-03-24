#include <stdio.h>
#include <stdio.h>

int main(void) {

    float PrimeiroNumero;
    float SegundoNumero;
    printf("Informe o primeiro valor: ");
    scanf("%f", &PrimeiroNumero);
    printf("Informe o segundo valor: ");
    scanf("%f", &SegundoNumero);
    float Soma;
    float Sub;
    float Multi;
    float Div;
    Soma = PrimeiroNumero + SegundoNumero;
    Sub = PrimeiroNumero - SegundoNumero;
    Multi = PrimeiroNumero * SegundoNumero;
    Div = PrimeiroNumero / SegundoNumero;
    printf("%.2f + %.2f = %.2f\n", PrimeiroNumero, SegundoNumero, Soma);
    printf("%.2f - %.2f = %.2f\n", PrimeiroNumero, SegundoNumero, Sub);
    printf("%.2f * %.2f = %.2f\n", PrimeiroNumero, SegundoNumero, Multi);
    printf("%.2f / %.2f = %.2f", PrimeiroNumero, SegundoNumero, Div);
    return 0;



}