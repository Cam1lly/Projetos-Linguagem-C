#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verdade(int a)
{
    if(a < 0)
    {
        return -1;
    }
    if(a > 0)
    {
        return 1;
    }
    if(a == 0)
    {
        return 0;
    }
}

int main(void)
{
    int a;
    printf("Digite um valor: ");
    scanf("%i", &a);
    a = verdade(a);
    printf("%i\n", a);
    return 0;
}