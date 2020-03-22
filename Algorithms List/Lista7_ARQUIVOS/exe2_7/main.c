#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    int op;
    FILE *p;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    do{
        system("cls");
        printf("1 - Informe clube\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            printf("Informe clube: ");
            fflush(stdin);
            gets(nome);
            fflush(stdin);
            fputs(nome,p);
            fputc('\n',p);
        }
        else if(op==0)break;
        else{
            system("cls");
            printf("Opcao Invalida\n");
            system("pause");
        }
    }while(op!=0);
    system("cls");
    fclose(p);
    p = fopen("t.txt","r");
    char aux = fgetc(p);
    while(aux != EOF){
        printf("%c", aux);
        aux = fgetc(p);
    }
    fclose(p);
    return 0;
}

    /*Faça um programa em C utilizando arquivos,
    que realize as seguintes operações: Primeiro
    o arquivo será aberto para a escrita, em
    seguida grava-se strings (nomes de clubes
    de futebol) nele. Por fim, o arquivo é
    fechado e novamente aberto para a leitura
    e impressão dos dados lidos na tela.*/
