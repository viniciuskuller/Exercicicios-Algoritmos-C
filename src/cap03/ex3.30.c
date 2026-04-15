/**
 * @file ex3.30.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.30.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    char repetir;
    int N1, N2, div;
    repetir = 'S';

    while (repetir ==  'S'){
        printf("N1: ");
        scanf("%d", &N1);
        printf("N2: ");
        scanf("%d", & N2);

        while (N2 == 0){
            printf("Nao existe divisao inteira por zero!\n");
            printf("Entre novamente com N2: ");
            scanf("%d", &N2);
        }
        div = N1 / N2;
        printf("%d / %d = %d\n", N1, N2, div);
        printf("Voce deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &repetir);
    }
    return 0;

}