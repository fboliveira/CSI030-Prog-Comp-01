#include <stdio.h>



int  incrementa(int *k, int x) {
    *k = *k + 5; // n = 12 + 5
    x = x + 2; // x = 11 + 2
    return x;
}


int main(int argc, char const *argv[]) {

    int n = 5;
    int w = 10

    int *p = NULL;
    int *q = NULL;

    p = &n;
    q = &w;

    *p = *q + 2; // n = 10 + 2

    p = &w;
    q = &n;

    (*p)++; // w++ -> 11
    // p++;

    int j = incrementa(&n, w);


    printf("%d", *p); // 11
    printf("%d", *q); // 17

    return 0;
}