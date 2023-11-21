#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Imprimir os numeros de 1 a N
    int i = 1;
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if ( n < 1 ) {
        printf("O valor deve ser maior ou igual a 1.\n");
    } else {
        while( i <= n ) {
            printf("%d\n", i);
            i++;
        }
    }
    printf("Fim do programa.\n");


    return 0;
}