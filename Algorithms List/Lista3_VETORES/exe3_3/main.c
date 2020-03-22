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
    for(i=0;i<10;i++)
    {
        if(N[i]%2==0)printf("%d - PAR\n", N[i]);
        else printf("%d - IMPAR\n", N[i]);
    }
    return 0;
}
