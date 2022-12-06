#include <stdio.h>

int main(int argc, char const *argv[]) {

    int x, y; //dados de entrada
    int s, m; //resultados - operacao

    // 1 - entrada dos dados
    printf("Digite um numero: ");
    scanf("%d", &x);
    scanf("%d", &y);

    // 2 - Operacao
    s = x + y;
    m = x * y;

    // 3 - Impressao do resultado
    printf("X + Y = %d\n", s);
    printf("X * Y = %d\n", m);


    return 0;
}