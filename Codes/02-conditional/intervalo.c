#include <stdio.h>

int main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verificar se esta no intervalo [30;120]
    if (numero >= 30 && numero <= 120) {
        printf("O numero esta no intervalo [30;120]\n");
    } else {
        printf("O numero nao esta no intervalo.\n");
    }



}