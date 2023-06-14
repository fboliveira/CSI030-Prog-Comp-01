#include <stdio.h>

int main(int argc, char const *argv[]) {

    int contador, n;
    // Imprimir [1;n]
    contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Digite um numero maior ou igual a 1.\n");
    }

    while (contador <= n) {
        printf("%d\n", contador);
        // i = i + 1;
        contador++;
    }

    return 0;
}