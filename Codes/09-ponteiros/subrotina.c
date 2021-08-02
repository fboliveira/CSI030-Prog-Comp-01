#include <stdio.h>

void processa1(int w) { // w = |  15  | 
    w = w + 10;
    printf("W = %d\n", w); // 15
}

void processa2(int *w) { // w = | H3652 |
    *w = *w + 30; // 5 + 30
    printf("*W = %d\n", *w); // 35
}

void processa3(int w[]) {

}

void processa4(int w[][30]) {

}

int main(int argc, char const *argv[])
{
    int x = 5; // |  35  | <- H3652
    int vetor[10]; // *vetor
    int matriz[5][30]; // *matriz
    //scanf("%d", &x); // 5

    printf("X = %d\n", x); // 5
    processa1(x); // passagem de parametro por valor (copia) -> o valor original eh preservado.
    printf("X = %d\n", x); // 5

    processa2(&x); // passagem de parametro por REFERENCIA (endereco/espaco de memoria) -> o valor original eh (pode ser) modificado.
    printf("X = %d\n", x); // 35

    processa3(vetor);
    processa4(matriz);

    return 0;
}
