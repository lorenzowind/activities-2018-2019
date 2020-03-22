#include <stdio.h>
#include <stdlib.h>

main()
{
    int N=1, D=1;
    float S=0;

    do{
        S+=((float)N/D);
        N+=2;
        D++;
    }while(N<=99&&D<=50);

    printf("%.2f", S);
}
