#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[5][5],SP=0,SI=0,i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &M[i][j]);
            if(j%2==0)SP+=M[i][j];
            if(j%2!=0)SI+=M[i][j];
        }
    }
    printf("SOMA DOS ELEMENTOS DAS COLUNAS PARES: %d\n", SP);
    printf("SOMA DOS ELEMENTOS DAS COLUNAS IMPARES: %d\n", SI);
    printf("MATRIZ: \n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
