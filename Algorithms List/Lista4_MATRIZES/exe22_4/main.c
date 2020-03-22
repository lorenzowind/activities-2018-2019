#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,st=0,sa=0,sl=0,qa[10],qt[10],ql[10],qts,i;
    do{
        printf("1 - QUANTIDADE DOS TRES INGREDIENTES\n");
        printf("2 - QUANTIDADE DE TORTAS\n");
        printf("3 - TOTAL DE XICARAS DE LEITE, ACUCAR E FARINHA\n");
        printf("4 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            for(i=1;i<=10;i++){
                printf("TORTA %d:\n", i);
                printf("QUANTIDADE DE TRIGO: ");
                scanf("%d", &qt[i]);
                printf("QUANTIDADE DE ACUCAR: ");
                scanf("%d", &qa[i]);
                printf("QUANTIDADE DE LEITE: ");
                scanf("%d", &ql[i]);
            }
        }
        if(op==2){
            st=0;
            sa=0;
            sl=0;
            for(i=1;i<=10;i++){
                printf("QUANTIDADE DE TORTAS DO TIPO %d: ",i);
                scanf("%d", &qts);
                st+=(qts*qt[i]);
                sa+=(qts*qa[i]);
                sl+=(qts*ql[i]);
            }
        }
        if(op==3){
            printf("TOTAL DE TRIGO: %d XICARAS\n", st);
            printf("TOTAL DE ACUCAR: %d XICARAS\n", sa);
            printf("TOTAL DE LEITE: %d XICARAS\n", sl);
        }
        if(op==4)break;
    }while(op!=4);
    return 0;
}
