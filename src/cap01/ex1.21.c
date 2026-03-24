#include <stdio.h>
#include <stdio.h>

int main(void){

    int Numero;
    int Sucesssor;
    int Antecessor;
    printf("Forneca um numero inteiro: ");
    scanf("%d", &Numero);
    Antecessor = Numero -1;
    Sucesssor = Numero + 1;
    printf("Sucessor de %d: %d\n", Numero, Sucesssor);
    printf("Antecessor de %d: %d", Numero, Antecessor);
    return 0; 


}