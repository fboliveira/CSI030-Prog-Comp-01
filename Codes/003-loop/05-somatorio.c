#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    int x, n, i;

    float somatorio = 0;

    printf("Digite x e n: ");
    scanf("%d", &x);
    scanf("%d", &n);

    if ( x > 0 && n > 0 ) {

        for(i = 1; i <= n; i++) {
            somatorio += ( pow(x, i) - i * x + n ) / ( i + 1 );   
        }

        printf("Somatorio = %.2f\n", somatorio);

    } else {
        printf("Os numeros devem ser maiores que zero!\n");
    }


    return 0;
}