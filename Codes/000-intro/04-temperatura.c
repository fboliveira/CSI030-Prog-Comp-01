#include <stdio.h>

int main(int argc, char const *argv[]) {

    float celsius, kelvin, fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = (9 * celsius + 160) / 5;

    printf("Temperatura em Kelvin = %.2f ºK\n", kelvin);
    printf("Temperatura em Fahrenheit = %.2f ºF\n", fahrenheit);


    return 0;
}