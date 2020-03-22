#include <stdio.h>
#include <stdlib.h>
void mdc(int A,int B){
    int i=2,mdc=1;
    while(A!=1&&B!=1){
        while(A%i==0&&B%i==0){
            if(A%i==0&&B%i==0)mdc*=i;
            A/=i;
            B/=i;
        }
        if(A%i==0)A/=i;
        if(B%i==0)B/=i;
        i++;
    }
    printf("MDC: %d\n", mdc);
}
int main()
{
    int A,B;
    printf("INFORME NUMERO: ");
    scanf("%d", &A);
    printf("INFORME NUMERO: ");
    scanf("%d", &B);
    mdc(A,B);
    return 0;
}
