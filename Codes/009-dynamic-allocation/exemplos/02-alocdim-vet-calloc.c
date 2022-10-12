#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int main(int argc, char const *argv[]) {

	int *p, i;
	p = (int *) calloc(TAM,sizeof(int));

	if (!p)
		printf("Memoria insuficiente\n");
	else {
		for(i=0;i<TAM;i++)
			*(p+i)=i;

		for(i=0;i<TAM;i++)
			printf("%d \t",p[i]);

		printf("\n\n\n");

		free(p);
	}
}
