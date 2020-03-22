#include <stdio.h>
#include <stdlib.h>
void CALCULA(int *a,int *b){
    (*a)+=(*b);
    (*b)=(*a)-(2*(*b));
}
int main()
{
    int X,Y,*px,*py;
    px=&X;
    py=&Y;
    printf("Informe numero: ");
    scanf("%d", px);
    printf("Informe numero: ");
    scanf("%d", py);
    CALCULA(px,py);
    printf("SOMA = %d\n",*px);
    printf("SUBTRACAO = %d\n",*py);
    return 0;
}
