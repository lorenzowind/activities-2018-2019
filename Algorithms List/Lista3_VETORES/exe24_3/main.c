#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[30],B[30],i,X,c=0;
    for(i=1;i<=30;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
    }
    for(i=1;i<=30;i++)
    {
        printf("B[%d] = ",i);
        scanf("%d", &B[i]);
    }
    while(1)
    {
        printf("PESQUISA: ");
        scanf("%d", &X);
        for(i=1;i<=30;i++)
        {
            if(X==A[i])
            {
                printf("Elemento %d encontrado na posicao %d\n", A[i],i);
                printf("Elemento de B correspondente: %d\n", B[i]);
                c=1;
            }
        }
        if(c==0)printf("Elemento %d nao encontrado\n", X);
        c=0;
    }
    return 0;
}
