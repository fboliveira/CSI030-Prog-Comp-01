#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero <= 0 ) {
        printf("O numero deve ser maior que 0.\n");
    } else if (numero % 2 == 0) {
        printf("O numero eh par.\n");
    } else {
        printf("O numero eh impar.\n");
    }

    return 0;
}