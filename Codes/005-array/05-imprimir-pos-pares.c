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
    for(i = 0; i < n; i+=2) {
        printf("Posicao: %d -> Valor: %d\n", i, vetor[i]);
    }
}

int main(int argc, char const *argv[])
{
    int n = 10;
    int vetor[n];

    printf("Digite os valores: \n");
    ler(vetor, n);

    printf("Posicoes pares: ");
    imprimir(vetor, n);

    return 0;
}
