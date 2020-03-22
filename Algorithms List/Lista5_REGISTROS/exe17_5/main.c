#include <stdio.h>
#include <stdlib.h>
struct{
    float nmrd,dnmd;
}n;
void adicao(){
    float n1,n2;
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n1=(n.nmrd/n.dnmd);
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n2=(n.nmrd/n.dnmd);
    printf("SOMA: %.2f\n\n", n1+n2);
}
void subtracao(){
    float n1,n2;
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n1=n.nmrd/n.dnmd;
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n2=n.nmrd/n.dnmd;
    printf("SUBTRACAO: %.2f\n\n", n1-n2);
}
void divisao(){
    float n1,n2;
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n1=n.nmrd/n.dnmd;
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n2=n.nmrd/n.dnmd;
    printf("DIVISAO: %.2f\n\n", n1/n2);
}
void simplificacao(){
    int n1,n2,x=2,mdc=1;
    printf("INFORME NUMERADOR: ");
    scanf("%f", &n.nmrd);
    printf("INFORME DENOMINADOR: ");
    scanf("%f", &n.dnmd);
    n1=n.nmrd;
    n2=n.dnmd;
    do{
        while(n1%x==0&&n2%x==0){
            mdc*=x;
            n1/=x;
            n2/=x;
        }
        while(n1%x==0)n1/=x;
        while(n2%x==0)n2/=x;
        x++;
    }while(n1!=1||n2!=1);
    printf("SIMPLIFICACAO: %.0f/%.0f\n\n", n.nmrd/mdc,n.dnmd/mdc);
}
int main(){
    int op;
    do{
        printf("1 - ADICAO\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - DIVISAO\n");
        printf("4 - SIMPLIFICACAO\n");
        printf("5 - SAIR\n");
        scanf("%d", &op);
        if(op==1)adicao();
        if(op==2)subtracao();
        if(op==3)divisao();
        if(op==4)simplificacao();
        if(op==5)break;
    }while(op!=5);
    return 0;
}
