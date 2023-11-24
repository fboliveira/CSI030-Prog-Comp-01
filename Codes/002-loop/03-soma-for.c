#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i;
    int n;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d\n", i);
        soma = soma + i;
    }

    printf("Soma = %d\n", soma);
    printf("Fim do programa.\n");
    return 0;
}