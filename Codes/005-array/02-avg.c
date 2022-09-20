#include <stdio.h>


void ler_vetor(int v[], int tamanho) {
    int i;
    for(i = 0; i < tamanho; i++) {
        printf("Digite o valor %d\n", i);
        scanf("%d", &v[i]);
    }

}

void imprimir(int v[], int tamanho) {

    int i;

    for (i = 0; i < tamanho; i++) {
        printf("[%d] = %d\n", i, v[i]);
    }
}

float calcular_media_vetor(int v[], int tamanho) {

    int i;
    int soma = 0;
    float media;

    for (i = 0; i < tamanho; i++) {
        soma += v[i];
    }

    media = (float)soma / tamanho;

    return media;

}



int main(int argc, char const *argv[]) {

    int n;
    int i;
    float media;
    
    printf("Digite a quantidade de numeros desejada: ");
    scanf("%d", &n);

    int vetor[n];

    ler_vetor(vetor, n);
    imprimir(vetor, n);
    media = calcular_media_vetor(vetor, n);

    printf("Valores abaixo da media = %.2f\n", media);

    for (i = 0; i < n; i++) {

        if ( vetor[i] < media ) {
            printf("[%d] = %d\n", i, vetor[i]);
        }
    }

    return 0;
}