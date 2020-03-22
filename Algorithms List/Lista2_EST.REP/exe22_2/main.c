#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int N=1;
    float T=1;

    for(int c=2;c<=50;c++)
    {
        for(int i=1;i<=c;i++)
        {
            N*=i;
        }
        if(c%2!=0)
        {
            T+=((float)N/(pow(2,c)-1));
        }
        if(c%2==0)
        {
            T-=((float)N/(pow(2,c)-1));
        }
        N=1;
    }
    printf("%.2f", T);
}
