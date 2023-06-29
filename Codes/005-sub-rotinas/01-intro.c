#include <stdio.h>

// Funcao -> soma(x, y)
/* tipo nome(parametros...) {
    ...
    return ...
}
*/
// Assinatura
int soma(int, int);


// Procedimento -> imprimir
/*
    void nome (parametros ...) {
        ....
        // Nao tem return.
    }
*/
void imprimir(int valor);

void imprimir(int valor)
{
    printf("Calculo da soma = %d\n", valor);
}

int main(int argc, char const *argv[])
{

    int a, b, resultado;
    int acum = 0;
    int c = 3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    resultado = soma(a, b);
    acum += resultado;
    imprimir(resultado);

    resultado = soma(acum, c);
    acum += resultado;
    imprimir(resultado);

    return 0;
}

int soma(int x, int y)
{
    int a = x + y;
    return a;
}