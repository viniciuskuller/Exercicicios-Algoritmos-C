/**
 * @file ex3.16.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.16.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int a = 1;
    int b = 1;

    for(int i = 0; i < 20; i++){
        printf("%d ", a);
        b = b + a;       
        a = b - a;

    }
    return 0;

}