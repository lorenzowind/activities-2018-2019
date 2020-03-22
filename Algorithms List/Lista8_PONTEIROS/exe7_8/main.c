#include <stdio.h>
#include <stdlib.h>
int verif(int *a,int *b){
    if((*a)==(*b))return 1;
    else return 0;
}
int soma(int *a,int *b){
    return (*a)+(*b);
}
int produto(int *a,int *b){
    return (*a)*(*b);
}
int main()
{
    int x,y,*px,*py;
    px=&x;
    py=&y;
    printf("Informe numero: ");
    scanf("%d",px);
    printf("Informe numero: ");
    scanf("%d",py);
    if(verif(px,py)==1)printf("Numeros iguais\n");
    else printf("Numeros diferentes\n");
    printf("SOMA = %d\n",soma(px,py));
    printf("PRODUTO = %d\n",produto(px,py));
    return 0;
}
