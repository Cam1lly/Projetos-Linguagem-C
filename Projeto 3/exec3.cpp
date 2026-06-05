#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    FILE *arq1;
    FILE *arq2; 
    FILE *arq3;
    char c;

    arq1 = fopen("nomeArquivo1.txt", "r");
    if (arq1 == NULL) {
        printf("Erro ao abrir o primeiro arquivo para leitura");
        exit(1);
    }

    arq2 = fopen("nomeArquivo2.txt", "r");
    if (arq2 == NULL) {
        printf("Erro ao abrir o segundo arquivo para leitura");
        exit(1);
    }

    arq3 = fopen("nomeArquivo3.txt", "a");
    if (arq3 == NULL) {
        printf("Erro ao abrir o arquivo de saída para escrita");
        exit(1);
    }
    
    while ((c = fgetc(arq1)) != EOF) {
        fputc(c, arq3);
    }

    while ((c = fgetc(arq2)) != EOF) {
        fputc(c, arq3);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
}