#include <stdio.h>

int main(int argc, char const *argv[]) {

    int base, expoente, resultado, i;

    resultado = 1;

    printf("Digite a base:");
    scanf("%d", &base);

    printf("Digite o expoente:");
    scanf("%d", &expoente);

    for(i = 1; i <= expoente; i++) {
        resultado *= base;
    }

    resultado = 1;
    i = expoente;
    while (i >= 1) {
        resultado *= base;
        i--;
    }

    printf("Resultado = %d", resultado);

    return 0;
}