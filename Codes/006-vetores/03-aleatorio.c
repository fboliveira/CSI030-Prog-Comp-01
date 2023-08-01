#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int aleatorio(int min, int max) {
    return rand() % (max + 1 - min) + min;
}


int main(int argc, char const *argv[]) {

    int vetor[5];
    int i;

    srand(time(NULL));

    for(i = 0; i < 5; i++) {
        vetor[i] = aleatorio(30, 100);
    }

    for(i = 0; i < 5; i++) {
        printf("[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}