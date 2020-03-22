#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int N, x;

    for(x=0;x<10;x++)
    {
        scanf("%d", &N);
        printf("\nQuadrado: %d", N*N);
        printf("\nRaiz quadrada: %.2f\n\n", sqrt(N));
    }
}
