#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][5],i,j,SL[3]={0},SC[5]={0};
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            scanf("%d", &A[i][j]);
            SL[i]+=A[i][j];
            SC[j]+=A[i][j];
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("VETOR SOMA LINHA: \n");
    for(i=0;i<3;i++){
        printf("LINHA[%d]: %d\n",i,SL[i]);
    }
    printf("VETOR SOMA COLUNA: \n");
    for(i=0;i<5;i++){
        printf("COLUNA[%d]: %d\n",i,SC[i]);
    }
    return 0;
}
