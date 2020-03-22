#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5],*p,i;
    p=v;
    for(i=0;i<5;i++){
        printf("V[%d]: ",i);
        scanf("%d",(p+i));
    }
    for(i=0;i<5;i++){
        printf("V[%d] = %d\n",i,*(p+i)*2);
    }
    printf("\n");
    return 0;
}
