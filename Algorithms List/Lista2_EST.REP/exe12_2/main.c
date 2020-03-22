#include <stdio.h>
#include <stdlib.h>

main()
{
    int N=1, D=1;
    float S=0;

    do{
        S+=((float)N/D);
        N+=1;
        D=N*N;
    }while(N<=10&&D<=100);

    printf("%.2f", S);
}
