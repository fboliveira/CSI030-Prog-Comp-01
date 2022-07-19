#include <stdio.h>

#define TAMANHO 50

int vetor[30];

void imprimirAsc(int vetor[], int tamanho) {

    int i;
    for(i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

}

void imprimirDec(int vetor[], int tamanho) {
    int i;

    for(i = tamanho - 1; i >= 0; i--) {
       printf("%d\n", vetor[i]); 
    }

}

float calcularMediaDoVetor(int vetor[], int tamanho) {
    int i;
    int soma = 0;
    float m;

    for(i = 0; i < tamanho; i++) {
        soma = soma + vetor[i];
    }

    m = (float)soma / tamanho;
    return (m);

}

int main(int argc, char const *argv[]) {

    int x, i;
    int vetor[5]; // 0-49    
    float media;

    int pessoas[TAMANHO];
    TAMANHO = 70;
    
    int matriz[50][50];

    for(i = 0; i < 50; i++) {
        for(j = 0; j < 50; j++) {
            matriz[i][j];
        }
    }

    int n;
    scanf("%d", &n);
    int idades[n];    
    // n = 30;

    //  0  1   2  3 4 5 .. n
    // |  |  |   | ...

    for(i = 0; i < n; i++) {
        scanf("%d", &idades[i]);
    }

    imprimirAsc(idades, n);
    imprimirDec(idades, n);
    media = calcularMediaDoVetor(idades, n);

    for(i = 0; i < n; i++) {
        if ( idades[i] > media ) {
            printf("%d\n", idades[i]);
        }
    }

    // i = 0;
    // while(i < n) {
    //     scanf("%d", &idades[i]);
    //     i++;
    // }

    return 0;
}