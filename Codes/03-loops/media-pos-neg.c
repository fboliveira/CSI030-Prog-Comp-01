#include <stdio.h>

int main() {

    int x, n, pos, neg, soma;
    float media, porc_pos, porc_neg;

    n = 0;
    pos = 0;
    neg = 0;
    soma = 0;

    do {

        printf("Digite um valor: ");
        scanf("%d", &x);

        if ( x != 0 ) {
            n++;
            soma = soma + x;

            if (x > 0) {
                pos++;
            } else {
                neg++;
            }

        }
    } while (x != 0);

    if ( n > 0 ) {
        media = (float)soma / n;
        porc_pos = (float)pos / n;
        porc_neg = (float)neg / n;

        printf("Media = %.2f\n", media);
        printf("Positivos = %d\n", pos);
        printf("Negativos = %d\n", neg);

        printf("%% positivos = %.2f\n", porc_pos);
        printf("%% negativos = %.2f\n", porc_neg);

    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}