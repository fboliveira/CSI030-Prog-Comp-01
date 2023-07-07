#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;
    int i;
    int soma = 0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int vetor_A[n];
    int vetor_B[n];

    printf("Digite o primeiro vetor: \n");
    for(i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", &vetor_A[i]);
    }

    printf("Digite o segundo vetor: \n");
    for(i = 0; i < n; i++) {
        printf("[%d] = ", i);
        scanf("%d", &vetor_B[i]);
    }

    printf("Impressao dos valores:\n");
    for(i = 0; i < n; i++) {
        printf("A[%d] = %d\n", i, vetor_A[i]);
    }    

    for(i = 0; i < n; i++) {
        printf("B[%d] = %d\n", i, vetor_B[i]);
    }    
    
    for(i = 0; i < n; i++) {
        soma += vetor_A[i] * vetor_B[i];
    }    

    printf("Produto interno = %d\n", soma);


    return 0;
}