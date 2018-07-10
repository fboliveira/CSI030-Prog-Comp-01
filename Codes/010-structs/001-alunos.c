#include <stdio.h>

struct regAluno {
  char nome[101];
  float notas[3];
};

typedef regAluno Aluno;

int main(int argc, char const *argv[]) {

  int n = 2, i, j;
  Aluno alunos[n];

  // Leitura dos dados
  for(i = 0; i < n; i++) {
    scanf(" %[^\n]s", alunos[i].nome);

    // Notas
    for(j = 0; j < 3; j++) {
      printf("Digite a Nota %d\n", j+1);
      scanf("%f", &alunos[i].notas[j]);
    }

  }









  return 0;
}
