#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m[10][10],pma,ma,me,cme;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            scanf("%d", &m[i][j]);
            if(i==0&&j==0){
                ma=m[i][j];
                pma=i;
            }
            if(m[i][j]>ma){
                ma=m[i][j];
                pma=i;
            }
        }
    }
    for(i=0;i<10;i++){
        if(i==0){
            me=m[pma][i];
            cme=i;
        }
        if(m[pma][i]<me){
            me=m[pma][i];
            cme=i;
        }
    }
    printf("MINIMAX:\n");
    printf("ELEMENTO: %d[%d][%d]\n",me,pma,cme);
    return 0;
}
