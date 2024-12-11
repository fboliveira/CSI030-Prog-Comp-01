#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a, b, resultado;
    char operacao;
    float c, res_decimal;

    printf("Digite um numero: ");
    scanf("%d", &a);

    // fflush(stdin);

    printf("Digite a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    if (operacao == '+') {
        resultado = a + b;
        printf("%d + %d = %d\n", a, b, resultado);
    } else if (operacao == '-') {
        resultado = a - b;
        printf("%d - %d = %d\n", a, b, resultado);  
    } else if (operacao == '*') {
        resultado = a * b;
        printf("%d * %d = %d\n", a, b, resultado);
    } else if (operacao == '/') {

        if (b == 0) {
            printf("O divisor nao pode ser zero.\n");
        } else {
            resultado = a / b;
            printf("%d / %d = %d\n", a, b, resultado);
        }

    } else if (operacao == '#') {

        if (b == 0) {
            printf("O divisor nao pode ser zero.\n");
        } else {
            c = a;
            res_decimal = c / b;
            printf("%d / %d = %.2f\n", a, b, res_decimal);
        }

    } else {
        printf("operacao invalida!\n");
    }

    // switch (operacao)
    // {
    // case '+':
    //     resultado = a + b;
    //     printf("%d + %d = %d\n", a, b, resultado);
    //     break;
    
    // default:
    //     break;
    // }

    return 0;
}