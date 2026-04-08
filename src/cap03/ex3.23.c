/**
 * @file ex3.23.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.23.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int N1, N2, N3, N4, N5;
    printf("N1: ");
    scanf("%d", &N1);
    printf("N2: ");
    scanf("%d", &N2);
    printf("N3: ");
    scanf("%d", &N3);
    printf("N4: ");
    scanf("%d", &N4);
    printf("N5: ");
    scanf("%d", &N5);
    int maior = N1;
    if (N2 > maior) maior = N2;
    if (N3 > maior) maior = N3;
    if (N4 > maior) maior = N4;
    if (N5 > maior) maior = N5;
    if(N1 >= 0 && N2 >= 0 && N3>= 0 && N4>= 0 && N5 >= 0){
        for(int i = 1; i <= maior; i++){
        int y = maior - i + 1;
        printf("%04d  ", y);
            for(int j = 1; j <= 5; j++){
                if( N1 >= y && j == 1 ) printf("*");
                 else if(j == 1) printf(" ");
                if( N2 >= y && j == 2 ) printf("*");
                 else if(j == 2) printf(" ");
                if( N3 >= y && j == 3 ) printf("*");
                 else if(j == 3) printf(" ");
                if( N4 >= y && j == 4 ) printf("*");
                 else if(j == 4) printf(" ");
                if( N5 >= y && j == 5 ) printf("*");
                 else if(j == 5) printf(" ");
                
            }printf("\n");
        }
    }   else printf("Forneca apenas numeros positivos.");

    return 0;

}