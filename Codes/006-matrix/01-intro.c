#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
    return rand() % 11;
}

int main(int argc, char const *argv[]) {

    int matriz[3][4];

    srand(time(NULL));

    int i, j, escalar;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            //printf("[%d][%d] = ", i, j);
            ///scanf("%d", &matriz[i][j]);
            matriz[i][j] = aleatorio();
        }
    }

    printf("Digite um escalar: ");
    scanf("%d", &escalar);

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            matriz[i][j] *= escalar;
        }
    }

    printf("Resultado:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) { 
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz[4][3]:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) { 
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }

    printf("\n\n");


    return 0;
}