#include <stdio.h>

int fatorial_iterativo(int n) {

    int fatorial = 1;
    int i;

    for(i = n; i >= 1; i--) {
        fatorial *= i;
    }

    return fatorial;

}

int fatorial_recursiva(int n) {

    // Caso em que a recursao encerra
    if ( n <= 1 ) {
        return 1;
    }

    return n * fatorial_recursiva(n - 1);

}

int main(int argc, char const *argv[]) {

    int n;
    int fatorial;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fatorial = fatorial_iterativo(n);
    printf("Fatorial iterativo: %d\n", fatorial);

    fatorial = fatorial_recursiva(n);
    printf("Fatorial recursiva: %d\n", fatorial);

    return 0;
}