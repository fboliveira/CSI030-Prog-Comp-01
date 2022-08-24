#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[]) {

    int n;    
    int i;
    int numero;

    int maior;
    int menor;

    int soma = 0;
    float media;

    maior = INT_MIN;
    menor = INT_MAX;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if ( numero > maior ) {
            maior = numero;
        }

        if ( numero < menor ) {
            menor = numero;
        }

        soma += numero;
    }

    media = (float)soma / n;

    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}