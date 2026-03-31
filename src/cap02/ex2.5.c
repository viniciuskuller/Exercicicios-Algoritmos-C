/**
 * @file ex2.5.c
 * @author Vinícius Faustino
 * @brief Arquivo de código fonte da solução do Exercício 2.5.
 * 
 * @copyright Copyright (c) 20__
 */

#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int PrimeiroNumero, SegundoNumero, TerceiroNumero;
    
    printf("N1: ");
    scanf("%d", &PrimeiroNumero);
    printf("N2: ");
    scanf("%d", &SegundoNumero);
    printf("N3: ");
    scanf("%d", &TerceiroNumero);
    if (PrimeiroNumero <= SegundoNumero && PrimeiroNumero <= TerceiroNumero){
            if (SegundoNumero <= TerceiroNumero){
                printf("%d >= %d >= %d", TerceiroNumero, SegundoNumero, PrimeiroNumero);
          } 
           else {
               printf("%d >= %d >= %d", SegundoNumero, TerceiroNumero, PrimeiroNumero); 
            }
    }
    if (SegundoNumero < PrimeiroNumero && TerceiroNumero >= SegundoNumero){
            if(PrimeiroNumero <= TerceiroNumero){
                printf("%d >= %d >= %d", TerceiroNumero, PrimeiroNumero, SegundoNumero );
            }
            else{
                printf("%d >= %d >= %d", PrimeiroNumero, TerceiroNumero, SegundoNumero);
            }
           
     } 
    
    if (TerceiroNumero < SegundoNumero && TerceiroNumero < PrimeiroNumero ) {
        if (PrimeiroNumero > SegundoNumero) {          
             printf("%d >= %d >= %d", PrimeiroNumero, SegundoNumero, TerceiroNumero);
    } 
    else {
        printf("%d >= %d >= %d", SegundoNumero, PrimeiroNumero, TerceiroNumero);
    }
}
    return 0;

}