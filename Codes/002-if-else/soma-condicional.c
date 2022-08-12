#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Declarar as variaveis
    int a = 0;
    int b;
    int c;
    int r;
    
    float m; // %f

    // Entrada
    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    printf("Digite mais um numero: ");
    scanf("%d", &c);

    // Os valores devem estar entre [10; 20]
    if (( a >= 10 && a <= 20 ) 
        &&  ( b >= 10 && b <= 20 ) 
        && (c >= 10 && c <= 20 )) {

        // Processamento
        // Soma
        r = a + b + c;
        m = r / 3.0;

        //Apresentar o resultado - saida
        printf("A soma de %d, %d e %d eh igual a %d\n", a, b, c, r);

        printf("A media eh: %f\n", m);

    } else {

        printf("ERRO: Os valores devem ser digitados entre 10 e 20, inclusive.\n");

    }



    return 0;
}