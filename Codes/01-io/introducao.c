#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    int n3;
    float media;

    printf("Informe tres numeros");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    media = (n1 + n2 + n3);
    media = media / 3;
    
    printf("O resultado e: %f", media);

    return 0;
}
