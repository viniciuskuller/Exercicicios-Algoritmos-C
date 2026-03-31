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
     
    float a, b , c, Modulo;
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    if (a - b >= 0){
    Modulo = a - b;
    } else{
        Modulo = (a - b) * -1;
    }
    
    if (Modulo < c && c < a + b &&
         Modulo < b && b < a + c &&
         Modulo < a  && a < b + c) {
        printf("Triangulo ");
        
        if(a == b && b == c) {
            printf("EQUILATERO");
        }
        else if( (a  == b || a == c || b == c) ){
            printf("ISOSCELES");
        } 
         else {
            printf("ESCALENO");
        }     
    } else  {
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    return 0;

}