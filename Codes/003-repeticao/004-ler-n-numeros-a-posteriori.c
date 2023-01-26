#include <stdio.h>

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i, x, soma, pares, impares;

    float media;

    soma = 0;
    i = 0;
    pares = 0;
    impares = 0;
    //x = 1;

    //while (x > 0) {
    //for( i = 0; x > 0; i++) {
    do {

        printf("Digite um numero [%d]: ", i + 1);
        scanf("%d", &x);

        if ( x > 0 ) {
            soma = soma + x;
            i++;

            if ( x % 2 == 0) {
                pares++;
            } else {
                impares++;
            }


        } else {
            printf("Fim da digitacao dos numeros.");
        }
    } while (x > 0);


    if ( i > 0 ) {
        // media = soma;
        // media = media / i;
        media = (float)soma / i;

        printf("Soma: %d\n", soma);
        printf("Media: %.2f\n", media);
        printf("Pares = %d\n", pares);
        printf("Impares = %d\n", impares);
    }

    return 0;
}