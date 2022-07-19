#include <stdio.h>
#include <string.h>

void strinv(char str[]) {

    // l a b r i e g \0
    // aux = 'l';
    char aux;

    // 1
    int tamanho = strlen(str);
    int i, j, tam = 0;

    // 2
    for(i = 0; str[i] != '\0'; i++) {
        tam++;
    }

    // i -> final: decrescente
    // j -> inicio: crescente

    j = 0;
    for (i = tamanho - 1, j = 0; i > j; i--, j++) {
        // Troca i e j: aux
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
    }

}

int main(int argc, char const *argv[]) {

    char str[101];
    printf("Digite o nome: ");
    scanf("%s", str);

    printf("Antes...: %s\n", str);

    strinv(str);

    printf("Inverso.: %s\n", str);

    return 0;
}