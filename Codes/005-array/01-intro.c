#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n ;
    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    int vetor[n];
    int i;

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Resultado: \n");
    for(i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}