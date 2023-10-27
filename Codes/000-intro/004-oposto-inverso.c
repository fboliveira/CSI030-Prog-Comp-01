#include <stdio.h>




int main() {

    int numero;
    int oposto;
    float inverso;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    oposto = -numero;
    inverso = 1.0 / numero;

    printf("Oposto: %d\n", oposto);
    printf("Inverso: %.2f\n", inverso);

    return 0;
}