#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][4],B[3][4],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("MATRIZ A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            B[i][j]=A[i][j]/2;
        }
    }
    printf("\nMATRIZ B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
