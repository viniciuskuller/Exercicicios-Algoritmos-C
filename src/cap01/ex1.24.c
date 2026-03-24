#include <stdio.h>
#include <stdlib.h>

int main(void){

    float ValorHora;
    float Horas;
    float DescontoINSS;
    
    printf("Valor por Hora: ");
    scanf("%f", &ValorHora);
    printf("Horas Semanais: ");
    scanf("%f", &Horas);
    printf("Valor de desconto do INSS: ");
    scanf("%f", &DescontoINSS);
    float SalarioLiquido;
    SalarioLiquido = ValorHora * Horas * (1- DescontoINSS/100);
    printf("Salario Liquido: %.2f", SalarioLiquido);
    return 0;

}