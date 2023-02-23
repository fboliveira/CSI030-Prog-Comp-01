#include <stdio.h>

int main(int argc, char const *argv[]) {

    // 01 - Declarar n;
    int n, i;

    printf("Digite a quantidade de valores a ser informada: ");
    // 02 - definir o valor de n -> inicializando a variavel
    // n = 5;
    scanf("%d", &n);
    // 03 - declarar o vetor com o tamanho definido para n.
    int vetor[n]; // [0; n - 1]
    // Vetor de tamanho fixo e que nao pode ser alterado.

    //  0  1  2  3  4
    // [ ][ ][ ][ ][ ]

    // scanf("%d", &vetor[0]);
    // scanf("%d", &vetor[1]);
    // scanf("%d", &vetor[2]);
    // scanf("%d", &vetor[3]);
    // scanf("%d", &vetor[4]);

    for(i = 0; i < n; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Resultado: Ordem crescente\n");
    for(i = 0; i < n; i++) {        
        printf("Posicao [%d] = %d\n", i, vetor[i]);
    }

    printf("Resultado: Ordem decrescente\n");
    for(i = n - 1; i >= 0; i--) {        
        printf("Posicao [%d] = %d\n", i, vetor[i]);
    }
    
    return 0;
}