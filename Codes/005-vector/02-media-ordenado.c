#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n = 5;
    int numeros[n];
    int i;
    int soma = 0;
    float media;

    printf("Digite os numeros: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcular soma
    for(i = 0; i < n; i++) {
        soma += numeros[i];
    }

    // Calcular media
    media = (float)soma / n;
    printf("Media = %.2f\n", media);

    return 0;
}