#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100

int main(void)
{

    FILE *arquivo, *saida;
    char cidade[MAX_SIZE];
    char cidade_maior_populacao[MAX_SIZE];
    int populacao, maior_populacao = 0;
    char *c;
    char coisinha;

    saida = fopen("saida.txt", "w");
    arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    while(fscanf(arquivo, "%s %d",cidade, &populacao) != EOF){
        if (populacao > maior_populacao){
            maior_populacao = populacao;
            strcpy(cidade_maior_populacao, cidade);
        }
    }

    fclose(arquivo);

    saida = fopen("saida2.txt", "w");
    printf("Cidade com maior população é %s com %d habitantes\n", cidade_maior_populacao, maior_populacao);
    
    fprintf(saida, "A cidade mais populosa é %s com %d habitantes\n", cidade_maior_populacao, maior_populacao);
    printf("%s", cidade_maior_populacao);
}





















    /*while((c = fgetc(arquivo)) != EOF){
                fputc(c, saida);*/
    /*FILE *entrada, *saida;
    char *result;
    char c;
    char letras [MAX_SIZE];
    char numeros[MAX_SIZE];
    int i, letrasindex = 0, numeroindex = 0;
    char camilly[MAX_SIZE];

    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }



    letras[letrasindex] = '\0';
    numeros[numeroindex] = '\0';

    printf("Letras: %s\n", letras);
    printf("Números: %s\n", numeros);*/









//while(!feof(entrada))
    //{
       //result = fgets(letras, MAX_SIZE, entrada);
    //}
    //printf("%s", letras);




//char arquivo_entrada, arquivo_saida;
//char input [MAX_SIZE] = {'a','b','c','d','e','f','1','2','3','4','5'};
//char numeros[MAX_SIZE];
//int i, letrasindex = 0, numeroindex = 0;
    /*for (i= 0; input[i] != '\0'; i++)
    {
        if (isalpha(input[i])) {
            letras[letrasindex++] = input[i];
        }else if (isdigit(input[i])){
            numeros[numeroindex++] = input[i];
        }
    }

    letras[letrasindex] = '\0';
    
    numeros[numeroindex] = '\0';

    printf("Letras: %s\n", letras);
    printf("Números: %s\n", numeros);
    
    size_t bytesRead = fread(camilly, 1, sizeof(camilly) -1, entrada);
    camilly[bytesRead] = '\0';

    fclose(entrada);
    printf("Conteudo do arquivo: \n%s\n", camilly);
    for (i= 0; camilly[i] != '\0'; i++)
    {
        if (isalpha(camilly[i])) {
            letras[letrasindex++] = camilly[i];
        }else if (isdigit(camilly[i])){
            numeros[numeroindex++] = camilly[i];
        }
    }*/
