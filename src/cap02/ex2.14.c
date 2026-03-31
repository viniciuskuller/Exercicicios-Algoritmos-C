/**
 * @file ex2.14.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.14.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    float Peso, Altura, IMC;
    printf("Entre com seu peso em quilogramas: ");
    scanf("%f", &Peso);
    printf("Entre com sua altura em metros: ");
    scanf("%f", &Altura);

    IMC = Peso / (Altura * Altura);
    printf("IMC: %.2f\n", IMC);

    if ( IMC < 17) {
        printf("Voce esta muito abaixo do peso ideal!");
    } else if(IMC < 18.5) {
        printf("Voce esta abaixo do peso ideal!");
    }else if(IMC < 25) {
        printf("Parabens! Voce esta em seu peso ideal!");
    } else if (IMC < 30) {
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!");
    } else if (IMC < 35) {
        printf("Cuidado! Obesidade grau I!");
    } else if (IMC < 40) {
        printf("Cuidado! Obesidade grau II!");
    } 
    else printf("Muito cuidado!!! Obesidade grau  III!");
      
    return 0;

}