/**
 * @file ex3.21.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.21.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int Altura;
    printf("Altura: ");
    scanf("%d", &Altura);
    if( Altura > 0){
        for (int i = 1; i <= Altura; i++){
        for(int j = 1; j <= Altura - i; j++){
             printf(" ");     
        }
        for(int j = 1; j <= (2*i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
    }   else {
       for (int i = -Altura; i >= 1; i--) {
            for (int j = 1; j <= -Altura + i -1; j++) {

                if (j < -Altura - i + 1 ) {
                    printf(" ");
                } else {
                    printf("*");
                }

        
        }printf("\n");
    }}
    return 0;

}