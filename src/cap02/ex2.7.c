/**
 * @file ex2.7.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.7.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float PrimeiroNumero, SegundoNumero;
    printf("Entre com um numero: ");
    scanf("%f", &PrimeiroNumero);
    printf("Entre com outro numero: ");
    scanf("%f", & SegundoNumero);
    if (PrimeiroNumero + SegundoNumero > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", PrimeiroNumero, SegundoNumero);

    } else {
        printf("A subtracao entre %.2f e %.2f e igual a ", PrimeiroNumero, SegundoNumero);
        PrimeiroNumero = PrimeiroNumero - SegundoNumero;
        printf("%.2f", PrimeiroNumero);
    }
    


    return 0;

}