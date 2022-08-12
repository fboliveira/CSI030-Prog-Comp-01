

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x;
    int oposto;
    float inverso;

    // Entrada
    printf("Digite um numero: ");
    scanf("%d", &x);

    // Processamento
    oposto = -x;
    inverso = 1.0 / (float)x;

    // Resultado - saida
    printf("Oposto = %d\n", oposto);
    printf("Inverso = %.2f\n", inverso);

    return 0;
}