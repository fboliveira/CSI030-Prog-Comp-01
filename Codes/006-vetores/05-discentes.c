#include <stdio.h>

void receber_notas(float notas1[], float notas2[], int tamanho) {
    int i;

    for(i = 0; i < tamanho; i++) {
        printf("Digite as notas da pessoa %d\n", i);
        printf("Nota 1 = ");
        scanf("%f", &notas1[i]);
        printf("Nota 2 = ");
        scanf("%f", &notas2[i]);
    }
}

void calcular_medias(float notas1[], float notas2[], float medias[], int tamanho) {

    int i;

    for(i = 0; i < tamanho; i++) {
        medias[i] = (notas1[i] + notas2[i]) / 2;
    }
}

void imprimir(float notas1[], float notas2[], float medias[], int tamanho) {

    int i;

    for(i = 0; i < tamanho; i++) {
       printf("Aluno %d: \n", i + 1);
       printf(" nota 1: %.2f\n", notas1[i]);
       printf(" nota 2: %.2f\n", notas2[i]);
       printf("  media: %.2f\n", medias[i]);
    }
}


int main(int argc, char const *argv[]) {

    int n = 3;
    float notas1[n];
    float notas2[n];
    float medias[n];

    receber_notas(notas1, notas2, n);
    calcular_medias(notas1, notas2, medias, n);
    imprimir(notas1, notas2, medias, n);

    return 0;
}