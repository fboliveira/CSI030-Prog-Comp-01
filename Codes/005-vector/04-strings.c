#include <stdio.h>
#include <string.h>

void imprimir_nome(char nome[]) {
    printf("Nome = %s\n", nome);
}

void soletrar(char nome[]) {
    int i;

    for(i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') {
            printf("%c - ", nome[i]);
        }
    }
}

int contar_vogais(char nome[]) {

    int i;
    int vogais = 0;

    for(i = 0; i < strlen(nome); i++) {
        // if (nome[i] == 'A')
        switch(nome[i]) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vogais++;
                break;
        }
    }

    return vogais;

}


int main(int argc, char const *argv[]) {

    char letra = '1';
    char texto[] = "texto sobre vetores";
    // tamanho - quantidade + 1 -> \0
    // nome: 50 letras: 50 + 1
    char nome[51];
    int vogais;

    printf("Digite seu nome:\n");
    scanf("%[^\n]s", nome);
    // fgets(nome, 50, stdin);
    
    //printf("Nome = %s\n", nome);
    // puts(nome);
    imprimir_nome(nome);
    soletrar(nome);

    vogais = contar_vogais(nome);

    printf("Vogais = %d\n", vogais);

    return 0;
}