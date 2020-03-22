#include <stdio.h>

int main()
{
    int i,MA,ME,S,t=1,temp[10000],N,M;
    do{
        scanf("%d %d", &N, &M);
        if(N==0&&M==0)break;
        S=0;
        for(i=0;i<M;i++){
            scanf("%d",&temp[i]);
            S+=temp[i];
        }
        MA=ME=S;
        for(i=M;i<N;i++){
            scanf("%d",&temp[i]);
            S=S+temp[i]-temp[i-M];
            if(S>MA)MA=S;
            if(S<ME)ME=S;
        }
        printf("Teste %d\n",t++);
        printf("%d %d\n",ME/M,MA/M);
        printf("\n");
    }while(N!=0||M!=0);
  return 0;
}
