#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, x, i, pos, neg;
    pos = 0;
    neg = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n) {

        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x == 0) {
            printf("Digite um numero diferente de 0!\n");
            continue;
        }

        if (x > 0) {
            pos++;
        } else {
            neg++;
        }

        i++;

    }

    printf("Positivos = %d\n", pos);
    printf("Negativos = %d\n", neg);

    return 0;
}