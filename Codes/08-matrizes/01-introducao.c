#include <stdio.h>

#define LINHAS 6
#define COLUNAS 10

void lerVetor(int v[], int n) {

}

void lerMatriz(int m[LINHAS][COLUNAS], int linhas, int colunas) {

}

int main(int argc, char const *argv[])
{
    int x = 5;
    int i, j;
    int v[x]; // v[0]..v[0]

    int m[x][x]; // m[0][0]..m[x - 1][x - 1]
    
    for(i = 0; i < x; i++) { // x
        for (j = 0; j < x; j++) // x -> x * x
        {            
            m[i][j] = i + j;
        }
    }
        

    return 0;
}
