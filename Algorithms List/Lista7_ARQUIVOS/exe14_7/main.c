#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct DETRAM{
    char placa[30],marca[30];
    int ano;
}carro;
void inserir(FILE *p){
    printf("Informe placa: ");
    fflush(stdin);
    gets(carro.placa);
    fflush(stdin);
    fputs(carro.placa,p);fputc('\n',p);
    printf("Informe marca: ");
    gets(carro.marca);
    fflush(stdin);
    fputs(carro.marca,p);fputc('\n',p);
    printf("Informe ano: ");
    scanf("%d", &carro.ano);
    fwrite(&carro.ano,sizeof(int),1,p);fputs("\n\n",p);
}
FILE* alterar(FILE *p,char placa[]){
    FILE *fp;
    fp = fopen("DETRAM.txt","w+b");
    rewind(p);
    char aux = fgetc(p);
    int i=1,a=0,b;
    while(aux != EOF){
        if(aux == '\n'){
            i++;
            a=0;
        }
        b=0;
        if(i-1%4==0||i-1==0){
            if(aux==placa[a])a++;
            if(a==strlen(placa))b++;
        }
        if(b==1){
            printf("Placa encontrada\n");
            inserir(fp);
        }
        aux = fgetc(p);
    }
    return fp;
}
int main()
{
    FILE *p;
    p = fopen("DETRAM.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    int op;
    char x[30];
    do{
        system("cls");
        printf("1 - Inserir dados\n");
        printf("2 - Alteracao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
    case 1:
        system("cls");
        inserir(p);
        system("pause");
        break;
    case 2:
        system("cls");
        printf("Informe placa para alteracao: ");
        fflush(stdin);
        gets(x);
        fflush(stdin);
        p = alterar(p,x);
        system("pause");
        break;
    case 0:
        break;
    default:
        system("cls");
        printf("Opcao invalida\n");
        system("pause");
        }
    }while(op!=0);
    fclose(p);
    return 0;
}
