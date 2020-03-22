#include <stdio.h>
#include <stdlib.h>

main()
{
    int N=480, D=10;
    float S=0;

    do{
        S+=((float)N/D);
        if(D==40)
        {
            break;
        }
        N=N-5;
        D++;
        S-=((float)N/D);
        N=N-5;
        D++;
    }while(D<=40);

    printf("%.2f", S);
}
