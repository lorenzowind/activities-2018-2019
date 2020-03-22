#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char N[12][20],NMA[20];
    float A[12],sa=0,MA=0;
    for(i=0;i<12;i++)
    {
        printf("Nome: ");
        scanf("%s", &N[i]);
        fflush(stdin);
        printf("Altura: ");
        scanf("%f", &A[i]);
        if(A[i]>MA)
        {
            MA=A[i];
            strcpy(NMA,N[i]);
        }
        sa+=A[i];
    }
    sa/=12;
    printf("\n");
    printf("Nome do jogador mais alto: %s\n", NMA);
    printf("Altura: %.2f\n\n", MA);
    printf("Media de altura do time: %.2f\n\n", sa);
    printf("Jogadores com altura superior a media: \n");
    for(i=0;i<12;i++)
    {
        if(A[i]>sa)
        {
            printf("Nome: %s\n", N[i]);
            printf("Altura: %.2f\n", A[i]);
        }
    }
    return 0;
}
