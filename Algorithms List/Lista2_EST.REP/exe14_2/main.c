#include <stdio.h>
#include <stdlib.h>

main()
{
    int N1=37,N2=38,D=1;
    float S=0;

    do{
        S+=((float)(N1*N2)/D);
        N1--;
        N2--;
        D++;
    }while(N1>=1);

    printf("%.2f", S);
}
