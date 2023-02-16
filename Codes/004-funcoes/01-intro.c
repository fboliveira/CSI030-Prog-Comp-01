#include <stdio.h>

// Assinaturas:
int soma(int, int);

// Procedimentos -> nao tem retorno (tipo -> void)
void imprimirInt(int x) {
    printf("Resultado = %d\n", x);
}


// main -> retorno eh int.
int main() {

    int a = 4, b = 3, c = 1, d = -5, e = 8, f = 2;

    int resultado = 0;

    printf("Soma de a e b = ");
    resultado = soma(a, b);
    imprimirInt(resultado);

    resultado = soma(a, c);
    imprimirInt(resultado);

    resultado = soma(b, d);
    imprimirInt(resultado);

    return 0;
}

// Funcao -> tipo para retorno / return <tipo>.
// Passagem de parametros -> por VALOR (copia)
int soma(int x, int y) {

    // x = 4;
    x = x + 2; // x = 6;
    // y = 3;
    y--;

    int k = x + y;
    // k = 6 + 3;

    return k; // 9

}