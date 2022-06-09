#include <stdio.h>
#include <stdlib.h>

void imprimir(int *dados, int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("%d\n", dados[i]);
    }
}

int main(int argc, char const *argv[]) {

    int n = 10, i;
    int vetor[n];

    // Alocar o vetor dinamicamente -> ponteiro
    int *p;

    // TOTAL = quantidade * tamanho(TIPO)
    // ponteiro = (TIPO *) malloc (TOTAL)
    p = (int *) malloc( n * sizeof(int) );
    // p = (int *) calloc( n , sizeof(int) );
    
    int   *q = (int   *) malloc( n * sizeof(int ) );
    
    float *w = (float *) malloc( n * sizeof(float));

    // Manipulacao => vetor e ponteiro são iguais

    for(i = 0; i < n; i++) {
        p[i] = i;
    }

    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        scanf("%d", &q[i]);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++) {
        scanf("%f", &w[i]);
    }

    imprimir(vetor, n);
    imprimir(p, n);
    imprimir(q, n);


    // Realocar o vetor -> dinamicamente:
    // vetor[n + 5] -> erro
    // Realloc(ponteiro, TOTAL)
    p = (int *) realloc(p, (n + 5) * sizeof(int));

    for(i = 0; i < (n + 5); i++) {
        scanf("%d", &p[i]);
    }

    imprimir(p, n + 5);

   // Liberar a memoria - alocacao dinamica
   free(p);
   free(q);
   free(w);

    return 0;
}