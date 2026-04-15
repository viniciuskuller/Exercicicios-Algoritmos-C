/**
 * @file ex3.26.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.26.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int numero;
    float media;
    float soma = 0;
    int i = 0;
    do{
        printf("Entre com um valor: ");
        scanf("%d", &numero);
        if(numero < 0)
            break;
        soma += numero;
        i++;

    }while(numero >= 0);
    if(i > 0) {
        media = soma / i;
    } else media = soma;
    printf("Somatorio: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d", i);

    return 0;

}