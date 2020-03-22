#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N[10],MAN,MEN;
    float s=0,NP=0;
    for(i=0;i<10;i++)
    {
        printf("Numero: ");
        scanf("%d", &N[i]);
        s+=N[i];
        if(i==0)
        {
            MEN=N[i];
            MAN=N[i];
        }
        if(N[i]>MAN)MAN=N[i];
        if(N[i]<MEN)MEN=N[i];
        if(N[i]%2==0)NP++;
    }
    NP=(NP*100)/10;
    s/=10;
    printf("Maior valor: %d\n", MAN);
    printf("Menor valor: %d\n", MEN);
    printf("Percentual de numeros pares: %.2f\n", NP);
    printf("Media: %.2f\n", s);
    return 0;
}
