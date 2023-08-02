#include <stdio.h>



int fatorial_iterativa(int n) {
    int i;
    int fat = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int fatorial_recursiva(int n) {
    // Caso base:
    if (n <= 1) {
        return 1;
    }

    // Caso recursivo:
    return n * fatorial_recursiva(n - 1);
}



int main(int argc, char const *argv[]) {

    int n;
    int fat_ite;
    int fat_rec;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fat_ite = fatorial_iterativa(n);
    fat_rec = fatorial_recursiva(n);

    printf("Fatorial - iterativa: %d\n", fat_ite);
    printf("Fatorial - recursiva: %d\n", fat_rec);

    return 0;
}