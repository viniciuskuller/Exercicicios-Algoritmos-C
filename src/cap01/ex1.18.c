#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float DMaior;
    float DMenor;
    printf("Valor da Diagonal Maior: ");
    scanf("%f", &DMaior);
    printf("Valor da Diagonal Menor: ");
    scanf("%f", &DMenor);
    float Area;
    Area = DMaior * DMenor / 2;
    printf("Area = %.2f", Area);
    return 0;
    

}
