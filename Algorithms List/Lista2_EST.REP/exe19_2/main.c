#include <stdio.h>
#include <stdlib.h>

main()
{
    int E, i, c, N, A, B, t=0;

    printf("1 - Eh primo ou nao");
    printf("\n2 - Primos em um intervalo");
    printf("\n1 ou 2: ");
    scanf("%d", &E);

    if(E==1)
    {
        printf("Numero: ");
        scanf("%d", &N);
        for(i=1;i<=N;i++)
        {
            if(N%i==0&&i!=1&&i!=N)
            {
                t++;
                printf("Nao eh primo!");
                break;
            }
        }
        if(t==0)
        {
            printf("Eh primo!");
        }
    }
    if(E==2)
    {
        printf("Inicio do intervalo: ");
        scanf("%d", &A);
        printf("Fim do intervalo: ");
        scanf("%d", &B);

        for(i=A;i<=B;i++)
        {
            for(c=1;c<=i;c++)
            {
                if(i%c==0&&c!=1&&c!=i)
                {
                    t++;
                }
            }
        if(t==0)
        {
            printf("%d\t", i);
        }
        t=0;
        }
    }
}
