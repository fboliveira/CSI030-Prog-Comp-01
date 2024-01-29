#include <stdio.h>
#include <string.h>


int strichr(char str[], char c) {
    int i;
    int pos = -1;

    for(i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            pos = i;
            break;
        }
    }

    return pos;

}

int main(int argc, char const *argv[]) {

    char texto[51];
    char c;
    char posicao;

    printf("Digite o texto: ");
    scanf("%[^\n]s", texto);

    char buffer;
    do {
        fflush(stdin);
    } while((buffer = getchar()) != '\n');

    printf("Digite um caracter para pesquisa: ");
    scanf("%c", &c);

    posicao = strichr(texto, c);

    if (posicao > 0 ) {
        printf("O caracter %c esta na posicao %d\n", c, posicao);
    } else {
        printf("O caracter nao existe no texto.\n");
    }

    return 0;
}