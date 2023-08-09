#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {


    int *p = NULL;
    float *q = NULL;

    // int **matriz;

    int i;

    // ponteiro = (TIPO *) malloc( QUANTIDADE )
    //  QUANTIDADE -> numero de elementos * tamanho do tipo

    // ponteiro = (TIPO *) calloc( QUANTIDADE )
    //  QUANTIDADE -> (numero de elementos,  tamanho do tipo)

    p = (int *) malloc( 5 * sizeof(int) );
    // p = (int *) calloc( 5 , sizeof(int) );

    q = (float *) malloc( 5 * sizef(float));

    // matriz (float **) malloc( 10 * sizeof(float *) );

    for(i = 0; i < 5; i++) {
        p[i] = i;
    }

    free(p);

    return 0;
}