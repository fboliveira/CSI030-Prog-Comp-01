#include <stdio.h>

void incrementa(int *p, int n) {
    *p = *p + 2;
    n = n - 5;
}


int main(int argc, char const *argv[]) {

    int x, int y;
    int *p;

    x = 5;
    y = 6;

    p = &x;
    *p = *p + 10;

    p = &y;
    *p = 20;

    incrementa(&x, y);

    printf("X = %d\n", x);

    return 0;
}