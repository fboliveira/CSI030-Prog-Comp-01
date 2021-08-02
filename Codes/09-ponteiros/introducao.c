#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x; //  | 26 | <- H2538
    x = 6;
    int y; //  | 36 | <- H9678
    y = 10;

    int *p; // | H9678 | <- aponta para a variavel x.
    p = &x; // define para quem o ponteiro aponta.

    *p = 25; // p ou x ???
    (*p)++; // != *(p++)

    printf("P = %p\n", p); // 
    printf("X = %p\n", &x); // 

    p = &y;

    *p = *p + x; // y = 10 + 26

    printf("X = %d\n", x); // 26
    printf("Y = %d\n\n", y); // 36

    printf("*P = %d\n", *p); // 36
    printf("P = %p\n", p); // H9678
    printf("Y = %p\n", &y); // H9678



    return 0;
}
