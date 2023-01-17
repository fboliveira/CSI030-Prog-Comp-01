#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, x, soma;
    float media;

    soma = 0;

    for(i = 1; i <= 5; i++) {
        // Ler o numero
        printf("Digite um numero: ");
        scanf("%d", &x);
        // Somar - acumuladora
        soma = soma + x; // soma += x;
    }

    printf("Soma = %d\n", soma);

    media = soma / 5.0;

    printf("Media = %.2f\n", media);

    return 0;
}