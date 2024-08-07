#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    int numero;
    int lado;
    float pi = 3.14;
    float perimetro;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero == 1 || numero == 2) {

        printf("Digite o lado do quadrado: ");
        scanf("%d", &lado);

        // Calcular ...
        perimetro = pi * lado;
        printf("Perimetro = %.2f\n", perimetro);
        


    } else if ( numero => 3 && numero <= 5 ) {

        printf("Digite o lado do quadrado: ");
        scanf("%d", &lado);

        // Calcular ...

    } else {

        printf("Digite o lado do triangulo: ");
        scanf("%d", &lado);

        // Calcular ...

    }

    return 0;
}