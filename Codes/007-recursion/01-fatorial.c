#include <stdio.h>

int fatorial_iterativa(int n) {
    int i, fat;
    fat = 1;

    for(i = n; i >= 1; i--) {
        fat *= i;
    }

    return fat;
}

int fatorial(int n) {

    if (n <= 1) {
        return 1;
    }

    return n * fatorial(n - 1);

}

int main(int argc, char const *argv[]) {

    int n, fat;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fat = fatorial(n);

    printf("Fatorial = %d\n", fat);

    return 0;
}