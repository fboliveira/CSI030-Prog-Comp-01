#include <stdio.h>

int main() {

    int valor, n50, n20, n10, n1, resto;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    n50 = valor / 50;
    resto = valor % 50;

    n20 = resto / 20;
    resto = resto % 20;    
    
    n10 = resto / 10;
    resto = resto % 10;

    n1 = resto;

    printf("Notas R$ 50: %d\n", n50);
    printf("Notas R$ 20: %d\n", n20);
    printf("Notas R$ 10: %d\n", n10);
    printf("Notas R$ 1: %d\n", n1);
    

    return 0;
}