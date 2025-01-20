#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 1;
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while(x <= n) {
        printf("%d\n", x);
        x++;
    }

    printf("Fim da impressao.\n");

    return 0;
}