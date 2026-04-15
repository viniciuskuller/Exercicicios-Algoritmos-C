/**
 * @file ex3.25.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.25.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int Idade, Maior50, Menor21;
    Maior50 = 0;
    Menor21 = 0;


    do{
        int i = 1;
        printf("Idade da pessoa %02d: ", i);
        scanf("%d", &Idade);
        if(Idade < 21 && Idade >=0){
            Menor21 ++;
        } else if(Idade > 50){
            Maior50 ++;
        }
        i++;
    }   while (Idade >= 0);
    printf("Total de pessoas menores de 21 anos: %d\n", Menor21);
    printf("Total de pessoas com mais de 50 anos: %d", Maior50);

    return 0;

}