#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int Altura;
    int Largura;
    int Perimetro;
    int Area;
    
    printf("Valor da largura: ");
    scanf("%d", &Largura);
    printf("Valor da altura: ");
    scanf("%d", &Altura);
    //Operações

    
    Perimetro = (2 * Altura) + ( 2 * Largura );
    Area = Altura * Largura;
    printf("Perimetro = %d\n", Perimetro);
    printf( "Area = %d", Area );
    return 0;

}