#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int x = 1; x <= n; x++) {
        printf("%d\n", x);
    }

    printf("Fim da impressao.\n");

    return 0;
}