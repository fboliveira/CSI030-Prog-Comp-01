#include <stdio.h>
#include <stdlib.h>

void imprimir(int *w, int n) {

    int i;
    for(i = 0; i < n; i++) {
        printf("%d\n", w[i]);
    }

}

int main(int argc, char const *argv[])
{
    int n = 10, i;
    int vetor[n];
    int *p;

    // associar *p -> maior ou menor de memoria (alocacao): demanda.

    // alocar um quantidade de memoria: bytes.
    // malloc: quantidade total = quantidade de elementos * tipo
    // calloc: quantos elementos, tipo

    // ponteiro = (*) malloc( TOTAL )
    // ponteiro = (*) calloc( quantidade, tipo )
    p = (int *) malloc( n * sizeof(int) );
    // p = (int *) calloc( n, sizeof(int) );

    float *v = (float *) malloc( n * sizeof(float) );

    // ---- Vetores: definicao padrao [] ou por alocacao dinamica = igual.
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for(i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }

    imprimir(vetor, n);
    imprimir(p, n);

    //vetor[n + 5]; ERRO
    // Realocar memoria -> mais espacos livres para guardar (vetores)
    p = ( int * ) realloc(p, (n + 5) * sizeof(int));

    for(i = 0; i < (n + 5); i++) {
        scanf("%d", &p[i]);
    }

    imprimir(p, n + 5);

    // ---- Alocacao dinamica - liberar a memoria: disponivel.
    free(p);
    free(v);

    return 0;
}
