#include <stdio.h>


int main(int argc, char const *argv[])
{
    
    int n, i, f;

    printf("Digite o valor: ");
    scanf("%d", &n);

    if ( n > 0 ) {
    
        f = 1;
        i = n;

        // N -> 1
        while ( i >= 1 ) {
            f *= i;
            i--;
        }
        // 1 -> N
        i = 1;
        f = 1;
        while ( i <= n ) {
            f *= i;
            i++;
        }

        for(i = 1; i <= n; i++) {

        }

        for(i = n; i >= 1; i--) {
            
        }

        printf("O fatorial de %d e %d", n, f);

    } else {
        printf("Informe um valor positivo!\n");
    }


    
    return 0;
}
