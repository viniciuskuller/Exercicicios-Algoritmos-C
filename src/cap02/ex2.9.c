/**
 * @file ex2.9.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int Lados;
    float Medida;
    printf("Entre com a quantidade de lados: ");
    scanf("%d", &Lados);
    printf("Entre com a medida do lado: ");
    scanf("%f", &Medida);

    if (Lados == 3){
        Medida = Medida * 3;
        printf("TRIANGULO de perimetro %.2f", Medida);

    }
    if (Lados == 4){
        Medida = Medida * Medida;
        printf("QUADRADO de area %.2f", Medida);
    }
    if (Lados == 5 ){
        printf("PENTAGONO");
    } 
    if (Lados < 3 || Lados > 5){
        printf("Poligono nao identificado");
    }
 
    return 0;

}