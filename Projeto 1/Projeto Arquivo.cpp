//Escreva um programa que:
//a)Crie/abra um aquivo de texto de nome "arq.txt"
// b)Permita que o usuário grave diversos caracteres nesse arquivo, até que o
// usuário entre com caractere "0" (zero)
//c)Feche o aruivo
// Agora, abra e leia o arquivo, caractere por caractere e escreva na tela todos os caracteres armazenados.

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *pont_arq;
    char c;
    pont_arq = fopen("arq.txt", "a");

    if(pont_arq == NULL){
        printf("\nErro na abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("\n\n Arquivo criado com sucesso!!\n\n");
    }
    //Editar o arquivo
    do{
        printf("\n\nEscreva um caracter para o arquivo: ");
        scanf(" %c", &c);
            if(c != '0'){
                fprintf(pont_arq, "%c", c);
            }
    }while (c != '0'); 
    fclose(pont_arq);
    
    //Ler o arquivo
    printf("\n\nApresentando os caracteres: \n");
    pont_arq = fopen("arq.txt", "r");
    do
    {
        c = fgetc(pont_arq); 
        printf("%c", c); 
    }while (c != EOF); 
    fclose(pont_arq);
    return(0);
}