#include <stdio.h>
#include <string.h>

void palindrome(char texto[]) {
    int i, j;
    // char texto2[strlen(texto) + 1];

    i = 0;
    j = strlen(texto) - 1;

    // while(i <= j) {
    for(i = 0, j = strlen(texto) - 1; i <= j; i++, j--) {

        while(texto[i] == ' ') {
            i++;
        }        
        
        while(texto[j] == ' ') {
            j--;
        }

        if (texto[i] != texto[j]) {
            printf("Nao e palindrome!\n");
            return;
        }
        i++;
        j--;
    }

    printf("Eh palindrome!\n");
    
}

int main(int argc, char const *argv[]) {

    char texto[51];

    printf("Digite o texto: ");
    scanf("%[^\n]s", texto);

    palindrome(texto);

    return 0;
}