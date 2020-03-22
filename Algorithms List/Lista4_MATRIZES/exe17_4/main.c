#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,L,C,LA,CA,LB,CB,S=0,a;
    printf("TRANSPOR MATRIZ: \n");
    do{
        printf("QUANTIDADE DE LINHAS: ");
        scanf("%d", &L);
        printf("QUANTIDADE DE COLUNAS: ");
        scanf("%d", &C);
    }while(L>5||C>4);
    int M[L][C];
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            scanf("%d", &M[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ TRANSPOSTA: \n");
    for(i=0;i<C;i++){
        for(j=0;j<L;j++){
            printf("%d ", M[j][i]);
        }
        printf("\n");
    }
    printf("\nSOMA DE MATRIZES: \n");
    do{
        printf("QUANTIDADE DE LINHAS: ");
        scanf("%d", &LA);
        printf("QUANTIDADE DE COLUNAS: ");
        scanf("%d", &CA);
    }while(LA>5||CA>10);
    int A[LA][CA];
    for(i=0;i<LA;i++){
        for(j=0;j<CA;j++){
            scanf("%d", &A[i][j]);
        }
    }
    do{
        printf("QUANTIDADE DE LINHAS: ");
        scanf("%d", &LB);
        printf("QUANTIDADE DE COLUNAS: ");
        scanf("%d", &CB);
    }while(LB>5||CB>10);
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
        printf("SOMA DAS MATRIZES: \n");
        for(i=0;i<LA;i++){
            for(j=0;j<CA;j++){
                printf("%d ", A[i][j]+B[i][j]);
            }
            printf("\n");
        }
    }
    else printf("NAO E POSSIVEL SOMAR AS MATRIZES\n");
    printf("\nMULTIPLICACAO DE MATRIZES: \n");
    do{
        printf("QUANTIDADE DE LINHAS: ");
        scanf("%d", &LA);
        printf("QUANTIDADE DE COLUNAS: ");
        scanf("%d", &CA);
    }while(LA>10||CA>10);
    int X[LA][CA];
    for(i=0;i<LA;i++){
        for(j=0;j<CA;j++){
            scanf("%d", &X[i][j]);
        }
    }
    do{
        printf("QUANTIDADE DE LINHAS: ");
        scanf("%d", &LB);
        printf("QUANTIDADE DE COLUNAS: ");
        scanf("%d", &CB);
    }while(LB>10||CB>10);
    int Y[LB][CB];
    for(i=0;i<LB;i++){
        for(j=0;j<CB;j++){
            scanf("%d", &Y[i][j]);
        }
    }
    printf("MATRIZ A: \n");
    for(i=0;i<LA;i++){
        for(j=0;j<CA;j++){
            printf("%d ", X[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ B: \n");
    for(i=0;i<LB;i++){
        for(j=0;j<CB;j++){
            printf("%d ", Y[i][j]);
        }
        printf("\n");
    }
    if(CA==LB){
        printf("MULTIPLICACAO DAS MATRIZES: \n");
        for(i=0;i<LA;i++){
            for(j=0;j<CB;j++){
                for(a=0;a<CA;a++){
                    S+=X[i][a]*Y[a][j];
                }
                printf("%d ", S);
                S=0;
            }
            printf("\n");
        }
    }
    else printf("NAO E POSSIVEL MULTIPLICAR AS MATRIZES\n");
    return 0;
}
