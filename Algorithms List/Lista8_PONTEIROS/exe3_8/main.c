#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5],*p,i;
    p=v;
    for(i=0;i<5;i++){
        printf("V[%d]: ",i);
        scanf("%d", &v[i]);
    }
    for(i=0;i<5;i++){
        if(*(p+i)%2==0)printf("&V[%d] = %p\n",i,p+i);
    }
    return 0;
}
