#include <stdio.h>

int main()
{
    int n, i, x, soma = 0, maior, menor;
    float media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    printf("Digite os numeros:");
    for(i = 1; i <= n; i++) {

        scanf("%d", &x);

        if ( x > maior || i == 1 ) {
            maior = x;
        }

        if ( x < menor || i == 1 ) {
            menor = x;
        }

        soma += x;

    }

    media = (float)soma / n;

    printf("Maior valor = %d\n", maior);
    printf("Menor valor = %d\n", menor);
    printf("Media = %.2f\n", media);
    
    return 0;
}
