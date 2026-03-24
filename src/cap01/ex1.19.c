#include <stdio.h>
#include <stdlib.h>

int main(void){

    float Raio;
    printf("Valor do Raio do Ciruclo: ");
    scanf("%f", &Raio);
    float Diametro;
    float Circunferencia;
    float Area;
    Diametro = Raio * 2;
    Circunferencia = Diametro * 3.141592;
    Area = 3.141592 * Raio * Raio;
    printf("Diametro = %.2f\n", Diametro);
    printf("Circunferencia = %.2f\n", Circunferencia);
    printf("Area = %.2f", Area);
    return 0;

}