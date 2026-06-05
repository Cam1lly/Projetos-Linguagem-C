#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mediaA(float a, float b, float c)
{
    float calculo, resultado;
    calculo = a+b+c;
    resultado = calculo/3;
    return resultado;
}

float mediaP(float a, float b, float c)
{
    float p1;
    p1 = (a*5)+(b*3)+(c*2);
    p1 = p1/10;
    return p1;
}

float mediaH(float a, float b, float c)
{
    float h;
    h = 1/a + 1/b + 1/c;
    h = 3/h;
    return h;
}

int main (void)
{
    float aritimetica,ponderada,harmonica,a,b,c;
    char letra;
    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    printf("Digite a terceira nota: ");
    scanf("%f", &c);
    printf("Digite a letra: ");
    scanf(" %c", &letra);
    aritimetica = mediaA(a,b,c);
    ponderada = mediaP(a,b,c);
    harmonica = mediaH(a,b,c);
    if(letra == 'a'){
        printf("A media aritimetica é: %.2f\n", aritimetica);
    }
    if(letra == 'p'){
        printf("A media ponderada é: %.2f\n", ponderada);
    }
    if(letra == 'h'){
        printf("A media harmonica é: %.2f\n", harmonica);
    }
    printf("\n");
}