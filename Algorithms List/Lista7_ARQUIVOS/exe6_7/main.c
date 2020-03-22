#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[100],str[20];
    int x=0,i=0;
    FILE *p;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    printf("Informe nome: ");
    fflush(stdin);
    gets(nome);
    fputs(nome,p);fputc('\n',p);
    fflush(stdin);
    system("pause");
    system("cls");
    printf("Informe string: ");
    fflush(stdin);
    gets(str);
    fflush(stdin);
    system("pause");
    system("cls");
    fclose(p);
    p = fopen("t.txt","r");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    char aux = fgetc(p);
    while(aux!=EOF){
        if(i==strlen(str)){
            x++;
            i=0;
        }
        if(aux!=str[i])i=0;
        else i++;
        aux = fgetc(p);
    }
    fclose(p);
    printf("Ocorrencias: %d\n",x);
    return 0;
}
