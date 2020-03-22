#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
FILE *p;
bool sair = false;
struct candidatos{
    char nome[30],sexo,exp;
    int idade;
}candidato;
void abrir_arq(){
    p = fopen("CANDIDATOS.txt","a+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
}
void insercao(){
    system("cls");
    abrir_arq();
    printf("Informe nome: ");
    fflush(stdin);
    gets(candidato.nome);
    if(strcmp(candidato.nome,"Fim")==0)sair = true;
    else{
        printf("Sexo(M/F): ");
        fflush(stdin);
        candidato.sexo=getchar();
        printf("Experiencia(S/N): ");
        fflush(stdin);
        candidato.exp=getchar();
        printf("Idade: ");
        fflush(stdin);
        scanf("%d", &candidato.idade);
        fseek(p,SEEK_END,1);
        fwrite(&candidato,sizeof(candidato),1,p);
        fclose(p);
    }
    system("pause");
}
int main(){
    p = fopen("CANDIDATOS.txt","w+b");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    fclose(p);
    while(!sair){
        insercao();
    }
    system("cls");
    int he=0,h45=0,m=0,m30e=0,f=0,mime=9999;
    abrir_arq();
    fseek(p,SEEK_SET,1);
    fread(&candidato,sizeof(candidato),1,p);
    while(!feof(p)){
        if(candidato.sexo=='M'){
            m++;
            if(candidato.exp=='S')he+=candidato.idade;
            if(candidato.idade>45)h45++;
        }
        else{
            f++;
            if(candidato.idade<30&&candidato.exp=='S')m30e++;
            if(candidato.exp=='S'){
                if(candidato.idade<mime)mime=candidato.idade;
            }
        }
        fread(&candidato,sizeof(candidato),1,p);
    }
    fclose(p);
    printf("Candidatos do sexo feminino: %d\n",f);
    printf("Candidatos do sexo masculino: %d\n",m);
    printf("Idade media dos homens com experiencia no servico: ");
    if(he==0||m==0)printf("0.00\n");
    else printf("%.2f\n", he/m);
    printf("Porcentagem dos homens com mais de 45: ");
    if(h45==0||m==0)printf("0.00%%\n");
    else printf("%.2f%%\n", h45/m);
    printf("Numero de mulheres com idade inferior a 30 anos e com experiencia no servico: %d\n",m30e);
    printf("Menor idade entre as mulheres com experiencia no servico: ");
    if(mime==9999)printf("0\n\n");
    else printf("%d\n\n",mime);
    return 0;
}
