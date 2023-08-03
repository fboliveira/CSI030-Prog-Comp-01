#include <stdio.h>

void imprimir_vetor(int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
}


void operar(int *valor) {
    int n = 5;

    *valor = n * (*valor);
}

int main(int argc, char const *argv[]) {

    int x;
    int y;
    int vetor[5];
    scanf("%d", &x);

    printf("Valor inicial = %d\n", x);
    operar(&x);
    printf("Valor final = %d\n", x);

    imprimir_vetor(vetor, 5);

    return 0;
}