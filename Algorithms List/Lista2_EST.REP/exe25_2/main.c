#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int N[50],P,i=1,c,TP=0,PH=0,PM=0,NUM,TH=0,TM=0;
    float SAL[50],SL=0,TS=0,MASAL=0;
    char S[2];

    do{
        printf("Numero do operario: ");
        scanf("%d", &N[i]);
        if(N[i]==0)
        {
            i--;
            break;
        }
        printf("Numero de pecas fabricadas por mes: ");
        scanf("%d", &P);
        printf("Sexo do operario: ");
        scanf("%s", &S);
        SAL[i]=954;

        if(strcmp(S,"M")==0)
        {
            PH+=P;
            TH++;
        }
        if(strcmp(S,"F")==0)
        {
            PM+=P;
            TM++;
        }
        if(P>30&&P<=35)
        {
            SL=(SAL[i]*0.03)*30;
            SAL[i]+=SL;
        }
        if(P>35)
        {
            SL=(SAL[i]*0.05)*30;
            SAL[i]+=SL;
        }
        TS+=SAL[i];
        TP+=P;
        if(i==1)
        {
            MASAL=SAL[i];
            NUM=N[i];
        }
        if(SAL[i]>MASAL)
        {
            NUM=N[i];
            MASAL=SAL[i];
        }
        i++;
    }while(N>0);
    PH/=TH;
    PM/=TM;
    for(c=1;c<=i;c++)
    {
        printf("\nOperario %d", N[c]);
        printf("\nSalario: %.2f", SAL[c]);
    }
    printf("\n\nTotal de pecas fabricadas: %d", TP);
    printf("\nFolha mensal de pagamento: %.2f", TS);
    printf("\nMedia de pecas fabricadas pelos homens: %d", PH);
    printf("\nMedia de pecas fabricadas pelas mulheres: %d", PM);
    printf("\nOperario de maior salario: %d - %.2f", NUM, MASAL);
}
