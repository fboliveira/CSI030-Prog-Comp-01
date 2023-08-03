#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 1000;


    int *p = x;

    printf("X = %d\n", x);
    printf("P = %p\n", p);
    printf("*P = %d\n", *p);

    return 0;
}