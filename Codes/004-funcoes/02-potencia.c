#include <stdio.h>

// Potencia: 2^3 = 2 * 2 * 2
int potencia(int base, int expoente) {
    int i;
    int resultado = 1;

    for(i = 1; i <= expoente; i++) {
        resultado = resultado * base;
    }

    return resultado;

}

int main(int argc, char const *argv[]) {

    int base, exp, pot;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &exp);

    pot = potencia(base, exp);

    printf("Potencia = %d\n", pot);

    return 0;
}