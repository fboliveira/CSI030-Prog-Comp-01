#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Imprimir os numeros de 1 ate 10: do-while
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    // while ( i <= 10 ) { // do
    //     printf("%d\n", i);
    //     i++;
    // }

    // for (i = 1; i <= 10; i++) {
    //     printf("%d\n", i);
    // }

    return 0;
}