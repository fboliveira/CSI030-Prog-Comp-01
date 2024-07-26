#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ( numero >= 20 && numero <= 90 ) {
        printf("O valor esta entre 20 e 90.\n");   
    } else {
        printf("O valor nao esta no intervalo [20;90]\n");


    }

    return 0;
}