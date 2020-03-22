#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct box{
    int numero,andar;
};
struct carros{
    char n[30],placa[30];
    struct box b;
}carro;
void cadastar(FILE *p){
    printf("Informe placa: ");
    fflush(stdin);
    gets(carro.placa);
    fputs(carro.placa, p);fputc('\n', p);
    printf("Informe numero chave: ");
    fflush(stdin);
    gets(carro.n);
    fflush(stdin);
    fputs(carro.n, p);fputc('\n', p);
    printf("Informe numero: ");
    scanf("%d", &carro.b.numero);
    fwrite(&carro.b.numero,sizeof(int),1, p);fputc('\n', p);
    printf("Informe andar: ");
    scanf("%d", &carro.b.andar);
    fwrite(&carro.b.andar,sizeof(int),1, p);fputs("\n\n", p);
}
void pesquisar(FILE *p, char placa[]){
    rewind(p);
    int i=1,a=0,b=0;
    char aux = fgetc(p);
    while(aux != EOF){
        if(aux == '\n'){
            i++;
            a=0;
        }
        if((i-1)%5==0||i-1==0){
            b=0;
            if(aux == placa[a])a++;
            if(a==strlen(placa))b++;
        }
        if(b==1)printf("%c", aux);
        aux = fgetc(p);
    }
}
void listar(FILE *p,int qtd){
    int v[qtd],i=1,a=0,auxs,j;
    rewind(p);
    char aux = fgetc(p);
    while(aux != EOF){
        if(aux == '\n')i++;
        if((i+1)%5==0){
            fread(&v[a],sizeof(int),1,p);
            a++;
        }
        aux = fgetc(p);
    }
    for(i=0;i<qtd;i++){
        for(j=0;j<qtd;j++){
            if(v[i]<v[j]){
                auxs=v[i];
                v[i]=v[j];
                v[j]=auxs;
            }
        }
    }
    printf("Ordenacao por andar:\n");
    for(i=0;i<qtd;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
int main()
{
    FILE *p;
    p = fopen("t.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    int op,i=0;
    char x[30];
    do{
        system("cls");
        printf("1 - Cadastrar\n");
        printf("2 - Pesquisar(pela placa)\n");
        printf("3 - Listar(pelo andar)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            system("cls");
            cadastar(p);
            i++;
            system("pause");
            break;
        case 2:
            system("cls");
            printf("Informe placa a ser pesquisada: ");
            fflush(stdin);
            gets(x);
            pesquisar(p,x);
            system("pause");
            break;
        case 3:
            system("cls");
            listar(p,i);
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
