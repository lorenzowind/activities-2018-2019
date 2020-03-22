#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,M[3][3],A[3],B[3],MA,ME;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &M[i][j]);
            if(j==0){
                ME=M[i][j];
                MA=M[i][j];
            }
            if(M[i][j]>MA)MA=M[i][j];
            if(M[i][j]<ME)ME=M[i][j];
        }
        A[i]=ME;
        B[i]=MA;
    }
    printf("MATRIZ: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("VETOR A: \n");
    for(i=0;i<3;i++){
        printf("A[%d]: %d\n",i,A[i]);
    }
    printf("VETOR B: \n");
    for(i=0;i<3;i++){
        printf("B[%d]: %d\n",i,B[i]);
    }
    return 0;
}
