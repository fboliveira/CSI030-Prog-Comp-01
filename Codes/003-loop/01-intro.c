#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n = 1;

    while (n <= 10) {
        printf("n = %d\n", n);
    }

    printf("fim while\n");

    n = 1;
    do {
        printf("n = %d\n", n);
        n = n + 1;
    } while(n <= 10);

    printf("fim do-while\n");

    for(n = 1; n <= 10; n++) {
        printf("n = %d\n", n);
    }

    printf("fim do for\n");

    return 0;
}