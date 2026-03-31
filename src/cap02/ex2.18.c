/**
 * @file ex2.18.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.18.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    float N1, N2, Calculo;
    char Operacao;

    printf("N1: ");
    scanf("%f", &N1);
    printf("N2: ");
    scanf("%f", &N2);
    printf("Escolha uma operacao de acordo com o menu:\n"
            "\t+) Adicao;\n"
            "\t-) Subtracao;\n"
            "\t*) Multiplicacao;\n"
            "\t/) Divisao;\n");
    scanf(" %c", &Operacao);
    printf("Operacao escolhia: %c\n", Operacao);

    switch(Operacao){
        case '+' :
            Calculo = N1 + N2;
            printf("%.2f %c %.2f = %.2f", N1,  Operacao, N2, Calculo);
            break;
        case '-' :
            Calculo = N1 - N2;
            printf("%.2f %c %.2f = %.2f", N1,  Operacao, N2, Calculo);
            break;
        case '*' :
            Calculo = N1 * N2;
            printf("%.2f %c %.2f = %.2f", N1,  Operacao, N2, Calculo);
            break;
        case '/':
            Calculo = N1 / N2;
            printf("%.2f %c %.2f = %.2f", N1,  Operacao, N2, Calculo);
            break;
        default:
            printf("Opcao invalida!");
    }
   
    return 0;

}