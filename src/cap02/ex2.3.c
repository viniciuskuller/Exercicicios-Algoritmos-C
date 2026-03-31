/**
 * @file ex2.3.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.3.
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

    if (SegundoNumero < PrimeiroNumero){
        printf("Ordem decrescente: %d >= %d", PrimeiroNumero, SegundoNumero);
        }
    else{
        printf("Ordem decrescente: %d >= %d", SegundoNumero, PrimeiroNumero);
    }

    return 0;

}