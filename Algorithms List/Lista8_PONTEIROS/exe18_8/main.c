#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct lista{
    char nome[30];
    int idade;
    struct lista *prox;
};
void leitura(struct lista *L){
    struct lista *q;
    q=malloc(sizeof(struct lista));
    printf("Informe nome: ");
    fflush(stdin);
    gets(q->nome);
    fflush(stdin);
    printf("Informe idade: ");
    scanf("%d", &q->idade);
    q->prox=L->prox;
    L->prox=q;
}
void consultar(struct lista *L){
    char pesq[30];
    printf("Informe nome a ser pesquisado: ");
    fflush(stdin);
    gets(pesq);
    fflush(stdin);
    struct lista *q;
    q=L->prox;
    int a=0;
    while(q!=NULL){
        if(strcmp(pesq,q->nome)==0){
            printf("Pessoa encontrada\n");
            printf("Nome: %s\n",q->nome);
            printf("Idade: %d\n",q->idade);
            a++;
        }
        q=q->prox;
    }
    if(a==0)printf("Pessoa nao encontrada\n");
}
int main()
{
    struct lista *L;
    L=malloc(sizeof(struct lista));
    L->prox=NULL;
    int op;
    do{
        system("cls");
        printf("1 - Inserir\n");
        printf("2 - Consultar\n");
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
            consultar(L);
            system("pause");
            break;
        case 0:
            break;
        default:
            printf("Opcao Invalida\n");
            system("pause");
        }
    }while(op!=0);
    return 0;
}
