/**
 * @file ex3.27.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.27.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int numero, maior, menor;
    int i = 0;
    do{
        printf("Entre com um valor: ");
        scanf("%d", &numero);
        if(numero < 0 && i == 0){
            menor = 0;
            maior = 0;
        } 
        if ( numero < 0){
            break;

        }
        if(i == 0){
            maior = numero;
            menor = numero;
        }
        if (numero > maior){
            maior = numero;
        } else if(numero < menor){
            menor = numero;
        }
        i++;
    } while(numero >= 0);
    printf("Menor numero: %d\n", menor);
    printf("Maior numero: %d", maior);

    return 0;

}