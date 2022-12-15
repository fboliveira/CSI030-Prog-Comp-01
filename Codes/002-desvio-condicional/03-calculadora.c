#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n1, n2, resultado;
    char operacao;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if ( operacao == '+' ) {
        resultado = n1 + n2;
        printf("Soma = %d\n", resultado);
    } else if ( operacao == '-' ) {
        resultado = n1 - n2;
        printf("Subtracao = %d\n", resultado);
    } else if ( operacao == '*' ) {
        resultado = n1 * n2;
        printf("Multiplicacao = %d\n", resultado);
    } else if ( operacao == '/' ) {
        if (n2 == 0) {
            printf("Nao existe divisao por zero!");
        } else {
            resultado = n1 / n2;
            printf("Divisao inteira = %d\n", resultado);
            printf("Divisao decimal = %.2f\n", (float)n1 / n2 );
        }
    } else {
        printf("Operacao nao encontrada!\n");
    }

    return 0;
}