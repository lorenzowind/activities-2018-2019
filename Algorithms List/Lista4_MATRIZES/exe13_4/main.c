#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M,i,j;
    printf("QUANTIDADE DE LINHAS: ");
    scanf("%d", &N);
    printf("QUANTIDADE DE COLUNAS: ");
    scanf("%d", &M);
    int A[N][M];
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ TRANSPOSTA: \n");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}
