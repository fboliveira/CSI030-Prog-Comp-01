#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a, n;
    // Imprimir [a;n]

    printf("Digite o valor inicial: ");
    scanf("%d", &a);

    printf("Digite o valor final: ");
    scanf("%d", &n);

    if ( a <= n ) {
        // Ascendente
        while (a <= n) {
            printf("%d\n", a);
            // i = i + 1;
            a++;
        }
    } else {
        // Descendente
        while (a >= n) {
            printf("%d\n", a);
            // i = i - 1;
            a--;
        }        
    }
    return 0;
}