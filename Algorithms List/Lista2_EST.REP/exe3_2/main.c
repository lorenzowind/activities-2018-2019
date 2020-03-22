#include <stdio.h>
#include <stdlib.h>

main()
{
    int S=0, N, Q=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d", &N);
        if(N>0)
        {
            S+=N;
        }
        if(N<0)
        {
            Q++;
        }
    }
    printf("\nSoma dos positivos: %d", S);
    printf("\nNegativos: %d", Q);

}
