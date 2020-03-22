#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float v[10],*p;
    p = v;
    for(i=0;i<10;i++){
        printf("&V[%d] = %p\n",i,p+i);
    }
    return 0;
}
