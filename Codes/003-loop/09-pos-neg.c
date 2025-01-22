#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n, i, x, pos, neg;
    pos = 0;
    neg = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x < 0) {
            neg++;
        } else {
            pos++;
        }    
    }

    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", neg);

    return 0;
}