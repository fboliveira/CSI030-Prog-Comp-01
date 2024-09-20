#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int *p = NULL;
    float *q = NULL;
    double *r = NULL;
    int *w = NULL;
    int n = 10;

    int vetor[n];
    // vetor = vetor[n + 10]; ????

    // Alocar memoria (variaveis)
    // de maneira dinamica
    // Ponteiros:

    // Q - quantidade, T - tamanho de cada elementos)
    // calloc( Q, T );
    // malloc( TOTAL ); // Q * T
    // Ponteiro - tipo: sizeof()

    // Ponteiro = malloc ( Q * T )
    // Ponteiro = (tipo *) malloc ( Q * sizeof(tipo))
    p = (int *) malloc ( n * sizeof(int)  )
    q = (float *) calloc ( n, sizeof(float) )
    r = (double *) malloc ( n * sizeof(double)  )
    w = (int *) malloc ( 1 * sizeof(int)  )
    // char *s = (char *) malloc( 10 * 1 );

    // *w = 5;

    for(int i = 0; i < n; i++) {
        scanf(&p[i]);
    }    
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }

    p = (int *) realloc(p, 2 * n * sizeof(int));


    // Liberar a memoria
    free(p);
    free(q);

    return 0;
}