#include <stdio.h>
#include <stdlib.h>

main()

{
    int S, N1, N2;

    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &N1);
    printf("Informe outro numero inteiro qualquer: ");
    scanf("%d", &N2);

    S = (N1+N2);

    if(S>=10)
    {
        S = (S+5);
        printf("A soma total e: %d", S);
    }
    else
    {
        S = (S-5);
        printf("A soma total e: %d", S);
    }
}
