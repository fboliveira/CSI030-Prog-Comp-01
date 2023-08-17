#include <stdio.h>

int procurar_iterativa(int vetor[], int n, int k) {
    int i;
    
    for(i = 0; i < n; i++) {
        if (vetor[i] == k) {
            return i;
        }
    }

    return -1;

}

int procurar_recursiva(int vetor[], int n, int k, int i) {

    // Casos em que a recursao encerra
    if ( i == n ) {
        return -1;
    } else if (vetor[i] == k) {
        return i;
    }

    return procurar_recursiva(vetor, n, k, i + 1);

}


int main(int argc, char const *argv[]) {

    int n;
    int k;
    int i;
    int resultado;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    
    int vetor[n];

    printf("Digite os numeros: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero para pesquisa: ");
    scanf("%d", &k);

    resultado = procurar_iterativa(vetor, n, k);

    printf("Versao iterativa: ");

    if (resultado >= 0) {
        printf("[%d] = %d\n", resultado, vetor[resultado]);
    } else {
        printf("O valor nao existe no vetor\n");
    }

    resultado = procurar_recursiva(vetor, n, k, 0);

    printf("Versao recursiva: ");

    if (resultado >= 0) {
        printf("[%d] = %d\n", resultado, vetor[resultado]);
    } else {
        printf("O valor nao existe no vetor\n");
    }    

    return 0;
}