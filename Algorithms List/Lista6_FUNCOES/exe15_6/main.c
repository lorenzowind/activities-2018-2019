#include <stdio.h>
#include <stdlib.h>
int caracte(int n){
    int a,b,c,d;
    if(n<1000||n>=10000)return -1;
    a=n/100;
    b=n%100;
    if((a+b)*(a+b)==n)return 1;
    else return 0;
}
int main()
{
    int n;
    printf("INFORME NUMERO: ");
    scanf("%d", &n);
    printf("%d\n", caracte(n));
    return 0;
}
