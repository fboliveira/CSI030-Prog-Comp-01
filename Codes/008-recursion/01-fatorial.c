#include <stdio.h>

int fatorial(int n) {

    // Base
    if (n <= 1) {
        return 1;
    }

    return n * fatorial(n - 1);

}

int fatorial_iterativo(int n) {

    int i, fat = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }    

    return fat;

}

int main(int argc, char const *argv[]) {

    int n;
    int fat_ite;
    int fat_rec;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fat_ite = fatorial_iterativo(n);
    fat_rec = fatorial(n);

    printf("Fatorial - iterativa: %d\n", fat_ite);
    printf("Fatorial - recursiva: %d\n", fat_rec);

    return 0;
}