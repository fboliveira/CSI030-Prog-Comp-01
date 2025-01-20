#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 1;

    do {
        printf("%d\n", x);
        x++;
    } while (x <= 10);

    printf("Fim da impressao.\n");

    return 0;
}