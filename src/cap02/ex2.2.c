/**
 * @file ex2.2.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.2.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int PrimeiroNumero, SegundoNumero;
    printf("Entre com um numero: ");
    scanf("%d", &PrimeiroNumero);
    printf("Entre com outro numero: ");
    scanf("%d", &SegundoNumero);

    if (PrimeiroNumero > SegundoNumero){
        printf("Ordem crescente: %d <= %d", SegundoNumero, PrimeiroNumero);
    }
    else{
        printf("Ordem crescente: %d <= %d", PrimeiroNumero, SegundoNumero);
    }
    return 0;

}