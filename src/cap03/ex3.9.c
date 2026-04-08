/**
 * @file ex3.9.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.9.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int N1, Resultado;
    printf("Tabuada do Numero: ");
    scanf("%d", &N1);

    for( int i = 0; i <=10; i++){
        Resultado = N1 * i;
        printf("%d x %d = %d\n", N1, i, Resultado);
    }

    return 0;

}