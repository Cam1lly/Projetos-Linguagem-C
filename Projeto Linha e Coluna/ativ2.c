#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5
void main()
{
    int m[lin][col],i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            if(i == j){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }
    }
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%i  ",m[i][j]);
        }
        printf("\n");
    }
}