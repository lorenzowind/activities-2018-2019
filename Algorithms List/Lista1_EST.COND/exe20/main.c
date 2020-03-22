#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()

{
    int PI, NA;
    float N, PF, i;

    printf("Informe um numero real qualquer: ");
    scanf("%f", &N);

    PI = N;

    i = (N-0.5);
    if(i/PI>=1)
    {
        NA = ceil(N);
    }
    else
    {
        NA = floor(N);
    }
    PF = (float)(N-PI);

    printf("\nA parte inteira do numero e: %d", PI);
    printf("\nO numero arredondado e: %d", NA);
    printf("\nA parte fracionaria do numero e: %f", PF);
}
