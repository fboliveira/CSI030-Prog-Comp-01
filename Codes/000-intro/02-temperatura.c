#include <stdio.h>

int main(int argc, char const *argv[]) {

    float celsius, kelvin, fahrenheit;

    printf("Digite a temperatura em C:");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = (9 * celsius + 160) / 5;

    printf("Kelvin = %.2f\n", kelvin);
    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}