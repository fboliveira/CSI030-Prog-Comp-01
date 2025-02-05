#include <stdio.h>

// Assinatura
int potencia(int, int);

int main(int argc, char const *argv[]) {

    int b, e, pot;

    printf("Digite a base: ");
    scanf("%d", &b);    
    
    printf("Digite o expoente: ");
    scanf("%d", &e);

    pot = potencia(b, e);

    printf("Potencia = %d\n", pot);

    return 0;
}

// Corpo - implementacao
// retorno nome(parametros?)
int potencia(int base, int expoente) {

    int i, pot = 1;

    for(i = 1; i <= expoente; i++) {
        // pot = pot * base;
        pot *= base;
    }

    return pot;
}