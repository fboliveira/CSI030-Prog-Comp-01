#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;
    int i;
    //int vetor[n]; n tem lixo de memoria

    printf("Digite um numero: ");
    scanf("%d", &n);

    int vetor[n]; // vetor declarado apos a definicao de n.

    for(i = 0; i < n; i++) {
        printf("Digite a idade: ");
        scanf("%d", &vetor[i]);
    }

    printf("Idades informadas:\n");
    for(i = 0; i < n; i++) {
        printf("Idade = %d\n", vetor[i]);
    }

    return 0;
}