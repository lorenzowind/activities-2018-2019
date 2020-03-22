#include <stdio.h>
#include <stdlib.h>

main()
{
    int NI, NIMEP=0, NIMAP=0, i=1;
    float P, MEP=0, MAP=0;

    while(NI>0)
    {
        printf("Numero de identificacao: ");
        scanf("%d", &NI);

        if(NI==0)
        {
            break;
        }

        printf("Peso: ");
        scanf("%f", &P);

        if(i==1)
        {
            MEP=P;
        }

        if(P>=MAP)
        {
            MAP=P;
            NIMAP=NI;
        }

        if(P<=MEP)
        {
            MEP=P;
            NIMEP=NI;
        }
        i++;
    }

    printf("\nBoi mais gordo: ");
    printf("\nNumero de identificacao: %d", NIMAP);
    printf("\nPeso: %f\n", MAP);
    printf("\nBoi mais magro: ");
    printf("\nNumero de identificacao: %d", NIMEP);
    printf("\nPeso: %f", MEP);

}
