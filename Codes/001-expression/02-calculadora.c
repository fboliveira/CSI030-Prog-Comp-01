#include <stdio.h>

int main(int argc, char const *argv[]) {

    int a, b, resultado;
    float res_decimal;
    char operacao;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite um numero: ");
    scanf("%d", &b);

    if (operacao == '+') {
        resultado = a + b;
        printf("Resultado = %d\n", resultado);
    } else if (operacao == '-') {
        resultado = a - b;
        printf("Resultado = %d\n", resultado);
    } else if (operacao == '*') {
        resultado = a * b;
        printf("Resultado = %d\n", resultado);
    } else if (operacao == '/') {

        if (b == 0) {
            printf("Divisor nao pode ser zero.\n");
        } else {
            resultado = a / b;
            printf("Resultado = %d\n", resultado);
        }

    } else if (operacao == '#') {

        if (b == 0) {
            printf("Divisor nao pode ser zero.\n");
        } else {
            res_decimal = (float)a / b;
            printf("Resultado = %.2f\n", res_decimal);
        }
    }

    } else { 
        printf("Operacao invalida!\n");
    }

    // switch (operacao) {
    // case '+':
    //     resultado = a + b;
    //     break;

    // case '-':
    //     resultado = a - b;
    //     break;

    
    // default:
    //     break;
    // }

    

    return 0;
}