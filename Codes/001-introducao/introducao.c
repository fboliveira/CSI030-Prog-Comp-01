

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

    printf("\nOla, \tmundo!\n\n");


    // Solicita que o usuario digite um numero inteiro
    printf("Digite um numero:\n");
    scanf("%d", &x);

    printf("Numero digitado: %d\n\n", x);

    soma = x + 10;
    mult = x * 2;
    sub = mult - x;
    div = x / 2; // divisao INTEIRA



    return 0;
}
