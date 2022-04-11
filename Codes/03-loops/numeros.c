#include <stdio.h>

int main() {

    int n, i, x, soma, maior, menor;
    float media;

    soma = 0;
    maior = -999999;
    menor = 999999;

    printf("Digite a quantidade de numeros:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if ( x > maior ) {
            maior = x;
        }

        if ( x < menor ) {
            menor = x;
        }

        soma = soma + x; // soma += x;

    }

    media = ((float)soma) / n;

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    printf("Media = %.2f\n\n", media);

}