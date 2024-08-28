#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {

    int i;
    int maior = vetor[0];

    for(i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;

}

int main(int argc, char const *argv[]) {

    int n;
    int i;
    int maior;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os valores:");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    maior = maiorValor(vetor, n);

    printf("Maior valor = %d\n", maior);

    return 0;
}