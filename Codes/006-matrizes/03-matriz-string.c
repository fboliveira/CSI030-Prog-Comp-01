#include <stdio.h>

int main(int argc, char const *argv[]) {

    int numero_discentes = 2;
    int letras_por_nome = 101;

    char nomes[numero_discentes][letras_por_nome];
    int i, j, letras_a = 0;

    printf("Digite os nomes dos discentes:\n");
    for(i = 0; i < numero_discentes; i++) {
        // gets(nomes[i]);
        scanf(" %[^\n]s", nomes[i]);
    }

    printf("\nNomes dos discentes:\n");
    for(i = 0; i < numero_discentes; i++) {
        // puts(nomes[i]);
        printf("%s\n", nomes[i]);
    }

    for(i = 0; i < numero_discentes; i++) {
        for(j = 0; nomes[i][j] != '\0'; j++) {
            if (nomes[i][j] == 'A' || nomes[i][j] == 'a') {
                letras_a++;
            }
        }
    }

    printf("\nQuantidade de letras A = %d\n", letras_a);


    return 0;
}