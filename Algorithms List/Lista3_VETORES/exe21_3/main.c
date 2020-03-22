#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[12],B[12],C[12],i,c,x,aux;
    for(i=0;i<12;i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    for(i=0;i<12;i++)
    {
        x=i;
        for(c=0;c<12;c++)
        {
            if(A[c]>A[x])
            {
                x=c;
                aux=A[i];
                A[i]=A[x];
                A[x]=aux;
            }
        }
    }
    for(i=0;i<12;i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }
    for(i=0;i<12;i++)
    {
        x=i;
        for(c=0;c<12;c++)
        {
            if(B[c]>B[x])
            {
                x=c;
                aux=B[i];
                B[i]=B[x];
                B[x]=aux;
            }
        }
    }
    for(i=0;i<12;i++)
    {
        C[i]=A[i]+B[i];
    }
    for(i=0;i<12;i++)
    {
        x=i;
        for(c=0;c<12;c++)
        {
            if(C[c]<C[x])
            {
                x=c;
                aux=C[i];
                C[i]=C[x];
                C[x]=aux;
            }
        }
    }
    printf("Vetor C: \n");
    for(i=11;i>=0;i--)
    {
        printf("%d\n", C[i]);
    }
    return 0;
}
