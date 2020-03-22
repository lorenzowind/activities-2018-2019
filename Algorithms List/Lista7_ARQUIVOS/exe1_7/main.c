#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    int i;
    FILE *p;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    for(i=0;i<10;i++){
        printf("Informe nome: ");
        gets(nome);
        fputs(nome,p);
        fputc('\n',p);
    }
    fclose(p);
    return 0;
}

    /*Faça um programa em linguagem C
    que leia o nome e sobrenome de
    10 alunos e armazene em um arquivo
    texto, de tal forma que o arquivo
    tenha um aluno por linha.*/
