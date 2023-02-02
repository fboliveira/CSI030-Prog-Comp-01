#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    // SUM_i^n ( x^i - x . i + n)
    //         ------------------
    //                (i + 1)

    // x, n > 0;

    float soma = 0;

    int x, n, i;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    if (x > 0 && n > 0) {

        for(i = 1; i <= n; i++) {
            soma += (pow(x, i) - x * i + n) / (i + 1);
        }

        printf("Somatorio = %.2f\n", soma);

    } else {
        printf("Os numeros devem ser maiores do que zero.");
    }



    return 0;
}