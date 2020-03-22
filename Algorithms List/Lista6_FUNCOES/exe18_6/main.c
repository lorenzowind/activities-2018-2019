#include <stdio.h>
#include <stdlib.h>
float media(float n1,float n2,float n3){
    return (n1+n2+n3)/3.0;
}
void situacao(float m,int nf){
    printf("MEDIA: %.2f\n",m);
    if(nf>10)printf("REPROVADO POR FALTA\n");
    else if(m<5.0)printf("REPROVADO\n");
    else printf("APROVADO\n");
}
int main()
{
    int nf;
    float n1,n2,n3,m;
    printf("INFORME NOTA 1: ");
    scanf("%f", &n1);
    printf("INFORME NOTA 2: ");
    scanf("%f", &n2);
    printf("INFORME NOTA 3: ");
    scanf("%f", &n3);
    printf("INFORME NUMERO DE FALTAS: ");
    scanf("%d", &nf);
    m=media(n1,n2,n3);
    situacao(m,nf);
    return 0;
}
