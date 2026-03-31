/**
 * @file ex2.1.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.1.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int Numero;

    printf("Entre com um numero: ");
    scanf("%d", &Numero);

    if ( Numero % 2 == 0) {
        printf("O numero %d e par.", Numero);
    }
    else {
        printf("O numero %d e impar.",Numero);
    }
    return 0;

}