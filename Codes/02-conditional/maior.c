#include <stdio.h>

int main() {

    int a, b, c;

    printf("Digite os numeros:");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) {
        printf("O primeiro e o maior.\n");
    } else if ( b > a && b > c ) {
        printf("O segundo e o maior.\n");
    } else if (c > a && c > b) {
        printf("O terceiro e o maior.\n");
    } else {
        printf("Nao posso afirmar nada.\n");
    }

}