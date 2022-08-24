#include <stdio.h>

int main(int argc, char const *argv[]) {

    int fatorial = 1;
    int numero;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero >= 0 ) {
        for(i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("Fatorial = %d\n", fatorial);
    } else {
        printf("O numero deve ser maior ou igual a zero!\n");
    }

    return 0;
}