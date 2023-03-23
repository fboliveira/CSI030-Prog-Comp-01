#include <stdio.h>
#include <stdlib.h>


int multiplica_vetor(int *vetor, int pos) {

    // Caso base:
    if (pos < 0 ) {
        return 1;
    }

    return vetor[pos] * multiplica_vetor(vetor, pos - 1);

}



int main(int argc, char const *argv[]) {

    int n, *vetor, i, resultado;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc( n * sizeof(int) );

    printf("Digite os valores:\n");
    for(i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", &vetor[i]);
    }

    resultado = multiplica_vetor(vetor, n - 1);

    printf("Multiplicacao = %d\n", resultado);

    return 0;
}