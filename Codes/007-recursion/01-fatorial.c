#include <stdio.h>

int fatorialRecursiva(int n) {
    // Caso base - condicao de parada
    if (n <= 1) {
        return 1;
    } 

    return n * fatorialRecursiva(n - 1);

}


int fatorialIterativa(int n) {
    int i, f;
    f = 1;

    for(i = 1; i <= n; i++) {
        f *= i;
    }


    return f;

}

int fatorial(int tipo, int n) {
    
    switch (tipo)
    {
    case 1:
        return fatorialIterativa(n);
        break;

    case 2: 
        return fatorialRecursiva(n);
        break;
    
    default:
        printf("Tipo de fatorial indefinido.");
        break;
    }
}


int main(int argc, char const *argv[]) {

    int n = 5;

    int f = fatorial(1, n);


    printf("Fatorial = %d\n", f);

    return 0;
}