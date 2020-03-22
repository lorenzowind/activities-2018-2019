#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[20],B[20],i,P,x=0;
    for(i=1;i<=20;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
        B[i]=A[i]*A[i]*A[i];
    }
    while(1)
    {
        printf("PESQUISA: ");
        scanf("%d", &P);
        for(i=1;i<=20;i++)
        {
            if(P==B[i])
            {
                printf("Elemento %d encontrado na posicao %d\n",B[i],i);
                x=1;
            }
        }
        if(x==0)printf("Elemento %d nao encontrado\n", P);
        x=0;
    }
    return 0;
}
