#include <stdio.h>
#include <stdlib.h>
struct perfil{
    char NOME[30],SEXO;
    float SALARIO;
    int IDADE;
};
int main()
{
    int i;
    struct perfil x;
    for(i=0;i<5;i++){
        printf("INFORME NOME: ");
        fflush(stdin);
        gets(x.NOME);
        printf("INFORME SEXO: ");
        x.SEXO=getchar();
        printf("INFORME SALARIO: ");
        scanf("%f", &x.SALARIO);
        printf("INFORME IDADE: ");
        scanf("%d", &x.IDADE);
        printf("\nCADASTRO:\n");
        printf("NOME: %s\n", x.NOME);
        printf("SEXO: %c\n", x.SEXO);
        printf("SALARIO: %.2f\n", x.SALARIO);
        printf("IDADE: %d\n\n", x.IDADE);
    }

    return 0;
}
