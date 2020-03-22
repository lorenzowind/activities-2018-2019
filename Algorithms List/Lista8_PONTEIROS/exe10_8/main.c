#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3]={0},*p,i;
    p=m;
    for(i=0;i<9;i++){
        *(p+i)=i+1;
        printf("%d ",*(p+i));
        if((i+1)%3==0)printf("\n");
    }
    return 0;
}
