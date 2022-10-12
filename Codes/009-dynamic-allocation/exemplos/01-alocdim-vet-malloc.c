#include <stdio.h>

#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int *p, i;


	p = (int *) malloc(20*sizeof(int));
//	p = (int *) calloc(20, sizeof(int));

	if (p == NULL)
		printf("Memoria insuficiente\n");
	else {
		for(i=0;i<20;i++)
			p[i] = i;
			//*(p+i)=i;

		for(i=0;i<20;i++)
			printf("%d \t",p[i]);

		printf("\n\n\n");
		free(p);
	}
}
