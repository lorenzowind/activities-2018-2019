#include <stdio.h>
#include <stdlib.h>
struct reg{
    char nome[30];
    float sal;
    int idade;
    char sexo;
};
int main()
{
    int N,i;
    printf("Informe N: ");
    scanf("%d", &N);
    struct reg L[N],*p;
    p=L;
    for(i=0;i<N;i++){
        system("cls");
        printf("Informe nome: ");
        fflush(stdin);
        gets((p+i)->nome);
        fflush(stdin);
        printf("Informe salario: ");
        scanf("%f",&(p+i)->sal);
        printf("Informe idade: ");
        scanf("%d",&(p+i)->idade);
        printf("Informe sexo(M/F): ");
        fflush(stdin);
        scanf("%c",&(p+i)->sexo);
        fflush(stdin);
    }
    system("cls");
    for(i=0;i<N;i++){
        printf("Nome: %s\n",((p+i)->nome));
        printf("Salario: %.2f\n",((p+i)->sal));
        printf("Idade: %d\n",((p+i)->idade));
        printf("Sexo: %c\n\n",((p+i)->sexo));
    }
    return 0;
}
