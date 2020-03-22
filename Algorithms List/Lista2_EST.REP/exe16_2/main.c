#include <stdio.h>
#include <stdlib.h>

main()
{
    int y, a=0,b=1,c=0;
    for(y=1; y<20; y++)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d\n",c);

}
