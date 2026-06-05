#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int calculo(int b, int e)
{
    int r = pow(b, e);
    return r;
}


int main(void)
{
    int b, e, r;
    printf("Digite a base de uma potencia: ");
    scanf("%i", &b);
    printf("Digite o expoente de uma potencia: ");
    scanf("%i", &e);
    r = calculo(b, e);
    printf("%i", r);
    printf("\n");
}