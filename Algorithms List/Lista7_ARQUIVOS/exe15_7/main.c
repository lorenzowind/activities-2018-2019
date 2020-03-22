#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
FILE *p;
FILE *aux;
struct pecas{
    char nome[30],cor[30],tam[5];
    int qtd;
    bool delet;
}peca;
void abrir_arq(){
    p = fopen("t.txt","a+b");
    aux = fopen("auxiliar.txt","wb");
    if(p == NULL||aux == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
}
void inserir_peca(){
    abrir_arq();
    printf("Informe nome: ");
    fflush(stdin);
    gets(peca.nome);
    fflush(stdin);
    printf("Informe cor: ");
    gets(peca.cor);
    fflush(stdin);
    printf("Informe tamanho: ");
    gets(peca.tam);
    fflush(stdin);
    printf("Informe quantidade: ");
    fflush(stdin);
    scanf("%d", &peca.qtd);
    fflush(stdin);
    peca.delet = false;
    fseek(p,SEEK_END,1);
    fwrite(&peca,sizeof(peca),1,p);
    fclose(aux);
    fclose(p);
}
void listar(){
    abrir_arq();
    fseek(p,SEEK_SET,1);
    fread(&peca,sizeof(peca),1,p);
    while(!feof(p)){
        if(!peca.delet){
            printf("Nome da peca: %s\n", peca.nome);
            printf("Cor: %s\n", peca.cor);
            printf("Tamanho: %s\n", peca.tam);
            printf("Quantidade: %d\n\n", peca.qtd);
            fwrite(&peca,sizeof(peca),1,aux);
        }
        fread(&peca,sizeof(peca),1,p);
    }
    fclose(p);
    remove("t.txt");
    fflush(aux);
    fclose(aux);
    rename("auxiliar.txt","t.txt");
    remove("auxiliar.txt");
}
void deletar(char nome[]){
    abrir_arq();
    int a=0;
    fseek(p,SEEK_SET,1);
    fread(&peca,sizeof(peca),1,p);
    while(!feof(p)){
        if(strcmp(peca.nome,nome)==0){
            peca.delet = true;
            a++;
        }
        fwrite(&peca,sizeof(peca),1,aux);
        fread(&peca,sizeof(peca),1,p);
    }
    if(a==0)printf("Peca nao encontrada\n");
    else{
        printf("Peca excluida\n");
        fclose(p);
        remove("t.txt");
        fflush(aux);
        fclose(aux);
        rename("auxiliar.txt","t.txt");
        remove("auxiliar.txt");
    }
    fclose(aux);
    fclose(p);
}
int main()
{
    p = fopen("t.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    fclose(p);
    int op;
    char nome[30];
    do{
        system("cls");
        printf("1 - Inserir peca\n");
        printf("2 - Listar\n");
        printf("3 - Deletar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            system("cls");
            inserir_peca();
            system("pause");
            break;
        case 2:
            system("cls");
            listar();
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Informe nome da peca: ");
            fflush(stdin);
            gets(nome);
            fflush(stdin);
            deletar(nome);
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
