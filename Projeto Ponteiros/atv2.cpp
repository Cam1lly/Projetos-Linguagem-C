#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5] = {10,20,30,40,50};
	int *arrPtr = arr;
	for(int i = 0;i < 5;i++)
	{
		printf("Elemento %d: %d\n", i, *(arrPtr + i));
	}
}
