#include <stdio.h>

int main() {

    // Imprimir os dias da semana
    int dia;

    printf("Digite o numero do dia da semana:");
    scanf("%d", &dia);

    // if ( dia == 1 ) {
    //     printf("Domingo");
    // } else if (dia == 2) {
    //     printf("Segunda-feira");
    // }

    switch( dia ) {

        case 1:
            printf("Domingo");
            break;
            
        case 2:
            printf("Segunda-feira");
            break;

        default:
            printf("Valor inválido");

    }

}