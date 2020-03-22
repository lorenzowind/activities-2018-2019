#include <stdio.h>
#include <stdlib.h>

main()
{
    int N, T=1;

    printf("Numero: ");
    scanf("%d", &N);

    for(int i=1;i<=N;i++)
    {
        T*=i;
    }

    printf("\nProduto: %d", T);
}
