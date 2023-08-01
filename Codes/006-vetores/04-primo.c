#include <stdio.h>


int eh_primo(int numero) {
    int i;

    for(i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char const *argv[]) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Resultado = %d\n", eh_primo(numero));

    return 0;
}