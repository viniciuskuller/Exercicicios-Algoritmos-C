/**
 * @file ex2.10.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.10.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {
     
    int a, b , c, Modulo, LadosIguais;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (a - b >= 0){
    Modulo = a - b;
    } else{
        Modulo = (a - b) * -1;
    }
    
    if (Modulo < c && c < a + b ||
         Modulo < b && b < a + c ||
         Modulo < a  && a < b + c) {
        printf("triangulo ");
        if(a == b && b == c) {
            LadosIguais = 3;
            printf("EQUILATERO");
        }
        if( (a  == b || a == c || b == c) && LadosIguais != 3){
            printf("ISOCELES");
        } 
        if( a =! b && a != c && b != c){
            printf("ESCALENO");
        }     
    } else  {
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    return 0;

}