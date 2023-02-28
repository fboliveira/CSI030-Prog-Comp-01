#include <stdio.h>
#include <string.h>

int contar_letras_a(char nome[]) {

    int i, letras = 0;

    // for( i = 0; nome[i] != '\0'; i++) {
    for( i = 0; i < strlen(nome); i++) {

        if (nome[i] == 'A' || nome[i] == 'a') {
            letras++;
        }

    }

    return letras;

}


int main(int argc, char const *argv[]) {

    char nome[31];
    char programa[101];

    int letras_a;

    printf("Digite o nome: ");
    gets(nome);
    // scanf("%[^\n]s", nome); // especifico para strings - sem &

    strcpy(programa, "Tratamento de strings");

    // printf("O nome e: %s\n", nome);
    // puts(nome);

    letras_a = contar_letras_a(nome);
    printf("O nome %s tem %d letras A ou a\n", nome, letras_a);

    printf("Fim do programa %s\n", programa);

    return 0;
}