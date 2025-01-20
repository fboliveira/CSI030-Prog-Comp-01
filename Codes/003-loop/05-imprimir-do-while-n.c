#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x = 1;
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    do {
        printf("%d\n", x);
        x++;
    } while(x <= n);

    printf("Fim da impressao.\n");

    return 0;
}