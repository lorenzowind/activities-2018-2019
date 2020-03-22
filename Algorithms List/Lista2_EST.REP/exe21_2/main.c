#include <stdio.h>
#include <stdlib.h>

main()
{
    int N;

    scanf("%d", &N);

    if(N<1||N>50)
    {
        printf("O numero digitado nao eh valido!");
        exit(1);
    }

    printf("Multiplicoes succesivas: ");

    do{
        printf("%d\t", N);
        N*=2;
    }while(N<250);
}
