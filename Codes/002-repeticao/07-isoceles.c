#include <stdio.h>

int main(int argc, char const *argv[]) {

    int cont, i, j, n;

    cont = 1;

    printf("Digite a base: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for(j = 1; j <= cont; j++) {
            printf("*");
        }
        cont += 2;
        printf("\n");
    }

    return 0;
}