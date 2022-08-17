#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero >= 30 && numero <= 120 ) {
        printf("O numero esta no intervalo [30;120]\n");
    } else {
        printf("O numero nao esta no intervalo [30;120]\n");
    }

    return 0;
}