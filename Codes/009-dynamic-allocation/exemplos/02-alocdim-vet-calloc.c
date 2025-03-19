#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

	int n;

	printf("Defina a quantidade de elementos: ");
	scanf("%d", &n);

	int *p, i;
	p = (int *) calloc(n,sizeof(int));

	if (!p) // p == NULL
		printf("Memoria insuficiente\n");
	else {
		for(i=0;i<n;i++)
			*(p+i)=i; // p[i] = i

		for(i=0;i<n;i++)
			printf("%d \t",p[i]);

		printf("\n\n\n");

		free(p);
	}
}
