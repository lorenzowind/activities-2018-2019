#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m[8][8],i,j,a;
    char ps[25];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            scanf("%d", &m[i][j]);
        }
    }
    while(1){
        printf("\nCONSULTA\n");
        printf("INFORME A PECA: ");
        gets(ps);
        if(strcmp(ps,"Ausencia de peca")==0)a=0;
        if(strcmp(ps,"Peoes")==0)a=1;
        if(strcmp(ps,"Cavalos")==0)a=2;
        if(strcmp(ps,"Torres")==0)a=3;
        if(strcmp(ps,"Bispos")==0)a=4;
        if(strcmp(ps,"Reis")==0)a=5;
        if(strcmp(ps,"Rainhas")==0)a=6;
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(a==m[i][j])printf("LINHA %d - COLUNA %d\n",i,j);
            }
        }
    }
    return 0;
}
