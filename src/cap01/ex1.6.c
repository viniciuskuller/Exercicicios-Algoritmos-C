#include <stdio.h>
#include <stdlib.h>

int main(void){
    int PrimeiroNumero;
    int SegundoNumero;
    int soma;
    int subtracao;
    int divisao;
    int produto;
    printf("Primeiro numero:");
    scanf("%d", &PrimeiroNumero );
    printf("Segundo Numero:");
    scanf("%d", &SegundoNumero );
    soma = PrimeiroNumero + SegundoNumero;
    subtracao = PrimeiroNumero - SegundoNumero;
    divisao = PrimeiroNumero / SegundoNumero;
    produto = PrimeiroNumero * SegundoNumero; 
    printf( "%d + %d = %d\n", PrimeiroNumero, SegundoNumero, soma );
    printf( "%d - %d = %d\n", PrimeiroNumero, SegundoNumero, subtracao );
    printf("%d * %d = %d\n", PrimeiroNumero, SegundoNumero, produto);
    printf("%d / %d = %d\n", PrimeiroNumero, SegundoNumero, divisao);
    
    return 0;

}