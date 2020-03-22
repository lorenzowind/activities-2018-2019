#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int N[50],i=1,a,Q,MAC=0,MEC=0,TCR=0,TCC=0,TCI=0,TCG=0;
    float P, TP[50];
    char C[2];

    do{
        printf("Preco do KWh consumido: R$");
        scanf("%f", &P);
        printf("Numero do consumidor: ");
        scanf("%d", &N[i]);
        if(N[i]==0)
        {
            i--;
            break;
        }
        printf("Quantidade de KWh: ");
        scanf("%d", &Q);
        printf("Codigo do consumidor (R/C/I): ");
        scanf("%s", &C);

        TP[i]=Q*P;
        if(i==1)
        {
            MAC=Q;
            MEC=Q;
        }
        if(Q>MAC)
        {
            MAC=Q;
        }
        if(Q<MEC)
        {
            MEC=Q;
        }
        if(strcmp(C,"R")==0)
        {
            TCR+=Q;
        }
        if(strcmp(C,"C")==0)
        {
            TCC+=Q;
        }
        if(strcmp(C,"I")==0)
        {
            TCI+=Q;
        }
        TCG+=Q;
        i++;
    }while(N>0);
    TCG/=i;
    for(a=1;a<=i;a++)
    {
        printf("\nConsumidor: %d", N[a]);
        printf("\nTotal a pagar: %.2f", TP[a]);
    }
    printf("\n\nMaior consumo verificado: %d KWh", MAC);
    printf("\nMenor consumo verificado: %d KWh", MEC);
    printf("\nTotal de consumo para RESIDENCIAL: %d", TCR);
    printf("\nTotal de consumo para COMERCIAL: %d", TCC);
    printf("\nTotal de consumo para INDUSTRIAL: %d", TCI);
    printf("\nMedia geral de consumo: %d", TCG);
}
