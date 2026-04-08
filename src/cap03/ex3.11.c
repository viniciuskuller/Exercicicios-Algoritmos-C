/**
 * @file ex3.11.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.11.
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

    if( N2 > N1){
          for ( int i = N1 ; i <= N2; i ++ ){
            printf("%d ", i);
        }   
    }   else{
        for( int i = N1; i >= N2; i--){
            printf("%d ", i);
        }

    }
    return 0;

}