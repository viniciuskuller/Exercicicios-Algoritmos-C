/**
 * @file ex2.12.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.12.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int H1, H2;
    int M1, M2;
    int MaisVelho, MaisVelha, MaisNovo, MaisNova;
    int Soma, Multi;
printf("Idade Homem 1: ");
scanf("%d", &H1);
printf("Idade Homem 2: ");
scanf("%d", &H2);
printf("Idade Mulher 1: ");
scanf("%d", &M1);
printf("Idade Mulher 2: ");
scanf("%d", &M2);


    if (H1 - H2 > 0) MaisVelho  = H1, MaisNovo = H2;
    else   MaisVelho = H2, MaisNovo = H1;

    if (M1 - M2 > 0) MaisNova = M2, MaisVelha = M1;
    else     MaisNova = M1, MaisVelha = M2;

    Soma = MaisNova + MaisVelho;
    Multi = MaisNovo * MaisVelha;
    
    printf("Idade homem mais velho + idade mulher mais nova: %d\n", Soma);
    printf("Idade homem mais novo * idade mulher mais velha: %d", Multi);
    
    return 0;

}