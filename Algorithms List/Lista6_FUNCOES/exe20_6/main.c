#include <stdio.h>
#include <stdlib.h>
void calc();
struct conj{
    int pot,cil,nv;
};
struct info{
    char marca[30],modelo[40];
    int ano;
    struct conj veic;
    float pf;
}veiculo[10];
int main()
{
    int x=0,i;
    float ma;
    for(i=0;i<10;i++){
        printf("VEICULO %d\n",i+1);
        printf("INFORME MARCA: ");
        fflush(stdin);
        gets(veiculo[i].marca);
        printf("INFORME MODELO: ");
        fflush(stdin);
        gets(veiculo[i].modelo);
        printf("INFORME ANO: ");
        scanf("%d", &veiculo[i].ano);
        printf("INFORME POTENCIA(EM CV): ");
        scanf("%d", &veiculo[i].veic.pot);
        printf("INFORME CILINDRADAS: ");
        scanf("%d", &veiculo[i].veic.cil);
        printf("INFORME NUMERO DE VALVULAS: ");
        scanf("%d", &veiculo[i].veic.nv);
        calc(&veiculo[i]);
    }
    for(i=0;i<10;i++){
        printf("VEICULO %d\n",i+1);
        printf("MARCA: %s\n",veiculo[i].marca);
        printf("MODELO: %s\n",veiculo[i].modelo);
        printf("ANO: %d\n", veiculo[i].ano);
        printf("POTENCIA(EM CV): %d\n", veiculo[i].veic.pot);
        printf("CILINDRADAS: %d\n", veiculo[i].veic.cil);
        printf("NUMERO DE VALVULAS: %d\n", veiculo[i].veic.nv);
        printf("PERFOMANCE ESTRUTURAL: %.2f\n\n", veiculo[i].pf);
        if(veiculo[i].pf<150)x++;
        if(i==0)ma=veiculo[i].pf;
        if(veiculo[i].pf>ma)ma=veiculo[i].pf;
    }
    printf("QUANTIDADES DE VEICULOS CUJA PERFOMANCE E INFERIOR A 150: %d\n\n", x);
    printf("MAIOR PERFOMANCE ESTRUTURAL: %.2f\n\n", ma);
    return 0;
}
void calc(struct info *v){
    if(v->veic.nv>=16)v->pf=(v->veic.pot*3)/v->veic.nv;
    else v->pf=(v->veic.pot*2)/v->veic.nv;
}
