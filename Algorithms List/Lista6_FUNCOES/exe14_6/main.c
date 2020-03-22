#include <stdio.h>
#include <stdlib.h>
int mmc(int A,int B){
    int x=2,t=1;
    while(A!=1||B!=1){
        while(A%x==0&&B%x==0){
            A/=x;
            B/=x;
            t*=x;
        }
        while(A%x==0){
            A/=x;
            t*=x;
        }
        while(B%x==0){
            B/=x;
            t*=x;
        }
    x++;
    }
    return t;
}
int main()
{
    int A,B;
    printf("INFORME NUMERO: ");
    scanf("%d", &A);
    printf("INFORME NUMERO: ");
    scanf("%d", &B);
    printf("MMC: %d\n",mmc(A,B));
    return 0;
}
