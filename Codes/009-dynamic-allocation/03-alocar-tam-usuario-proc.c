#include <stdio.h>
#include <stdlib.h>

int* alocar_int(int n) {
    return (int *) malloc(n * sizeof(int));
}

void ler(int *vetor, int n) {
    int i;

    printf("Digite os valores: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

}

void imprimir(int *vetor, int n) {
    int i;

    printf("Valores digitados: \n");
    for(i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
}

void liberar(int *p) {
    free(p);
}

int main(int argc, char const *argv[]) {

    int n;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    // int v[n];
    int *vetor = alocar_int(n);

    if (vetor == NULL) {
        printf("Memoria insuficiente!\n");
        return -1;
    }
    
    ler(vetor, n);
    imprimir(vetor, n);

    liberar(vetor);

    return 0;
}