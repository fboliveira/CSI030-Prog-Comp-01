#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n = 5;
    float v1[n], v2[n];
    int i;
    float produto = 0;

    printf("Digite os valores do primeiro vetor:\n");
    for(i = 0; i < n; i++){
        scanf("%f", &v1[i]);
    }

    printf("Digite os valores do segundo vetor:\n");
    for(i = 0; i < n; i++){
        scanf("%f", &v2[i]);
    }

    // Imprimir os valores lidos
    printf("Valores lidos\n");
    for(i = 0; i < n; i++){
        printf("v1[%d] = %.2f\n", i, v1[i]);
    }
    for(i = 0; i < n; i++){
        printf("v2[%d] = %.2f\n", i, v2[i]);
    }

    // Calcular e imprimir o produto interno
    for(i = 0; i < n; i++){
        produto += v1[i] * v2[i];
    }

    printf("Produto interno = %.2f\n", produto);

    return 0;
}