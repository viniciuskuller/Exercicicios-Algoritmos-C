/**
 * @file ex3.28.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.28.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    float media, peso, max;
    float soma = 0.0f;
    int i = 1;
    int pessoa = 0;
    do{
        
        printf("Entre com o peso da pessoa %02d: ", i);
        scanf("%f", &peso);
        if( i == 1){
            max = peso;
            
        }  
        if (i == 1 && peso < 0){
            soma = 0.0f;
            max = 0.0f;
        }   else if ( peso < 0){
            break;
        }
        if ( peso > max){
            max = peso;
        }
        if(peso > 60.0f){
            soma += peso;
            pessoa++;
        }
        
        i++;

    } while( peso > 0.0f );
    if( i != 1 && pessoa > 0){
        media =  soma / pessoa;
    } else media = 0;
    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg", max);
    return 0;

}