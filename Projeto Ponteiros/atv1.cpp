#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num = 10;
	int *ptr = &num;
	printf("Valor de Num: %d\n", *ptr);
	
	*ptr = 20;
	printf("Novo valor de num: %d\n", num);
}
	
