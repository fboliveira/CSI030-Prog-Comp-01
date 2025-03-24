#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;
    
    printf("Digite a quantidade: ");
    scanf("%d", &n);
    
    // int vetor[n];
    int *p = (int *) malloc(n * sizeof(int));
    int i;

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Valores digitados: ");
    for(i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}