#include <stdio.h>

int main(int argc, char const *argv[]) {

    int i;
    int n;
    int fatorial = 1;


    printf("Digite um numero: ");
    scanf("%d", &n);

    // Decrescente
    // for(i = n; i >= 2; i--) {
    //     fatorial = fatorial * i;
    // }

    // Crescente
    fatorial = 1;
    for(i = 2; i <= n; i++) {
        fatorial = fatorial * i;
    }

    printf("Fatorial de %d e %d\n", n, fatorial);

    return 0;
}