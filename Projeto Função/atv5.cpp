#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float distancia(float x1,float x2,float y1,float y2){
    float d;
    d = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    return d;
}

int main(void){
    float x1,x2,y1,y2,resultado;
    printf("Digite o x1: ");
    scanf("%f", &x1);
    printf("Digite o y1: ");
    scanf("%f", &y1);
    printf("Digite o x2: ");
    scanf("%f", &x2);
    printf("Digite o y2: ");
    scanf("%f", &y2);
    resultado = distancia(x1,x2,y1,y2);
    printf("a distancia eh: %.2f\n",resultado);
}