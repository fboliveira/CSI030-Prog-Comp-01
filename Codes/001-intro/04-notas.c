#include <stdio.h>

int main(int argc, char const *argv[])
{

    int valor, n100, n50, n10, resto;

    printf("Digite um valor:");
    scanf("%d", &valor);

    if (valor <= 0)
    {
        printf("O valor deve ser maior que zero!\n");
    }
    else
    {
        // Quantidade de notas
        n100 = valor / 100;
        // Resto -> sobra para a proxima nota
        resto = valor % 100;

        n50 = resto / 50;
        resto = resto % 50;

        n10 = resto / 10;
        resto = resto % 10;

        printf("Valor de saque: R$ %d\n", valor);
        printf("Notas de R$ 100: %d\n", n100);
        printf("Notas de R$ 50: %d\n", n50);
        printf("Notas de R$ 10: %d\n", n10);
        printf("Resto: %d", resto);
    }

    return 0;
}