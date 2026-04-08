/**
 * @file ex3.14.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int N1, N2, temp, Soma;
    printf("N1: ");
    scanf("%d", &N1);
    printf("N2: ");
    scanf("%d", &N2);

    if (N1 > N2){
        temp = N1;;
        N1 = N2;
        N2 = temp;
    }
    Soma = 0;
    for(int i = N1; i <= N2; i ++){
        Soma += i; 
    }
    printf("Somatorio entre %d e %d: %d", N1, N2, Soma);
    return 0;

}