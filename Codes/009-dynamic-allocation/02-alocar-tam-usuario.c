#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int n, i;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    // int v[n];
    int *vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Memoria insuficiente!\n");
        return -1;
    }
    
    printf("Digite os valores: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores digitados: \n");
    for(i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}