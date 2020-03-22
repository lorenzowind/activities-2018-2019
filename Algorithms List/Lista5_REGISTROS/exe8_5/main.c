#include <stdio.h>
#include <stdlib.h>
struct box{
    int n,andar;
};
struct{
    int nchave,x;
    char placa[10];
    struct box boxv;
}veiculos[10];
int main()
{
    int i,p;
    for(i=0;i<10;i++){
        printf("VEICULO %d\n", i+1);
        printf("INFORME NUMERO-CHAVE: ");
        scanf("%d", &veiculos[i].nchave);
        printf("INFOME PLACA: ");
        fflush(stdin);
        gets(veiculos[i].placa);
        printf("BOX\n");
        printf("INFORME NUMERO: ");
        scanf("%d", &veiculos[i].boxv.n);
        printf("INFORME ANDAR: ");
        scanf("%d", &veiculos[i].boxv.andar);
        system("cls");
    }
    while(1){
        printf("PESQUISA\n");
        printf("INFORME ANDAR: ");
        scanf("%d", &p);
        veiculos[i].x=0;
        for(i=0;i<10;i++){
            if(p==veiculos[i].boxv.andar){
                printf("VEICULO %d\n", i+1);
                printf("NUMERO-CHAVE: %d\n", veiculos[i].nchave);
                printf("PLACA: %s\n", veiculos[i].placa);
                printf("BOX\n");
                printf("NUMERO: %d\n", veiculos[i].boxv.n);
                printf("ANDAR: %d\n\n", veiculos[i].boxv.andar);
                veiculos[i].x++;
            }
        }
        if(veiculos[i].x==0){
            printf("NENHUM VEICULO NO ANDAR INFORMADO\n\n");
        }
    }
    return 0;
}
