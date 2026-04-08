/**
 * @file ex3.20.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.20.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
 
     for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("*");
        }
    printf("\n");
    }
    
    printf("\n");

    for (int i = 0; i < 5; i++) {        
        for (int j = 0; j < 5; j++) {    
            
            if (i + j < 4) {
                printf(" ");
            } else {
                printf("*");
            }

        }
        printf("\n");
    }
      
    printf("\n");

    for (int i = 0; i < 5; i++) {        
        for (int j = 0; j < 5; j++) {    
            
            if (i - j > 0) {
                printf(" ");
            } else {
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;

}