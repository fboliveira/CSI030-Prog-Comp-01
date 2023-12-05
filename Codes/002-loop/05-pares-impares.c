#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero, 
    quantidade = 0, 
    pares = 0, 
    impares = 0, 
    soma_pares = 0, 
    soma_total = 0;

    float media_pares = 0, media_total = 0;

    do {

        printf("Digite um numero positivo (0 para sair): ");
        scanf("%d", &numero);

        if (numero > 0) { // eh positivo

            if (numero % 2 == 0) { // par
                pares++;
                soma_pares += numero;
            } else { // impar
                impares++;
            }

            // soma e quantidade
            soma_total += numero;
            quantidade++;

        } else if ( numero < 0 ) {
            printf("Digite apenas numeros positivos.\n");
        }

    } while (numero != 0);

    if (pares > 0) {
       media_pares = (float)soma_pares / pares;
    }

    if (quantidade > 0) {
        media_total = (float)soma_total / quantidade;
    }

    printf("Quantidade total..: %d\n", quantidade);
    printf("Soma total........: %d\n", soma_total);
    printf("Media total.......: %.2f\n", media_total);
    printf("Pares.............: %d\n", pares);
    printf("Media pares.......: %.2f\n", media_pares);
    printf("Impares...........: %d\n", impares);

    return 0;
}