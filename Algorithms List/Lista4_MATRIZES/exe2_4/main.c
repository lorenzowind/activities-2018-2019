#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[3][3],MA,ME,PLMA,PCMA,PLME,PCME,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &M[i][j]);
            if(i==0&&j==0){
                MA=M[i][j];
                PLMA=i;
                PCMA=j;
                ME=M[i][j];
                PLME=i;
                PCME=j;
            }
            if(M[i][j]>MA){
                MA=M[i][j];
                PLMA=i;
                PCMA=j;
            }
            if(M[i][j]<ME){
                ME=M[i][j];
                PLME=i;
                PCME=j;
            }
        }
    }
    printf("MAIOR ELEMENTO: %d\n", MA);
    printf("POSICAO DO MAIOR ELEMENTO: [%d][%d]\n\n", PLMA,PCMA);
    printf("MENOR ELEMENTO: %d\n", ME);
    printf("POSICAO DO MENOR ELEMENTO: [%d][%d]\n\n", PLME,PCME);
    printf("MATRIZ: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
