

/*
Introducao a Linguagem C
Operacoes de entrada e saida
Declaracao de variaveis
*/


#include <stdio.h>

int main()
{
    int x;
    int soma;
    int mult;
    int sub;
    int div;
    float div_dec;

    printf("\nOla, \tmundo!\n\n");


    // Solicita que o usuario digite um numero inteiro
    printf("Digite um numero:\n");
    scanf("%d", &x);

    printf("Numero digitado: %d\n\n", x);

    soma = x + 10;
    mult = x * 2;
    sub = mult - x;
    div = x / 2; // divisao INTEIRA

    // div_dec = x; // cast implicito

    div_dec = x / 2.0; // divisao DECIMAL

    printf("Soma = %d\n", soma);
    printf("Multiplicacao = %d\n", mult);
    printf("Subtracao = %d\n", sub);

    printf("Divisao inteira = %d\n", div);

    printf("Divisao decimal = %.2f\n", div_dec);

    return 0;
}
