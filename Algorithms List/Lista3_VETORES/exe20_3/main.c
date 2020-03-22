#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,N[12],aux;
    for(i=0;i<12;i++)
    {
        scanf("%d", &N[i]);
    }
    for(i=0;i<12;i++)
    {
        for(c=0;c<12;c++)
        {
            if(N[i]>N[c])
            {
                aux=N[i];
                N[i]=N[c];
                N[c]=aux;
            }
        }
    }
    printf("ORDEM CRESCENTE\n");
    for(i=11;i>=0;i--)
    {
        printf("%d\n", N[i]);
    }
    printf("ORDEM DECRESCENTE\n");
    for(i=0;i<12;i++)
    {
        printf("%d\n", N[i]);
    }
    return 0;
}
