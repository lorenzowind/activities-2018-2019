#include <stdio.h>
#include <stdlib.h>
struct lista{
    int dado;
    struct lista *prox;
};
int menor(struct lista *L){
    struct lista *q;
    q=L->prox;
    int men=q->dado;
    while(q!=NULL){
        if(q->dado<men)men=q->dado;
        q=q->prox;
    }
    return men;
}
void leitura(struct lista *L){
    struct lista *q;
    q=malloc(sizeof(struct lista));
    printf("Informe valor: ");
    scanf("%d",&q->dado);
    q->prox=L->prox;
    L->prox=q;
}
int main()
{
    struct lista *L;
    L=malloc(sizeof(struct lista));
    L->prox=NULL;
    int i=0,op;
    do{
        system("cls");
        printf("1 - Inserir\n");
        printf("2 - Menor\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            system("cls");
            leitura(L);
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Menor elemento: %d\n",menor(L));
            printf("\n");
            system("pause");
            break;
        case 0:
            break;
        default:
            system("cls");
            printf("Opcao Invalida\n");
            system("pause");
        }
    }while(op!=0);
    return 0;
}
