#include <stdio.h>
#include <string.h>



int strchar(char string[], char ch) {
    int i;
    
    for(i = 0; i < strlen(string); i++) {
        if (string[i] == ch) {
            return i;
        }
    }

    return -1;

}


int main(int argc, char const *argv[]) {

    char string[101];
    char letra;
    int posicao;

    printf("Digite um texto: ");
    fgets(string, 100, stdin);

    printf("Digite uma letra para ser procurada: ");
    scanf(" %c", &letra);

    posicao = strchar(string, letra);

    if (posicao >= 0) {
        printf("A letra %c foi encontrada na posicao %d\n", letra, posicao);
    } else {
        printf("A letra nao foi encontrada no texto.\n");
    }

    return 0;
}