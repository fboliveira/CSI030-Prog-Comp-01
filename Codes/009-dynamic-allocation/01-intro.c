#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int n = 5;
    // int vetor[n];
    // vetor = int[30]; ????

    int *p = NULL;
    float *q = NULL;

    // Alocar memoria
    // N - quantidade, T - tamanho de cada elemento
    // calloc (N, T);
    // malloc ( TOTAL: N * T)
    // T -> sizeof(tipo)

    // ponteiro = (tipo *) malloc (N * sizeof(tipo))
    // p = (int *) malloc(5 * sizeof(int));
    p = (int *) calloc(n, sizeof(int));
    q = (float *) malloc(n * sizeof(float));

    for(int i = 0; i < 5; i++) {
        // p[i] = i;
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", p[i]);
    }

    p = (int *) realloc(p, 2 * n * sizeof(int));

    // Liberar memoria
    free(p);
    free(q);

    return 0;
}