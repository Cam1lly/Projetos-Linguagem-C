#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *pont_arq;
    char nome[250];
    int tel=0;

    pont_arq = fopen("cadastro.txt","a");
    if(pont_arq == NULL){
        printf("\nErro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("\n\n Arquivo criado com sucesso!\n\n");
    }
    
    do{
        printf("\nEscreva o seu nome: ");
        scanf("%s", &nome);
        fprintf(pont_arq, "\n%s",nome);

        printf("\nEscreva o seu telefone: ");
        scanf("%i", &tel);
            if(tel != 0){
                fprintf(pont_arq, "\n%i",tel);
            }
    }while (tel != 0);
    fclose(pont_arq);

    return(0);
}