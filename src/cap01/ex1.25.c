#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float TFahrenheit;
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &TFahrenheit);
    float TCelsius;
    TCelsius = (TFahrenheit - 32)/1.8;
    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", TFahrenheit, TCelsius);
    return 0;


}