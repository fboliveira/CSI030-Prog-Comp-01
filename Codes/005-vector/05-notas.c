#include <stdio.h>

void ler_notas(float nota1[], 
    float nota2[], int n) {

    int i;

    for(i = 0; i < n; i ++) {
        printf("Discente: %d\n", i + 1);
        scanf("%f", &nota1[i]);
        scanf("%f", &nota2[i]);
    }

}

void calcular_media(float nota1[],
    float nota2[], float media[],
    int n) {

    int i;

    for(i = 0; i < n; i++) {
        media[i] = (nota1[i] + nota2[i]) / 2;
    }

}

void imprimir_resultado(float nota1[],
    float nota2[], float media[],
    int n) {

    int i;

    for(i = 0; i < n; i++) {
        printf("Discente: %d\n", i+1);
        printf("\tNota 1: %.2f\n", nota1[i]);
        printf("\tNota 2: %.2f\n", nota2[i]);
        printf("\tMedia: %.2f\n", media[i]);
    }
}

int main(int argc, char const *argv[]) {

    int n = 10;
    float nota1[n], nota2[n], media[n];

    ler_notas(nota1, nota2, n);

    // Calcular medias
    calcular_media(nota1, nota2, media, n);

    // Imprimir o resultado
    imprimir_resultado(nota1, nota2, media, n);

    return 0;
}