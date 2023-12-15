#include <stdio.h>

int potencia(int base, int expoente) {
    int i, pot;
    pot = 1;
    for(i = 1; i <= expoente; i++) {
        pot = pot * base;
    }
    return pot;
}

int main(int argc, char const *argv[]) {

    int base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);
    printf("Resultado = %d\n", resultado);

    return 0;
}