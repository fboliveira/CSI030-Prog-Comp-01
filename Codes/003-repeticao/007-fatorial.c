#include <stdio.h>

int main(int argc, char const *argv[]) {

    
    int n, i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if ( n < 0 ) {
        printf("Impossivel calcular! Não existe fatorial de numero negativo\n");
    } else {

        for(i = 1; i <= n; i++) {
            // fatorial = fatorial * i;
            fatorial *= i;
        }

        printf("O fatorial de %d e igual a %d\n", n, fatorial);

    }



    return 0;
}