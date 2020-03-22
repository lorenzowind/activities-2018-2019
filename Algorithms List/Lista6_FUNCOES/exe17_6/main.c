#include <stdio.h>
#include <stdlib.h>
double pot(int x, int e){
    int i;
    double t=x;
    for(i=0;i<e;i++){
        t*=x;
    }
    return t;
}
double fat(int x){
    int i;
    double t=1;
    for(i=2;i<=x;i++){
        t*=i;
    }
    return t;
}
int main()
{
    int x,i=2,a=2;
    double t=1,n,d;
    printf("INFORME O VALOR DE X: ");
    scanf("%d", &x);
    while(a!=20){
        n=pot(x,i);
        d=fat(i);
        if(a%2==0)t-=(n/d);
        else t+=(n/d);
        i+=2;
        a++;
    }
    printf("RESULTADO: %lf\n",t);
    return 0;
}
