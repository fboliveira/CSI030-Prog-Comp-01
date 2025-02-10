#include <stdio.h>

int fatorial(int n) {
    int i, fat;
    fat = 1;

    // for(i = 1; i <= n; i++) {
    for(i = n; i >= 1; i--) {
        // fat = fat * i;
        fat *= i;
    }

    return fat;
}

int main(int argc, char const *argv[]) {

    int n, fat;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fat = fatorial(n);

    printf("Fatorial = %d\n", fat);

    return 0;
}