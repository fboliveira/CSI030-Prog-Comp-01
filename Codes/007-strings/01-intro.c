#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    char nome[51];
    char cripto[51];
    char texto[] = "Prog I";
    // char letra = 'A';
    int contaA = 0;

    int i;

    printf("Digite seu nome: ");
    // scanf("%[^\n]s", nome);
    // gets(nome);
    fgets(nome, 50, stdin);

    // printf("Seja bem-vinda, %s!\n", nome);
    puts(nome);

    for(i = 0; i < strlen(nome); i++) {
        if (nome[i] == 'A' || nome[i] == 'a'){
            contaA++;
        }
    }

    printf("Letras A = %d\n", contaA);

    strcpy(cripto, nome);

    for(i = 0; i < strlen(cripto); i++) {
        cripto[i]++;
    }    

    printf("Criptografado: %s\n", cripto);

    return 0;
}