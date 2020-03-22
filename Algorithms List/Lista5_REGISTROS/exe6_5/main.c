#include <stdio.h>
#include <stdlib.h>
struct aluno{
    char nome[30],curso[30];
    float n1,n2,n3,n4,media;
    int serie;
};
int main()
{
    int i;
    struct aluno alunos[5];
    for(i=0;i<5;i++){
        printf("ALUNO %d\n", i+1);
        printf("INFORME NOME: ");
        fflush(stdin);//LEITURAS SEQUENCIAIS DE TIPOS DE DADOS DIFERENTES (EX: gets() - scanf("%d", &)
        gets(alunos[i].nome);
        printf("INFORME NOTA 1: ");
        scanf("%f", &alunos[i].n1);
        printf("INFORME NOTA 2: ");
        scanf("%f", &alunos[i].n2);
        printf("INFORME NOTA 3: ");
        scanf("%f", &alunos[i].n3);
        printf("INFORME NOTA 4: ");
        scanf("%f", &alunos[i].n4);
        printf("INFORME CURSO: ");
        fflush(stdin);
        gets(alunos[i].curso);
        printf("INFORME SERIE: ");
        scanf("%d", &alunos[i].serie);
        alunos[i].media=(alunos[i].n1+alunos[i].n2+alunos[i].n3+alunos[i].n4)/4.0;
        system("cls");
    }
    for(i=0;i<5;i++){
        printf("\nNOME: %s\n", alunos[i].nome);
        printf("CURSO: %s\n", alunos[i].curso);
        printf("SERIE: %d\n", alunos[i].serie);
        printf("MEDIA: %.2f\n", alunos[i].media);
    }
    return 0;
}
