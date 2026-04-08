/**
 * @file ex3.24.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.24.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    float Nota, Soma, Media;
    int i;
    Soma = 0;
    for (i = 1; i <=10; i++){
        printf("Nota %02d: ", i);
        scanf("%f",&Nota );
        Soma += Nota;
    }
    Media = Soma / i;
    printf("A media aritmetica das dez notas e: %.2f", Media);
    return 0;

}