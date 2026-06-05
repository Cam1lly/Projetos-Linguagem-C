#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int var = 5;
	int *p1 = &var;
	int **p2 = &p1;
	printf("Valor apresentado pelo var: %d\n", **p2);
	**p2 = 10;
	printf("Valor alterado: %d\n", var);
}
