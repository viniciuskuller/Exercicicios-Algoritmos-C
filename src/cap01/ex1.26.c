#include <stdio.h>
#include <stdlib.h>

int main(void) { 

    float TCelsius;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &TCelsius);
    float TFahrenheit;
    TFahrenheit = TCelsius * 1.8 + 32;
    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", TCelsius, TFahrenheit);
    return 0;

}