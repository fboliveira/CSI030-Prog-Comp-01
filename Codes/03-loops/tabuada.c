#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, n;

    do {
        printf("Digite um valor: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Informe um valor maior do que zero!\n");
        }
    } while (n <= 0);

    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i, n, i * n);
    }

    printf("\nDecrescente:\n");
    for(i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", i, n, i * n);
    }

    return 0;
}