#include <stdio.h>
#include <stdlib.h>

main()
{
    int N, A, B, T;

    printf("Informe um numero de 4 casas: ");
    scanf("%d", &N);

    A = (N/100);
    B = (N%1000);

    T = (A+B);

    if(T*T==N)
    {
        printf("Esse numero e caracteristico!");
    }
    else
    {
        printf("Esse numero nao e caracteristico!");
    }
}
