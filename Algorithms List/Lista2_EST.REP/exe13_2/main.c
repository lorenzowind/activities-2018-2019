#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int E=1, D=50;
    float S=0;

    do{
        S+=((pow(2,E))/D);
        E++;
        D--;
    }while(E<=50&&D>=1);

    printf("%.2f", S);
}
