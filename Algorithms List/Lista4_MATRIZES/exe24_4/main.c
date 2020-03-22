#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m[i][j]);
        }
    }
    printf("MATRIZ FINAL:\n");
    for(i=0;i<3;i++){
        for(j=2;j>=0;j--){
            printf("%d ", m[j][i]);
        }
        printf("\n");
    }
    return 0;
}
