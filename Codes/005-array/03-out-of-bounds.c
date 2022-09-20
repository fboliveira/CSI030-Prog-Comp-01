#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i;
    int n = 3;
    int vetor[n];

    for(i = 0; i <= (n * 100); i++) {
        printf("[%d] = %d\n", i, i * i);
        vetor[i] = i * i;
    }


    return 0;
}