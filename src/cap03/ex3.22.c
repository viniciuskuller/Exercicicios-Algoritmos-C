/**
 * @file ex3.22.c
 * @author Seu nome
 * @brief Arquivo de código fonte da solução do Exercício 3.22.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    int Altura;
    char Desenho;
    char Preenchimento;

    printf("Altura: ");
    scanf(" %d", &Altura);
    printf("Caractere de desenho: ");
    scanf(" %c", &Desenho);
    printf("Caractere de preenchimento: ");
    scanf(" %c", &Preenchimento);

    if  ( Altura > 0){
        for(int i = 1; i <=Altura; i++ ){
            for(int j = 1; j <= Altura; j++){
                if( j == i || j + i == Altura + 1){
                    printf("%c", Desenho);
                } else if( i == 1 || i == Altura ||
                           j == 1 || j == Altura){
                    printf("%c", Desenho);
                }   else {
                    printf("%c", Preenchimento);
                }
            }printf("\n");
        }
    }   else {
        Altura = -Altura;
        for(int i = 1; i <= Altura; i++){
            for(int j = 1; j <= Altura; j++){
                 if( j == i || j + i == Altura + 1){
                    printf("%c", Preenchimento);
                } else if( i == 1 || i == Altura ||
                           j == 1 || j == Altura){
                    printf("%c", Preenchimento);
                }   else {
                    printf("%c", Desenho);
                
            }
            }printf("\n");
        }
    }

    return 0;

}