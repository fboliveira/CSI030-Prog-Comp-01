#include <stdio.h>


void imprimir_recursiva_asc(int vetor[], int i, int n) {

    // Caso base/limite:
    if ( i >= n ) {
        return;
    }

    // Caso recursivo
    printf("[%d] = %d\n", i, vetor[i]);
    imprimir_recursiva_asc(vetor, i + 1, n);

}

void imprimir_recursiva_desc(int vetor[], int i) {

    // Caso base/limite:
    if (i < 0) {
        return;
    }

    // Caso recursivo
    printf("[%d] = %d\n", i, vetor[i]);
    imprimir_recursiva_desc(vetor, i - 1);

}


void imprimir_vetor_iterativo(int vetor[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("[%d] = %d\n", i, vetor[i]);
    }

}



int main(int argc, char const *argv[]) {

    int n, i;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++){
        printf("[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nImpressao iterativa:\n");
    imprimir_vetor_iterativo(vetor, n);

    printf("\nImpressao recursiva DESC\n");
    imprimir_recursiva_desc(vetor, n - 1);

    printf("\nImpressao recursiva ASC\n");
    imprimir_recursiva_asc(vetor, 0, n);

    return 0;
}