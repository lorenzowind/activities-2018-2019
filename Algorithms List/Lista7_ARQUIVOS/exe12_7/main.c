#include <stdio.h>
#include <stdlib.h>
struct registro{
    char nome[30],nacionalidade[30];
    int codigo,integrantes;
}banda[10];
int main()
{
    FILE *p;
    p = fopen("t.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    int i=0,op;
    do{
        system("cls");
        printf("1 - Cadastrar\n");
        printf("0 - Sair\n");
        printf("Escoha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            if(i==10){
                printf("Nao e possivel cadastrar\n");
                op=0;
            }
            else{
                printf("Informe codigo: ");
                scanf("%d", &banda[i].codigo);
                fputs("Codigo: ",p);fwrite(&banda[i].codigo,sizeof(int),1,p);fputc('\n',p);
                printf("Informe nome: ");
                fflush(stdin);
                gets(banda[i].nome);
                fflush(stdin);
                fputs("Nome: ",p);fputs(banda[i].nome,p);fputc('\n',p);
                printf("Informe nacionaliade: ");
                gets(banda[i].nacionalidade);
                fflush(stdin);
                fputs("Nacionalidade: ",p);fputs(banda[i].nacionalidade,p);fputc('\n',p);
                printf("Informe quantidade de integrantes: ");
                scanf("%d", &banda[i].integrantes);
                fputs("Quantidade de integrantes: ",p);fwrite(&banda[i].integrantes,sizeof(int),1,p);fputc('\n',p);
                i++;
            }
            system("pause");
        }
    }while(op!=0);
    system("cls");
    rewind(p);
    char aux = fgetc(p);
    while(aux != EOF){
        printf("%c",aux);
        aux = fgetc(p);
    }
    fclose(p);
    return 0;
}
