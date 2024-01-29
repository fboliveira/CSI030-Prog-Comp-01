#include <stdio.h>

// Apenas trecho do codigo - nao finalizado.

int eh_multiplo(int a, int b) {

    // return a % b == 0 ? 1 : 0;
    if (a % b == 0) {
        return 1;
    } else {
        return 0;
    }

}

void ler_vetor(int vetor[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
}

void imprimir_vetor(int vetor[], int n) {
    
}

int main(int argc, char const *argv[]) {

    int num, vetor[10], i;

    int quantidade = ler_vetor(vetor, 10);

    for(i = 0; i < 10; i++) {
        if (eh_multiplo(vetor[i]), num) {
            printf("%d eh multiplo de %d\n", vetor[i], num);
        } else {
            printf("%d nao eh multiplo de %d\n", vetor[i], num);
        }
    }


    return 0;
}