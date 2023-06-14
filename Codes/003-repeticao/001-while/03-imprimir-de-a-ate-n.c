#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a, n, primeiro, segundo;
    // Imprimir [a;n]

    printf("Digite o valor inicial: ");
    scanf("%d", &a);

    printf("Digite o valor final: ");
    scanf("%d", &n);

    if (a <= n) {
        primeiro = a;
        segundo = n;
    } else {
        primeiro = n;
        segundo = a;
    }

    while (primeiro <= segundo) {
        printf("%d\n", primeiro);
        // i = i + 1;
        primeiro++;
    }

    return 0;
}