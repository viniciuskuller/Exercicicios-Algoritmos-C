#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int PrimeiraNota;
    int SegundaNota;
    printf("Valor da Primeira Nota: ");
    scanf("%d", &PrimeiraNota);
    printf("Valor da Segunda Nota: ");
    scanf("%d", &SegundaNota);
    int Media;
    Media = (PrimeiraNota + SegundaNota)/2;
    printf("Media aritmetica: %d", Media);
    return 0;

}