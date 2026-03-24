#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int DMaior;
    int DMenor;
    printf("Valor da Diagonal Maior: ");
    scanf("%d", &DMaior);
    printf("Valor da Diagonal Menor: ");
    scanf("%d", &DMenor);
    int Area;
    Area = DMaior * DMenor / 2;
    printf("Area = %d", Area);
    return 0;


}