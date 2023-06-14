#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, n;

    i = 1;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Digite um numero maior ou igual a 1\n");
        }
    } while(n <= 0);

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}