#include <stdio.h>
#include <stdlib.h>

typedef struct regAluno {
  char nome[30];
  float notas[3];
} Aluno;

int main(int argc, char const *argv[]) {

  int i, j, n;

  printf("Digite a quantidade de alunos:\n");
  scanf("%d", &n);

  Aluno* alunos = (Aluno*)malloc(n * sizeof(Aluno));

  printf("Informe os dados dos alunos:\n");

  for(i = 0; i < n; i++) {
    printf("Dados do aluno %d\n", i + 1);
    scanf(" %[^\n]s", alunos[i].nome);

    for(j = 0; j < 3; j++) {
      printf("Nota %d\n", j + 1);
      scanf("%f", &alunos[i].notas[j]);
    }

  }

  printf("Impressao dos alunos: \n");

  for(i = 0; i < n; i++) {
    printf("Aluno %d\n", i + 1);
    printf("%s\n", alunos[i].nome);

    for(j = 0; j < 3; j++) {
      printf("Nota %d = %2.f\n", j+1, alunos[i].notas[j]);
    }
    printf("-------------\n");
  }

  free(alunos);

  return 0;
}
