#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    float seno = 0;
    float fatorial = 1;

    int x;

    int i;
    int somar = 1; // flag

    printf("Informe o valor de X: ");
    scanf("%d", &x);

    seno = 0;

    // Calculo do seno: x^i / i!
    for(i = 1; i <= 20; i+=2) {

        // x^i
        termo = pow(x, i);

        //i!
        fatorial = 1;
        for(f = 1; f <= i; f++) {
            fatorial *= f;
        }

        termo /= fatorial;

        if ( somar ) {
            seno += termo;
            somar = 0;
        } else {
            seno -= termo;
            somar = 1;
        }

    }


    return 0;
}