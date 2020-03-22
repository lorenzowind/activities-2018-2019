#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[5][5],i,j,L,C;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("INFORME LINHA: ");
    scanf("%d", &L);
    for(j=0;j<5;j++){
        printf("%d ", M[L][j]);
    }
    printf("\n");
    printf("INFORME COLUNA: ");
    scanf("%d", &C);
    for(i=0;i<5;i++){
        printf("%d\n", M[i][C]);
    }
    return 0;
}
