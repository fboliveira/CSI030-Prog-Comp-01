#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 30 && numero <= 120) {
        printf("O numero esta no intervalo.\n");
    } else {
        printf("O numero nao esta no intervalo.\n");
    }

    return 0;
}