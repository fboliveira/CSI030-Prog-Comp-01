#include <stdio.h>

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, x, soma, n;

    float media;

    soma = 0;
    i = 1;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    while (i <= n) {

        printf("Digite um numero [%d]: ", i);
        scanf("%d", &x);

        if ( x > 0 ) {
            soma = soma + x;
            i++;
        } else {
            printf("Digite um numero maior do que zero.");
        }
    }


    if ( n > 0 ) {
        // media = soma;
        // media = media / n;
        media = (float)soma / n;

        printf("Soma: %d\n", soma);
        printf("Media: %.2f\n", media);
    }

    return 0;
}