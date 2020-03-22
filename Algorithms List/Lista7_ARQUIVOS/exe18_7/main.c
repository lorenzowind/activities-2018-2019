#include <stdio.h>
#include <stdlib.h>
struct estoques{
    int ITE_COD,ITE_MAX,ITE_MIN;
    float ITE_VLC,ITE_VLV;
    char ITE_DES[30],ITE_DTC[30];
}estoque;
FILE *p;
void abrir_arq(){
    p = fopen("t.txt","a+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
}
void insercao(){
    do{
        printf("Informe codigo: ");
        scanf("%d", &estoque.ITE_COD);
        if(consulta_cod(estoque.ITE_COD)!=0)printf("codigo ja cadastrado\n");
    }while(consulta_cod(estoque.ITE_COD)!=0);
    printf("Informe descricao: ");
    fflush(stdin);
    gets(estoque.ITE_DES);
    do{
        printf("Informe quantidade maxima do produto: ");
        fflush(stdin);
        scanf("%d", &estoque.ITE_MAX);
        if(estoque.ITE_MAX==0)printf("quantidade invalida\n");
    }while(estoque.ITE_MAX==0);
    do{
        printf("Informe quantidade minima do produto: ");
        fflush(stdin);
        scanf("%d", &estoque.ITE_MIN);
        if(estoque.ITE_MIN>estoque.ITE_MAX)printf("quantidade invalida\n");
    }while(estoque.ITE_MIN>estoque.ITE_MAX);
    do{
        printf("Informe valor de compra: ");
        fflush(stdin);
        scanf("%f", &estoque.ITE_VLC);
        if(estoque.ITE_VLC==0)printf("Valor de compra invalido\n");
    }while(estoque.ITE_VLC==0);
    estoque.ITE_VLV = estoque.ITE_VLC+(estoque.ITE_VLC*0.25);
    printf("Informe data de cadastro(**/**/****): ");
    fflush(stdin);
    gets(estoque.ITE_DTC);
    fflush(stdin);
    abrir_arq();
    fseek(p,SEEK_END,1);
    fwrite(&estoque,sizeof(estoque),1,p);
    fclose(p);
}
int consulta_cod(int codigo){
    abrir_arq();
    int a=0;
    fseek(p,SEEK_SET,1);
    fread(&estoque,sizeof(estoque),1,p);
    while(!feof(p)){
        if(estoque.ITE_COD==codigo)a++;
        fread(&estoque,sizeof(estoque),1,p);
    }
    fclose(p);
    return a;
}
void consulta(){
    int o;
    printf("Consulta por:\n");
    printf("1 - Mostrar descricao, quantidade e valor de compra\n");
    printf("2 - Mostrar descricao, valor de venda e data\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &o);
    if(o==1||o==2){
        system("cls");
        consulta_dados(o);
    }
    else{
        system("cls");
        printf("Opcao Invalida\n");
    }
}
void consulta_dados(int x){
    abrir_arq();
    int a=0,cod;
    printf("Informe codigo: ");
    scanf("%d", &cod);
    fseek(p,SEEK_SET,1);
    fread(&estoque,sizeof(estoque),1,p);
    while(!feof(p)){
        if(estoque.ITE_COD==cod){
            printf("Item encontrado\n");
            if(x==1){
                printf("Descricao: %s\n",estoque.ITE_DES);
                printf("Quantidade maxima: %d\n",estoque.ITE_MAX);
                printf("Quantidade minima: %d\n",estoque.ITE_MIN);
                printf("Valor de compra: %.2f\n\n",estoque.ITE_VLC);

            }
            if(x==2){
                printf("Descricao: %s\n",estoque.ITE_DES);
                printf("Valor de venda: %.2f\n",estoque.ITE_VLV);
                printf("Data de cadastro: %s\n\n",estoque.ITE_DTC);
            }
            a++;
        }
        fread(&estoque,sizeof(estoque),1,p);
    }
    if(a==0)printf("Item nao encontrado\n");
    fclose(p);
}
int main()
{
    system("cls");
    p = fopen("t.txt","a+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    fclose(p);
    int op;
    do{
        system("cls");
        printf("1 - Inclusao\n");
        printf("2 - Consulta\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            system("cls");
            insercao();
            system("pause");
            break;
        case 2:
            system("cls");
            consulta();
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
