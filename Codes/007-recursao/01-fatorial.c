#include <stdio.h>


int fatorial_recursiva(int n) {

    // Caso base/limite:
    if ( n <= 1 ) {
        return 1;
    } 

    // Caso recursivo
    return n * fatorial_recursiva(n - 1);


}

int fatorial_iterativa(int n) {

    int fatorial = 1, i;

    for(i = 1; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;

}



int main(int argc, char const *argv[]) {

    int n;
    int resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = fatorial_iterativa(n);
    printf("Fatorial iterativo: %d\n", resultado);

    resultado = fatorial_recursiva(n);
    printf("Fatorial recursiva: %d\n", resultado);


    return 0;
}