/**
 * @file ex2.8.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.8.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    float PrimeiroNumero, SegundoNumero, TerceiroNumero, Soma;
    
    printf("N1: ");
    scanf("%f", &PrimeiroNumero);
    printf("N2: ");
    scanf("%f", &SegundoNumero);
    printf("N3: ");
    scanf("%f", &TerceiroNumero);

    if (PrimeiroNumero >= SegundoNumero){
        if(SegundoNumero > TerceiroNumero){
            Soma = PrimeiroNumero + SegundoNumero;
        } else Soma = PrimeiroNumero + TerceiroNumero;
    }
    if (SegundoNumero > PrimeiroNumero){
        if (PrimeiroNumero > TerceiroNumero){
            Soma = PrimeiroNumero + SegundoNumero;
        } else Soma = SegundoNumero + TerceiroNumero;
    }
    if (TerceiroNumero > PrimeiroNumero){
        if(PrimeiroNumero > SegundoNumero){
            Soma = PrimeiroNumero + TerceiroNumero;
        } else Soma = SegundoNumero + TerceiroNumero;
    }
    
    printf("A soma dos dois maiores numeros e %.2f", Soma); 

    return 0;

}