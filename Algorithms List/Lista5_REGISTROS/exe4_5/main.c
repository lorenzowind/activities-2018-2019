#include <stdio.h>
#include <stdlib.h>
struct agenda{
    char nome[30];
    int numero;
}contato[10];
int main()
{
    int i=0,op,x;
    do{
        printf("1 - ADICIONAR CONTATO(Max.10)\n");
        printf("2 - IMPRIMIR AGENDA\n");
        printf("3 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            printf("NOME DO CONTATO: ");
            fflush(stdin);
            gets(contato[i].nome);
            printf("NUMERO: ");
            scanf("%d",&contato[i].numero);
            i++;
        }
        if(op==2){
            if(i==0)printf("AGENDA VAZIA\n\n");
            else{
                for(x=0;x<i;x++){
                    printf("NOME: %s\n", contato[x].nome);
                    printf("NUMERO: %d\n\n", contato[x].numero);
                }
            }
        }
    }while(op!=3||i!=10);
    return 0;
}
