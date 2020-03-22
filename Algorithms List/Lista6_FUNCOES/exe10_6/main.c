#include <stdio.h>
#include <stdlib.h>
void capicuas(){
    int i=1,a,b;
    while(i<100){
        if(i<10)printf("%d\n",i);
        if(i>=10&&i<100){
            a=i/10;
            b=i%10;
            if(a==b)printf("%d\n",i);
        }
        i++;
    }
}
int main()
{
    int i;
    char n[8];
    printf("INFORME UM NUMERO: ");
    scanf("%s", &n);
    for(i=strlen(n)-1;i>=0;i--)printf("%c",n[i]);
    printf("\n");
    printf("CAPICUAS DE 1 A 100:\n");
    capicuas();
    return 0;
}
