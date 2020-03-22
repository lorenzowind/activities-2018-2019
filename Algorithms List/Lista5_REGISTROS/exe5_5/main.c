#include <stdio.h>
#include <stdlib.h>
 struct{
    int codigo,x;
    char nome[30];
    float saldo;
}conta[10];
int main()
{
    int i;
    float valor;
    for(i=0;i<10;i++){
        printf("INFORME O CODIGO DA CONTA: ");
        scanf("%d", &conta[i].codigo);
        fflush(stdin);
        printf("INFORME NOME: ");
        gets(conta[i].nome);
        printf("INFORME SALDO: ");
        scanf("%f", &conta[i].saldo);
    }
    for(i=0;i<10;i++){
        printf("CONTA: %d\n", conta[i].codigo);
        printf("INFORME VALOR DO CHEQUE: ");
        scanf("%f", &valor);
        conta[i].x=0;
        if(valor>conta[i].saldo){
            conta[i].x++;
        }
    }
    printf("\nRELATORIO:\n\n");
    for(i=0;i<10;i++){
        if(conta[i].x>0){
            printf("CODIGO: %d\n", conta[i].codigo);
            printf("NOME: %s\n", conta[i].nome);
            printf("SALDO: %.2f\n", conta[i].saldo);
            printf("CHEQUE SEM FUNDOS\n\n");
        }
    }
    return 0;
}
