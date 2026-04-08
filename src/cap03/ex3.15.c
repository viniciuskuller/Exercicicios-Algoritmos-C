/**
 * @file ex3.15.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.15.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    int N1, fat;
    printf("Numero: ");
    scanf("%d", &N1);
    fat = 1;
    if(N1 > 0){
        for (int i = 1; i <= N1; i++){
        fat *= i;
    }
    printf("%d! = %d", N1, fat);
}   else printf("Nao ha fatorial de numero negativo.");
    return 0;

}