#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,tp,x=0;
    float P[10];
    char F[10][30],Pesq[30];
    for(i=0;i<10;i++)
    {
        printf("NOME DA FREGUESA: ");
        scanf("%s", &F[i]);
        fflush(stdin);
        printf("PRECO DA COSTURA: ");
        scanf("%f", &P[i]);
    }
    do{
        printf("1 - PESQUISA\n");
        printf("0 - SAIR DO PROGRAMA\n");
        scanf("%d", &tp);
        if(tp==1)
        {
            printf("NOME DA FREGUESA: ");
            scanf("%s", &Pesq);
            fflush(stdin);
            for(i=0;i<10;i++)
            {
                if(strcmp(Pesq,F[i])==0)
                {
                    printf("FREGUESA ENCONTRADA: %s\n", F[i]);
                    printf("PRECO DA COSTURA: %.2f\n\n", P[i]);
                    x++;
                }
            }
            if(x==0)printf("FREGUESA NAO ENCONTRADA\n\n");
            x=0;
        }
        if(tp==0)exit(1);
    }while(tp!=0);
    return 0;
}
