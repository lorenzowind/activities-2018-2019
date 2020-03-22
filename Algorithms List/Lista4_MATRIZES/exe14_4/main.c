#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LA,LB,CA,CB,i,j;
    printf("QUANTIDADE DE LINHAS: ");
    scanf("%d", &LA);
    printf("QUANTIDADE DE COLUNAS: ");
    scanf("%d", &CA);
    int A[LA][CA];
    for(i=0;i<LA;i++){
        for(j=0;j<CA;j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("QUANTIDADE DE LINHAS: ");
    scanf("%d", &LB);
    printf("QUANTIDADE DE COLUNAS: ");
    scanf("%d", &CB);
    int B[LB][CB];
    for(i=0;i<LB;i++){
        for(j=0;j<CB;j++){
            scanf("%d", &B[i][j]);
        }
    }
    printf("MATRIZ A: \n");
    for(i=0;i<LA;i++){
        for(j=0;j<CA;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ B: \n");
    for(i=0;i<LB;i++){
        for(j=0;j<CB;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    if(LA==LB&&CA==CB){
        printf("MATRIZ RESULTANTE: \n");
        for(i=0;i<LA;i++){
            for(j=0;j<CA;j++){
                printf("%d ", A[i][j]+B[i][j]);
            }
            printf("\n");
        }
    }
    else printf("NAO E POSSIVEL SOMAR AS MATRIZES\n");
    return 0;
}
