#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0,j,OP,OP1[10]={0},OP2[10]={0},OP3[10]={0},OP4[10]={0},OP5[10]={0};
    char nome[30];
    do{
        printf("INFORME O NOME DA PESSOA: ");
        fflush(stdin);
        gets(nome);
        if(strcmp(nome,"VAZIO")==0)break;
        for(j=0;j<10;j++){
            printf("PERGUNTA %d - ESCOLHA UMA OPCAO(1/2/3/4/5): ",j+1);
            scanf("%d", &OP);
            if(OP==1)OP1[j]++;
            if(OP==2)OP2[j]++;
            if(OP==3)OP3[j]++;
            if(OP==4)OP4[j]++;
            if(OP==5)OP5[j]++;
        }
        i++;
    }while(strcmp(nome,"VAZIO")!=0);
    for(j=0;j<10;j++){
        printf("OPCAO 1{PERGUNTA %d): %d PESSOA(S)\n",j+1,OP1[j]);
        printf("OPCAO 2{PERGUNTA %d): %d PESSOA(S)\n",j+1,OP2[j]);
        printf("OPCAO 3{PERGUNTA %d): %d PESSOA(S)\n",j+1,OP3[j]);
        printf("OPCAO 4{PERGUNTA %d): %d PESSOA(S)\n",j+1,OP4[j]);
        printf("OPCAO 5{PERGUNTA %d): %d PESSOA(S)\n",j+1,OP5[j]);
    }
    return 0;
}
