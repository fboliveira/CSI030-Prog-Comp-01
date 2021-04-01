#include <stdio.h>

void calcula(int x) {
    x = x + 10;
}

void imprimir(int *v, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n", v[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    int n, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    // a) Ler os valores do vetor
    for (i = 0; i < n; i++) {
        printf("Digite a posição %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    // b) Calcular a media:

    // c) Pares e impares

    // d) Vetor ordenado -> crescente:
    // Flag
    int ordenado = 1;
    for (i = 1; i < n ; i++)
    {
        // Teste para verificar se nao esta ordenado
        if (v[i - 1] > v[i]) {
            ordenado = 0;
            break;
        }
         
    }

    if (ordenado) {
        printf("O vetor esta ordenado.");
    } else {
        printf("O vetor esta sem ordem definida.");
    }
    
    imprimir(v, n);
    int x = v[0];
    calcula(x);


    return 0;
}
