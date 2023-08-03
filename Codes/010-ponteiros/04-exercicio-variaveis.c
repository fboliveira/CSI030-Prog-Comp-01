#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 5;


    float w = 3.14;

    int *pi = NULL;
    float *pf = NULL;
    
    pi = &x;
    pf = &w;

    printf("Valor inicial do inteiro = %d\n", *pi);
    printf("Valor inicial do decimal = %f\n", *pf);

    *pi *= 3;
    *pf = (*pf) * 3;

    printf("Resultado inteiro = %d\n", *pi);
    printf("Resultado decimal = %f\n", *pf);

    printf("Ponteiro inteiro = %p\n", pi);
    printf("Ponteiro inteiro    = %p\n", pf);


    return 0;
}