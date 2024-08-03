#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int n;
    int num;
    int i = 1;

    int maior = -999999;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
        }

        i++;
    }

    printf("Maior numero = %d\n", maior);

    return 0;
}