#include <stdio.h>
#include <string.h>


void strinv(char str[]) {

    int i, j;
    char aux;

    j = strlen(str) - 1;

    for(i = 0; i < j; i++) {
        aux = str[j];
        str[j] = str[i];
        str[i] = aux;
        j--;
    }

}


int main(int argc, char const *argv[]) {

    char texto[101];
    printf("Digite um texto: ");
    scanf("%[^\n]s", texto);
    
    printf("Texto original = %s\n", texto);

    strinv(texto);

    printf("Texto invertido = %s\n", texto);

    return 0;
}