#include <stdio.h>


int soma(int x, int y) {
    x++;
    y--;

    return x + y;
}

void imprimir(int x) {
    printf("%d\n", x);
}

void alterar(int *qualquerCoisa) {
    *qualquerCoisa += 5;
}

int main(int argc, char const *argv[]) {

    int x, y, w;
    printf("Digite dois numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);

    imprimir(x);
    imprimir(y);

    alterar(&x);
    alterar(&y);

    imprimir(x);
    imprimir(y);

    w = soma(x, y);

    imprimir(w);

    return 0;
}