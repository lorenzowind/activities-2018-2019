#include <stdio.h>
#include <stdlib.h>
int segundos(int h,int m,int s){
    m+=h*60;
    s+=m*60;
    return s;
}
int main()
{
    int h,m,s;
    printf("INFORME HORA: ");
    scanf("%d", &h);
    printf("INFORME MINUTO: ");
    scanf("%d", &m);
    printf("INFORME SEGUNDO: ");
    scanf("%d", &s);
    printf("%d SEGUNDOS\n", segundos(h,m,s));
    return 0;
}
