/**
 * @file ex2.13.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.13.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    float Nota1, Nota2, NotaOpt, Media;
    
    printf("Nota Av. 1: ");
    scanf("%f", &Nota1);
    printf("Nota Av. 2: ");
    scanf("%f", &Nota2);
    printf("Nota Optativa: ");
    scanf("%f", &NotaOpt);

    if(NotaOpt > Nota1 || NotaOpt > Nota2){
        if (Nota1 > Nota2) Nota1  = NotaOpt;
        else Nota2 = NotaOpt;
    }
    Media = (Nota1 + Nota2) / 2 ;

    printf("Media : %.2f\n", Media);

    if(Media >= 6){
        printf("Aprovado!");
    }else if( Media >= 4){
        printf("Exame.");
    } else {
        printf("Reprovado...");
    }

    return 0;

}