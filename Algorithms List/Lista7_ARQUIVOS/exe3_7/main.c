#include <stdio.h>
#include <stdlib.h>
#define tam 3
struct aluno{
    char nome[30];
    float n1,n2,media;
};
void ler_dados(struct aluno al[],float *media){
    int i;
    for(i=0;i<tam;i++){
        printf("Nome: ");
        fflush(stdin);
        gets(al[i].nome);
        fflush(stdin);
        printf("Nota 1: ");
        scanf("%f", &al[i].n1);
        printf("Nota 2: ");
        scanf("%f", &al[i].n2);
        al[i].media = (al[i].n1+al[i].n2)/2.0;
        *media+=al[i].media;
    }
}
void mostrar_dados(FILE *p){
    char aux = fgetc(p);
    while(aux!=EOF){
        printf("%c", aux);
        aux = fgetc(p);
    }
}
int main()
{
    FILE *p;
    int i;
    p = fopen("t.txt","w");
    if(p == NULL){
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }
    struct aluno al[tam];
    float media_geral=0;
    ler_dados(al,&media_geral);
    for(i=0;i<tam;i++){
        fputs("Nome: ",p);
        fputs(al[i].nome,p);
        fputc('\n',p);
        fputs("Nota 1: ",p);
        fprintf(p,"%.2f",al[i].n1);
        fputc('\n',p);
        fputs("Nota 2: ",p);
        fprintf(p,"%.2f",al[i].n2);
        fputc('\n',p);
        fputs("Media: ",p);
        fprintf(p,"%.2f",al[i].media);
        fputc('\n',p);
    }
    fclose(p);
    system("cls");
    p = fopen("t.txt","r");
    mostrar_dados(p);
    printf("Media geral da turma: %.2f\n", media_geral/tam);
    return 0;
}
