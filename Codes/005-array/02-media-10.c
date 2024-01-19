#include <stdio.h>

int main(int argc, char const *argv[]) {

    int vetor[10];
    int i;

    int soma = 0;
    float media;

    printf("Digite os valores: ");
    for(i = 0; i <= 10 - 1; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        soma = soma + vetor[i];
    }

    media = (float)soma / 10.0;

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}