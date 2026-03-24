#include <stdio.h>
#include <stdlib.h>

int main(void){

    float Valor;
    printf("Valor do Produto: ");
    scanf("%f", &Valor);
    float ValorCorrigido;
    ValorCorrigido = Valor * .91;
    printf("Preco de venda com 9%% de desconto: %.2f", ValorCorrigido);
    return 0;


}