#include <stdio.h>

int ler_int() {
    int x;
    scanf("%d", &x);
    return x;
}

int fatorial(int n) {
    int i, fat = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}


int main(int argc, char const *argv[]) {

    int n, fat;

    printf("Digite um numero: ");
    n = ler_int();

    fat = fatorial(n);

    printf("Fatorial = %d\n", fat);

    // Teste automatizado - fatorial
    n = 5; // 120
    n = 0; // 1
    n = 4; // 24

    if ( fatorial(5) == 120 ) {
        printf("Passou no teste 5! = 120\n");
    } else {
        printf("Erro no calculo do fatorial: 5! != 120 -> %d\n", fatorial(n));
    }


    return 0;
}