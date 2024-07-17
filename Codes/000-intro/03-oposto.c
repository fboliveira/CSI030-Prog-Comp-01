#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x;
    int oposto;
    float inverso;

    printf("Digite um numero: ");
    scanf("%d", &x);

    oposto = -x;
    printf("Oposto = %d\n", oposto);

    inverso = 1.0 / x;
    printf("Inverso = %.2f\n", inverso);

    return 0;
}