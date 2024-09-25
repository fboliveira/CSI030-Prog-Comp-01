#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int n;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    // PONTEIRO = (tipo *) malloc( Q * sizeof(tipo) );
    int *v = (int *) malloc( n * sizeof(int) );

    if ( v == NULL ) {
        printf("Memoria insuficiente! Nao eh possivel continuar.\n");
        return -1;
    }

    printf("Digite os valores do vetor: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    printf("\nValores registrados: \n");

    for(int i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    free(v);

    return 0;
}