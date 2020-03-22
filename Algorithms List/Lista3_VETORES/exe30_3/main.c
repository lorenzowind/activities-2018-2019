#include<stdio.h>

int main()
{
    int t=0,ptc,r,p[100],n,o,a,pos,i,j,k;
    scanf("%d %d",&ptc,&r);
    while(ptc||r){
        for(i=0;i<ptc;i++) scanf("%d",&(p[i]));
        for(i=0;i<r;i++){
            scanf("%d %d", &n, &o);
            pos=0;
            for(j=0;j<n;j++){
                scanf("%d",&a);
                if(a==o)pos++;
                else{
                    for(k=pos+1;k<n;k++)p[k-1]=p[k];
                }
            }
        }
        printf("Teste %d\n", ++t);
        printf("%d\n\n", p[0]);
        scanf("%d %d", &ptc, &r);
    }
    return 0;
}
