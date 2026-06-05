//Fazer um programa para verificar s um dado número é par ou não.
//Utilizar uma função com passagens de parâmetros.
#include <stdio.h>
#include <stdlib.h>

int verifPar(int k)
{
    if (k % 2 == 0)
        return 1;
    else 
        return 0;    
}

int main (void)
{
    int num, resultado;
    printf("Digite um número: ");
    scanf("%d", &num);
    resultado = verifPar(num);
    if (resultado == 1)
        printf("\nO número que você digitou é par\n");
    else
        printf("\nO número que você digitou não é par\n");
    return 0;    
}