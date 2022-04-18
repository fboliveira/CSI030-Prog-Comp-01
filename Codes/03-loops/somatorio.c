#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    int x, n, i;
    float somatorio = 0, dividendo, divisor;

    do {
        printf("Digite um numero inteiro positivo para X:");
        scanf("%d", &x);

        if ( x <= 0 ) {
            printf("Número inválido!\n");
        }
    } while (x <= 0);

    do {
        printf("Digite um numero inteiro positivo para N:");
        scanf("%d", &n);

        if ( n <= 0 ) {
            printf("Número inválido!\n");
        }
    } while (n <= 0);

    for (i = 1; i <= n; i++) {

        dividendo = pow(x, i) - i * x + n;
        divisor = i + 1;

        somatorio += ( dividendo / divisor );

    }

    printf("Somatorio = %.2f\n", somatorio);    

    return 0;
}