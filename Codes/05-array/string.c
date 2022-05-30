#include <stdio.h>

int main(int argc, char const *argv[]) {

    int letras_a = 0, i;
    char nome[31];
    // scanf("%[^\n]s", nome);
    gets(nome);

    // printf("%s\n", nome);
    puts(nome);

    for(i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == 'a') {
            letras_a++;
        }
    }

    for(i = 0; nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }

    return 0;
}