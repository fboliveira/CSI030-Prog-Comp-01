#include <stdio.h>

int* alocar(int *p) {
    return (int *) malloc(n * sizeof(int));
}

void ler(int *p, int n) {
    int i;

    printf("Digite os valores: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
}

void imprimir(int *p, int n) {
    int i;
    printf("Valores digitados: ");
    for(i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }
}

void liberar(int *p) {
    free(p);
}

int main(int argc, char const *argv[]) {

    int n;
    
    printf("Digite a quantidade: ");
    scanf("%d", &n);
    
    // int vetor[n];
    int *p = alocar(n);

    ler(p, n);
    imprimir(p, n);

    liberar(p);

    return 0;
}