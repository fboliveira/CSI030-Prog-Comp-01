#include <stdio.h>

int main(int argc, char const *argv[])
{
    char A[51];
    char B[4];

    int i, ocorrencias = 0;

    printf("Digite a palavra: ");
    scanf("%s", A);

    printf("Digite o texto a ser procurado: ");
    scanf("%s", B);

    // 012345
    // BANANA\0?
    // ANA   
    // i
    
    for(i = 2; A[i] != '\0'; i++) {
        printf("%d = %c%c%c\n", i, A[i-2], A[i-1], A[i]);
        if ( A[i-2] == B[0] && A[i-1] == B[1] && A[i] == B[2] ) {
            ocorrencias++;
        }
    }

    printf("Palavra: %s\n", A);
    printf("Texto para procura: %s\n", B);
    printf("Ocorrencias: %d\n", ocorrencias);

    return 0;
}
