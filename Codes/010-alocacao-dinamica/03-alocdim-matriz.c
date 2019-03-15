#include <stdio.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 5

int main(int argc, char const *argv[]) {
	int i,j;
	/* aloca as linhas da matriz */
	int **A = (int **) malloc(LINHAS*sizeof(int*));

	/* depois aloca cada coluna */
	for (i = 0; i<LINHAS; i++)
			A[i] = (int *) malloc(COLUNAS*sizeof(int));

	for (i = 0; i < LINHAS; i++) {
		for (j = 0; j < COLUNAS; j++) {
				A[i][j] = i + j;
				printf("A = %d \t",A[i][j]);
			}
			printf("\n");
		}

		for (i = 0; i < LINHAS; i++)
			free(A[i]); /*desaloca cada linha*/

		free(A); /*depois desaloca o vetor de ponteiros*/
}
