#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N[10],Q=0,IM=0,MM=0;
    float s=0;
    for(i=0;i<10;i++)
    {
        printf("Numero: ");
        scanf("%d", &N[i]);
        if(N[i]==20)Q++;
        s+=N[i];
    }
    s/=10;
    for(i=0;i<10;i++)
    {
        if(s==N[i])IM++;
        if(N[i]>s)MM++;
    }
    printf("Numeros iguais a 20: %d\n", Q);
    printf("Numeros maiores que a media: %d\n", MM);
    printf("Numeros iguais a media: %d\n", IM);
    return 0;
}
