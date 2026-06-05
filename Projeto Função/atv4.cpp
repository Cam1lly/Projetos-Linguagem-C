#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int absoluto(int a)
{
        a = a * -1;
        return a;
}


int main(void)
{
    int a, r, i;
    for (i = 0; i < 5; i++)
    {
    printf("Digite um número negativo: ");
    scanf("%i", &a);
    a = absoluto(a);
    printf("%i\n", a);
    }
}