#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int SegundosBrutos;
    printf("Quantidade de segundos: ");
    scanf("%d", &SegundosBrutos);

    int Horas;
    int Minutos;
    int Segundos;
    int Resto;
    Horas = SegundosBrutos / 3600;
    Resto = SegundosBrutos % 3600;
    Minutos = Resto /60;
    Segundos = Resto % 60 ;
    printf("%d segundo(s) correspondem a %d hora(s), %d minuto(s) e %d segundos(s)", SegundosBrutos, Horas, Minutos, Segundos);
    return 0;
    


}

