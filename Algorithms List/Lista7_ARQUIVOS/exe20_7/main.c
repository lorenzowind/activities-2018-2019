#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
FILE *inf,*mec,*ele,*tel;
struct biblioteca{
    int COD_LIV,N_PAG;
    char AREA[20],AUTOR[30],EDITORA[30],OBS[30];
    bool DOADO;
}livro;
void abrir_arq(){
    inf = fopen("Informatica.txt","a+b");
    mec = fopen("Mecatronica.txt","a+b");
    ele = fopen("Eletronica.txt","a+b");
    tel = fopen("Telecomunicacoes.txt","a+b");
    if(inf==NULL||mec==NULL||ele==NULL||tel==NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
}
void cadastro(){
    abrir_arq();
    printf("Informe codigo: ");
    scanf("%d", &livro.COD_LIV);
    printf("Informe area(informatica/mecatronica/eletronica/telecomunicacoes): ");
    fflush(stdin);
    gets(livro.AREA);
    fflush(stdin);
    printf("Informe autor: ");
    gets(livro.AUTOR);
    fflush(stdin);
    printf("Informe editora: ");
    gets(livro.EDITORA);
    fflush(stdin);
    livro.DOADO = false;
    printf("Informe numero de paginas: ");
    scanf("%d", &livro.N_PAG);
    printf("Informe observacao: ");
    fflush(stdin);
    gets(livro.OBS);
    fflush(stdin);
    if(strcmp(livro.AREA,"informatica")==0){
        fseek(inf,SEEK_END,1);
        fwrite(&livro,sizeof(livro),1,inf);
    }
    if(strcmp(livro.AREA,"mecatronica")==0){
        fseek(mec,SEEK_END,1);
        fwrite(&livro,sizeof(livro),1,mec);
    }
    if(strcmp(livro.AREA,"eletronica")==0){
        fseek(ele,SEEK_END,1);
        fwrite(&livro,sizeof(livro),1,ele);
    }
    if(strcmp(livro.AREA,"telecomunicacoes")==0){
        fseek(tel,SEEK_END,1);
        fwrite(&livro,sizeof(livro),1,tel);
    }
    fclose(inf);fclose(mec);fclose(ele);fclose(tel);
}
void porcent(){
    abrir_arq();
    int qtd_l=0,qtd_l2=0;
    fseek(ele,SEEK_SET,1);
    fread(&livro,sizeof(livro),1,ele);
    while(!feof(ele)){
        if(livro.N_PAG>200){
            qtd_l2++;
        }
        qtd_l++;
        fread(&livro,sizeof(livro),1,ele);
    }
    if(qtd_l>0)printf("Porcentagem de livros de eletronica com mais de 200 paginas: %.2f%%\n",(float)(qtd_l2*100)/qtd_l);
    else printf("Nenhum livro de eletronica cadastrado\n");
    fclose(inf);fclose(mec);fclose(ele);fclose(tel);
}
void consulta(char area[]){
    abrir_arq();
    int a=0;
    if(strcmp(area,"informatica")==0){
        fseek(inf,SEEK_SET,1);
        fread(&livro,sizeof(livro),1,inf);
        while(!feof(inf)){
            printf("Codigo: %d\n", livro.COD_LIV);
            printf("Autor: %s\n", livro.AUTOR);
            printf("Editora: %s\n", livro.EDITORA);
            printf("Numero de paginas: %d\n", livro.N_PAG);
            printf("Observacao: %s\n\n", livro.OBS);
            a++;
            fread(&livro,sizeof(livro),1,inf);
        }
    }
    if(strcmp(area,"mecatronica")==0){
        fseek(mec,SEEK_SET,1);
        fread(&livro,sizeof(livro),1,mec);
        while(!feof(mec)){
            printf("Codigo: %d\n", livro.COD_LIV);
            printf("Autor: %s\n", livro.AUTOR);
            printf("Editora: %s\n", livro.EDITORA);
            printf("Numero de paginas: %d\n", livro.N_PAG);
            printf("Observacao: %s\n\n", livro.OBS);
            a++;
            fread(&livro,sizeof(livro),1,mec);
        }
    }
    if(strcmp(area,"eletronica")==0){
        fseek(ele,SEEK_SET,1);
        fread(&livro,sizeof(livro),1,ele);
        while(!feof(ele)){
            printf("Codigo: %d\n", livro.COD_LIV);
            printf("Autor: %s\n", livro.AUTOR);
            printf("Editora: %s\n", livro.EDITORA);
            printf("Numero de paginas: %d\n", livro.N_PAG);
            printf("Observacao: %s\n\n", livro.OBS);
            a++;
            fread(&livro,sizeof(livro),1,ele);
        }
    }
    if(strcmp(area,"telecomunicacoes")==0){
        fseek(tel,SEEK_SET,1);
        fread(&livro,sizeof(livro),1,tel);
        while(!feof(tel)){
            printf("Codigo: %d\n", livro.COD_LIV);
            printf("Autor: %s\n", livro.AUTOR);
            printf("Editora: %s\n", livro.EDITORA);
            printf("Numero de paginas: %d\n", livro.N_PAG);
            printf("Observacao: %s\n\n", livro.OBS);
            a++;
            fread(&livro,sizeof(livro),1,tel);
        }
    }
    if(a==0)printf("Nenhum livro cadastrado\n");
    fclose(inf);fclose(mec);fclose(ele);fclose(tel);
}
void doar(){
    abrir_arq();
    int a=0;
    FILE *aux;
    aux = fopen("auxiliar.txt","wb");
    fseek(tel,SEEK_SET,1);
    fread(&livro,sizeof(livro),1,tel);
    while(!feof(tel)){
        livro.DOADO = true;
        strcpy(livro.OBS,"Este livro foi doado");
        a++;
        fwrite(&livro,sizeof(livro),1,aux);
        fread(&livro,sizeof(livro),1,tel);
    }
    fclose(inf);fclose(mec);fclose(ele);fclose(tel);
    if(a==0)printf("Nenhum livro de telecomunicacoes cadastrado\n");
    else printf("Livros doados\n");
    remove("Telecomunicacoes.txt");
    fclose(aux);
    rename("auxiliar.txt","Telecomunicacoes.txt");
    remove("auxiliar.txt");

}
int main()
{
    int op;
    char area[30];
    inf = fopen("Informatica.txt","w+b");
    mec = fopen("Mecatronica.txt","w+b");
    ele = fopen("Eletronica.txt","w+b");
    tel = fopen("Telecomunicacoes.txt","w+b");
    if(inf==NULL||mec==NULL||ele==NULL||tel==NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    fclose(inf);fclose(mec);fclose(ele);fclose(tel);
    do{
        system("cls");
        printf("1 - Cadastro\n");
        printf("2 - Porcentagem de livros de eletronica com mais de 200 paginas\n");
        printf("3 - Consulta(por area)\n");
        printf("4 - Doar livros de telecomunicacoes\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        switch(op){
        case 1:
            system("cls");
            cadastro();
            system("pause");
            break;
        case 2:
            system("cls");
            porcent();
            system("pause");
            break;
        case 3:
            system("cls");
            printf("Informe area a ser listada: ");
            fflush(stdin);
            gets(area);
            fflush(stdin);
            consulta(area);
            system("pause");
            break;
        case 4:
            system("cls");
            doar();
            system("pause");
            break;
        case 0:
            break;
        default:
            system("cls");
            printf("Opcao Invalida\n");
            system("pause");
        }
    }while(op!=0);
    return 0;
}
