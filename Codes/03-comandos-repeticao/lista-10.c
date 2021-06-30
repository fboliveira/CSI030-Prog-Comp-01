#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0, y;
    float resultado;

    while ( x < 1 || x > 10 ) {
        printf("Digite o primeiro numero:" );
        scanf("%d", &x);
    }

    do {
        printf("Digite o segundo numero: ");
        scanf("%d", &y);
    while (x < 1 || x > 10);

    if ( !(x>=1 && x <=10) ) {
        printf("Digite um numero entre 1 e 10");
        return 0;
    }

    if ( !(y>=1 && y <=10) ) {
        printf("Digite um numero entre 1 e 10");
        return 0;
    }

    // Valido -> x e y [1; 10]
    // Soma < 8 -> media
    if ( x + y < 8 ) {
        resultado = ( x + y ) / 2.0;
    } else if( x + y == 8 ) {
        resultado = x * y;
    } else { //if ( x + y > 8 ) {
        resultado = (float)x / y;
    }

    printf("Resultado = %.2f\n", resultado);

    return 0;
}
