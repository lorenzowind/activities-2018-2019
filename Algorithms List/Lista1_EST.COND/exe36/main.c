#include <stdio.h>
#include <stdlib.h>

main()

{
    float T, DNH, TRC;
    int R10=0, R1=0, C50=0, C10=0, C5=0, C1=0;

    printf("Informe o valor total a ser pago: R$");
    scanf("%f", &T);
    printf("Informe o valor dado pelo cliente: R$");
    scanf("%f", &DNH);

    TRC = (DNH-T);

    if(TRC==0)
    {
        printf("O cliente nao precisa de troco");
    }
    if(TRC>=10)
    {
        do
        {
            TRC = (TRC-10);
            R10 = (R10+1);
        }while(TRC>=10);
    }
    if(TRC>=1)
    {
        do
        {
            TRC= (TRC-1);
            R1 = (R1+1);
        }while(TRC>=1);
    }
    if(TRC>=0.50)
    {
        do
        {
            TRC = (TRC-0.50);
            C50 = (C50+1);
        }while(TRC>=0.50);
    }
    if(TRC>=0.10)
    {
        do
        {
            TRC = (TRC-0.10);
            C10 = (C10+1);
        }while(TRC>=0.10);
    }
    if(TRC>=0.05)
    {
        do
        {
            TRC = (TRC-0.05);
            C5 = (C5+1);
        }while(TRC>=0.05);
    }
    if(TRC>=0.01)
    {
        do
        {
            TRC = (TRC-0.01);
            C1 = (C1+1);
        }while(TRC>=0.01);
    }
     if(R10>0)
    {
        printf("\nNotas de 10 reais: %.0d", R10);
    }
     if(R1>0)
    {
        printf("\nMoedas de 1 real: %.0d", R1);
    }
     if(C50>0)
    {
        printf("\nMoedas de 50 centavos: %.0d", C50);
    }
    if(C10>0)
    {
        printf("\nMoedas de 10 centavos: %.0d", C10);
    }
    if(C5>0)
    {
        printf("\nMoedas de 5 centavos: %.0d", C5);
    }
    if(C1>0)
    {
        printf("\nMoedas de 1 centavos: %.0d", C1);
    }
}
