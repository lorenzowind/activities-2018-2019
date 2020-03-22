#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,x,y,d,mn,t=0,n=1001;
    do{
        t++;
        scanf("%d", &n);
        if(n==0)break;
        int m[n][2];
        for(i=0;i<n;i++){
            scanf("%d %d",&m[i][0],&m[i][1]);
        }
        int md[n];
        for(i=0;i<n;i++)md[i]=0;
        for(i=0;i<n;i++){
            for (j=i+1;j<n;j++){
                if(i!=j){
                    x=m[i][0]-m[j][0];
                    y=m[i][1]-m[j][1];
                    d=x*x+y*y;
                    if(d>md[i])md[i]=d;
                    if(d>md[j])md[j]=d;
                }
            }
        }
        for(i=0;i<n;i++){
            if(md[i]<mn){
                mn=md[i];
            }
        }
        printf("Teste %d\n",t);
        printf("%.0f\n\n",2*sqrt(mn)+5);
    }while(n!=0);
  return 0;
}
