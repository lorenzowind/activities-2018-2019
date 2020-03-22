#include <stdio.h>
#include <stdlib.h>

main()
{
    int DF, i, T=0, NP;

    scanf("%d", &DF);
    printf("\n");

    for(i=1;i<=DF;i++)
    {
        scanf("%d", &NP);
        if((NP>9)||(NP<2))
        {
            printf("Numero incorreto");
            exit(1);
        }
        T = (T+NP);
    }
    T = (T-DF);
    printf("\n");
    printf("%d", T);
}
