#include <stdio.h>

void ler_notas(float nota1[], float nota2[], int n) {

    int i;
    for(i = 0; i < n; i++) {

        printf("Discente: %d\n", i + 1);
        printf("Nota 1: ");
        scanf("%f", &nota1[i]);

        printf("Nota 2: ");
        scanf("%f", &nota2[i]);

    }
}

void calcular_medias(float nota1[], float nota2[], float medias[], int n) {
    
    int i;
    for(i = 0; i < n; i++) {
        medias[i] = (nota1[i] + nota2[i]) / 2;
    }
}

void imprimir_resultado(float nota1[], float nota2[], float medias[], int n) {
    
    int i;
    for(i = 0; i < n; i++) {
        printf("Discente: %d\n", i + 1);
        printf("\tNota 1: %.2f\n", nota1[i]);
        printf("\tNota 2: %.2f\n", nota2[i]);
        printf("\tMedia: %.2f\n", medias[i]);
    }
}

int main(int argc, char const *argv[]) {

    int n = 3;
    float nota1[n], nota2[n], medias[n];

    ler_notas(nota1, nota2, n);

    // Calcular medias
    calcular_medias(nota1, nota2, medias, n);

    // Imprimir resultado:
    imprimir_resultado(nota1, nota2, medias, n);

    return 0;
}