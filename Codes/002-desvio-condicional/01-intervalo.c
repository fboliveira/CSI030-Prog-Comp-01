#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero >= 20 && numero <= 90 ) {
        printf("O numero esta entre [20;90]\n");
    } else { 
        printf("O numero esta fora do intervalo [20;90]\n");
    }

    return 0;
}