#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    float a, b, c, delta, x1, x2;

    printf("Digite a: ");
    scanf("%f", &a);    
    printf("Digite b: ");
    scanf("%f", &b);
    printf("Digite c: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais!\n");
    } else if (delta == 0) {
        printf("Existe apenas uma raiz!\n");

        x1 = (-b + sqrt(delta)) / (2 * a);

        printf("Raiz = %.2f\n", x1);

    } else {
        printf("Existem duas raizes!\n");
        
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raiz x1 = %.2f\n", x1);
        printf("Raiz x2 = %.2f\n", x2);
    }


    return 0;
}