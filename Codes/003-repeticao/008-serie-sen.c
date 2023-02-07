#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    int i, j;
    int fatorial = 1;
    int somar = 1; // flag -> 1: +; 0: -
    float x;
    float seno = 0;
    float potencia;
    float termo;

    printf("Digite o valor de x: (em radianos) ");
    scanf("%f", &x);

    // Calculo da serie: sen(x)
    for(i = 1; i <= 15; i += 2) {

        potencia = powf(x, i);

        fatorial = 1;
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }

        termo = (potencia / fatorial);

        if (somar == 1) {
            seno += termo;
            somar = 0;
        } else {
            seno -= termo;
            somar = 1;
        }

    }

    printf("O seno de %.2f e igual a %.2f\n", x, seno);


    return 0;
}