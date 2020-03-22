#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,sds=0,sdp=0,a=0,sl=0,sc=0;
    scanf("%d", &N);
    int m[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &m[i][j]);
        }
        sdp+=m[i][i];
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if((i+j)==(N-1))sds+=m[i][j];
            sl+=m[i][j];
            sc+=m[j][i];
        }
        if(sl!=sdp||sc!=sdp)a++;
        sl=0;
        sc=0;
    }
    if(a>0||sds!=sdp)printf("-1\n");
    else printf("%d\n",sdp);
    return 0;
}
