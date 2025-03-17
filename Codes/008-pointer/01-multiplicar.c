#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 5;
    float y = 3.14;

    int *pi = NULL;
    float *pf = NULL;

    pi = &x;
    pf = &y;

    printf("X = %d\n", *pi);
    printf("Y = %f\n", *pf);    

    
    *pi = 3 * (*pi);
    *pf *= 3;
    
    printf("X = %d\n", x);
    printf("Y = %f\n", y);

    return 0;
}