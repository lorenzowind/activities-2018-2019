#include <stdio.h>
#include <stdlib.h>

main()
{
    float A, B, C, MA, ME, MEIO;
    int i;

    printf("Informe um numero qualquer: ");
    scanf("%f", &A);
    printf("\nInforme outro numero qualquer: ");
    scanf("%f", &B);
    printf("\nInforme outro numero qualquer: ");
    scanf("%f", &C);
    printf("\nInforme 1, 2 ou 3: ");
    scanf("%d", &i);

    if(A>B&&B>C)
    {
        MA = A;
        MEIO = B;
        ME = C;
    }
    if(A>C&&C>B)
    {
        MA = A;
        MEIO = C;
        ME = B;
    }
    if(B>A&&A>C)
    {
        MA = B;
        MEIO = A;
        ME = C;
    }
    if(B>C&&C>A)
    {
        MA = B;
        MEIO = C;
        ME = A;
    }
    if(C>A&&A>B)
    {
        MA = C;
        MEIO = A;
        ME = B;
    }
    if(C>B&&B>A)
    {
        MA = C;
        MEIO = B;
        ME = A;
    }
    if(i==1)
    {
        printf("\nA ordem crescente e: %.2f %.2f %.2f", ME, MEIO, MA);
    }
    if(i==2)
    {
        printf("\nA ordem decrescente e: %.2f %.2f %.2f", MA, MEIO, ME);
    }
    if(i==3)
    {
        printf("\nA ordem correta e: %.2f %.2f %.2f", ME, MA, MEIO);
    }
    if(i<1||i>3)
    {
        printf("\nEsse valor nao e aceito");
    }






}
