#include <stdio.h>
#include <stdlib.h>
void duracao(int hi,int mi,int si,int ht,int mt,int st,int n){
    mi+=hi*60;
    si+=mi*60;
    mt+=ht*60;
    st+=mt*60;
    printf("DURACAO DA TAREFA: %d SEGUNDOS\n", st-si);
    printf("EMPREGADO %d:\n", n);
    printf("%dh %dmin %dseg\n\n",((int)(st-si)/3600),(((int)(st-si)/60)-(((int)(st-si)/3600)*60)),(st-si)-(((((int)(st-si)/60)-(((int)(st-si)/3600)*60))*60)+(((int)(st-si)/3600)*3600)));
}
int main()
{
    int hi,mi,si,ht,mt,st,n;
    do{
        printf("INFORME O NUMERO DO EMPREGADO: ");
        scanf("%d", &n);
        printf("HORA DE INICIO\n");
        printf("HORA: ");
        scanf("%d", &hi);
        printf("MINUTO: ");
        scanf("%d", &mi);
        printf("SEGUNDO: ");
        scanf("%d", &si);
        printf("HORA DE TERMINO\n");
        printf("HORA: ");
        scanf("%d", &ht);
        printf("MINUTO: ");
        scanf("%d", &mt);
        printf("SEGUNDO: ");
        scanf("%d", &st);
        duracao(hi,mi,si,ht,mt,st,n);
        if(n<0)break;
    }while(n>=0);
    return 0;
}
