#include <stdio.h>

// Assinatura das sub-rotinas:
int potencia(int, int);

int main(int argc, char const *argv[])
{
    int b = 2;
    int e = 5;
    int i;
    int resultado = potencia(b, e);
    potencia(2, 3);
    potencia(5, 3);
    
    for(i = 0; i <= 10; i++) {
        potencia(2, i);
    }


    return 0;
}

int potencia(int base, int expoente) {
    int i;
    int resultado = 1;
    for(i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }

    printf("Potencia = %d\n", resultado);
    return resultado;

}