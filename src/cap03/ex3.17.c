/**
 * @file ex3.17.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.17.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int a = 1;
    int b = 1;
    int Termo;
    printf("Termo desejado: ");
    scanf("%d", &Termo);


    for(int i = 0; i < Termo; i++){
      
        b = b + a;       
        a = b - a;

    }
      printf("Fibonacci de %d e %d", Termo, a);

   
   return 0;

}