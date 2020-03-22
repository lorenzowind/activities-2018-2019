#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[10],B[10],C[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Numero A[%d]: ", i);
        scanf("%f", &A[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Numero B[%d]: ", i);
        scanf("%f", &B[i]);
    }
    for(i=0;i<10;i++)
    {
        if(B[i]>=A[i])C[i]=B[i]-A[i];
        if(A[i]>B[i])C[i]=A[i]-B[i];
        printf("Diferenca: %.2f\n", C[i]);
    }
    return 0;
}
