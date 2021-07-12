#include <stdio.h>

int main(int argc, char const *argv[])
{
    // uma unica variavel (um unico espaco na memoria) do tipo int (inteiro)
    int x;
    scanf("%d", &x);

    // diversas variaveis do mesmo tipo - INVIAVEL !
    // int n01, n02, n03, ..., n50;

    // Colecao - set 
    // Vetor / array
    // uma unica variavel (diversos espacos na memoria) do tipo int (inteiro)
    // O valor (a quantidade) defina (conhecida) antes.
    int y = 200;
    int v[y]; // 0..49
    int i;
    //scanf("%d", v); // NAO EH POSSIVEL 

    for(i = 0; i < y; i++) {
        scanf("%d", v[i]); // leitura do vetor
    }

    int aux = v[199];
    v[199] = v[0];
    v[0] = aux;


    // Quando a quantidade nao eh conhecida (ou eh informada pelo usuario).
    int n;
    
    printf("Digite a quantidade de valores: ");
    scanf("%d", n);

    // Declarar um vetor com a quantidade informada - n
    float notas[n];
    float soma = 0.0;

    for(i = 0; i < n; i++) {
        scanf("%f", notas[i]); // leitura do vetor
    }

    for(i = 0; i < n; i++) {
        soma = soma + notas[i]; // manipulacao ou acesso 
    }


    return 0;
}
