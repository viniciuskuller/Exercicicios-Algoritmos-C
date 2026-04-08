/**
 * @file ex3.12.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.12.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int N1, N2, temp;
    printf("N1: ");
    scanf("%d", &N1);
    printf("N2: ");
    scanf("%d", &N2);
    if (N1 > N2){
        temp = N1;
        N1 = N2;
        N2 = temp;
    }
    int Pares = 0;
    for (int i = N1; i <= N2; i++ ){
        
        if ( i % 2 == 0)
             Pares ++;
    }
    printf("Numeros pares entre %d e %d: %d", N1, N2, Pares);
   return 0;

}