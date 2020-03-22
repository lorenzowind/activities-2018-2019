#include <stdio.h>
#include <stdlib.h>
#define tam 3
int somatorio(int *vet){
    int i,soma=0;
    for(i=0;i<tam;i++){
        soma+=*(vet+i);
    }
    return soma;
}
int somatorio10(int *vet){
    int i,soma=0;
    for(i=0;i<tam;i++){
        if(*(vet+i)>10)soma+=*(vet+i);
    }
    return soma;
}
int main()
{
    int v[tam],*p,i;
    p=v;
    for(i=0;i<tam;i++){
        scanf("%d",(p+i));
    }
    printf("SOMATORIO = %d\n",somatorio(p));
    printf("SOMATORIO(ELEMENTOS MENOR QUE 10) = %d\n",somatorio10(p));
    return 0;
}
