#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x, y;
    float media, soma;

    printf("Digite os numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = x + y;
    media = soma / 2;

    printf("Media = %.2f\n", media);

    return 0;
}