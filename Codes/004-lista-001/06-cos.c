#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    float x;
    int i;
    int j;
    float serie = 1;
    float potencia;
    int fatorial;
    float termo;
    int somar = 0; // 1: soma / 0: subtrai

    printf("Digite o valor do angulo: ");
    scanf("%f", &x);

    for(i = 2; i <= 10; i+=2) {
        potencia = pow(x, i);

        fatorial = 1;
        for(j = 2; j <= i; j++) {
            fatorial *= j;
        }

        termo = potencia / fatorial;

        if (somar) {
            serie += termo;
            somar = 0;
        } else {
            serie -= termo;
            somar = 1;
        }
    }

    printf("cos(%f) = %f\n", x, serie);

    return 0;
}