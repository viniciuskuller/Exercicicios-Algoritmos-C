/**
 * @file ex3.29.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.29.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    float saldo;
    float alteracao;
    int operacao;
    printf("Saldo Inicial: ");
    scanf("%f", &saldo);
    printf("Operacoes:\n");
    printf("\t1) Deposito;\n");
    printf("\t2) Saque.\n");
    printf("\t3) Fim.\n");

    while (operacao != 3){
        printf("Operacao desejada: ");
        scanf("%d", &operacao);
        if (operacao == 1){
            printf("Valor a depositar: ");
            scanf("%f", &alteracao);
            saldo += alteracao;
            continue; 
        } else if (operacao == 2 ){
            printf("Valor a sacar: ");
            scanf("%f", &alteracao);
            saldo -= alteracao;
            continue;
        } else if (operacao != 3){
            printf("Operacao invalida\n");
        }

    }
    if(saldo >= 0){
        printf("Saldo final: R$%.2f\n", saldo);
    }   else {
        saldo *= -1;
        printf("Saldo final: -R$%.2f\n", saldo);
        saldo *= -1;
    }
        if (saldo > 0){
        printf("Conta preferencial.");
    } else if (saldo < 0){
        printf("Conta devedora.");
    } else printf("Sem saldo.");
    return 0;

}