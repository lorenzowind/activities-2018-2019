#include <stdio.h>
#include <stdlib.h>

main()
{
    int T=0, PRT, BBD, SBM;

    printf("1- Vegetariano");
    printf("\n2- Peixe");
    printf("\n3- Frango");
    printf("\n4- Carne");
    printf("\nQual e o prato: ");
    scanf("%d", &PRT);

    if(PRT==1)
    {
        T = T+180;
    }
    if(PRT==2)
    {
        T = T+230;
    }
    if(PRT==3)
    {
        T = T+250;
    }
    if(PRT==4)
    {
        T = T+350;
    }

    printf("\n1- Abacaxi");
    printf("\n2- Sorvete diet");
    printf("\n3- Mouse diet");
    printf("\n4- Mouse de chcocolate");
    printf("\nQual e a sobremesa: ");
    scanf("%d", &SBM);

    if(SBM==1)
    {
        T = T+75;
    }
    if(SBM==2)
    {
        T = T+110;
    }
    if(SBM==3)
    {
        T = T+170;
    }
    if(SBM==4)
    {
        T = T+200;
    }

    printf("\n1- Cha");
    printf("\n2- Suco de laranja");
    printf("\n3- Suco de melao");
    printf("\n4- Refrigerante diet");
    printf("\nQual e a bebida: ");
    scanf("%d", &BBD);

    if(BBD==1)
    {
        T = T+20;
    }
    if(BBD==2)
    {
        T = T+70;
    }
    if(BBD==3)
    {
        T = T+100;
    }
    if(BBD==4)
    {
        T = T+65;
    }
    printf("\nA quantidade total de calorias consumidas foi de: %.2d", T);
}
