#include <stdio.h>
#include <stdlib.h>
struct produtos{
    char nome[30];
    float pvenda,pcompra,mont;
}produto[5];
int main()
{
    int i;
    float ml,mp;
    char nml[30],nmp[30];
    for(i=0;i<5;i++){
        printf("NOME DO PRODUTO: ");
        fflush(stdin);
        gets(produto[i].nome);
        printf("PRECO DE COMPRA: ");
        scanf("%f", &produto[i].pcompra);
        printf("PRECO DE VENDA: ");
        scanf("%f", &produto[i].pvenda);
        produto[i].mont=(produto[i].pvenda-produto[i].pcompra);
    }
    for(i=0;i<5;i++){
        printf("PRODUTO %d\n",i+1);
        if(produto[i].mont>0)printf("LUCRO DE %.2f\n",produto[i].mont);
        else printf("PREJUIZO DE %.2f\n",produto[i].mont);
        if(i==0){
            ml=produto[i].mont;
            strcpy(nml,produto[i].nome);
            mp=produto[i].mont;
            strcpy(nmp,produto[i].nome);
        }
        if(produto[i].mont>ml){
            ml=produto[i].mont;
            strcpy(nml,produto[i].nome);
        }
        else{
            mp=produto[i].mont;
            strcpy(nmp,produto[i].nome);
        }
    }
    printf("MAIOR LUCRO -  %s: %.2f\n",nml,ml);
    printf("MAIOR PREJUIZO - %s: %.2f\n",nmp,mp);
    return 0;
}
