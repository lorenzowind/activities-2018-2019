#include <stdio.h>
#include <stdlib.h>

main()
{
    int N, ND, MAV=0, MEV;

    printf("Numeros a se digitar: ");
    scanf("%d", &N);

    for(int i=0;i<N;i++)
    {
        scanf("%d", &ND);

        if(i==0)
        {
            MEV=ND;
        }
        if(ND>MAV)
        {
            MAV=ND;
        }
        if(ND<=MEV)
        {
            MEV=ND;
        }
    }
    printf("\nMaior valor digitado: %d", MAV);
    printf("\nMenor valor digitado: %d", MEV);
}
