#include <stdio.h>
#include <stdlib.h>

typedef int INTEIRO;


typedef struct P {

    int id;
    int idade;
    char nome[101];

} Pessoa;

//typedef struct P Pessoa;
void imprimir_pessoa(Pessoa p) {

}

int main(int argc, char const *argv[]) {

    int x, i;
    INTEIRO y;

    // Pessoa pessoa;

    // Pessoa pedro;
    // Pessoa joao;
    
    Pessoa turma[3];
    Pessoa *p;

    // p = &pessoa;
    p = (Pessoa *) malloc(10 * sizeof(Pessoa));

    scanf("%d", &pedro.id);
    scanf("%d", &joao.id);

    scanf(" %s", pedro.nome);
    scanf(" %s", joao.nome);

    scanf("%d", &pedro.idade);
    scanf("%d", &joao.idade);

    for(i = 0; i < 3; i++) {
        printf("Digite o ID:");
        scanf("%d", &turma[i].id);

        printf("Digite o nome: ");
        scanf(" %s", turma[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &turma[i].idade);

    }

    for(i = 0; i < 3; i++) {
        printf("ID = %d\n", turma[i].id);
        printf("Nome = %s\n", turma[i].nome);
        printf("Idade = %d\n", turma[i].idade);
    }

    free(p);

    return 0;
}