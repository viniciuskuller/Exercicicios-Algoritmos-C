#include <stdio.h>
#include <stdlib.h>

int main(void){

    int AnoDeNascimento;
    int AnoAtual;
    printf("Ano de nascimento: ");
    scanf("%d", &AnoDeNascimento);
    printf("Ano Atual: ");
    scanf("%d", &AnoAtual);
    int Idade;
    Idade = AnoAtual - AnoDeNascimento;
    printf("Idade aproximada: %d anos");
    return 0;

}