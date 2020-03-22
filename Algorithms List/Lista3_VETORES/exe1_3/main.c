#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,q=0,N[10];
    for(i=0;i<10;i++)
    {
        printf("Numero: ");
        scanf("%d", &N[i]);
        if(N[i]>100)q++;
    }
    printf("Quantidade de numeros maiores que 100: %d\n", q);
    return 0;
}
