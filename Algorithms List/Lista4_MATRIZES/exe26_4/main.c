#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,i,j,m[4][4],s=0,a,aux;
    do{
        printf("1 - LER MATRIZ 4X4\n");
        printf("2 - ORDENAR POR COLUNA E IMPRIMIR MATRIZ\n");
        printf("3 - SOMA DOS NUMEROS IMPARES ABAIXO DA DIAGONAL PRINCIPAL\n");
        printf("4 - SOMA DOS NUMEROS IMPARES ACIMA DA DIAGONAL PRINCIPAL\n");
        printf("5 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    scanf("%d", &m[i][j]);
                }
            }
        }
        if(op==2){
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    for(a=0;a<4;a++){
                        if(m[j][i]>m[a][i]){
                            aux=m[a][i];
                            m[a][i]=m[j][i];
                            m[j][i]=aux;
                        }
                    }
                }
            }
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    printf("%d ", m[i][j]);
                }
                printf("\n");
            }

        }
        if(op==3){
            s=0;
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    if(i>j&&m[i][j]%2!=0)s+=m[i][j];
                }
            }
            printf("SOMA DOS NUMEROS IMPARES ABAIXO DA DIAGONAL PRINCIPAL: %d\n\n", s);
        }
        if(op==4){
            s=0;
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    if(j>i&&m[i][j]%2!=0)s+=m[i][j];
                }
            }
            printf("SOMA DOS NUMEROS IMPARES ACIMA DA DIAGONAL PRINCIPAL: %d\n\n", s);
        }
        if(op==5)break;
    }while(op!=5);
    return 0;
}
