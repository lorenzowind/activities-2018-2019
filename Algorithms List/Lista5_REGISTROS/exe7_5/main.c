#include <stdio.h>
#include <stdlib.h>
struct{
    char nome[30];
    int qthn,qthe,codigo;
    float saln,sale;
}funcionarios[10];
int main()
{
    int i;
    for(i=0;i<10;i++){
        printf("FUNCIONARIO %d\n", i+1);
        printf("INFORME CODIGO: ");
        scanf("%d", &funcionarios[i].codigo);
        printf("INFORME NOME: ");
        fflush(stdin);
        gets(funcionarios[i].nome);
        printf("INFORME QUANTIDADE DE HORAS NORMAIS: ");
        scanf("%d", &funcionarios[i].qthn);
        printf("INFORME QUANTIDADE DE HORAS EXTRAS: ");
        scanf("%d", &funcionarios[i].qthe);
        funcionarios[i].saln=(13.0*funcionarios[i].qthn);
        funcionarios[i].sale=((13.0*0.6)*funcionarios[i].qthe);
        funcionarios[i].saln+=funcionarios[i].sale;
        system("cls");
    }
    for(i=0;i<10;i++){
        if(funcionarios[i].qthe!=0){
            printf("FUNCIONARIO %d\n", i+1);
            printf("CODIGO: %d\n", funcionarios[i].codigo);
            printf("NOME: %s\n", funcionarios[i].nome);
            printf("QUANTIDADE DE HORAS NORMAIS: %d\n", funcionarios[i].qthn);
            printf("QUANTIDADE DE HORAS EXTRAS: %d\n", funcionarios[i].qthe);
            printf("SALARIOS TOTAL: %.2f\n\n", funcionarios[i].saln);
        }
        else{
            printf("FUNCIONARIO %d:\n", i+1);
            printf("QUANTIDADE DE HORAS NORMAIS: %d\n", funcionarios[i].qthn);
            printf("QUANTIDADE DE HORAS EXTRAS: %d\n", funcionarios[i].qthe);
            printf("NAO FEZ HORA EXTRA\n\n");
        }
    }
    return 0;
}
