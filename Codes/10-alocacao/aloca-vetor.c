#include <stdio.h>
#include <stdlib.h>

void imprimir(int *p, int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }

}


int main(int argc, char const *argv[])
{
    int *p;
    int n;
    int i;

    printf("Digite um tamanho: ");
    scanf("%d", &n);

    int vetor[n];

    // p = (int *) malloc(n * sizeof(int));
    p = (int *) calloc(n, sizeof(int));
    
    for(i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    for(i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }

    imprimir(p, n);
    imprimir(vetor, n);

    //vetor[n + 5]; ERRO
    p = realloc(p, (n + 5) * sizeof(int));

    for(i = 0; i < (n + 5); i++) {
        scanf("%d", &p[i]);
    }

    free(p);

    return 0;
}
