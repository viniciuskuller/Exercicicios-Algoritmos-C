/**
 * @file ex3.13.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.13.
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

    if ( N1 > N2){
        temp = N1;
        N1 = N2;
        N2 = temp;
    }
    int Pares, Mult3, Mult4;
    Pares = 0;
    Mult3 = 0;
    Mult4 = 0;

    for ( int i = N1; i <= N2; i++){
        if ( i % 2 == 0 ){
            Pares ++;
        }   
        if ( i % 3 == 0){
            Mult3 ++;
        }
        if ( i % 4 == 0){
            Mult4 ++;
        }
    }
    printf("Multiplos de 2: %d\n", Pares);
    printf("Multiplos de 3: %d\n", Mult3);
    printf("Multiplos de 4: %d", Mult4);

    return 0;

}