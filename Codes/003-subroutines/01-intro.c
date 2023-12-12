#include <stdio.h>

// Assinatura
void imprimir_saudacao();
void imprimir(int numero);

int operacao(int a, int b) {
    int op;
    a++;
    b--;
    op = a * b;
    return op;
}

int main(int argc, char const *argv[]) {

    int x, y, resultado;

    imprimir_saudacao();

    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    // scanf("%d", &y);

    resultado = operacao(x, y);

    imprimir(resultado);

    return 0;
}

void imprimir_saudacao() {
    printf("Ola, pessoal!\n");
    printf("Seja bem-vinda ao programa.\n");
}

void imprimir(int numero) {
    printf("Numero = %d\n", numero);
}