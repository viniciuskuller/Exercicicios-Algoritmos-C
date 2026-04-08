/**
 * @file ex3.8.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int N1;
    printf("Forneca um numero menor ou igual a zero: ");
    scanf("%d", &N1);
    if ( N1 <= 0){
        for( int i = 0; i >= N1; i--){
            printf("%d ", i);
        }
    } else printf("Valor incorreto (positivo)");
    return 0;

}