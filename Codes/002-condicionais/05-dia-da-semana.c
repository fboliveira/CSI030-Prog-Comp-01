#include <stdio.h>

int main(int argc, char const *argv[]) {

    int dia;

    printf("Digite o numero do dia: ");
    scanf("%d", &dia);

    switch (dia) {
    case 1:
        printf("Domingo.\n");
        break;
    
    case 2:
        printf("Segunda.\n");
        break;

    default:
        printf("Numero invalido!\n");
        break;
    }

    return 0;
}