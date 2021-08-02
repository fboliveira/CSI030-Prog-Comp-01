#include <stdio.h>

void swap(int *a, int *b) {
    // troca de a para b
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void swap2x(int *a, int *b) {
    
}

int main(int argc, char const *argv[])
{
    int x, y;
    printf("Informe o primeiro valor: ");
    scanf("%d", &x);
    printf("Informe o segundo valor:");
    scanf("%d", &y);

    swap(&x, &y); // passagem por referencia -> enderecos de memoria das variaveis x e y

    printf("Primeiro = %d\n", x);
    printf("Segundo = %d\n", y);

    return 0;
}
