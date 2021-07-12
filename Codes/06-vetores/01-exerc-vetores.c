#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, soma;
    float media;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int v[n];

    // a) leitura do vetor
    for(i = 0; i < n; i++) {
        printf("Digite o valor %d", i + 1);
        scanf("%d", &v[i]);
    }

    // b) calcular e imprimir a media
    // - somar os elementos do vetor
    soma = 0;
    for(i = 0; i < n; i++) {
        soma += v[i];
    }

    media = soma / n;

    printf("Media = %.2f", media);

    // c) Contar os pares e impares:


    // d) indicar se o vetor esta ordenado ou nao:

    return 0;
}
