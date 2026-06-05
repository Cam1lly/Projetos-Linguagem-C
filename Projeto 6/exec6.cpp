#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main(void)
{
   FILE *entrada, *saida;
   int nasc = 0, ano;
   char nome[MAX_SIZE];
   int idade = 0;

   printf("Digite o ano atual: ");
   scanf("%d", &ano);

   entrada = fopen("entrada.txt","r");
   saida = fopen("saida.txt", "w");
       
   while(fscanf(entrada, "%s %d",nome, &nasc) != EOF){
        idade = ano - nasc ;
        if(idade > 18){
            fprintf(saida, "%s é maior de Idade", nome);
        }
        if(idade < 18){
            fprintf(saida, "%s é menor de Idade", nome);
        }
        if(idade == 18){
            fprintf(saida, "%s é entrando na maior idade", nome);
        }
    }
}