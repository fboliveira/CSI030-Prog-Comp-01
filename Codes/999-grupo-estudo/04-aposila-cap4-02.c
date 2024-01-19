#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n = 5;
    int vetor[n];

    int i;
    int valor;

    for(i = 0; i < n; i++) {

        do {
            printf("Digite um valor: ");
            scanf("%d", &vetor[i]);
        }while(vetor[i] <= 0);

        // vetor[i] = valor;
    }


    return 0;
}