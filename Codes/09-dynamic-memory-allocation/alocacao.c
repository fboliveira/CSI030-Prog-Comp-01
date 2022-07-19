#include <stdio.h>
#include <stdlib.h>

void imprimir(int *v, int n) {

}

int main(int argc, char const *argv[]) {

    int n = 5, i;
    int vetor[n];
    
    // malloc: total bytes (quantidade * tamanho de cada tipo)
    // calloc: (quantidade, tamanho do tipo)

    // v-> NULL
    int *v = (int *) malloc(n * sizeof(int) );
    int *q = (int *) calloc(n , sizeof(int) );
    // v->[][][][][][][][][][]

    // **M[4][10]
    // *[0]->[][][][][][][][][][]    
    // *[1]->[][][][][][][][][][]    
    // *[2]->[][][][][][][][][][]    
    // *[3]->[][][][][][][][][][]    
    // *[4]->[][][][][][][][][][]    

    float *w = (float *) malloc(n * sizeof(float));

    /////// 

    for(i = 0; i < n; i ++) {
        scanf("%d", &v[i]);
    }

    int k;
    scanf("%d", &k);

    /// Aumentar o vetor v
    v = (int *) realloc(v, (n + k) * sizeof(int));

    for(i = 0; i < n + k; i ++) {
        scanf("%d", &v[i]);
    }

    free(p);
    free(q);
    free(w);

    // Lista *l = NULL

    // add(l, 9);

    // Lista novo = malloc(1 * sizeof(Lista));

    // Vetor => [4][5][9][][]: O(n)    
    // Lista -> [4] -> [5] -> [9] -> NULL O(1)
    // free([7]);

    return 0;
}