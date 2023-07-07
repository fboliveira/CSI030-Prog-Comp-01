#include <stdio.h>



void somar(int x) {
    x = x * 5;
}

void somar_e_alterar(int *x) {
    *x = 5 * (*x);
}

int main(int argc, char const *argv[]) {

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Valor digitado: %d\n", n);

    somar(n);
    printf("Resultado 1: %d\n", n);

    somar_e_alterar(&n);
    printf("Resultado 2: %d\n", n);

    return 0;
}