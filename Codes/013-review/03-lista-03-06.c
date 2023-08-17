#include <stdio.h>
#include <stdlib.h>

void preencher(int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        vetor[i] = i; 
    }
}

void imprimir(int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("[%d] = %d\n", i, vetor[i]); 
    }
}

void imprimir_float(float *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("[%d] = %.2f\n", i, vetor[i]); 
    }
}

void calcular(int *va, 
            float *vb, 
                int n, 
                int k) {
    int i;
    for(i = 0; i < n; i++) {
        vb[i] = 2 * i + (va[i] / (float)k);
    }    
}


int main(int argc, char const *argv[]) {

    int n;
    int *va;
    float *vb;
    int k;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    // Estatico
    // int vetor[n];

    // Dinamico
    // parametros, retorno  
    // malloc: (quantidade * tamanho), "sujo"
    // calloc  (quantidade, tamanho), "limpo"
    // (tipo *) malloc (n * sizeof(tipo))
    // va = (int *) calloc (n , sizeof(int));
    va = (int *) malloc (n * sizeof(int));
    vb = (float *) malloc (n * sizeof(float));
    
    preencher(va, n);
    imprimir(va, n);

    printf("Digite o valor para k: ");
    scanf("%d", &k);

    calcular(va, vb, n, k);

    imprimir_float(vb, n);

    free(va);
    free(vb);


    return 0;
}