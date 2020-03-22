#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x=0,c,i,aux,f=0;
    scanf("%d", &N);
    int A[N],C[N];
    for(i=0;i<N;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
    }
    for(i=0;i<N;i++)
    {
        for(c=0;c<N;c++)
        {
            if(A[i]>A[c])
            {
                aux=A[c];
                A[c]=A[i];
                A[i]=aux;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        for(c=0;c<N;c++)
        {
            if(A[i]==A[c])
            {
                f++;
            }
        }
        if(f==1)
        {
            C[x]=A[i];
            x++;
        }
        f=0;
    }
    printf("CONJUNTO C:\n");
    x--;
    while(x>=0)
    {
        printf("%d\n", C[x]);
        x--;
    }
    return 0;
}
