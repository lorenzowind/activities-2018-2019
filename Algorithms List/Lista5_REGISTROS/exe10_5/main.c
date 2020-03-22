#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct{
    int meses;
    char ident[10];
    float vimp,multa;
}imoveis[10];
int main()
{
    int i=0,a;
    do{
        printf("IMOVEL %d\n", i+1);
        printf("INFORME IDENTIFICACAO: ");
        fflush(stdin);
        gets(imoveis[i].ident);
        if(strcmp(imoveis[i].ident,"XXX")==0)break;
        printf("INFORME VALOR DO IMPOSTO: ");
        scanf("%f", &imoveis[i].vimp);
        printf("INFORME NUMERO DE MESES EM ATRASO: ");
        scanf("%d", &imoveis[i].meses);
        for(a=0;a<imoveis[i].meses;a++){
            imoveis[i].multa+=(imoveis[i].vimp*0.01);
        }
        i++;
        system("cls");
    }while(strcmp(imoveis[i].ident,"XXX")!=0);
    for(a=0;a<i;a++){
        printf("IMOVEL %d\n", a+1);
        printf("IDENTIFICACAO: %s\n", imoveis[a].ident);
        printf("VALOR DO IMPOSTO: %.2f\n", imoveis[a].vimp);
        printf("NUMERO DE MESES EM ATRASO: %d\n", imoveis[a].meses);
        printf("VALOR DA MULTA: %.2f\n\n", imoveis[a].multa);
    }
    return 0;
}
