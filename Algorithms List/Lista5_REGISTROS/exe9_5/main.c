#include <stdio.h>
#include <stdlib.h>
struct{
    int matricula;
    char nome[30];
    float sbruto,dinss,sliq;
}empregados[10];
int main()
{
    int i;
    for(i=0;i<10;i++){
        printf("FUNCIONARIO %d\n", i+1);
        printf("INFORME MATRICULA: ");
        scanf("%d", &empregados[i].matricula);
        printf("INFORME NOME: ");
        fflush(stdin);
        gets(empregados[i].nome);
        printf("INFORME SALARIO BRUTO: ");
        scanf("%f", &empregados[i].sbruto);
        empregados[i].dinss=(empregados[i].sbruto*0.11);
        empregados[i].sliq=(empregados[i].sbruto-empregados[i].dinss);
        system("cls");
    }
    for(i=0;i<10;i++){
        printf("FUNCIONARIO %d\n", i+1);
        printf("MATRICULA: %d\n", empregados[i].matricula);
        printf("NOME: %s\n", empregados[i].nome);
        printf("SALARIO BRUTO: %.2f\n", empregados[i].sbruto);
        printf("DEDUCAO INSS: %.2f\n", empregados[i].dinss);
        printf("SALARIO LIQUIDO: %.2f\n\n", empregados[i].sliq);
    }
    return 0;
}
