#include <stdio.h>
#include <stdlib.h>

main()

{
    int N, P, Pmtd;

    printf("Informe o numero de itens no pedido: ");
    scanf("%d", &P);
    printf("Informe a quantidade de itens disponiveis no estoque: ");
    scanf("%d", &N);

    Pmtd = (N-P);

    if(Pmtd>0)
    {
        printf("\nApos o pedido, a quantidade de itens no estoque sera de: %d", Pmtd);
    }
    else
    {
        printf("\nNao ha itens suficientes para atender o pedido");
    }
}
