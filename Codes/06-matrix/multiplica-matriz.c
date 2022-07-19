#include <stdio.h>
#include <time.h>

void multiplica(int matriz[3][6], int escalar) {
    int i, j;

    // Linha 
    for(i = 0; i < 3; i++) { // n
        // Coluna
        for(j = 0; j < 6; j++) { // m
            matriz[i][j] = escalar * matriz[i][j];
        }
    }
}

int main(int argc, char const *argv[]) {

    /* initialize random seed: */
    srand (time(NULL));

    return 0;
}