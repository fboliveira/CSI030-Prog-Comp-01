#include <stdio.h>

// Vetores: as passagens são SEMPRE por REFERENCIA
void ler_valores(int vetor[], int tam) {
    int i;
    for(i = 0; i < tam; i++) {
        printf("Digite o valor: ");
        scanf("%d", &vetor[i]);
    }    
}

int somar_vetor(int vetor[], int tam) {
    int i, soma = 0;

    for(i = 0; i < tam; i++) {
        soma = soma + vetor[i];
    }

    return soma;
}

float calcular_media_vetor(int vetor[], int tam) {
    int soma;
    soma = somar_vetor(vetor, tam);

    return (float)soma / tam;
}

void imprimir_valores_abaixo_media(int vetor[], int tam) {

    int i;
    float media = calcular_media_vetor(vetor, tam);

    for(i = 0; i < tam; i++) {
        if ( vetor[i] < media ) {
            printf("[%d] = %d\n", i, vetor[i]);
        }
    }

}

void imprimir_vetor(int vetor[], int tam) {

    int i;

    for(i = 0; i < tam; i++) {
        printf("[%d] = %d\n", i, vetor[i]);
    }

}

// Refactoring //
int main(int argc, char const *argv[]) {

    int n, soma;
    float media;

    soma = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int numeros[n];

    // Ler o valores
    ler_valores(numeros, n);

    imprimir_vetor(numeros, n);

    // Calcular a soma e a media
    soma = somar_vetor(numeros, n);    
    media = calcular_media_vetor(numeros, n);

    printf("Soma = %d\n", soma);
    printf("Media = %.2f\n", media);

    imprimir_vetor(numeros, n);

    // Imprimir valores abaixo da media
    printf("Valores que estao abaixo da media: \n");
    imprimir_valores_abaixo_media(numeros, n);

    return 0;
}