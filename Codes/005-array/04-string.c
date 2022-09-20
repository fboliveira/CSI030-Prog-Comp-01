#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    char nome[51];
    // char symbol = '\0';
    int letrasA = 0;
    int i;
    // char usuario[] = "ABC";

    printf("Digite o seu nome:" );
    //scanf("%[^\n]s", nome);
    gets(nome);

    printf("Nome = %s\n", nome);
    // puts(nome);

    // for(i = 0; i < strlen(nome); i++)
    for(i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == 'A' || nome[i] == 'a') {
            letrasA++;
        }
    }

    return 0;
}