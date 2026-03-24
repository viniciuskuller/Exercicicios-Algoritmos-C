#include <stdio.h>
#include <stdio.h>

int main(void) {

    int Base;
    int Altura;
    printf("Valor da Base: ");
    scanf("%d", &Base);
    printf("Valor da Altura: ");
    scanf("%d", &Altura);
    int Area;
    Area = ( Base * Altura)/2;
    printf("Area = %d", Area);
    return 0; 

}