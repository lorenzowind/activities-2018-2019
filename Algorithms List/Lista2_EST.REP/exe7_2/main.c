#include <stdio.h>
#include <stdlib.h>

main()
{
    int N;

    printf("Numero: ");
    scanf("%d", &N);

    printf("Divisores: ");

    for(int i=N;i>0;i--)
    {
        if(N%i==0)
        {
            printf("\n%d", i);
        }
    }
}
