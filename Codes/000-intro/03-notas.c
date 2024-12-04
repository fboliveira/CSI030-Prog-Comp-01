#include <stdio.h>

int main(int argc, char const *argv[]) {

    int valor, n50, n10, n1;

    printf("Digite o valor: ");
    scanf("%d", &valor);


    n50 = valor / 50;
    valor = valor % 50;

    n10 = valor / 10;
    valor = valor % 10;

    n1 = valor / 1; // ????

    printf("Notas de R$ 50 = %d\n", n50);
    printf("Notas de R$ 10 = %d\n", n10);
    printf("Notas de R$ 1 = %d\n", n1);

    return 0;
}