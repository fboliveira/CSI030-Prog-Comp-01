#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
    return rand() % 21;
}

int main(int argc, char const *argv[]) {

    int matriz[10][10];

    int soma = 0;
    int i, j;

    srand(time(NULL));

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            matriz[i][j] = aleatorio();
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 10; i++) {
        soma += matriz[i][i];
    }


    return 0;

}