#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Numero no intervalo [30; 120]
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 30 && numero <= 120) {
        printf("O numero esta entre 30 e 120.\n");
    } else {
        printf("O numero nao estao no intervalo.\n");
    }

    return 0;
}