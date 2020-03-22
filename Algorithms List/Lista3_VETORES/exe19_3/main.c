#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,c;
    scanf("%d", &N);
    int X[N][N];
    for(i=0;i<N;i++){
            X[i][0]=1;
            X[i][i]=1;
    }
    for(i=2;i<N;i++){
        for(c=1;c<i;c++){
            X[i][c]=X[i-1][c]+X[i-1][c-1];
        }
    }
    for(i=0;i<N;i++){
        for(c=0;c<=i;c++){
            printf("%d ",X[i][c]);
        }
        printf("\n");
    }
    return 0;
}
