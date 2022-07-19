#include <stdio.h>

// Assinaturas
int operacao(int a, int b);
void impressao(int valor);
int funcao(void);

int main(int argc, char const *argv[]) {

    int x, y;
    int resultado;

    printf("Digite os numeros:");
    scanf("%d", &x); // 5
    scanf("%d", &y); // 7   

    resultado = operacao(x, y); // 36
    impressao(resultado); // 36
    printf("x = %d\n", x); // 5
    printf("y = %d\n", y); // 7


    return 0;
}

// Passagem de parâmetros por valor ("cópia")
int operacao(int a, int b) { // a = 6; b = 6
    int c; // 6 * 6
    a++;
    b--;
    c = a * b;
    return c;
}

void impressao(int valor) {
    printf("Resultado = %d\n", valor);
}