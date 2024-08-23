#include <stdio.h>

// Assinatura
int potencia(int, int);

// Implementacao
int potencia(int base, int expoente) {
    
    int power = 1;
    int i;

    for(i = 1; i <= expoente; i++) {
        power *= base;
    }

    return power;

}

int main(void) {

    int b, e, pot;

    printf("Digite a base: ");
    scanf("%d", &b);

    printf("Digite o expoente: ");
    scanf("%d", &e);

    pot = potencia(b, e);

    printf("Potencia = %d\n", pot);

    return 0;
}