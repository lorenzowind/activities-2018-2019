#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,x=0;
    char nome[30];
    FILE *p;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    do{
        system("cls");
        printf("1 - Inserir nome\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            printf("Informe nome: ");
            fflush(stdin);
            gets(nome);
            fflush(stdin);
            fputs(nome,p);fputc('\n',p);
            printf("Nome inserido com sucesso\n");
            system("pause");
        }
    }while(op!=0);
    fclose(p);
    system("cls");
    p = fopen("t.txt","r");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    char aux = fgetc(p);
    while(aux!=EOF){
        if(aux=='\n'){
            printf(" - %d caracteres\n",x);
            x=0;
        }
        else{
            printf("%c",aux);
            x++;
        }
        aux = fgetc(p);
    }
    fclose(p);
    return 0;
}
