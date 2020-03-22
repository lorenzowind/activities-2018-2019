#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A[20],B[20],aux,c,meio,P;
    for(i=1;i<=20;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d", &A[i]);
        B[i]=A[i]+2;
    }
    for(i=1;i<=20;i++)
    {
        for(c=1;c<=20;c++)
        {
            if(B[i]<B[c])
            {
                aux=B[i];
                B[i]=B[c];
                B[c]=aux;
            }
        }
    }
    pesq:
    printf("PESQUISA: ");
    scanf("%d", &P);
    meio=(1+20)/2;
    conf:
    if(meio>20||meio<1)
    {
        printf("Elemento nao encontrado\n");
        goto pesq;
    }
    if(P==B[meio])
    {
        printf("Elemento %d encontrado na posicao %d\n", B[meio],meio);
        goto pesq;
    }
    else{
        if(P<B[meio])
        {
            meio--;
            goto conf;
        }
        else
        {
            meio++;
            goto conf;
        }
    }
    return 0;
}
