/**
 * @file ex2.16.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.16.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int Numero;

    printf("Entre com um numero entre 1 e 3999: ");
    scanf("%d", &Numero);
    
    if (Numero >= 1 && Numero < 4000){
        printf("%d = ", Numero);
    } 
    else printf("Numero incorreto!");

    while (Numero > 0 && Numero < 4000){
        if( Numero >= 1000 && Numero < 4000){
            printf("M");
            Numero -= 1000;

        } else if ( Numero >= 900){
            printf("CM");
            Numero -= 900;

        } else if( Numero >= 500){
            printf("D");
            Numero -= 500;

        } else if( Numero >= 400){
            printf("CD");
            Numero -= 400;

        } else if ( Numero >= 100) {
           printf("C"); 
           Numero -= 100;

        } else if(Numero >= 90){
            printf("XC");
            Numero -= 90;

        } else if ( Numero >= 50){
            printf("L");
            Numero -= 50;

        } else  if ( Numero >= 40){
            printf("XL");
            Numero -= 40;

        } else if ( Numero >= 10){
            printf("X");
            Numero -= 10;

        } else if( Numero == 9){
            printf("IX");
            Numero = 0;

        } else if( Numero >= 5){
            printf("V");
            Numero -= 5;

        } else if ( Numero == 4){
            printf("IV");
            Numero = 0;

        } else if( Numero >= 1){
            printf("I");
            Numero -= 1;
        }
        }       


    return 0;

}