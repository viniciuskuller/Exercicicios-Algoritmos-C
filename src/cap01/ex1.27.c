#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float PrimeiraNota;
    float Peso1;
    float SegundaNota;
    float Peso2;
    float TerceiraNota;
    float Peso3;

    printf("Primeira nota: ");
    scanf("%f", &PrimeiraNota);
    printf("Peso da primeira nota: ");
    scanf("%f", &Peso1);
    printf("Segunda nota: ");
    scanf("%f", &SegundaNota);
    printf("Peso da segunda nota: ");
    scanf("%f", &Peso2);
    printf("Terceira nota: ");
    scanf("%f", &TerceiraNota);
    printf("Peso da terceira nota: ");
    scanf("%f", &Peso3);
    float MediaPonderada;
    MediaPonderada = ((PrimeiraNota * Peso1) + (SegundaNota * Peso2) + (TerceiraNota * Peso3)) /
    (Peso1  + Peso2 + Peso3);
    printf("Media ponderada: %.2f", MediaPonderada);
    return 0;


}