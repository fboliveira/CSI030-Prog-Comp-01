#include <stdio.h>

int potencia(int base, int expoente) {

    int i, resultado = 1;

    for(i = 1; i <= expoente; i++) {
        resultado = resultado * base;
    }
    
    return resultado;

}


int main(int argc, char const *argv[]) {

    int x, y, resultado;

    printf("Digite a base: ");
    scanf("%d", &x);

    printf("Digite o expoente:");
    scanf("%d", &y);

    resultado = potencia(x, y);

    return 0;
}