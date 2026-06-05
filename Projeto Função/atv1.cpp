#include <stdio.h>
#include <stdlib.h>

void retorne(int a, int b)
{
    if (a < b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
}

int main()
{
    int x, y, r;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);
    retorne(x, y);
    return 0;
}