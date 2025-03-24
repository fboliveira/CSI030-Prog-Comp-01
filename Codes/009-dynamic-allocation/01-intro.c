#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int n = 5;
    // int vetor[n];
    // vetor = int[2 * n]; // ???

    int *p;
    float *q;

    // Alocar
    // N - quantidade de elementos
    // T - tamanho de cada elemento (tipo)
    // T - tipo: sizeof(tipo)
    // void* malloc(TOTAL: N * T)
    // void* calloc(N, T)
    //
    // ponteiro = (tipo *) malloc(N * sizeof(tipo))
    p = (int *) malloc(n * sizeof(int));
    // p = (int *) calloc(n , sizeof(int));

    q = (float *) malloc(n * sizeof(float));

    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for(i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }

    p = (int *) realloc(p, 2 * n);

    // Liberar
    free(p);

    return 0;
}