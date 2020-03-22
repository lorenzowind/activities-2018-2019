#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,C,i,j,DS=1,DP=1,DTM;
    printf("QUANTIDADE DE LINHAS: ");
    scanf("%d", &L);
    printf("QUANTIDADE DE COLUNAS: ");
    scanf("%d", &C);
    int M[L][C];
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            scanf("%d", &M[i][j]);
        }
    }
    printf("MATRIZ: \n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    if(L==C){
        for(i=0;i<L;i++){
            DP*=M[i][i];
            for(j=0;j<C;j++){
                if(i+j==(L-1))DS*=M[i][j];
            }
        }
        DTM=DP-DS;
        printf("DETERMINANTE DA MATRIZ: %d\n", DTM);
    }
    else printf("NAO E POSSIVEL CALCULAR O DETERMINANTE\n");
    return 0;
}
