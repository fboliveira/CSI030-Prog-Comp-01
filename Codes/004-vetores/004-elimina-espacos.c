#include <stdio.h>
#include <string.h>

void elimina_espacos(char destino[], char origem[]) {

    int i, j;
    // for(i = 0; origem[i] != '\0'; i++)
    j = 0;
    for(i = 0; i < strlen(origem); i++){
        if (origem[i] != ' ') {
            destino[j] = origem[i];
            j++;
        }
    }

}

int main(int argc, char const *argv[]) {

    char texto[50];
    char sem_espaco[50];

    printf("Digite o texto: ");
    scanf("%[^\n]s", texto);

    elimina_espacos(sem_espaco, texto);

    printf("Original: %s\n", texto);
    printf("Sem espacos: %s\n", sem_espaco);

    return 0;
}