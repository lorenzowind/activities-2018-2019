#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    printf("Numero(s) de pessoa(s): ");
    scanf("%d", &N);
    int idade[N];
    float salario[N];
    char nome[N][30];
    for(i=0;i<N;i++)
    {
        printf("Nome: ");
        scanf("%s", &nome[i]);
        fflush(stdin);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Salario: ");
        scanf("%f", &salario[i]);
    }
    printf("NOME(S): \n");
    for(i=0;i<N;i++)
    {
        puts(nome[i]);
    }
    printf("IDADE(S): \n");
    for(i=0;i<N;i++)
    {
        printf("%d\n", idade[i]);
    }
    printf("SALARIO(S): \n");
    for(i=0;i<N;i++)
    {
        printf("%.2f\n", salario[i]);
    }
    return 0;
}
