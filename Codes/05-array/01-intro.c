#include <stdio.h>

void leitura(int dados[], int quantidade) {
    int i ;
    for(i = 0; i < quantidade; i++) {
        printf("Digite a posicao %d\n", i+1);
        scanf("%d", &dados[i]);
    }

}

int main(int argc, char const *argv[]) {

    int n, i;
    scanf("%d", &n);
    int vetor[n];

    // for(i = 0; i < n; i++){
    //     vetor[i] = i * i;
    // }
    leitura(vetor, n);

    for(i = 0; i < n; i++){
        printf("[%d] = %d\n", i, vetor[i]);
    }


    

    return 0;
}