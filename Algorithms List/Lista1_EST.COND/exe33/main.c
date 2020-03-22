#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    float A, B, C, X, X2, D;

    printf("Informe o valor de A: ");
    scanf("%f", &A);
    printf("\nInforme o valor de B: ");
    scanf("%f", &B);
    printf("\nInforme o valor de C: ");
    scanf("%f", &C);

    D = ((B*B)-4*A*C);

    if(D<0)
    {
        printf("\n-99999");
    }
    if(D==0)
    {
        X = ((-B+sqrt(D))/(A*2));
        printf("\nO valor de x1 e x2 e: %.2f", X);
    }
    if(D>0)
    {
        X = ((-B+sqrt(D))/(A*2));
        X2 = ((-B-sqrt(D))/(A*2));
        printf("\nO valor de x1 e: %.2f", X);
        printf("\nO valor de x2 e: %.2f", X2);
    }
}
