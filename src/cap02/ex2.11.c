/**
 * @file ex2.11.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.11.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    int alfa, beta, gama;
    printf("alfa: ");
    scanf("%d", &alfa);
    printf("beta: ");
    scanf("%d", &beta);
    printf("gama: ");
    scanf("%d", &gama);

    if (alfa + gama + beta == 180){
        
        printf("Triangulo ");
        if(alfa >90 || beta > 90 || gama > 90 ) {
            printf("OBTUSO");
        }else if ( alfa == 90 || beta == 90 || gama == 90) {
            printf("RETO");
        }else{
            printf("ACUTANGULO");
        }
        

    } else {
         printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
        }
     return 0;

}