#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,M[4][4];
    float SL[4]={0}, SC[4]={0};
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &M[i][j]);
            SL[i]+=M[i][j];
            SC[j]+=M[i][j];
        }
    }
    for(i=0;i<4;i++){
        printf("MEDIA DOS ELEMENTOS DA LINHA [%d]: %.2f\n",i,SL[i]/4);
    }
    for(i=0;i<4;i++){
        printf("MEDIA DOS ELEMENTOS DA COLUNA [%d]: %.2f\n",i,SC[i]/4);
    }
    printf("MATRIZ: \n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
