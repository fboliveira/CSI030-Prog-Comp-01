#include <stdio.h>
#include <math.h>

float calcular_delta(float a, float b, float c) {
    return pow(b, 2) - 4 * a * c; 
}

float calcular_raiz(float a, float b, float delta, int somar) {

    float resultado = - b;
    float raiz_delta = sqrt(delta);

    if (somar == 1) { 
        // Calcular X1 -> +
        resultado += raiz_delta;
    } else {
        // Calcular X2 -> -
        resultado -= raiz_delta;
    }

    resultado = resultado / ( 2.0 * a );
    return resultado;

}

int main(int argc, char const *argv[]) {

    float a, b, c, delta, raiz_x1, raiz_x2;

    printf("Digite os valores de A, B e C: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = calcular_delta(a, b, c);
    printf("Delta = %.2f\n", delta);

    if ( delta > 0 ) {
        printf("Existem duas raizes reais\n");
        raiz_x1 = calcular_raiz(a, b, delta, 1);
        raiz_x2 = calcular_raiz(a, b, delta, 0);

        printf("X1 = %.2f\n", raiz_x1);
        printf("X2 = %.2f\n", raiz_x2);

    } else if ( delta == 0 ) {
        printf("Existe apenas uma raiz real (X1 == X2)\n");
        raiz_x1 = calcular_raiz(a, b, delta, 1);

        printf("X1 == X2 = %.2f\n", raiz_x1);

    } else {
        printf("Nao existem raizes reais para a equacao!\n");
    }

    return 0;
}