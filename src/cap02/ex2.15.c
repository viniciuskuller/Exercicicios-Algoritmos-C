/**
 * @file ex2.15.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int Idade;

    printf("Entre com sua idade: ");
    scanf("%d", &Idade);

    if(Idade < 16) {
        printf("Nao eleitor.");
    } else if(Idade <18 || Idade > 65){
        printf("Eleitor facultativo.");
    }
    else printf("Eleitor obrigatorio.");

    return 0;

}