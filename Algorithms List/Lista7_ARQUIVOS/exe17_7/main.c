#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *p;
FILE *aux;
struct compromissos{
    int cod;
    char data[12],hora[6],local[30],descricao[50],tipo[12];
}compromisso;
void abrir_arq(){
    p = fopen("t.txt","a+b");
    aux = fopen("auxiliar.txt","wb");
    if(p == NULL||aux == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
}
void agendar(){
    abrir_arq();
    printf("Informe codigo: ");
    scanf("%d", &compromisso.cod);
    printf("Informe data(**/**/****): ");
    fflush(stdin);
    gets(compromisso.data);
    printf("Informe hora(**:**): ");
    fflush(stdin);
    gets(compromisso.hora);
    printf("Informe local: ");
    fflush(stdin);
    gets(compromisso.local);
    printf("Informe descricao: ");
    fflush(stdin);
    gets(compromisso.descricao);
    printf("Informe tipo(reuniao/encontro/seminario/treinamento): ");
    fflush(stdin);
    gets(compromisso.tipo);
    fflush(stdin);
    fseek(p,SEEK_END,1);
    fwrite(&compromisso,sizeof(compromisso),1,p);
    fclose(p);
    fclose(aux);
}
void remover(int codigo){
    abrir_arq();
    int a=0;
    fseek(p,SEEK_SET,1);
    fread(&compromisso,sizeof(compromisso),1,p);
    while(!feof(p)){
        if(compromisso.cod==codigo)a++;
        else fwrite(&compromisso,sizeof(compromisso),1,aux);
        fread(&compromisso,sizeof(compromisso),1,p);
    }
    if(a==0)printf("Compromisso nao encontrado\n");
    else printf("Compromisso excluido\n");
    fclose(p);
    remove("t.txt");
    fflush(aux);
    fclose(aux);
    rename("auxiliar.txt","t.txt");
    remove("auxiliar.txt");
}
void listar_data(char data[]){
    abrir_arq();
    int a=0;
    fseek(p,SEEK_SET,1);
    fread(&compromisso,sizeof(compromisso),1,p);
    while(!feof(p)){
        if(strcmp(compromisso.data,data)==0){
            printf("Codigo: %d\n", compromisso.cod);
            printf("Data: %s\n", compromisso.data);
            printf("Horario: %s\n", compromisso.hora);
            printf("Local: %s\n", compromisso.local);
            printf("Descricao: %s\n", compromisso.descricao);
            printf("Tipo: %s\n\n", compromisso.tipo);
            a++;
        }
        fread(&compromisso,sizeof(compromisso),1,p);
    }
    if(a==0)printf("Nenhum compromisso encontrado\n");
    fclose(p);
    fclose(aux);
}
void listar_tipo(char tipo[]){
    abrir_arq();
    int a=0;
    fseek(p,SEEK_SET,1);
    fread(&compromisso,sizeof(compromisso),1,p);
    while(!feof(p)){
        if(strcmp(compromisso.tipo,tipo)==0){
            printf("Codigo: %d\n", compromisso.cod);
            printf("Data: %s\n", compromisso.data);
            printf("Horario: %s\n", compromisso.hora);
            printf("Local: %s\n", compromisso.local);
            printf("Descricao: %s\n", compromisso.descricao);
            printf("Tipo: %s\n\n", compromisso.tipo);
            a++;
        }
        fread(&compromisso,sizeof(compromisso),1,p);
    }
    if(a==0)printf("Nenhum compromisso encontrado\n");
    fclose(p);
    fclose(aux);
}
int main()
{
    int codigo,op;
    char pesq[12];
    p = fopen("t.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do aqruivo\n");
        system("pause");
        exit(1);
    }
    fclose(p);
    do{
        system("cls");
        printf("1 - Agendar compromisso\n");
        printf("2 - Remover(pelo codigo)\n");
        printf("3 - Listar(pela data)\n");
        printf("4 - Listar(pelo tipo)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            system("cls");
            agendar();
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Informe codigo a ser removido: ");
            scanf("%d", &codigo);
            remover(codigo);
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Informe data a ser listado: ");
            fflush(stdin);
            gets(pesq);
            fflush(stdin);
            listar_data(pesq);
            system("pause");
            break;
        case 4:
            system("cls");
            printf("Informe tipo a ser listado: ");
            fflush(stdin);
            gets(pesq);
            fflush(stdin);
            listar_tipo(pesq);
            system("pause");
            break;
        case 0:
            break;
        default:
            system("cls");
            printf("Opcao Invalida\n");
            system("pause");
            break;

        }
    }while(op!=0);
    return 0;
}
