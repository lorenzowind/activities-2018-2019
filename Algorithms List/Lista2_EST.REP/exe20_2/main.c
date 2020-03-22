#include <stdio.h>
#include <stdlib.h>

main()
{
    int N, S=0;

    scanf("%d", &N);

    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            S+=i;
        }
    }
    if(S==N)
    {
        printf("O numero eh perfeito!");
    }
    else
    {
        printf("O numero nao eh perfeito!");
    }
}
