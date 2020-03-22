#include <stdio.h>
#include <stdlib.h>
struct registro{
    char nome[30],endereco[30],telefone[30],email[30];
    int salario;
}f[10];
void inserir(struct registro r,FILE *a){
    char aux[10];
    fputs("Nome: ",a);
    fputs(r.nome,a);fputc('\n',a);
    fputs("Endereco: ",a);
    fputs(r.endereco,a);fputc('\n',a);
    fputs("Telefone: ",a);
    fputs(r.telefone,a);fputc('\n',a);
    fputs("Email: ",a);
    fputs(r.email,a);fputc('\n',a);
    fputs("Salario: ",a);
    itoa(r.salario,aux,10);
    fputs(aux,a);fputs("\n\n",a);
}
void ler_dados(struct registro r[], FILE *a,int i){
    int j;
    char aux[10];
    for(j=0;j<i;j++){
        fputs("Nome: ",a);
        fputs(r[j].nome,a);fputc('\n',a);
        fputs("Salario: ",a);
        itoa(r[j].salario,aux,10);
        fputs(aux,a);fputs("\n\n",a);
    }
}
int main()
{
    int i=0,t=0,op;
    char aux[10];
    FILE *p;
    p = fopen("arq_orig.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    do{
        system("cls");
        printf("1 - Cadastrar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op==1){
            system("cls");
            if(i==10)printf("Limite de cadastros excedido\n");
            else{
                printf("Informe nome: ");
                fflush(stdin);
                gets(f[i].nome);
                fflush(stdin);
                printf("Informe endereco: ");
                gets(f[i].endereco);
                fflush(stdin);
                printf("Informe telefone: ");
                gets(f[i].telefone);
                fflush(stdin);
                printf("Informe email: ");
                gets(f[i].email);
                fflush(stdin);
                printf("Informe salario: ");
                scanf("%d", &f[i].salario);
                t+=f[i].salario;
                inserir(f[i],p);
                i++;
            }
            system("pause");
        }
    }while(op!=0);
    FILE *a;
    a = fopen("arq.txt","w");
    if(a == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    ler_dados(f,a,i);
    fputs("Valor total dos salarios: ",a);
    itoa(t,aux,10);
    fputs(aux,a);fputc('\n',a);
    fclose(p);
    fclose(a);
    return 0;
}
