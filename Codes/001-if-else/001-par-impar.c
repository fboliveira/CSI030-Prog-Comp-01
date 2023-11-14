#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    // PAR: resto da divisao por 2 tem que ser igual a 0.

    // MAIOR que a 10

    if ((numero % 2 == 0) && (numero > 10)) {
            printf("O numero eh par E eh maior que 10.\n");
    } else if (numero % 2 != 0) {
            printf("O numero eh impar.\n");
    } else {
        printf("O numero eh menor do que 10.")
    }

    return 0;
}