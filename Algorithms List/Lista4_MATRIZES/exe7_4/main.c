#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,A[7],B[7],C[2][7];
    for(i=0;i<7;i++){
        scanf("%d", &A[i]);
    }
    for(i=0;i<7;i++){
        scanf("%d", &B[i]);
    }
    for(i=0;i<7;i++){
        for(j=0;j<2;j++){
            if(j==0)C[j][i]=A[i];
            else C[j][i]=B[i];
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<7;i++){
        for(j=0;j<2;j++){
            printf("%d ", C[j][i]);
        }
        printf("\n");
    }
    printf("VETOR A: \n");
    for(i=0;i<7;i++){
        printf("A[%d]: %d\n", i,A[i]);
    }
    printf("VETOR B: \n");
    for(i=0;i<7;i++){
        printf("B[%d]: %d\n", i,B[i]);
    }
    return 0;
}
