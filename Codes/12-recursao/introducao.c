#include <stdio.h>

int fatorialIterativa(int n) {

    int i, f = 1;

    for(i = 1; i <= 5; i++) {
        f = f * i;
    }

    return f;
}

int fatorial(int n) {
    // Caso base - criterio de parada
    if ( n <= 1 ) {
        return 1;
    }

    return n * fatorial(n - 1);
}

/*
f = fatorial(5): 120 <=
    -> 5 * fatorial(4): 5 * 24 = 120
        -> 4 * fatorial(3): 4 * 6 = 24
            -> 3 * fatorial(2): 3 * 2 = 6
                -> 2 * fatorial(1): 2 * 1 = 2
                    -> 1

    

*/

int main(int argc, char const *argv[])
{
    int n = 5, f;

    // 5 * 4 * 3 * 2 * 1
    f = fatorial(n);
    // f = n * fatorial(n - 1);


    printf("Fatorial = %d", f);
    

    return 0;
}
