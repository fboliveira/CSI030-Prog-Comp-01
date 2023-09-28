#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) {
    return rand() % (max + 1 - min) + min;
}

void imprimir_vetor(int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
}

int eh_primo(int numero) {
    int i;

    for(i = 2; i < numero - 1; i++) {
        if ( numero % i == 0 ) {
            return 0;
        }
    }

    return 1;

}

void imprimir_primos_vetor(int *vetor, int n) {

    int i;

    for(i = 0; i < n; i++ ) {
        if ( eh_primo(vetor[i]) ) {
            printf("%d\n", vetor[i]);
        }
    }

}

int main(int argc, char const *argv[]) {

    int i;
    int n;
    int *vetor;
    

    srand(time(NULL));

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Nao existe memoria suficiente para alocacao!\n");
        return -1;
    }

    for(i = 0; i < n; i++) {
        vetor[i] = aleatorio(15, 90);
    }

    printf("Vetor completo: \n");
    imprimir_vetor(vetor, n);

    printf("Apenas numeros primos: \n");
    imprimir_primos_vetor(vetor, n);

    return 0;
}