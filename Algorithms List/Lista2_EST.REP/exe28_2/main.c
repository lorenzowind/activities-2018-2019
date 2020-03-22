#include <stdio.h>
#include <stdlib.h>

main()
{
    int N,P,X,Y,T,S=0;

    scanf("%d", &N);
    scanf("%d", &P);
    for(int i=1;i<=N;i++)
    {
        scanf("%d", &X);
        scanf("%d", &Y);
        T=X+Y;
        if(T>=P)
        {
            S++;
        }
    }
    printf("%d", S);
}
