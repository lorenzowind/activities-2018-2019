#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],*p,i;
    p=v;
    for(i=0;i<10;i++){
        printf("V[%d]: ",i);
        scanf("%d",(p+i));
    }
    system("cls");
    for(i=0;i<10;i++){
        if(*(p+i)<10)printf("V[%d] = %d\n&V[%d] = %p\n\n",i,*(p+i),i,p+i);
    }
    return 0;
}
