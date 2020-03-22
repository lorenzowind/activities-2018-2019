#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A[15],B[15],C[30];
    for(i=0;i<15;i++)
    {
        printf("Numero: ");
        scanf("%d", &A[i]);
        C[i]=A[i];
    }
    for(i=0;i<15;i++)
    {
        printf("Numero: ");
        scanf("%d", &B[i]);
        C[i+15]=B[i];
    }
    for(i=0;i<30;i++)
    {
        printf("C[%d]: %d\n", i,C[i]);
    }
    return 0;
}
