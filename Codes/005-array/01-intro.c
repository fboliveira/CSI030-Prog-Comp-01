#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;
    
    printf("Digite a quantidade de numeros desejada: ");
    scanf("%d", &n);

    int vetor[n];
    int i;

    for(i = 0; i < n; i++) {
        printf("Digite o valor %d\n", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < n; i++) {
        printf("[%d] = %d\n", i, vetor[i]);
    }
    

    return 0;
}