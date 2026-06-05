#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 4
void main()
{
    int m[lin][col],i,j,x;
    x=0;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("Linha %i Coluna %i: ",i,j);
            scanf("%i",&m[i][j]);
            
            if(m[i][j]>=10){
                x++;
            }
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%i  ",m[i][j]);
        }
        printf("\n");
    }
    printf("Possui %i números maiores que 10",x);
}