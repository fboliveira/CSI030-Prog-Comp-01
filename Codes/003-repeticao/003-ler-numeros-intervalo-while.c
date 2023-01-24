#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, x, soma;
    float media;

    soma = 0;

    i = 1;

    while(i <= 5) {
        // Ler o numero
        printf("Digite um numero: [%d] ", i);
        scanf("%d", &x);
        if (x >= 30 && x <= 50) {
            // Somar - acumuladora
            soma = soma + x; // soma += x;
            i++;
        } else {
            printf("Numero invalido - fora do invervalo [30;50].\n");
        }
    }

    printf("Soma = %d\n", soma);

    media = soma / 5.0;

    printf("Media = %.2f\n", media);

    return 0;
}