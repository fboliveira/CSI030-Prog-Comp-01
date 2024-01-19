#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;
    int i;

    int soma = 0;
    float media;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);
    int vetor[n];

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++) {
        soma = soma + vetor[i];
    }

    media = (float)soma / n;

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}