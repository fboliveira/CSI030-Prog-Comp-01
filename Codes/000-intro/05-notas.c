#include <stdio.h>

int main(int argc, char const *argv[]) {

    int valor, resto;
    int notas50, notas10, notas1;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    notas50 = valor / 50;
    resto = valor % 50;

    notas10 = resto / 10;
    notas1 = resto % 10;

    printf("Notas de R$ 50 = %d\n", notas50);
    printf("Notas de R$ 10 = %d\n", notas10);
    printf("Notas de R$ 1 = %d\n", notas1);

    return 0;
}