#include <stdio.h>
#include <stdlib.h>

int* produtos_zeros(int codigos[], int estoque[], int n, int *zerados) {
    
    int i, j;
    *zerados = 0;

    for(i = 0; i < n; i++) {
        if (estoque[i] == 0) {
            *zerados++;
        }
    }

    int *vetor = (int *)malloc( (*zerados) * sizeof(int) );

    j = 0;

    for(i = 0; i < n; i++) {
        if (estoque[i] == 0) {
            vetor[j] = codigos[i];
            j++;
        }
    }

    return vetor;

}


int main(int argc, char const *argv[]) {

    int n = 5;
    int codigos[n];
    int estoque[n];

    int zerados;

    produtos_zeros(codigos, estoque, n, &zerados);

    return 0;
}