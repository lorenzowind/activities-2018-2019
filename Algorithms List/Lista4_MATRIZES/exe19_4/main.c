#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,i,j,MP=0,EMP;
    float PTC=0;
    printf("INFORME O NUMERO DE ESTADOS: ");
    scanf("%d", &L);
    int M[L][10];
    for(i=0;i<L;i++){
        printf("ESTADO %d:\n",i);
        for(j=0;j<10;j++){
            if(j==0)printf("POPULACAO DA CAPITAL DO ESTADO %d: ",i);
            else printf("POPULACAO DO MUNICIPIO: ");
            scanf("%d", &M[i][j]);
            if(M[i][j]>MP){
                MP=M[i][j];
                EMP=i;
            }
            if(j==0)PTC+=M[i][j];
        }
    }
    PTC/=L;
    printf("MEDIA DA POPULACAO DAS CAPITAIS DOS ESTADOS: %.2f\n", PTC);
    printf("MUNICIPIO MAIS POPULOSO: %d\n", MP);
    printf("ESTADO DO MUNICIPIO MAIS POPULOSO: %d\n", EMP);
    return 0;
}
