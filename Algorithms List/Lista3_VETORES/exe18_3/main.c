#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,C[20],E[20],NC,CM,Q;
    for(i=0;i<20;i++)
    {
        printf("Codigo da Mercadoria: ");
        scanf("%d", &C[i]);
        printf("Estoque inicial: ");
        scanf("%d", &E[i]);
    }
    while(1){
    printf("Numero do cliente: ");
    scanf("%d", &NC);
    printf("Codigo da mercadoria: ");
    scanf("%d", &CM);
    printf("Quantidade desejada: ");
    scanf("%d", &Q);
    for(i=0;i<20;i++)
    {
        if(CM==C[i])
        {
            if(E[i]>=Q)E[i]-=Q;
            else printf("Estoque insuficiente\n");
        }
    }
    for(i=0;i<20;i++)
    {
        printf("Codigo da Mercadoria: %d\n", C[i]);
        printf("Estoque atual: %d\n", E[i]);
    }
    }
    return 0;
}
