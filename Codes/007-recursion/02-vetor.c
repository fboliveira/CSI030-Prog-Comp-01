#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int n) {
    return rand() % n;
}

void shuffle(int vetor[], int n) {
    int aux, i, j, k;

    for(i = 0; i < n; i++) {
        j = aleatorio(n);
        do {
            k = aleatorio(n);
        } while (j == k);

        aux = vetor[j];
        vetor[j] = vetor[k];
        vetor[k] = aux;
    }
}

void preencher_vetor(int vetor[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }
    shuffle(vetor, n);
}

void imprimir_recursiva(int vetor[], int n, int i) {

    if (i < n) {
        printf("%d  ", vetor[i]);
        imprimir_recursiva(vetor, n, i + 1);
    }

}

void imprimir_recursiva_desc(int vetor[], int n) {

    if (n >= 1) {
        printf("%d  ", vetor[n - 1]);
        imprimir_recursiva_desc(vetor, n - 1);
    }


}


void imprimir_iterativo(int vetor[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d  ", vetor[i]);
    }

    printf("\n\n");
}

int main(int argc, char const *argv[]) {

    srand(time(NULL));

    int n = 10;
    int vetor[n];

    preencher_vetor(vetor, n);
    printf("Impressão iterativa:\n ");
    imprimir_iterativo(vetor, n);
    printf("\n\nImpressão recursiva - ascendente:\n ");
    imprimir_recursiva(vetor, n, 0);
    printf("\n\nImpressão recursiva - descendente:\n ");
    imprimir_recursiva_desc(vetor, n);

    printf("\n\n");

    return 0;
}