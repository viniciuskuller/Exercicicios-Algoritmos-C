/**
 * @file ex2.17.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.17.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    int Numero;
    printf("Entre com o valor inteiro: ");
    scanf("%d", &Numero);

    switch (Numero){
        case (2) :
            Numero = 2;
            printf("O valor fornecido foi %d.", Numero);
            break;
        case (4):
            Numero = 4;
            printf("O valor fornecido foi %d.", Numero);
            break;
        case(6):
            Numero = 6;
            printf("O valor fornecido foi %d.", Numero);
            break;
        default:
            printf("Valor invalido.");

        }
    return 0;
    }
