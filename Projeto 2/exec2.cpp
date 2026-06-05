//2)Faça um programa que receba do usuário um arquivo de texto e mostre na tela
// quantas linhas esse arquivo possui.

//3)Faça um programa que receba dois arquivos do usuario, e crie um terceiro arquivo com o conteúdo dos dois primeiro juntos
// (o conteudo do primeiro seguido do conteudo do segundo).

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pont_arq;
    char linha[100];
    char *result;
    int i;

    pont_arq = fopen("prabens.txt", "r");

    //Verificando se o arquivo abriu
    if(pont_arq == NULL){
        printf("\nErro na abertura do arquivo!\n");
        exit(1);
    }
    else
    {
        printf("\n\n Arquivo aberto com sucesso!!\n\n");
    }

    i = 1;
    while(!feof(pont_arq))
    {
        result = fgets(linha, 100, pont_arq);
        if(result){
            printf("linha %d : %s\n", i, linha);
        }
        i++;
    }
    fclose(pont_arq);

}