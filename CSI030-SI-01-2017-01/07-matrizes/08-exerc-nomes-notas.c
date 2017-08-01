#include <stdio.h>

int main(int argc, char const *argv[]) {

  char nomes[5][101];
  float notas[5][2];

  float n1 = 0, n2 = 0, media;

  int i, j;

  printf("Digite os dados dos(as) alunos(as)\n");

  for(i = 0; i < 5; i++) {
    printf("Nome: ");
    //gets(nomes[i]);
    scanf(" %s", nomes[i]);

    for(j = 0; j < 2; j++) {
      printf("Nota %d: ", j+1);
      scanf("%f", &notas[i][j]);
    }

  }

  for(i = 0; i < 5; i++) {
    printf("Aluno(a): %s\t", nomes[i]);

    media = 0;
    
    for(j = 0; j < 2; j++) {
      printf("%.2f\t", notas[i][j]);
      media += notas[i][j];
    }
    printf("%.2f\n", media / 2.0);
  }

  for(i = 0; i < 5; i++) {
    n1 += notas[i][0];
  }

  for(i = 0; i < 5; i++) {
    n2 += notas[i][1];
  }

  n1 = n1 / 5.0;
  n2 = n2 / 5.0;
  printf("Media N1 = %.2f\n", n1);
  printf("Media N2 = %.2f\n", n2);



  return 0;
}
