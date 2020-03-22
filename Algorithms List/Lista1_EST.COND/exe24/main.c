#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    float N, RQ, Q;

    printf("Informe um numero qualquer: ");
    scanf("%f", &N);

    if(N>0)
    {
        RQ = sqrt(N);
        printf("A raiz quadrada do numero e: %.2f", RQ);
    }
    else
    {
        Q = pow(N,2);
        printf("O quadrado do numero e: %.2f", Q);
    }
}
