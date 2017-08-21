#include <stdio.h>

typedef struct regAluno {
  char nome[30];
  float notas[3];
} Aluno;

int main(int argc, char const *argv[]) {

  Aluno alunos[5];
  int i, j;

  printf("Informe os dados dos alunos:\n");

  for(i = 0; i < 5; i++) {
    printf("Dados do aluno %d\n", i + 1);
    scanf(" %[^\n]s", alunos[i].nome);

    for(j = 0; j < 3; j++) {
      printf("Nota %d\n", j + 1);
      scanf("%f", &alunos[i].notas[j]);
    }

  }

  printf("Impressao dos alunos: \n");

  for(i = 0; i < 5; i++) {
    printf("Aluno %d\n", i + 1);
    printf("%s\n", alunos[i].nome);

    for(j = 0; j < 3; j++) {
      printf("Nota %d = %2.f\n", j+1, alunos[i].notas[j]);
    }
    printf("-------------\n");
  }



  return 0;
}
