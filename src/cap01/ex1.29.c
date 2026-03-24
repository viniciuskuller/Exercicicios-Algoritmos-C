#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float Peso;
    float Altura;
    printf("Entre com o seu peso em quilogramas: ");
    scanf("%f", & Peso);
    printf("Entre com sua altura em metros: ");
    scanf("%f", &Altura);
    float IMC;
    IMC = Peso/ (Altura * Altura);
    printf("Seu IMC e: %.2f", IMC);
    return 0;

}