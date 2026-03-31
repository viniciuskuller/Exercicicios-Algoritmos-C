/**
 * @file ex2.6.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.6.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float Numero;
    printf("Entre com um valor: ");
    scanf("%f", &Numero);
    if( Numero > 20) {
      printf("A metade de %.2f e ", Numero);
        Numero = Numero / 2;
        printf("%.2f", Numero);
    } else {
    printf("O triplo de %.2f e ", Numero);
    Numero = Numero * 3;
    printf("%.2f", Numero);
    }

    return 0;

}