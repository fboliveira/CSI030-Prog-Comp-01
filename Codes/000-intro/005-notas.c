#include <stdio.h>

int main(int argc, char const *argv[]) {

    int valor;
    int notas50, notas10, notas1;
    int resto;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    // Notas de R$ 50
    notas50 = valor / 50;
    resto = valor % 50;

    // Notas de R$ 10
    notas10 = resto / 10;
    notas1 = resto % 10;

    // Notas R$ 1
    // notas1 = resto;
    // notas1 = resto / 1;
    // resto = resto % 1;

    printf("Resultado:\n");
    printf("Notas de R$ 50 = %d\n", notas50);
    printf("Notas de R$ 10 = %d\n", notas10);
    printf("Notas de R$  1 = %d\n", notas1);

    return 0;
}