#include <stdio.h>
#include <stdlib.h>
struct data_nascimento{
    int dia,mes,ano;
};
struct{
    char RG[20],nome[30],curso[30],sexo;
    int matricula;
    float n1,n2,n3,n4,mf;
    struct data_nascimento dn;
}alunos[10];
int main()
{
    int i=0,p,op,a,b,x=0,z=0;
    float sm=0,f=0,m=0;
    while(1){
        printf("1 - INSERIR\n");
        printf("2 - EXCLUIR\n");
        printf("3 - ALTERAR\n");
        printf("4 - RELATORIO\n");
        printf("5 - SAIR\n");
        scanf("%d", &op);
        if(op==1){
            printf("ALUNO %d\n", i+1);
            printf("INFORME RG: ");
            fflush(stdin);
            gets(alunos[i].RG);
            printf("INFORME MATRICULA: ");
            scanf("%d", &alunos[i].matricula);
            printf("INFORME NOME: ");
            fflush(stdin);
            gets(alunos[i].nome);
            printf("INFORME CURSO: ");
            fflush(stdin);
            gets(alunos[i].curso);
            printf("DATA DE NASCIMENTO\n");
            printf("INFORME DIA: ");
            scanf("%d", &alunos[i].dn.dia);
            printf("INFORME MES: ");
            scanf("%d", &alunos[i].dn.mes);
            printf("INFORME ANO: ");
            scanf("%d", &alunos[i].dn.ano);
            printf("INFORME SEXO: ");
            fflush(stdin);
            alunos[i].sexo=getchar();
            printf("NOTAS\n");
            printf("INFORME NOTA 1: ");
            scanf("%f", &alunos[i].n1);
            printf("INFORME NOTA 2: ");
            scanf("%f", &alunos[i].n2);
            printf("INFORME NOTA 3: ");
            scanf("%f", &alunos[i].n3);
            printf("INFORME NOTA 4: ");
            scanf("%f", &alunos[i].n4);
            alunos[i].mf=(alunos[i].n1+alunos[i].n2+alunos[i].n3+alunos[i].n4)/4.0;
            system("cls");
            i++;
        }
        if(op==2){
            printf("INFORME MATRICULA: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(p==alunos[a].matricula&&x==0){
                    printf("ALUNO EXCLUIDO\n\n");
                    alunos[a].matricula=NULL;
                    x++;
                }
            }
            if(x==0){
                printf("ALUNO NAO ENCONTRADO\n\n");
            }
            x=0;
        }
        if(op==3){
            printf("INFORME MATRICULA: ");
            scanf("%d", &p);
            for(a=0;a<i;a++){
                if(p==alunos[a].matricula&&x==0){
                    printf("ALUNO ENCONTRADO\n");
                    printf("ALTERACAO\n");
                    printf("1 - RG\n");
                    printf("2 - MATRICULA\n");
                    printf("3 - NOME\n");
                    printf("4 - CURSO\n");
                    printf("5 - DATA DE NASCIMENTO\n");
                    printf("6 - SEXO\n");
                    printf("7 - NOTAS\n");
                    scanf("%d", &p);
                    if(p==1){
                        printf("INFORME RG: ");
                        fflush(stdin);
                        gets(alunos[a].RG);
                    }
                    if(p==2){
                        printf("INFORME MATRICULA: ");
                        scanf("%d", &alunos[a].matricula);
                    }
                    if(p==3){
                        printf("INFORME NOME: ");
                        fflush(stdin);
                        gets(alunos[a].nome);
                    }
                    if(p==4){
                        printf("INFORME CURSO: ");
                        fflush(stdin);
                        gets(alunos[a].curso);
                    }
                    if(p==5){
                        printf("DATA DE NASCIMENTO\n");
                        printf("INFORME DIA: ");
                        scanf("%d", &alunos[a].dn.dia);
                        printf("INFORME MES: ");
                        scanf("%d", &alunos[a].dn.mes);
                        printf("INFORME ANO: ");
                        scanf("%d", &alunos[a].dn.ano);
                    }
                    if(p==6){
                        printf("INFORME SEXO: ");
                        fflush(stdin);
                        alunos[a].sexo=getchar();
                    }
                    if(p==7){
                        printf("NOTAS\n");
                        printf("INFORME NOTA 1: ");
                        scanf("%f", &alunos[a].n1);
                        printf("INFORME NOTA 2: ");
                        scanf("%f", &alunos[a].n2);
                        printf("INFORME NOTA 3: ");
                        scanf("%f", &alunos[a].n3);
                        printf("INFORME NOTA 4: ");
                        scanf("%f", &alunos[a].n4);
                        alunos[a].mf=(alunos[a].n1+alunos[a].n2+alunos[a].n3+alunos[a].n4)/4.0;
                    }
                    x++;
                }
            }
            if(x==0){
                printf("ALUNO NAO ENCONTRADO\n\n");
            }
            x=0;
        }
        if(op==4){
            printf("RELACAO DE ALUNOS POR CURSO\n");
            for(a=0;a<i;a++){
                for(b=0;b<i;b++){
                    if(strcmp(alunos[a].curso,alunos[b].curso)==0){
                        z++;
                    }
                }
                printf("%s - %d alunos\n", alunos[a].curso,z);
                z=0;
            }
            printf("DISTRIBUICAO PERCENTUAL DOS SEXOS POR CURSO\n");
            for(a=0;a<i;a++){
                for(b=0;b<i;b++){
                    if(strcmp(alunos[a].curso,alunos[b].curso)==0){
                        if(alunos[b].sexo=='M')m++;
                        if(alunos[b].sexo=='F')f++;
                        z++;
                    }
                }
                printf("%s - MASCULINO: %.2f%% - FEMININO: %.2f%%\n", alunos[a].curso,(m*100)/z,(f*100)/z);
                z=0;
                m=0;
                f=0;
            }
            printf("A MEDIA TOTAL POR CURSO\n");
            for(a=0;a<i;a++){
                for(b=0;b<i;b++){
                    if(strcmp(alunos[a].curso,alunos[b].curso)==0){
                        sm+=alunos[b].mf;
                        z++;
                    }
                }
                printf("%s - MEDIA: %.2f\n", alunos[a].curso,sm/z);
                sm=0;
                z=0;
            }
            printf("A MEDIA INDIVIDUAL POR ALUNO\n");
            for(a=0;a<i;a++){
                printf("ALUNO %d\n", a+1);
                printf("MEDIA FINAL: %.2f\n", alunos[a].mf);
            }
        }
        if(op==5)break;
    }
    return 0;
}
