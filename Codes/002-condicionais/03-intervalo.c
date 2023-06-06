#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 20 && numero <= 90) {
        printf("O numero esta no intervalo.\n");
    } else {
        printf("O numero esta fora do intervalo.\n");
    }

    return 0;
}