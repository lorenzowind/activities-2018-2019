#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,i,j,m[3][3],s=0,a,aux;
    do{
        printf("1 - LER MATRIZ 3X3\n");
        printf("2 - ORDENAR POR LINHA E IMPRIMIR MATRIZ\n");
        printf("3 - SOMA DOS NUMEROS PARES ABAIXO DA DIAGONAL SECUNDARIA\n");
        printf("4 - SOMA DOS NUMEROS PARES ACIMA DA DIAGONAL SECUNDARIA\n");
        printf("5 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    scanf("%d", &m[i][j]);
                }
            }
        }
        if(op==2){
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    for(a=0;a<3;a++){
                        if(m[i][j]>m[i][a]){
                            aux=m[i][a];
                            m[i][a]=m[i][j];
                            m[i][j]=aux;
                        }
                    }
                }
            }
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    printf("%d ", m[i][j]);
                }
                printf("\n");
            }

        }
        if(op==3){
            s=0;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(i+j>2&&m[i][j]%2==0)s+=m[i][j];
                }
            }
            printf("SOMA DOS NUMEROS PARES ABAIXO DA DIAGONAL SECUNDARIA: %d\n\n", s);
        }
        if(op==4){
            s=0;
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    if(i+j<2&&m[i][j]%2==0)s+=m[i][j];
                }
            }
            printf("SOMA DOS NUMEROS PARES ACIMA DA DIAGONAL SECUNDARIA: %d\n\n", s);
        }
        if(op==5)break;
    }while(op!=5);
    return 0;
}
