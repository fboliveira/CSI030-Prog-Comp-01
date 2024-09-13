#include <stdio.h>

int fatorial_iterativo(int n) {

    int i, fat = 1;

    for(i = n; i >= 1; i--) {
        fat *= i;
    }

    return fat;

}

int fatorial_recursivo(int n) {

    // Caso base
    if (n <= 1) {
        return 1;
    }

    // Caso recursivo
    return n * fatorial_recursivo( n - 1 );

}


int main() {

    int n;
    int fat;

    printf("Digite um numero: ");
    scanf("%d", &n);

    // Funcao - calcular o fatorial.
    fat = fatorial_iterativo(n);
    printf("Fatorial - iterativo: %d\n", fat);
    
    fat = fatorial_recursivo(n);
    printf("Fatorial - recursivo: %d\n", fat);

    return 0;
}