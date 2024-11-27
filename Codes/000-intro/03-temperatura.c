#include <stdio.h>

int main() {

    float celsius, kelvin, fahreinheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahreinheit = (9 * celsius + 160) / 5;

    printf("Kelvin = %.2f\n", kelvin);
    printf("Fahreinheit = %.2f\n", fahreinheit);
    

    return 0;
}