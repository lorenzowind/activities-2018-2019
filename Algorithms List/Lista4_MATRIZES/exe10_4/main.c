#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float M[3][3],SDP=0,SDS=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%f", &M[i][j]);
            if(i==j)SDP+=M[i][j];
            if(i+j==2)SDS+=M[i][j];
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%.2f ",M[i][j]);
        }
        printf("\n");
    }
    printf("SOMA DOS ELEMENTOS DA DIAGONAL PRINCIPÁL: %.2f\n", SDP);
    printf("SOMA DOS ELEMENTOS DA DIAGONAL SECUNDARIA: %.2f\n", SDS);
    return 0;
}
