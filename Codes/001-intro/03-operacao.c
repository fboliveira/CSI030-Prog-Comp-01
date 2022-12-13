#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x, y; //dados de entrada
    int s, m; //resultados - operacao
    float divisao;

    // 1 - entrada dos dados
    printf("Digite um numero: ");
    scanf("%d", &x);
    scanf("%d", &y);

    // 2 - Operacao
    s = x + y;
    m = x * y;
    divisao = (float)s / m;

    // 3 - Impressao do resultado
    printf("X + Y = %d\n", s);
    printf("X * Y = %d\n", m);
    printf("S / M = %f\n", divisao);


    return 0;
}