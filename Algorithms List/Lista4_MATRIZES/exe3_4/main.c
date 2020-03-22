#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,M[4][4], S=0, QP=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &M[i][j]);
            if(M[i][j]%2==0){
                S+=M[i][j];
                QP++;
            }
        }
    }
    S/=QP;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("MEDIA DOS VALORES PARES: %d\n", S);
    return 0;
}
