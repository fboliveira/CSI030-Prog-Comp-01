#include <stdio.h>

void ler_vetor(int vetor[], int n) {
    int i;

    printf("Digite os valores:");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
}

int somar_vetor(int vetor[], int n) {
    int i, soma;

    soma = 0;

    for(i = 0; i < n; i++) {
        soma += vetor[i];
    }

    return soma;

}

int main(int argc, char const *argv[]) {

    int n = 3;
    int vetor[n];
    int soma;
    float media;

    // Ler os valores
    ler_vetor(vetor, n);
    // Soma
    soma = somar_vetor(vetor, n);
    // Calcular a media
    media = (float)soma / n;

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    return 0;
}