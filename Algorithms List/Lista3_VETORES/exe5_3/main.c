#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,I[10],AB=0;
    float s=0;
    for(i=0;i<10;i++)
    {
        printf("Idade: ");
        scanf("%d", &I[i]);
        s+=I[i];
    }
    s/=10;
    for(i=0;i<10;i++)
    {
        if(I[i]<s)AB++;
    }
    printf("Abaixo da media: %d\n", AB);
    return 0;
}
