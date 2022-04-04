#include <stdio.h>

int main(int argc, char const *argv[])
{

    int valor, notas50, notas10, notas1, resto;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    // Notas de R$50
    notas50 = valor / 50;
    resto = valor % 50;

    // Notas de R$ 10
    notas10 = resto / 10;
    resto = resto % 10;

    // Notas de R$ 1
    notas1 = resto;

    printf("Notas de R$ 50: %d\n", notas50);
    printf("Notas de R$ 10: %d\n", notas10);
    printf("Notas de R$  1: %d\n", notas1);

}