#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,A[5][4],B[4][3],C[5][3]={0},a;
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("A[%d][%d]: ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("B[%d][%d]: ",i,j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("MATRIZ A: \n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ B: \n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ C(MULTIPLICACAO DAS MATRIZES): \n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            for(a=0;a<4;a++){
                C[i][j]+=(A[i][a]*B[a][j]);
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
