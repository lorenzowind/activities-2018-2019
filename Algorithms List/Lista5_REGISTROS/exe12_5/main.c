#include <stdio.h>
#include <stdlib.h>
struct{
    int codigo,ano;
    char titulo[30],autor[30],assunto[50],editora[30];
}livros[20];
int main()
{
    int i=0,op,p,a,x=0;
    while(1){
        printf("1 - CADASTRO\n");
        printf("2 - CONSULTA\n");
        printf("3 - EXCLUSAO\n");
        printf("4 - ALTERACAO\n");
        printf("5 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            printf("LIVRO %d:\n",i+1);
            printf("INFORME CODIGO: ");
            scanf("%d", &livros[i].codigo);
            printf("INFORME TITULO: ");
            fflush(stdin);
            gets(livros[i].titulo);
            printf("INFORME AUTOR: ");
            fflush(stdin);
            gets(livros[i].autor);
            printf("INFORME ASSUNTO: ");
            fflush(stdin);
            gets(livros[i].assunto);
            printf("INFORME EDITORA: ");
            fflush(stdin);
            gets(livros[i].editora);
            printf("INFORME ANO: ");
            scanf("%d", &livros[i].ano);
            i++;
            system("cls");
        }
        if(op==2){
            printf("INFORME CODIGO: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(p==livros[a].codigo){
                    printf("LIVRO ENCONTRADO\n");
                    printf("TITULO: %s\n", livros[a].titulo);
                    printf("AUTOR: %s\n", livros[a].autor);
                    printf("ASSUNTO: %s\n", livros[a].assunto);
                    printf("EDITORA: %s\n", livros[a].editora);
                    printf("ANO: %d\n\n", livros[a].ano);
                    x++;
                }
            }
            if(x==0){
                printf("LIVRO NAO ENCONTRADO\n\n");
            }
            x=0;
        }
        if(op==3){
            printf("INFORME CODIGO: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(p==livros[a].codigo){
                    printf("LIVRO EXCLUIDO\n");
                    livros[a].codigo=NULL;
                    x++;
                }
            }
            if(x==0){
                printf("LIVRO NAO ENCONTRADO\n\n");
            }
            x=0;
        }
        if(op==4){
            printf("INFORME CODIGO: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(p==livros[a].codigo&&x==0){
                    printf("LIVRO ENCONTRADO\n");
                    printf("ALTERACAO\n");
                    printf("1 - CODIGO\n");
                    printf("2 - TITULO\n");
                    printf("3 - AUTOR\n");
                    printf("4 - ASSUNTO\n");
                    printf("5 - EDITORA\n");
                    printf("6 - ANO\n");
                    scanf("%d", &p);
                    if(p==1){
                        printf("INFORME CODIGO: ");
                        scanf("%d", &livros[a].codigo);
                    }
                    if(p==2){
                        printf("INFORME TITULO: ");
                        fflush(stdin);
                        gets(livros[a].titulo);
                    }
                    if(p==3){
                        printf("INFORME AUTOR: ");
                        fflush(stdin);
                        gets(livros[a].autor);
                    }
                    if(p==4){
                        printf("INFORME ASSUNTO: ");
                        fflush(stdin);
                        gets(livros[a].assunto);
                    }
                    if(p==5){
                        printf("INFORME EDITORA: ");
                        fflush(stdin);
                        gets(livros[a].editora);
                    }
                    if(p==6){
                        printf("INFORME ANO: ");
                        scanf("%d", &livros[a].ano);
                    }
                    x++;
                }
            }
            if(x==0){
                printf("LIVRO NAO ENCONTRADO\n\n");
            }
            x=0;
        }
        if(op==5)break;
    }
    return 0;
}
