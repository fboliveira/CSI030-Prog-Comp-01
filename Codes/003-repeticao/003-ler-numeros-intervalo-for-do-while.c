#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, x, soma;
    float media;

    soma = 0;

    for(i = 1; i <= 5; i++) {
        // Ler o numero
        do {
            printf("Digite um numero: [%d] ", i);
            scanf("%d", &x);
        // } while ( !(x >= 30 && x <= 50) );
        } while ( (x < 30 || x > 50) );
        // Somar - acumuladora
        soma = soma + x; // soma += x;
    }

    printf("Soma = %d\n", soma);

    media = soma / 5.0;

    printf("Media = %.2f\n", media);

    return 0;
}