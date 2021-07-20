#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int x;
    int v[50]; //0..49 -> 0..n-1
    // v[50] ???

    // String
    printf("\n");
    char c = 'a'; //<- a\0

    int n;
    scanf("%d %d", &n, &x);

    char nome[51] = "ana"; //0..49 -> 50: \0
    char aluna[51];
    // 0: a
    // 1: n
    // 2: a
    // 3:\0

    scanf("%d", &n); // 258 <-
    scanf(" %[^\n]s", nome); // ana flavia

    // char * strcpy ( char * destination, const char * source );
    strcpy(aluna, nome);
    
    char pessoa[101];
    scanf("%[^\n]s", pessoa); // pedro
    // gets(pessoa);
    print("%s\n", pessoa); //pedro
    int i;
    int letras = 0;
    for(i = 0; pessoa[i] != '\0'; i++) {
        letras++;
    }
    
    printf("Letras = %d", letras);

    int letraFuncao = strlen(pessoa);

    return 0;
}
