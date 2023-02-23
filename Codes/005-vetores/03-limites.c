#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, n = 10;
    int vetor[n];

    // Nao executar! Possivel falha de segmentacao.
    for(i = 0; i < (n * 1000); i++) {
        vetor[i] = i;
        printf("[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}