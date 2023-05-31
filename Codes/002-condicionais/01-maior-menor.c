#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x, y;

    /* Dado dois numeros inteiros, 
    identificar qual é o maior */

    printf("Informe o primeiro numero: ");
    scanf("%d", &x);

    printf("Informe o segundo numero: ");
    scanf("%d", &y);

    // SE x eh maior que y, entao
    if (x > y) { // entao - V
        printf("O primeiro numero eh maior que o segundo.\n");
    } else if (y > x) { // senao (F) se - entao  -V
        printf("O segundo numero eh maior que o primeiro.\n");
    } else {
        printf("Os numeros sao iguais.\n");
    }

    printf("Fim do programa.\n");



    return 0;
}