#include <stdio.h>
#include <string.h>


int conta_letras(char nome[]) {

    int i;
    int letras = 0;
    int tam = strlen(nome);

    // for(i = 0; i < tam ; i++) {

    for(i = 0; nome[i] != '\0' ; i++) {
        if (nome[i] == 'A' ||
            nome[i] == 'a') {
                letras++;
            }
    }

    return letras;


}

void imprimir_codigos_char(char nome[]) {
    int i;

    for (i = 0; i < strlen(nome); i++) {
        printf("%d\n", nome[i]);
    }
}

void criptografar(char nome[], int chave) {
    int i;

    for (i = 0; i < strlen(nome); i++) {
        nome[i] += chave;
    }
}

int main(int argc, char const *argv[]) {

    char nome[31]; // 30 char + \0
    int letras_a;

    printf("Digite o seu nome: ");
    scanf("%[^\n]s", nome); // sem & - vetor completo - passagem por referencia -> valido apenas para strings.
    // gets(nome);
    // fgets(nome, 30, stdin);

    printf("Seja bem-vinda, %s!\n", nome); // impressao do vetor completo - apenas para strings

    // puts(nome);

    letras_a = conta_letras(nome);
    printf("Letras A = %d\n", letras_a);

    imprimir_codigos_char(nome);

    criptografar(nome, 2);

    printf("Texto criptografado: %s\n", nome);

    return 0;
}