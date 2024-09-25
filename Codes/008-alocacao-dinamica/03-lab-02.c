#include <stdio.h>
#include <stdlib.h>

int* alocar_int(int n) {

    // PONTEIRO = (tipo *) malloc( Q * sizeof(tipo) );
    return (int *) malloc(n * sizeof(int));

}

void ler_vetor(int *vetor, int n) {
    
    printf("Digite os valores do vetor: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

}

void imprimir_vetor(int *vetor, int n) {

    printf("\nValores registrados: \n");

    for(int i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }

}

void liberar_memoria(int *p) {
    free(p);
}

int main(int argc, char const *argv[]) {

    int n;

    printf("Digite a quantidade: ");
    scanf("%d", &n);

    int *v = alocar_int(n);

    if ( v == NULL ) {
        printf("Memoria insuficiente! Nao eh possivel continuar.\n");
        return -1;
    }

    ler_vetor(v, n);
    imprimir_vetor(v, n);

    liberar_memoria(v);

    return 0;
}