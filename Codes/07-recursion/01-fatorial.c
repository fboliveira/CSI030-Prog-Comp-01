#include <stdio.h>

int fatorial_iterativa(int n) {
    int i, fat = 1;

    // Iterativa
    for(i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;

}

// Recursiva
int fatorial(int n) {

    // Caso base:
    // - fatorial(0) ou fatorial(1) = 1
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }


}


int main(int argc, char const *argv[]) {

    int n, fat = 1;

    n = 5;

    fat = fatorial_iterativa(n);
    printf("Fatorial - iterativa = %d\n", fat);

    // Recursiva
    // -- Caso base
    // -- sub-rotina: funcao
    fat = fatorial(n);
    printf("Fatorial - recursiva = %d\n", fat);


    return 0;
}