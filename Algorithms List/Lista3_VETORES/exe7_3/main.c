#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A[10],B[10];
    for(i=0;i<10;i++)
    {
        printf("Numero: ");
        scanf("%d", &A[i]);
        B[i]=A[i]*A[i];
    }
    for(i=0;i<10;i++)
    {
        printf("A[%d]: %d\n",i,A[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("B[%d]: %d\n",i,B[i]);
    }
    return 0;
}
