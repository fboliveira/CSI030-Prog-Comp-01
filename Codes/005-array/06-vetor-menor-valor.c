#include <stdio.h>

void ler(float vetor[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%f", &vetor[i]);
    }
}

int main(int argc, char const *argv[]) {

    int n = 5;
    int i;
    float vetor[n];
    int menor_indice;

    ler(vetor, n);

    // Menor valor no vetor
    // Imprimir indice e valor
    menor_indice = 0;

    for(i = 1; i < n; i++) {
        if (vetor[i] < vetor[menor_indice]) {
            menor_indice = i;
        }
    }

    printf("Menor valor: \n");
    printf("Valor = %.2f\n", vetor[menor_indice]);
    printf("Indice = %d\n", menor_indice);

    return 0;
}