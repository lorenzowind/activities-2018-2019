#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s=0,N[10];
    for(i=0;i<10;i++)
    {
        printf("Numero: ");
        scanf("%d", &N[i]);
        s+=N[i];
    }
    printf("Somatorio: %d\n", s);
    return 0;
}
