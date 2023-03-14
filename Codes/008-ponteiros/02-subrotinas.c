#include <stdio.h>



void imprimir_vetor(int *v, int tam) {

    int i;
    for(i = 0; i < tam; i++) {
        printf("%d\n", *(v+i)); // v[i]
    }

}

void processar(int *p) {
    *p = *p + 2;
}

int main(int argc, char const *argv[]) {

    int n = 15;
    int vetor[5] = {5, 3, 2, 1, 4};
    
    printf("Valor inicial = %d", n);
    processar(&n);
    printf("Valor final = %d", n);
    
    imprimir_vetor(vetor, 5);


    return 0;
}