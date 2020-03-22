#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int DIAS_ANO(int d,int m,int a){
    int t=0;
    t+=m*30;
    t+=d;
    return t;
}
bool DATA_VALIDA(int d,int m,int a){
    bool x=true;
    if(x>31||x<1)x=false;
    else if(m>12||m<1)x=false;
    return x;
}
int main()
{
    int d1,m1,a1,d2,m2,a2,x,y;
    printf("INFORME DATA\n");
    printf("DIA: ");
    scanf("%d", &d1);
    printf("MES: ");
    scanf("%d", &m1);
    printf("ANO: ");
    scanf("%d", &a1);
    printf("DIAS: %d\n\n", DIAS_ANO(d1,m1,a1));
    printf("INFORME DATA\n");
    do{
        printf("DIA: ");
        scanf("%d", &d1);
        printf("MES: ");
        scanf("%d", &m1);
        printf("ANO: ");
        scanf("%d", &a1);
        if(DATA_VALIDA(d1,m1,a1)==false)printf("DATA INVALIDA\n");
    }while(DATA_VALIDA(d1,m1,a1)!=true);
    printf("INFORME DATA\n");
    do{
        printf("DIA: ");
        scanf("%d", &d2);
        printf("MES: ");
        scanf("%d", &m2);
        printf("ANO: ");
        scanf("%d", &a2);
        if(DATA_VALIDA(d2,m2,a2)==false||a2!=a1)printf("DATA INVALIDA\n");
    }while(DATA_VALIDA(d2,m2,a2)!=true||a2!=a1);
    x=DIAS_ANO(d1,m1,a1);
    y=DIAS_ANO(d2,m2,a2);
    if(x>y)printf("DIFERENCA DE DIAS: %d\n\n", x-y);
    else printf("DIFERENCA DE DIAS: %d\n\n", y-x);
    return 0;
}
