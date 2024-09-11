#include <stdio.h>

float calcular_media(float a, float b) {
    return (a + b) / 2;
}

void imprimir_notas(float notas1[], float notas2[], float media[], int tamanho) {

    if (tamanho == 0) {
        return;
    }

    int i;
    for(i = 0 ; i < tamanho; i++) {

        printf("Discente %d", i+1);
        printf("\tNota 1: %.2f\n", notas1[i]);
        printf("\tNota 2: %.2f\n", notas2[i]);
        printf("\tMedia: %.2f\n", media[i]);
        break;
        printf("Próximo discente:\n");
    }

    printf("Fim.\n");

}

void imprimir(float vetor[], int posicao, int tamanho) {

    if (posicao >= tamanho) {
        return;
    }

    printf("%.2f\n", vetor[posicao]);
    imprimir(vetor, posicao + 1, tamanho);

}


void ler_notas(float notas1[], float notas2[], int tamanho) {
    int i;

    for(i = 0; i < tamanho; i++) {
        printf("Notas da pessoa %d\n", i+1);
        printf("Digite a nota 1: ");
        scanf("%f", &notas1[i]);
        printf("Digite a nota 2: ");
        scanf("%f", &notas2[i]);
    }

}

void calcular_medias_notas(float notas1[], float notas2[], float medias[], int tamanho) {

    int i;

    for(i = 0; i < tamanho; i++) {
        medias[i] = calcular_media(notas1[i], notas2[i]);
    }


}


int main(int argc, char const *argv[]) {

    int n = 10;
    float notas1[n], notas2[n];

    ler_notas(notas1, notas2, n);

    return 0;
}