#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,op;
    char str[30];
    FILE *p;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    do{
        system("cls");
        printf("1 - Ler Strings\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            printf("Informe: ");
            fflush(stdin);
            gets(str);
            fputs(str,p);
            fputc('\n',p);
        }
    }while(op!=0);
    fclose(p);
    p = fopen("t.txt","r");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    char aux = fgetc(p);
    while(aux!=EOF){
        x++;
        aux=fgetc(p);
    }
    fclose(p);
    printf("Caracteres no arquivo: %d\n",x);
    return 0;
}
