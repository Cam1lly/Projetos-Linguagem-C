#include <stdio.h>
#include <stdlib.h>

void DoubleValue (int *p)
{
	*p = *p * 2;
}

int main(void)
{
	int x = 15;
	printf("Valor de X antes: %d\n", x);
	DoubleValue(&x);
	printf("Valor de X depois: %d\n", x);
}
