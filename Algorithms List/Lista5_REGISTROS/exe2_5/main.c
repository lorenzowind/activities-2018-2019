#include <stdio.h>
#include <stdlib.h>
struct loja{
    int codigo,quantidade;
    char nome[30];
    float preco;
}mercadoria[5];
int main()
{
    int a=0,p,i;
    for(i=0;i<5;i++){
        printf("CODIGO DA MERCADORIA: ");
        scanf("%d", &mercadoria[i].codigo);
        printf("NOME: ");
        fflush(stdin);
        gets(mercadoria[i].nome);
        printf("PRECO: ");
        scanf("%f", &mercadoria[i].preco);
        printf("QUANTIDADE: ");
        scanf("%d", &mercadoria[i].quantidade);
    }
    while(1){
        printf("\nCONSULTA\n");
        printf("INFORME O CODIGO: ");
        scanf("%d", &p);
        for(i=0;i<5;i++){
            if(p==mercadoria[i].codigo){
                a++;
                printf("CODIGO: %d\n",mercadoria[i].codigo);
                printf("NOME: %s\n",mercadoria[i].nome);
                printf("PRECO: %.2f\n",mercadoria[i].preco);
                printf("QUANTIDADE: %d\n", mercadoria[i].quantidade);
            }
        }
        if(a==0)printf("CODIGO INEXISTENTE\n");
        a=0;
    }
    return 0;
}
