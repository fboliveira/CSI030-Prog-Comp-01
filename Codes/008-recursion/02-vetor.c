#include <stdio.h>

void imprimir_asc(int vetor[], int i, int n) {
    if (i >= n) {
        return;
    }

    printf("%d\n", vetor[i]);
    imprimir_asc(vetor, i + 1, n);
}

void imprimir_desc(int vetor[], int i) {

    if (i < 0) {
        return;
    }

    printf("%d\n", vetor[i]);
    imprimir_desc(vetor, i - 1);

}

void imprimir_iterativa(int vetor[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
}


int main(int argc, char const *argv[]) {

    int v[] = { 5, 4, 8, 1, 3, 7 };
    int n = 6;

    printf("Iterativa: \n");
    imprimir_iterativa(v, n);

    printf("Recursiva - descendente:\n");
    imprimir_desc(v, n - 1);

    printf("Recursiva - ascendente: \n");
    imprimir_asc(v, 0, n);

    return 0;
}