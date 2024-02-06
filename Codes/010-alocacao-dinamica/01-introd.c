#include <stdio.h>
#include <stdlib.h>

// int[] alocar(int n) {

// }

int main(int argc, char const *argv[]) {

    int *p = NULL;
    float *q = NULL;
    int i, n;
    n = 10;

    // Ponteiro = (TIPO *) malloc( TOTAL );
    // TOTAL = n * sizeof(TIPO)
    // Ponteiro = (TIPO *) calloc( quantidade, bytes por elemento );
    p = (int *) malloc ( n * sizeof(int) );
    p = (int *) calloc ( n , sizeof(int) );
    q = (float *) malloc( n * sizeof(float));
    // int vetor[10];

    for(i = 0; i < n; i++) {
        p[i] = i;
    }

    // vetor[ 2 * n ] ????
    // p = realloc( 2 * n * sizeof(int) );

    free(p);
    free(q);

    return 0;
}
