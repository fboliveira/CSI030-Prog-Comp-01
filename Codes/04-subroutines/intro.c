#include <stdio.h>

// Assinaturas
int operacao(int a, int b);
void impressao(int valor);

int main(int argc, char const *argv[]) {

    int x, y;
    int resultado;

    printf("Digite os numeros:");
    scanf("%d", &x);
    scanf("%d", &y);    

    resultado = operacao(x, y);
    impressao(resultado);

    return 0;
}

int operacao(int a, int b) {
    int c;
    a++;
    b--;
    c = a * b;
    return c;
}

void impressao(int valor) {
    printf("Resultado = %d\n", valor);
}