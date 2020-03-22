#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    char aux[30],auxc;
    FILE *p;
    p = fopen("AGENDA.DAT.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    do{
        system("cls");
        printf("1 - Cadastrar contato\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            printf("Informe nome: ");
            fflush(stdin);
            gets(aux);
            fflush(stdin);
            fputs(aux,p);fputc(' ',p);
            printf("Informe telefone: ");
            gets(aux);
            fflush(stdin);
            fputs(aux,p);fputc('\n',p);
            printf("Contato cadastrado\n");
            system("pause");
        }
    }while(op!=0);
    system("cls");
    fclose(p);
    p = fopen("AGENDA.DAT.txt","r");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    printf("Conteudo do arquivo:\n");
    auxc = fgetc(p);
    while(auxc!=EOF){
        printf("%c",auxc);
        auxc = fgetc(p);
    }
    fclose(p);
    return 0;
}
