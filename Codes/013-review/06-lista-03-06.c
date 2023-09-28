#include <stdio.h>

int main(int argc, char const *argv[]) {

    int k;

    do {
        printf("Digite um numero maior do que zero: ");
        scanf("%d", &k);
    } while (k <= 0);


    return 0;
}