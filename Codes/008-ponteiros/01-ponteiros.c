#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x, y;
    int *p = NULL;

    // scanf("%d", &x);
    x = 5;
    y = 10;

    p = &x; // o ponteiro p recebe o endereco (aponta para) x;

    printf("*p = %d\n", *p); // 5
    *p = *p + 2; // 7

    printf("*p = %d\n", *p); // 7

    *p = 2 * (*p); // 14

    p = &y;

    *p = *p + 2; // 10 + 2 -> 12
    (*p)++; // y = 13;
    *(p++); // ???????

    return 0;
}