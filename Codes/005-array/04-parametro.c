#include <stdio.h>

void ler(int vetor[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", &vetor[i]);
    }
}

void imprimir(int vetor[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Posicao: %d -> Valor: %d\n", i, vetor[i]);
    }
}

void processar(int vetorA[], int vetorB[], int vetorC[], int n) {

    int i;
    for(i = 0; i < n; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
    }

}

int main(int argc, char const *argv[]) {
    int n = 3;
    int vetorA[n];
    int vetorB[n];
    int vetorC[n];

    // Ler
    printf("Digite os valores de A:\n");
    ler(vetorA, n);

    printf("Digite os valores de B:\n");
    ler(vetorB, n);

    // Imprimir
    printf("Valores do vetor A:\n");
    imprimir(vetorA, n);    
    
    printf("Valores do vetor B:\n");
    imprimir(vetorB, n);

    // Processar
    processar(vetorA, vetorB, vetorC, n);

    // Imprimir
    printf("Soma A + B: \n");
    imprimir(vetorC, n);

    return 0;
}
