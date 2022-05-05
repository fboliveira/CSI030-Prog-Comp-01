#include <stdio.h>

int main() {

    int n = 0, x = 0, maior=-99999, menor=99999, soma = 0;
    float media;

    while( x != -999 ) {

        printf("Digite um numero: ");
        scanf("%d", &x);

        // Parada 1
        if ( x == -999 ) {
            break;
        }

        // Parada 2
        if ( x != -999 ) {

            if ( n == 0 ) {
                menor = x;
                maior = x;
            }

            if ( x > maior ) {
                maior = x;
            }

            if ( x < menor ) {
                menor = x;
            }

            soma = soma + x;
            n++;

        }

    }

    if ( n > 0 ) {
        media = (float)soma / n;

        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
        printf("Media = %.2f\n", media);

    } else {
        printf("Nenhum numero foi digitado.\n");
    }



}