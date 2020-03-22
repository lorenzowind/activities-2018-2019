#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float m[3][3],*p;
    p=m;
    for(i=0;i<9;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<9;i++){
        printf("%p ",(p+i));
        if((i+1)%3==0)printf("\n");
    }
    return 0;
}
