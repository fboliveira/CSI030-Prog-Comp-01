#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;
    n = 101;

    // char letra = 'a';
    // char pessoa[] = "gabriel";

    // int idades[n];

    char nome[n]; // "string"
    
    //  0   1   2   3   4   5   6   7 .. n
    // 'g' 'a' 'b' 'r' 'i' 'e' 'l' '\0' 

    scanf("%d", &x); // 5 <enter>
    scanf(" %[^\n]s", nome); // gabriel
    printf("%s\n", nome);

    return 0;
}
