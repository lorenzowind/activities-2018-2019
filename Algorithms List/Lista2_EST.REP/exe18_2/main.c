#include <stdio.h>
#include <stdlib.h>

main()
{
    int N, t=0;

    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        if(i*(i+1)*(i+2)==N)
        {
            printf("Eh triangular!");
            t++;
        }
    }
    if(t==0)
    {
        printf("Nao eh triagular!");
    }
}
