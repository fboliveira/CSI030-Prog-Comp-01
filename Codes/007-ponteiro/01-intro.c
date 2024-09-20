#include <stdio.h>

void subtrair(int x) {
    // nao modifica o 
    // x (original) na main
    // passagem por copia
    x = x - 2; 
}

void ler_vetor(int *vetor, int n) {
    for(int i = 0; i < n; i++) {
        vetor[i] = i;
        scanf(&vetor[i]);
    }
}

void imprimir(int *vetor, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
}

void somar(int *x) {
    // modifica o x (original) na main
    // passagem por referencia
    *x = *x + 10;
}


int main(int argc, char const *argv[]) {

    int x = 5;
    int v[10];
    
    ler(v, 10);

    printf("X = %d\n", x);

    subtrair(x); // - 2
    printf("X = %d\n", x);

    somar(&x); // + 10
    printf("X = %d\n", x);

    return 0;
}