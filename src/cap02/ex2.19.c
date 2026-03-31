/**
 * @file ex2.19.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.19.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main( void ) { 
    float T0, T;
    char Unidade;

    printf("Escolha uma operacao de acordo com o menu:\n"
   " C) Celsius -> Fahrenheit;\n"
    "F) Fahrenheit -> Celsius.\n");
    scanf(" %c", &Unidade);
    printf("Opcao: %c\n", Unidade);
    
    switch (Unidade){
        case 'C':
            printf("Entre com a temperatura em graus Celsius: ");
           scanf("%f", &T0);
            break;
        case 'F':
            printf("Entre com a temperatura em graus Fahrenheit: ");
            scanf("%f", &T0);
            break;
        default:
            printf("Opcao invalida!");
    }
    
     switch (Unidade){
        case 'C':
            T = 1.8 * T0 + 32;
            printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", T0, T);
            break;
        case 'F':
            T = (T0 - 32) / 1.8;
            printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", T0, T);
            break;
    }

    return 0;

}