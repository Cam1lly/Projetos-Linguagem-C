#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *arr, int sla) 
{
    int *a = arr;
    int *b = arr + sla - 1;
    
    while (a < b) //aqui faz o reverso
	{
        swap(a, b);
        a++;
        b--;
    }
}

int main(void)
{
	int num1,num2;
	printf("Digite o primeiro numero inteiros: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero inteiros: ");
	scanf("%d", &num2);
	swap(&num1, &num2);
    printf("Apos a troca: num1 = %d, num2 = %d\n", num1, num2);
    
    int Array[6];
    printf("Digite os 6 numeros:");
        for (int i = 0; i < 6; i++) {
        scanf("%d", &Array[i]);
    }
    
    reverse(Array, 6);
    
    printf("Array invertifo: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", Array[i]);
    }
}

