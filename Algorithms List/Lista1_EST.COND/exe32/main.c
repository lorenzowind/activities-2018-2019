#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    int A, B, C, X;
    float TRAP, x1, x2, D;
    char T;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    printf("Informe o valor de C: ");
    scanf("%d", &C);
    printf("Informe o valor de X: ");
    scanf("%d", &X);

    if(X==A)
    {
        if(((B*B)-4*A*C)>0)
        {
            D = ((B*B)-4*A*C);
            x1 = (-B+sqrt(D)/(A*2));
            x2 = (-B-sqrt(D)/(A*2));
            printf("\nO valor das raizes reais e: %.2f %.2f", x1, x2);
        }
        else
        {
            printf("\nO delta e negativo");
        }
    }
    if(X==B)
    {
        if(A<B+C&&B<A+C&&C<A+B)
        {
            if(A==B&&B==C)
            {
                printf("\nO triangulo e equilatero");
            }
            if((A==B&&B!=C)||(A==C&&C!=B))
            {
                printf("\nO triagulo e isosceles");
            }
            if(A!=B&&B!=C)
            {
                printf("\nO triagulo e escaleno");
            }
        }
        else
        {
            printf("\nNao e possivel formar um triangulo com essas dimensoes");
        }
    }
    if(X==C)
    {
        if(A>0&&B>0&&C>0)
        {
            TRAP = (((A+B)*C)/2);
            printf("\nA area do trapezio e: %.2f", TRAP);
        }
        else
        {
            printf("\nNao e possivel formar um trapezio com essas dimensoes");
        }
    }
}
