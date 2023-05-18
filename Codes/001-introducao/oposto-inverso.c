#include <stdio.h>

int main() {

    int x, oposto;
    float inverso;

    // Recebemos os valores

    printf("Digite um numero: ");
    scanf("%d", &x);

    // Calculos
    oposto = -x;
    inverso = 1.0 / x;


    // Impressao do resultado
    printf("Oposto = %d\n", oposto);
    printf("Inverso = %f\n", inverso);
    printf("Fracao = 1 / %d\n", x);

    return 0;
}
