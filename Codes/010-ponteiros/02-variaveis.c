#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 5;
    int y = 3;
    float w;
    char letra;

    int *p = NULL;
    int *q = NULL;
    float *z = NULL;
    char *pc = NULL;

    // *p = 10;
    
    p = &x;
    q = &x;
    pc = &letra;

    *pc = 'A';

    *p = *p + 2;

    printf("Valor = %d\n", *p);

    p = &y;

    *p = x + *p;

    printf("Valor = %d\n", *p);

    return 0;
}