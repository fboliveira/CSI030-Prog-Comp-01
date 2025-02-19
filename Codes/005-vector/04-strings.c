#include <stdio.h>
#include <string.h>

void imprimir(char nome[]) {
    // nome[0] = '#';
    printf("Nome = %s\n", nome); 
}

void soletrar(char nome[]) {

    int i;
    for(i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') {
            printf("%c - ", nome[i]);
        }
    }
    printf("\n");

}

int contar_vogais(char nome[]) {

    int i;
    int vogais = 0;

    for(i = 0; i < strlen(nome); i++) {
        // if (nome[i] == 'A' || nome[i] == 'a')
        switch (nome[i]) {
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

void criptografar(char nome[], char resultado[]) {
    int i;
    for(i = 0; i < strlen(nome); i++) {
        resultado[i] = nome[i] + 1;
    }
}

int main(int argc, char const *argv[]) {

    char letra = 'A';
    char texto[] = "Prog I";

    // Nomes: 50 letras -> 50 + 1
    char nome[51];
    char cripto[51];
    int vogais;

    printf("Digite o nome:\n");
    // scanf("%c", &letra);
    nome[0] = '@';
    scanf("%[^\n]s", nome);
    // gets(nome);
    // fgets(nome, 50, stdin);

    imprimir(nome);
    // printf("Nome = %s\n", nome);
    // puts(nome);
    soletrar(nome);

    vogais = contar_vogais(nome);
    printf("Vogais = %d\n", vogais);

    criptografar(nome, cripto);
    imprimir(cripto);

    return 0;
}