#include <stdio.h>

int main(int argc, char const *argv[])
{
    char palavra[51];
    int i = 0;
    int c = 0;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    while (palavra[i] != '\0') {
        c = palavra[i];
        c++;
        palavra[i] = (char)c;
        i++;
    }

    printf("Palavra criptografada: %s \n", palavra);

    return 0;
}
