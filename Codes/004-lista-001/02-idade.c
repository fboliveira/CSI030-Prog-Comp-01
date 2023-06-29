#include <stdio.h>

int main(int argc, char const *argv[]) {

    int idade, n, soma;

    n = 0;
    soma = 0;
    idade = 0;

    while (idade != -1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade != -1) {
            n++;
            soma += idade;
        }
    }

    return 0;
}