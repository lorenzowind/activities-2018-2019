#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N[10];
    for(i=0;i<10;i++)
    {
        printf("Numero: ");
        scanf("%d", &N[i]);
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d\n", N[i]);
    }
    return 0;
}
