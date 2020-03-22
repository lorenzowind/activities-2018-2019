#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,M[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("ELEMENTOS DA DIAGONAL SECUNDARIA: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i+j==4)printf("%d ", M[i][j]);
        }
    }
    printf("\n");
    printf("ELEMENTOS ACIMA DA DIAGONAL SECUNDARIA: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i+j<4)printf("%d ", M[i][j]);
        }
    }
    printf("\n");
    printf("ELEMENTOS ABAIXO DA DIAGONAL SECUNDARIA: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i+j>4)printf("%d ", M[i][j]);
        }
    }
    printf("\n");


    return 0;
}
