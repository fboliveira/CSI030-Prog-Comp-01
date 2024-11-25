#include <stdio.h>

int main() {

    int x, y;
    printf("Digite um valor: ");
    scanf("%d%d", &x, &y);
    x += (y + 10);

    printf("Numero digitado: %d e %d\n", x, y);

    return 0;
}