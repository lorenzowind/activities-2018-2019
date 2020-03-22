#include <stdio.h>
#include <stdlib.h>

main()
{
    int N;

    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &N);

    if(N>0&&N%2==0)
    {
        printf("O numero e positivo e par");
    }
    if(N>0&&N%2==1)
    {
        printf("O numero e positivo e impar");
    }
    if(N<0&&N%2==0)
    {
        printf("O numero e negativo e par");
    }
    if(N<0&&N%2!=0)
    {
        printf("O numero e negativo e impar");
    }
    if(N==0)
    {
        printf("O numero e 0");
    }
}
