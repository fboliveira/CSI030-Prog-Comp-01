#include <stdio.h>

int main() {

    // Imprimir os numeros de 1 a 10:
    int i;
    int soma = 0;

    printf("Imprimindo com o FOR [1;10]\n");

    for(i = 1; i <= 10; i++) {
        printf("%d\t", i);
        soma = soma + i;
    }

    printf("\n\nImprimindo com o FOR [10;1]\n");

    for(i = 10; i >= 1; i--) { // i = i - 1
        printf("%d\t", i);
    }

    printf("\n\nImprimindo com o WHILE [1;10]\n");

    i = 1;
    while(i <= 10) {
        printf("%d\t", i);
        i++;
    }

    printf("\n\nImprimindo com o WHILE [10;1]\n");

    i = 10;
    while(i >= 1) {
        printf("%d\t", i);
        i--;
    }

    printf("\n\nImprimindo com o DO-WHILE [1;10]\n");
    
    i = 1;
    do {
        printf("%d\t", i);
        i++;
    } while ( i <= 10 );

    printf("\n\nImprimindo com o DO-WHILE [10;11]\n");

    i = 10;
    do {
        printf("%d\t", i);
        i--;
    } while ( i >= 1 );

}